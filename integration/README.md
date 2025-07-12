# SPI Controller Integration Examples

This directory contains integration examples and Makefiles for the SPI Controller IP block, demonstrating how to integrate the controller into various system architectures.

## Overview

The integration examples provide:
- **ASIC Wrapper**: Optimized for Sky130B process with proper I/O buffers and clock management
- **FPGA Wrapper**: Optimized for Xilinx and Intel FPGAs with FPGA-specific features
- **SoC Example**: Complete system-on-chip integration with APB bus and processor interface
- **SPI Slave Models**: Configurable slave devices for testing and verification
- **Integration Testbench**: Comprehensive system-level testing

## Directory Structure

```
integration/
├── asic_wrapper.sv           # ASIC wrapper with Sky130B optimizations
├── fpga_wrapper.sv           # FPGA wrapper with FPGA-specific features
├── example_soc.sv            # Example SoC integration
├── spi_slave_model.sv        # Configurable SPI slave model
├── integration_testbench.sv  # System-level integration testbench
├── Makefile                  # Integration build system
└── README.md                 # This file
```

## Quick Start

### Prerequisites

1. **Verilator** with SystemVerilog support
2. **Icarus Verilog** for additional simulation
3. **SPI Controller RTL** files in `../rtl/`
4. **Testbench files** in `../tb/`

### Running Integration Tests

```bash
# Check setup
make check-setup

# Run all integration tests
make sim-all

# Run specific tests
make sim-integration    # Integration testbench
make sim-soc           # SoC example
make sim-slave         # Slave model test

# Lint wrappers
make lint-all
```

## Integration Examples

### 1. ASIC Wrapper (`asic_wrapper.sv`)

The ASIC wrapper provides:
- **Clock domain crossing protection** with proper synchronization
- **Reset synchronization** with 2-stage synchronizer
- **I/O buffer instantiation** using Sky130B standard cells
- **Power management** support
- **Scan chain** interface for testing

```systemverilog
module asic_wrapper (
    input  logic        clk_i,           // System clock
    input  logic        rst_n_i,         // System reset
    // APB Interface
    input  logic        psel_i,
    // ... other signals
    // SPI Interface
    output logic        spi_clk_o,
    // ... other signals
);
```

### 2. FPGA Wrapper (`fpga_wrapper.sv`)

The FPGA wrapper provides:
- **FPGA-specific optimizations** for Xilinx and Intel devices
- **Clock management** with BUFG/ALTCLKCTRL
- **I/O constraints** for optimal placement
- **Debug interface** for development and testing
- **Reset synchronization** optimized for FPGAs

```systemverilog
module fpga_wrapper (
    input  logic        clk_i,           // 100 MHz system clock
    input  logic        rst_n_i,         // System reset
    // ... interface signals
    output logic [7:0]  debug_o          // Debug output
);
```

### 3. SoC Example (`example_soc.sv`)

The SoC example demonstrates:
- **APB bus fabric** integration
- **Processor interface** simulation
- **Memory-mapped register** access
- **Interrupt handling** system
- **Complete system** simulation

```systemverilog
module example_soc (
    input  logic        clk_i,           // System clock
    input  logic        rst_n_i,         // System reset
    // External SPI Interface
    output logic        spi_clk_o,
    // ... other signals
);
```

### 4. SPI Slave Model (`spi_slave_model.sv`)

The slave model provides:
- **Configurable data response** for testing
- **Multiple slave devices** support
- **Error injection** capabilities
- **Performance monitoring** counters
- **Debug interface** for analysis

```systemverilog
module spi_slave_model (
    input  logic        spi_clk_i,       // SPI clock
    input  logic        spi_mosi_i,      // Master out, slave in
    output logic        spi_miso_o,      // Master in, slave out
    input  logic        spi_csn_i,       // Chip select
    // Configuration Interface
    input  logic [31:0] response_data_i, // Response data
    // ... other signals
);
```

## Build System

### Main Makefile Targets

| Target | Description |
|--------|-------------|
| `sim-integration` | Run integration testbench |
| `sim-soc` | Run SoC example simulation |
| `sim-slave` | Run slave model test |
| `sim-all` | Run all integration tests |
| `lint-asic` | Lint ASIC wrapper |
| `lint-fpga` | Lint FPGA wrapper |
| `lint-all` | Lint all wrappers |
| `coverage` | Collect coverage data |
| `performance` | Analyze performance |
| `clean` | Clean build artifacts |

### Configuration

The Makefile supports multiple simulators:
- **Verilator**: Primary simulator with SystemVerilog support
- **Icarus Verilog**: Alternative simulator for compatibility
- **VCS**: Commercial simulator support

### Output Directories

- `build/`: Compiled simulation executables
- `waves/`: Waveform files
- `coverage/`: Coverage reports

## Testing Strategy

### 1. Unit Testing
- Individual module verification
- Interface compliance testing
- Error condition testing

### 2. Integration Testing
- System-level functionality
- Multiple slave device testing
- Performance measurement
- Error injection and detection

### 3. Coverage Analysis
- Functional coverage collection
- Code coverage measurement
- Interface coverage tracking

## Performance Considerations

### ASIC Integration
- **Clock frequency**: Up to 100 MHz operation
- **Power consumption**: Optimized for low power
- **Area**: Minimal footprint with standard cells
- **Timing**: Proper setup/hold timing

### FPGA Integration
- **Resource utilization**: Optimized for FPGA fabric
- **Clock management**: Proper clock domain handling
- **I/O placement**: Optimal pin assignment
- **Timing closure**: FPGA-specific timing constraints

## Debug and Monitoring

### Debug Interface
- **8-bit debug bus** for signal monitoring
- **Transaction counters** for performance analysis
- **Error flags** for fault detection
- **Status registers** for system monitoring

### Waveform Analysis
- **VCD file generation** for signal analysis
- **GTKWave compatibility** for waveform viewing
- **Coverage data** for verification analysis

## Troubleshooting

### Common Issues

1. **Missing RTL files**: Ensure SPI controller RTL is in `../rtl/`
2. **Simulator not found**: Install Verilator or Icarus Verilog
3. **Compilation errors**: Check SystemVerilog syntax and dependencies
4. **Simulation failures**: Verify testbench stimulus and timing

### Debug Commands

```bash
# Check tool availability
make check-setup

# Run with verbose output
VERILATOR_OPTS="--trace --coverage" make sim-integration

# Clean and rebuild
make clean && make sim-all
```

## Contributing

When adding new integration examples:

1. **Follow naming conventions**: Use descriptive module names
2. **Include documentation**: Add comprehensive comments
3. **Update Makefile**: Add new targets for testing
4. **Verify functionality**: Ensure all tests pass
5. **Update README**: Document new features and usage

## License

This integration package is licensed under Apache-2.0. See the main project LICENSE file for details.

## Support

For questions and support:
- Check the main project documentation
- Review the testbench examples
- Run the integration tests for verification
- Consult the API reference for interface details 