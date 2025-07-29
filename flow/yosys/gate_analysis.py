#!/usr/bin/env python3
"""
Gate-Level Analysis Script for SPI Controller ASIC Synthesis
===========================================================
Analyzes synthesized netlists to extract detailed gate counts and statistics.
"""

import re
import sys
import os
import json
from pathlib import Path
from datetime import datetime

def parse_synthesis_log(log_file):
    """Parse synthesis log to extract gate counts."""
    print(f"Looking for log file: {log_file}")
    if not os.path.exists(log_file):
        print(f"Warning: Log file {log_file} not found")
        return None
    
    print(f"Log file found, reading content...")
    with open(log_file, 'r') as f:
        content = f.read()
    
    print(f"Content length: {len(content)}")
    
    # Look for the final statistics section (last occurrence)
    stat_pattern = r'=== spi_controller ===\s*\n(.*?)(?=\n===|\n\n|$)'
    matches = list(re.finditer(stat_pattern, content, re.DOTALL))
    
    print(f"Found {len(matches)} matches")
    
    if not matches:
        print("Warning: Could not find synthesis statistics in log file")
        return None
    
    # Use the last match (final statistics)
    match = matches[-1]
    stat_content = match.group(1)
    
    print(f"Statistics content length: {len(stat_content)}")
    
    # Extract cell counts - fix the regex to match the actual format
    gate_counts = {}
    cell_pattern = r'\$_(\w+)_\s+(\d+)'
    for match in re.finditer(cell_pattern, stat_content):
        gate_type = match.group(1)
        count = int(match.group(2))
        gate_counts[gate_type] = count
    
    print(f"Found {len(gate_counts)} gate types: {list(gate_counts.keys())}")
    return gate_counts

def analyze_gates_from_log(log_file):
    """Analyze gate counts from synthesis log."""
    gate_counts = parse_synthesis_log(log_file)
    
    if not gate_counts:
        return None
    
    # Calculate transistor counts (approximate)
    transistor_counts = {
        'AND': 6,
        'OR': 6,
        'XOR': 8,
        'XNOR': 8,
        'ANDNOT': 4,
        'NAND': 4,
        'NOR': 4,
        'NOT': 2,
        'MUX': 12,
        'DFF': 20,
        'DFFE_PN0P': 24,    # DFFE with async reset: ~24 transistors
        'DFFE_PN1P': 24,    # DFFE with async set: ~24 transistors
        'DFFE_PP': 24,      # DFFE with sync reset: ~24 transistors
        'DFF_PN0': 20,      # DFF with async reset: ~20 transistors
        'LATCH': 12,   # Latch: ~12 transistors
        'ALDFFE_PNP': 28,   # Async load DFFE: ~28 transistors
        'ORNOT': 4     # OR-NOT: 4 transistors
    }
    
    total_primitive_gates = sum(gate_counts.values())
    total_transistors = sum(gate_counts.get(gate, 0) * count 
                           for gate, count in transistor_counts.items())
    
    return {
        'gate_counts': gate_counts,
        'module_instances': {},  # No module instances in gate-level netlist
        'total_primitive_gates': total_primitive_gates,
        'total_transistors': total_transistors,
        'file': log_file
    }

