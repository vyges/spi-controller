# SPI Controller FPGA Synthesis

This directory contains the FPGA synthesis flow for the SPI controller IP block using Yosys.

## Overview

The SPI controller is synthesized for Xilinx 7-series FPGAs (Artix-7, Kintex-7, Virtex-7) using Yosys. The synthesis process generates optimized netlists and comprehensive resource utilization reports.

## Design Features

The SPI controller includes:
- **APB v2.0 Interface**: Standard peripheral bus interface
- **Configurable SPI Modes**: Support for all 4 SPI modes (CPOL/CPHA combinations)
- **FIFO Buffering**: Configurable transmit and receive FIFOs
- **Interrupt Generation**: Multiple interrupt sources
- **DMA Support**: High-throughput data transfer capabilities

## Synthesis Flow

### 1. RTL Reading
- `spi_controller.sv` - Main controller module
- `spi_fifo.sv` - FIFO implementation
- `spi_protocol_engine.sv` - SPI protocol engine

### 2. Synthesis Process
1. **Hierarchy Analysis**: Identifies design hierarchy
2. **Design Check**: Validates RTL syntax and semantics
3. **Generic Synthesis**: Converts to generic gates
4. **Optimization**: Removes redundant logic
5. **Technology Mapping**: Maps to Xilinx 7-series primitives
6. **Final Optimization**: Post-mapping optimization

### 3. Output Generation
- **Netlist**: Verilog netlist for FPGA implementation
- **JSON**: Machine-readable design representation
- **Statistics**: Detailed resource utilization
- **Hierarchy**: Design hierarchy information
- **Resources**: FPGA-specific resource analysis

## Usage

### Basic Synthesis
```bash
# Synthesize SPI controller
make all

# Or synthesize specific target
make spi_controller
```

### Analysis and Reports
```bash
# Generate resource analysis
make fpga_analysis

# Generate comprehensive report
make comprehensive_report
```

### Cleanup
```bash
# Clean synthesis artifacts
make clean
```

### Help
```bash
# Show available targets
make help
```

## Generated Files

### Synthesis Outputs
- `spi_controller_fpga.v` - Synthesized Verilog netlist
- `spi_controller_fpga.json` - JSON design representation
- `spi_controller_fpga_stats.txt` - Synthesis statistics
- `spi_controller_fpga_hierarchy.txt` - Design hierarchy
- `spi_controller_fpga_resources.txt` - FPGA resource utilization

### Analysis Reports
- `fpga_analysis_report.md` - Resource analysis report
- `comprehensive_fpga_report.md` - Complete synthesis report

## Resource Utilization

The SPI controller typically utilizes:
- **LUTs**: Moderate usage for combinational logic
- **Flip-Flops**: Sequential logic and state machines
- **BRAM**: FIFO memory blocks
- **I/O**: APB interface + SPI signals
- **DSP**: Minimal usage (if any)

## Target FPGAs

### Recommended Devices
- **Artix-7**: 35T, 50T, 100T
- **Kintex-7**: 70T, 160T, 325T
- **Virtex-7**: 485T, 550T, 870T

### Resource Requirements
- **Minimum LUTs**: ~500-1000
- **Minimum FFs**: ~200-500
- **Minimum BRAM**: 1-2 blocks
- **I/O Pins**: ~20-30

## Integration

### Top-Level Integration
```verilog
module top_level (
    input  logic        clk,
    input  logic        reset_n,
    // APB interface
    input  logic        psel,
    input  logic        penable,
    input  logic        pwrite,
    input  logic [7:0]  paddr,
    input  logic [31:0] pwdata,
    output logic [31:0] prdata,
    output logic        pready,
    output logic        pslverr,
    // SPI interface
    output logic        spi_clk,
    output logic        spi_mosi,
    input  logic        spi_miso,
    output logic        spi_csn,
    // Interrupt
    output logic        spi_irq
);

    spi_controller spi_ctrl (
        .pclk_i(clk),
        .presetn_i(reset_n),
        .psel_i(psel),
        .penable_i(penable),
        .pwrite_i(pwrite),
        .paddr_i(paddr),
        .pwdata_i(pwdata),
        .prdata_o(prdata),
        .pready_o(pready),
        .pslverr_o(pslverr),
        .spi_clk_o(spi_clk),
        .spi_mosi_o(spi_mosi),
        .spi_miso_i(spi_miso),
        .spi_csn_o(spi_csn),
        .spi_irq_o(spi_irq)
    );

endmodule
```

### Constraints
Create a constraints file (`.xdc`) with:
- Clock constraints for APB clock
- I/O constraints for SPI signals
- Timing constraints for APB interface

## Performance

### Timing Characteristics
- **Maximum Frequency**: 100+ MHz (APB clock)
- **SPI Clock**: Configurable divider (typically 1-50 MHz)
- **Setup/Hold**: Optimized for Xilinx 7-series

### Power Characteristics
- **Static Power**: Low (clock gating enabled)
- **Dynamic Power**: Proportional to SPI activity
- **Sleep Mode**: Available through APB control

## Troubleshooting

### Common Issues
1. **Synthesis Errors**: Check RTL syntax and SystemVerilog compatibility
2. **Resource Overuse**: Optimize FIFO depth or reduce features
3. **Timing Violations**: Check clock constraints and optimization settings

### Debugging
- Review synthesis logs for warnings and errors
- Check resource utilization reports
- Verify design hierarchy matches expectations

## References

- [Yosys Documentation](https://yosyshq.net/yosys/)
- [Xilinx 7-series Documentation](https://www.xilinx.com/support/documentation/7_series.htm)
- [APB Protocol Specification](https://developer.arm.com/documentation/ihi0024/latest/)
- [SPI Protocol Reference](https://en.wikipedia.org/wiki/Serial_Peripheral_Interface)

---

*Generated by Vyges FPGA Synthesis Flow v1.0* 