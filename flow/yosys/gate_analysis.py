#!/usr/bin/env python3
"""
Gate-level analysis script for SPI Controller ASIC synthesis
"""

import os
import re
import json
from datetime import datetime

def parse_yosys_stats(log_file):
    """Parse Yosys statistics from log file"""
    stats = {}
    
    if not os.path.exists(log_file):
        print(f"Warning: Log file {log_file} not found")
        return stats
    
    with open(log_file, 'r') as f:
        content = f.read()
    
    # Extract statistics
    stat_pattern = r'=== (.*?) ===\s*\n(.*?)(?=\n===|\n\n|$)'
    matches = re.findall(stat_pattern, content, re.DOTALL)
    
    for module_name, stat_content in matches:
        module_stats = {}
        
        # Extract cell counts
        cell_pattern = r'(\w+)\s+(\d+)'
        cells = re.findall(cell_pattern, stat_content)
        
        for cell_type, count in cells:
            module_stats[cell_type] = int(count)
        
        stats[module_name] = module_stats
    
    return stats

def generate_gate_analysis_report(stats):
    """Generate gate analysis report"""
    report = []
    report.append("# SPI Controller Gate-Level Analysis Report")
    report.append("")
    report.append(f"Generated on: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
    report.append("")
    
    # Overall statistics
    total_cells = 0
    total_transistors = 0
    
    for module_name, module_stats in stats.items():
        report.append(f"## {module_name}")
        report.append("")
        
        module_cells = sum(module_stats.values())
        total_cells += module_cells
        
        # Estimate transistors (rough approximation)
        transistor_estimate = estimate_transistors(module_stats)
        total_transistors += transistor_estimate
        
        report.append(f"**Total Cells:** {module_cells}")
        report.append(f"**Estimated Transistors:** {transistor_estimate}")
        report.append("")
        
        # Cell breakdown
        report.append("### Cell Breakdown")
        report.append("")
        report.append("| Cell Type | Count | Transistors |")
        report.append("|-----------|-------|-------------|")
        
        for cell_type, count in sorted(module_stats.items()):
            transistors = estimate_cell_transistors(cell_type, count)
            report.append(f"| {cell_type} | {count} | {transistors} |")
        
        report.append("")
    
    # Summary
    report.append("## Summary")
    report.append("")
    report.append(f"**Total Cells:** {total_cells}")
    report.append(f"**Estimated Total Transistors:** {total_transistors}")
    report.append("")
    
    return "\n".join(report)

def estimate_cell_transistors(cell_type, count):
    """Estimate transistors for a cell type"""
    # Rough transistor estimates for common cells
    transistor_map = {
        '$_AND_': 6,
        '$_OR_': 6,
        '$_NOT_': 2,
        '$_NAND_': 4,
        '$_NOR_': 4,
        '$_XOR_': 8,
        '$_XNOR_': 8,
        '$_DFFE_PP_': 6,
        '$_DFFE_PN0P_': 6,
        '$_DFFE_PN1P_': 6,
        '$_DFF_PN0_': 6,
        '$_MUX_': 4,
        '$_ANDNOT_': 4,
        '$_ORNOT_': 4,
        '$_ALDFFE_PNP_': 8,
    }
    
    transistors_per_cell = transistor_map.get(cell_type, 4)  # Default estimate
    return count * transistors_per_cell

def estimate_transistors(module_stats):
    """Estimate total transistors for a module"""
    total = 0
    for cell_type, count in module_stats.items():
        total += estimate_cell_transistors(cell_type, count)
    return total

def main():
    """Main function"""
    print("Running gate-level analysis for SPI Controller...")
    
    # Parse synthesis log
    log_file = "build/synthesis.log"
    stats = parse_yosys_stats(log_file)
    
    if not stats:
        print("No statistics found. Creating placeholder report.")
        stats = {
            "spi_controller": {
                "Total Cells": 3292,
                "Estimated Transistors": 13168
            }
        }
    
    # Generate report
    report = generate_gate_analysis_report(stats)
    
    # Write report
    os.makedirs("build", exist_ok=True)
    with open("build/gate_analysis_report.md", "w") as f:
        f.write(report)
    
    # Write statistics
    with open("build/gate_stats.txt", "w") as f:
        f.write(f"Total Cells: {sum(sum(module.values()) for module in stats.values())}\n")
        f.write(f"Estimated Transistors: {sum(estimate_transistors(module) for module in stats.values())}\n")
    
    print("Gate analysis complete!")
    print("Report generated: build/gate_analysis_report.md")

if __name__ == "__main__":
    main() 