def generate_gate_report():
    """Generate comprehensive gate analysis report."""
    log_file = "build/synthesis.log"
    
    result = analyze_gates_from_log(log_file)
    
    if not result:
        print("Warning: Could not analyze synthesis log")
        # Return a basic error report instead of error string
        report = []
        report.append("# SPI Controller Gate-Level Analysis Report")
        report.append("=" * 55)
        report.append("")
        report.append(f"Generated: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
        report.append("")
        report.append("## Error")
        report.append("")
        report.append("Could not analyze synthesis log. Please ensure synthesis has been run successfully.")
        report.append("")
        return "\n".join(report)
    
    # Generate report
    report = []
    report.append("# SPI Controller Gate-Level Analysis Report")
    report.append("=" * 55)
    report.append("")
    report.append(f"Generated: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
    report.append("")
    
    # Summary table
    report.append("## Gate Count Summary")
    report.append("")
    report.append("| Implementation | Primitive Gates | Transistors | Design Style |")
    report.append("|----------------|-----------------|-------------|--------------|")
    
    gates = result['total_primitive_gates']
    transistors = result['total_transistors']
    style = "Flat"  # Gate-level netlist is flat
    report.append(f"| SPI Controller | {gates} | {transistors} | {style} |")
    
    report.append("")
    
    # Detailed analysis
    report.append("## SPI Controller Implementation")
    report.append("")
    
    # Gate breakdown
    report.append("### Gate Breakdown")
    report.append("")
    
    if result['gate_counts']:
        report.append("| Gate Type | Count | Transistors |")
        report.append("|-----------|-------|-------------|")
        for gate_type, count in sorted(result['gate_counts'].items()):
            transistors = count * {
                'AND': 6, 'OR': 6, 'XOR': 8, 'XNOR': 8, 
                'ANDNOT': 4, 'NAND': 4, 'NOR': 4, 'NOT': 2,
                'MUX': 12, 'DFF': 20, 'DFFE_PN0P': 24, 'DFFE_PN1P': 24, 'DFFE_PP': 24, 'DFF_PN0': 20, 'LATCH': 12, 'ALDFFE_PNP': 28, 'ORNOT': 4
            }.get(gate_type, 6)
            report.append(f"| {gate_type} | {count} | {transistors} |")
    else:
        report.append("No primitive gates found.")
    
    report.append("")
    
    # Total statistics
    report.append("### Total Statistics")
    report.append("")
    report.append(f"- **Primitive Gates**: {result['total_primitive_gates']}")
    report.append(f"- **Estimated Transistors**: {result['total_transistors']}")
    report.append(f"- **Design Style**: Flat")
    report.append("")
    
    # Logic complexity analysis
    report.append("### Logic Complexity Analysis")
    report.append("")
    
    # Analyze SPI Controller specific characteristics
    dff_count = (result['gate_counts'].get('DFF', 0) + 
                 result['gate_counts'].get('DFFE_PN0P', 0) + 
                 result['gate_counts'].get('DFFE_PN1P', 0) + 
                 result['gate_counts'].get('DFFE_PP', 0))
    combinational_gates = sum(count for gate, count in result['gate_counts'].items() 
                             if gate not in ['DFF', 'DFFE_PN0P', 'DFFE_PN1P', 'DFFE_PP', 'LATCH', 'ALDFFE_PNP'])
    
    report.append(f"- **Sequential Elements**: {dff_count} flip-flops")
    report.append(f"- **Combinational Logic**: {combinational_gates} gates")
    report.append(f"- **Sequential/Combinational Ratio**: {dff_count/(combinational_gates+1):.2f}")
    
    # SPI Controller specific analysis
    report.append("- **APB Interface**: Standard APB slave interface")
    report.append("- **SPI Protocol**: Full SPI master/slave support")
    report.append("- **FIFO Support**: TX/RX FIFO buffers")
    report.append("- **Interrupt Support**: Configurable interrupt generation")
    report.append("- **Multi-Slave Support**: Up to 16 slave devices")
    
    report.append("")
    
    # Summary
    report.append("## Summary")
    report.append("")
    # Performance comparison
    report.append("## Performance Analysis")
    report.append("")
    report.append("### Area Efficiency")
    report.append("")
    gates = result['total_primitive_gates']
    transistors = result['total_transistors']
    report.append(f"- **Gate Count**: {gates} primitive gates")
    report.append(f"- **Transistor Count**: {transistors} transistors")
    report.append(f"- **Area Estimate**: ~{transistors/1000:.1f}K transistors")
    
    report.append("")
    
    report.append("### Design Trade-offs")
    report.append("")
    report.append("- **Functionality**: Full SPI controller with APB interface")
    report.append("- **Performance**: Configurable SPI clock rates")
    report.append("- **Flexibility**: Multi-slave support and FIFO buffering")
    report.append("- **Power**: Optimized for low-power operation")
    report.append("")
    
    # Technology considerations
    report.append("## Technology Considerations")
    report.append("")
    report.append("### Standard Cell Mapping")
    report.append("")
    report.append("SPI Controller maps to standard cell library:")
    report.append("- Combinational gates (AND, OR, XOR, MUX)")
    report.append("- Sequential elements (DFF, DFFE)")
    report.append("- Compatible with most CMOS processes")
    report.append("")
    
    report.append("### Power Considerations")
    report.append("")
    report.append("- **Static Power**: Minimal (mostly combinational logic)")
    report.append("- **Dynamic Power**: Proportional to SPI clock frequency")
    report.append("- **Clock Power**: APB clock + SPI clock domains")
    report.append("- **I/O Power**: SPI interface switching activity")
    report.append("")
    
    return "\n".join(report)

if __name__ == "__main__":
    report = generate_gate_report()
    
    # Write to file
    with open("gate_analysis_report.md", "w") as f:
        f.write(report)
    
    print("Gate analysis report generated: gate_analysis_report.md")
    print("\n" + "="*55)
    print(report) 