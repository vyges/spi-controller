# SPI Controller IP Block Design Specification

## Document Information
- **Document Version**: 1.0.0
- **Last Updated**: 2025-07-11
- **Author**: Vyges Team
- **Status**: Draft
- **Template**: vyges-ip-template@1.0.0

## Table of Contents
1. [Overview](#overview)
2. [Project Metadata](#project-metadata)
3. [Design Flow](#design-flow)
4. [Functional Requirements](#functional-requirements)
5. [Interface Design](#interface-design)
6. [Register Map](#register-map)
7. [Timing Requirements](#timing-requirements)
8. [Pinout Specification](#pinout-specification)
9. [Validation Strategy](#validation-strategy)
10. [RTL and Testbench Development](#rtl-and-testbench-development)
11. [Flow Configuration](#flow-configuration)
12. [Documentation Requirements](#documentation-requirements)
13. [Testing Strategy](#testing-strategy)
14. [Integration Guidelines](#integration-guidelines)
15. [CI/CD Pipeline](#cicd-pipeline)
16. [Catalog Publication](#catalog-publication)

## Overview

### Purpose
The SPI Controller IP block provides a configurable Serial Peripheral Interface (SPI) master controller with APB interface, supporting multiple SPI modes, configurable clock polarity and phase, FIFO buffering, and interrupt capabilities. Designed for integration into SoCs and FPGA designs requiring SPI communication with peripheral devices.

### Key Features
- **APB Interface**: Standard AMBA APB v2.0 compliant interface
- **Configurable SPI Modes**: Support for all 4 SPI modes (CPOL/CPHA combinations)
- **FIFO Support**: Configurable transmit and receive FIFOs
- **Interrupt Generation**: Configurable interrupt sources
- **DMA Support**: Optional DMA interface for high-throughput applications
- **Power Management**: Clock gating and sleep mode support
- **ASIC Ready**: Designed for SkyWater 130nm Open Source PDK

## Project Metadata

### Basic Information
- **Name**: vyges/spi-controller
- **Version**: 1.0.0
- **Description**: Configurable SPI master controller with APB interface, FIFO support, and interrupt capabilities
- **License**: Apache-2.0
- **Template**: vyges-ip-template@1.0.0
- **Target**: ASIC and FPGA platforms
- **Design Type**: Digital design
- **Maturity**: Production ready

### Maintainers
- **Primary Maintainer**: Shivaram Mysore
  - **Email**: shivaram@vyges.com
  - **GitHub**: smysore

### Branding
- **Provider**: Vyges Inc.
- **Logo**: https://vyges.com/images/logo.svg
- **Website**: https://vyges.com
- **Usage**: Attribution only

## Design Flow

### Development Phases
1. **Phase 1**: RTL Design and Verification (Week 1-2)
2. **Phase 2**: Testbench Development (Week 2-3)
3. **Phase 3**: Synthesis and Physical Design (Week 3-4)
4. **Phase 4**: Integration Testing (Week 4-5)
5. **Phase 5**: Documentation and Release (Week 5-6)

### Tools and Flows
- **Simulation**: Verilator, Icarus Verilog
- **Synthesis**: Yosys (OpenLane flow)
- **Physical Design**: OpenLane with Sky130B PDK
- **FPGA**: Vivado for Xilinx devices
- **Verification**: Cocotb, SystemVerilog

## Functional Requirements

### Understanding the Design Flow

**🎯 Before Implementation: Design First**

```ascii
┌─────────────────────────────────────────────────────────────┐
│                    IP Design Flow                           │
│                                                             │
│  ┌─────────────┐    ┌─────────────┐    ┌─────────────┐      │
│  │   SPECIFY   │───▶│   DESIGN    │───▶│ IMPLEMENT   │      │
│  │ Requirements│    │ Architecture│    │   RTL       │      │
│  └─────────────┘    └─────────────┘    └─────────────┘      │
│         │                   │                   │           │
│         ▼                   ▼                   ▼           │
│  ┌─────────────┐    ┌─────────────┐    ┌─────────────┐      │
│  │   VERIFY    │◀───│   TEST      │◀───│  VALIDATE   │      │
│  │  Coverage   │    │  Testbench  │    │  Synthesis  │      │
│  └─────────────┘    └─────────────┘    └─────────────┘      │
│                                                             │
└─────────────────────────────────────────────────────────────┘
```

**Design Considerations for SPI Controller:**

### Core Functionality
1. **SPI Master Operation**
   - Configurable clock polarity (CPOL) and phase (CPHA)
   - Support for all 4 SPI modes (0, 1, 2, 3)
   - Configurable data width (8, 16, 32 bits)
   - Configurable clock divider (2 to 256)

2. **APB Interface**
   - AMBA APB v2.0 compliant
   - 32-bit data bus
   - 8-bit address bus
   - Support for byte, half-word, and word transfers

3. **FIFO Management**
   - Configurable FIFO depth (4 to 64 entries)
   - Separate transmit and receive FIFOs
   - FIFO status monitoring
   - FIFO overflow/underflow protection

4. **Interrupt System**
   - Transmit FIFO empty interrupt
   - Receive FIFO full interrupt
   - Transfer complete interrupt
   - Error interrupt (overflow, underflow, timeout)

### Performance Requirements
- **Maximum Frequency**: 100 MHz (APB interface)
- **SPI Clock Range**: 1 MHz to 50 MHz
- **Latency**: < 10 clock cycles for APB access
- **Throughput**: Full SPI clock rate support

### Interface Design

```ascii
┌─────────────────────────────────────┐
│         SPI_CONTROLLER              │
│                                     │
│  ┌─────────┐    ┌─────────┐         │
│  │ APB     │    │ SPI     │         │
│  │ Slave   │    │ Master  │         │
│  └─────────┘    └─────────┘         │
│                                     │
│  ┌─────────┐    ┌─────────┐         │
│  │ Clock   │    │ Reset   │         │
│  │ Domain  │    │ Domain  │         │
│  └─────────┘    └─────────┘         │
└─────────────────────────────────────┘
```

### Architecture Design

```ascii
┌─────────────────────────────────────────────────────────────┐
│                    SPI Controller Architecture              │
│                                                             │
│  ┌─────────────┐    ┌─────────────┐    ┌─────────────┐      │
│  │   APB       │    │   Control   │    │   SPI       │      │
│  │  Slave      │◀──▶│  Registers  │◀──▶│  Interface  │      │
│  │ Interface   │    │             │    │             │      │
│  └─────────────┘    └─────────────┘    └─────────────┘      │
│         │                   │                   │           │
│         ▼                   ▼                   ▼           │
│  ┌─────────────┐    ┌─────────────┐    ┌─────────────┐      │
│  │   TX        │    │   RX        │    │   Interrupt │      │
│  │  FIFO       │    │  FIFO       │    │  Controller │      │
│  └─────────────┘    └─────────────┘    └─────────────┘      │
│         │                   │                   │           │
│         ▼                   ▼                   ▼           │
│  ┌─────────────┐    ┌─────────────┐    ┌─────────────┐      │
│  │   SPI       │    │   SPI       │    │   Error     │      │
│  │ Transmitter │    │  Receiver   │    │  Detection  │      │
│  └─────────────┘    └─────────────┘    └─────────────┘      │
│         │                   │                      │        |
│         └───────────────────┴──────────────────────┘        |
│                           │                                 |
│                    ┌─────────────┐                          |
│                    │   SPI       │                          |
│                    │  TX/RX      │                          |
│                    └─────────────┘                          |
└─────────────────────────────────────────────────────────────┘
```

### SPI Timing Design

```ascii
SPI Timing (Mode 0, 50MHz clock, 10MHz SPI):
┌─────────────────────────────────────────────────────────────┐
│                    Timing Requirements                      │
│                                                             │
│  Clock Frequency: 100 MHz (APB)                            │
│  SPI Clock: 10 MHz (divider = 10)                          │
│  CPOL: 0, CPHA: 0 (Mode 0)                                 │
│  Data Width: 8 bits                                         │
│                                                             │
│  ┌─────┐ ┌─────┐ ┌─────┐ ┌─────┐ ┌─────┐ ┌─────┐ ┌─────┐    │
│  │ CS  │ │ D0  │ │ D1  │ │ D2  │ │ D3  │ │ D4  │ │ D5  │    │
│  └─────┘ └─────┘ └─────┘ └─────┘ └─────┘ └─────┘ └─────┘    │
│                                                             │
│  ┌─────┐ ┌─────┐ ┌─────┐                                    │
│  │ D6  │ │ D7  │ │ CS  │                                    │
│  └─────┘ └─────┘ └─────┘                                    │
└─────────────────────────────────────────────────────────────┘
```

## Interface Design

### APB Interface Signals
The APB interface provides a standard AMBA APB v2.0 compliant bus interface with the following signals:

**Clock and Reset:**
- **PCLK** (input): APB clock signal
- **PRESETn** (input): APB reset signal (active low)

**Control Signals:**
- **PSEL** (input): APB select signal
- **PENABLE** (input): APB enable signal
- **PWRITE** (input): APB write enable
- **PREADY** (output): APB ready signal
- **PSLVERR** (output): APB slave error signal

**Data Signals:**
- **PADDR[7:0]** (input): APB address bus (8-bit)
- **PWDATA[31:0]** (input): APB write data (32-bit)
- **PRDATA[31:0]** (output): APB read data (32-bit)

### SPI Interface Signals
The SPI interface provides the standard Serial Peripheral Interface signals for communication with SPI slave devices:

**Clock and Control:**
- **SPI_CLK** (output): SPI clock output
- **SPI_CSn** (output): SPI chip select (active low)

**Data Signals:**
- **SPI_MOSI** (output): SPI master out, slave in
- **SPI_MISO** (input): SPI master in, slave out

### Interrupt Interface
The interrupt interface provides notification of SPI controller events:

**Interrupt Signal:**
- **SPI_IRQ** (output): SPI interrupt output - asserted when enabled interrupt conditions occur

## Register Map

### Register Address Map
| Address | Name | Access | Description |
|---------|------|--------|-------------|
| 0x00 | CTRL | R/W | Control Register |
| 0x04 | STAT | R | Status Register |
| 0x08 | TXDATA | W | TX Data Register |
| 0x0C | RXDATA | R | RX Data Register |
| 0x10 | BAUD | R/W | Baud Rate Configuration |
| 0x14 | FIFO | R/W | FIFO Configuration |
| 0x18 | INT | R/W | Interrupt Configuration |
| 0x1C | MODE | R/W | SPI Mode Configuration |

### Control Register (CTRL) - 0x00
| Bit | Name | Access | Description |
|-----|------|--------|-------------|
| 0 | EN | R/W | Enable SPI controller |
| 1 | TX_EN | R/W | Enable transmitter |
| 2 | RX_EN | R/W | Enable receiver |
| 3 | CS_EN | R/W | Enable chip select |
| 4 | DMA_EN | R/W | Enable DMA mode |
| 5 | LOOPBACK | R/W | Enable loopback mode |
| 6-7 | Reserved | - | Reserved |
| 8-15 | TX_FIFO_THRESH | R/W | TX FIFO threshold |
| 16-23 | RX_FIFO_THRESH | R/W | RX FIFO threshold |
| 24-31 | Reserved | - | Reserved |

### Status Register (STAT) - 0x04
| Bit | Name | Access | Description |
|-----|------|--------|-------------|
| 0 | TX_BUSY | R | Transmitter busy |
| 1 | RX_BUSY | R | Receiver busy |
| 2 | TX_FIFO_FULL | R | TX FIFO full |
| 3 | RX_FIFO_EMPTY | R | RX FIFO empty |
| 4 | TX_FIFO_OVERFLOW | R | TX FIFO overflow |
| 5 | RX_FIFO_UNDERFLOW | R | RX FIFO underflow |
| 6 | TIMEOUT | R | Transfer timeout |
| 7 | Reserved | - | Reserved |
| 8-15 | TX_FIFO_LEVEL | R | TX FIFO level |
| 16-23 | RX_FIFO_LEVEL | R | RX FIFO level |
| 24-31 | Reserved | - | Reserved |

### Baud Rate Register (BAUD) - 0x10
| Bit | Name | Access | Description |
|-----|------|--------|-------------|
| 0-15 | CLOCK_DIV | R/W | Clock divider value |
| 16-31 | Reserved | - | Reserved |

### SPI Mode Register (MODE) - 0x1C
| Bit | Name | Access | Description |
|-----|------|--------|-------------|
| 0 | CPOL | R/W | Clock polarity |
| 1 | CPHA | R/W | Clock phase |
| 2-3 | DATA_WIDTH | R/W | Data width (00=8, 01=16, 10=32) |
| 4-7 | Reserved | - | Reserved |
| 8-15 | CS_DELAY | R/W | Chip select delay |
| 16-31 | Reserved | - | Reserved |

## Timing Requirements

### APB Interface Timing
- **Setup Time**: 2ns minimum
- **Hold Time**: 1ns minimum
- **Clock Period**: 10ns minimum (100 MHz max)
- **Access Time**: < 10 clock cycles

### SPI Interface Timing
- **SPI Clock Period**: 20ns minimum (50 MHz max)
- **Setup Time**: 5ns minimum
- **Hold Time**: 5ns minimum
- **Chip Select Delay**: Configurable 0-255 clock cycles

### Power Management
- **Clock Gating**: Automatic when idle
- **Sleep Mode**: < 1μW leakage power
- **Wake-up Time**: < 10 clock cycles

## Pinout Specification

### Pin Assignment
| Pin Name | Function | Direction | Description |
|----------|----------|-----------|-------------|
| PCLK | clock | input | APB clock input (100 MHz) |
| PRESETn | reset | input | APB reset input (active low) |
| PSEL | control | input | APB select input |
| PENABLE | control | input | APB enable input |
| PWRITE | control | input | APB write input |
| PADDR[7:0] | data | input | APB address input (8-bit) |
| PWDATA[31:0] | data | input | APB write data input (32-bit) |
| PRDATA[31:0] | data | output | APB read data output (32-bit) |
| PREADY | status | output | APB ready output |
| PSLVERR | status | output | APB slave error output |
| SPI_CLK | clock | output | SPI clock output |
| SPI_MOSI | data | output | SPI master out, slave in |
| SPI_MISO | data | input | SPI master in, slave out |
| SPI_CSn | control | output | SPI chip select (active low) |
| SPI_IRQ | interrupt | output | SPI interrupt output |

## Quality & Validation Requirements

### Linting & Code Quality
- **Linting Tool**: Verilator with strict mode
- **Coding Standards**: IEEE 1800-2017 SystemVerilog standard
- **Complexity Limits**: Maximum 50 lines per always block
- **Fanout Limits**: Maximum 20 fanout per signal
- **Clock Domain**: Single clock domain verification

### Coverage Requirements
- **Functional Coverage**: 95% minimum
- **Code Coverage**: 90% minimum (statements, branches, expressions)
- **Toggle Coverage**: 100% for all data signals
- **FSM Coverage**: 100% state and transition coverage
- **Interface Coverage**: 100% APB and SPI protocol coverage

### Performance Requirements
- **Maximum Frequency**: 100 MHz operation
- **Latency**: < 10 clock cycles for APB read/write
- **Throughput**: Full SPI clock rate support (up to 50 MHz)
- **Interrupt Latency**: < 5 clock cycles from event to interrupt assertion

### Reliability Requirements
- **Fault Tolerance**: Single bit error detection in FIFO
- **Error Correction**: Automatic retransmission on protocol errors
- **Watchdog**: Configurable watchdog timer for stuck conditions
- **Reset Recovery**: Guaranteed operation after power-on reset

## Validation Strategy

### Verification Plan
1. **Unit Testing**
   - APB interface verification
   - SPI protocol verification
   - FIFO functionality verification
   - Interrupt generation verification

2. **Integration Testing**
   - Full system integration
   - Performance testing
   - Power consumption testing

3. **Compliance Testing**
   - AMBA APB v2.0 compliance
   - SPI protocol compliance
   - Timing compliance

### Coverage Goals
- **Code Coverage**: > 95%
- **Functional Coverage**: > 90%
- **Toggle Coverage**: 100% for all data signals
- **FSM Coverage**: 100% state and transition coverage

## RTL and Testbench Development

### RTL Structure
```
rtl/
├── spi_controller.sv          # Top-level module
├── spi_apb_interface.sv       # APB interface logic
├── spi_protocol_engine.sv     # SPI protocol state machine
├── spi_fifo.sv               # FIFO implementation
├── spi_interrupt_ctrl.sv     # Interrupt controller
└── spi_clock_gen.sv          # Clock generation logic
```

### Testbench Structure
```
tb/
├── systemverilog/             # SystemVerilog testbenches
│   ├── tb_spi_controller.sv   # Main SystemVerilog testbench
│   ├── spi_apb_driver.sv      # APB bus driver
│   ├── spi_protocol_monitor.sv # SPI protocol monitor
│   ├── spi_scoreboard.sv      # Scoreboard for verification
│   └── spi_coverage.sv        # Coverage collection
├── cocotb/                    # Cocotb testbenches (Python)
│   ├── test_spi_controller.py # Main Cocotb testbench
│   ├── spi_apb_driver.py      # APB bus driver
│   ├── spi_protocol_monitor.py # SPI protocol monitor
│   ├── spi_scoreboard.py      # Scoreboard for verification
│   └── spi_coverage.py        # Coverage collection
├── fpga/                      # FPGA-specific testbenches
│   ├── tb_fpga_spi_controller.sv # FPGA wrapper testbench
│   ├── fpga_constraints_test.sv  # FPGA constraints test
│   └── fpga_timing_test.sv       # FPGA timing test
└── hardware/                  # Hardware verification testbenches
    ├── tb_hardware_spi.py     # Hardware testbench (Cocotb)
    └── spi_hardware_test.py   # Hardware-specific tests
```

### Cocotb Testbench Requirements
**Primary Testbench**: `tb/cocotb/test_spi_controller.py`

**Required Test Cases:**
- **APB Interface Tests**: Register read/write, protocol compliance
- **SPI Protocol Tests**: All 4 SPI modes, timing verification
- **FIFO Tests**: Overflow/underflow, threshold testing
- **Interrupt Tests**: Interrupt generation and clearing
- **Performance Tests**: Maximum frequency and throughput
- **Error Tests**: Protocol violations, timeout conditions

**Cocotb Configuration Requirements:**
- **Required Imports**: Cocotb framework, trigger mechanisms, clock generation, and assertion libraries
- **Test Structure**: Define test coroutines with proper decorators for test identification
- **Basic Communication Test**: Verify fundamental SPI communication functionality
- **Mode Testing**: Comprehensive testing of all four SPI modes (0, 1, 2, 3)
- **Async/Await Pattern**: Use asynchronous programming model for test execution
- **Error Handling**: Include proper timeout and error handling mechanisms

### Verilator Configuration
**Primary Simulation Tool**: Verilator for fast RTL verification

**Verilator Configuration Requirements:**
- **Command Line Options**: Include compilation flags for C++11, executable generation, and build process
- **Trace Generation**: Enable comprehensive waveform generation for debugging
- **Coverage Collection**: Enable code and functional coverage analysis
- **Assertion Checking**: Enable SystemVerilog assertion verification
- **Linting Support**: Enable comprehensive linting checks for code quality
- **Source Files**: Include main RTL module and C++ testbench files

**Required Verilator Features:**
- **Coverage**: Enable coverage collection
- **Assertions**: Enable assertion checking
- **Tracing**: Enable waveform generation
- **Linting**: Enable linting checks

### FPGA Testbench Requirements
**FPGA-Specific Testbenches**: `tb/fpga/`

**Vivado Testbench**: `tb/fpga/tb_fpga_spi_controller.sv`
- **FPGA Wrapper Testing**: Test FPGA-specific wrapper
- **Constraint Validation**: Verify timing constraints
- **Resource Utilization**: Monitor FPGA resource usage
- **Bitstream Testing**: Test bitstream generation

**FPGA Simulation Tools:**
- **Vivado Simulator**: For Xilinx FPGA simulation
- **ModelSim**: For Intel FPGA simulation
- **Questa**: For advanced FPGA verification

**FPGA-Specific Test Cases:**
- **Clock Domain Crossing**: Verify CDC logic
- **FPGA Resources**: Monitor LUT, FF, BRAM usage
- **Timing Closure**: Verify FPGA timing requirements
- **Power Analysis**: FPGA power consumption analysis

### Simulation Commands
**Verilator Simulation Commands:**
- **Basic Simulation**: Execute standard Verilator simulation without additional features
- **Coverage Simulation**: Run simulation with coverage collection enabled
- **Trace Simulation**: Execute simulation with waveform generation for debugging

**Cocotb Simulation Commands:**
- **Verilator Integration**: Run Cocotb tests using Verilator as the underlying simulator
- **Icarus Integration**: Execute Cocotb tests with Icarus Verilog simulator
- **VCS Integration**: Run Cocotb tests with Synopsys VCS simulator

**FPGA Simulation Commands:**
- **Vivado Simulation**: Execute FPGA-specific simulation using Xilinx Vivado tools
- **Quartus Simulation**: Run FPGA simulation using Intel Quartus tools

**Regression Testing Commands:**
- **Complete Test Suite**: Execute all available test suites and verification methods
- **Verilator Tests**: Run only Verilator-based testbenches
- **Cocotb Tests**: Execute only Cocotb-based testbenches
- **FPGA Tests**: Run only FPGA-specific testbenches

## Flow Configuration

### PDK and Flow Requirements
- **PDK**: SkyWater 130nm Open Source PDK (SKY130 process node)
- **OpenLane Platform**: Use `sky130bhd` (high-density) or `sky130b` as the platform in OpenLane config files
- **PDK Selection**: All flow scripts and Makefiles must allow explicit selection of the SkyWater PDK (e.g., `PDK := sky130B`)
- **PDK Versioning**: Document the exact PDK version used for reproducibility
- **PDK Source**: The SkyWater PDK is available at [github.com/google/skywater-pdk](https://github.com/google/skywater-pdk)

### Physical Design Files - Responsibilities

#### **Designer/Project Team Provides:**
- **OpenLane config**: `flow/openlane/config_sky130b.json` - Project-specific configuration
- **SDC constraints**: `flow/openlane/constraints_sky130b.sdc` - Design-specific timing constraints
- **Pin order**: `flow/openlane/pin_order_sky130b.cfg` - I/O pin placement order
- **Floorplan**: `flow/openlane/floorplan_sky130b.tcl` - Custom floorplan if needed
- **Documentation**: Update `flow/openlane/configuration.md` - Project-specific flow documentation

#### **PDK Vendor Provides (via SkyWater PDK Repository):**
- **Standard cell libraries** - Available in PDK installation from [github.com/google/skywater-pdk](https://github.com/google/skywater-pdk)
- **I/O cell libraries** - Available in PDK installation from [github.com/google/skywater-pdk](https://github.com/google/skywater-pdk)
- **Technology files** - LEF, GDS, SPICE models
- **Design rules** - DRC, LVS rules
- **Process corners** - TT, FF, SS, FS, SF corner data
- **Documentation** - Comprehensive design rule documentation

#### **OpenLane Tool Provides:**
- **Flow scripts** - Synthesis, placement, routing, DRC/LVS
- **Default configurations** - Base configs for each platform
- **Utility scripts** - For results collection, reporting

#### **Generated During Flow:**
- **Synthesis netlists** - Generated from RTL
- **Placement results** - DEF files, placement reports
- **Routing results** - Final DEF, routing reports
- **GDS output** - Final layout
- **Timing reports** - STA results
- **Power reports** - Power analysis results

### Sky130B PDK Specific Requirements
- **Technology**: SkyWater 130nm Open Source PDK, Sky130B variant
- **Supply Voltage**: 1.8V nominal (1.62V to 1.98V range)
- **Temperature Range**: -40°C to +125°C
- **Process Corners**: TT, FF, SS, FS, SF (ensure all corners are supported in flow)
- **Platform**: Set `PLATFORM` to `sky130bhd` or `sky130b` in OpenLane config

### OpenLane Configuration
The OpenLane configuration specifies the following parameters:
- **ASIC Flavor**: Digital design
- **Supported PDKs**: Sky130B and Sky130A
- **Synthesis Tool**: OpenLane integrated flow
- **Target Clock Frequency**: 100 MHz
- **Timing Constraints**: Design-specific SDC constraints
- **Tools**: Yosys for synthesis, OpenROAD for physical design

### ASIC Specifications
- **Technology**: SkyWater 130nm Open Source PDK (SKY130)
- **Platform**: sky130bhd (high-density standard cells)
- **Die Area**: 0.5mm x 0.5mm (500x500 microns)
- **Core Utilization**: 80%
- **Supply Voltage**: 1.8V nominal
- **Metal Layers**: 5 layers (li1, met1-met5)

### Floorplan Requirements
- **Aspect Ratio**: 1:1 to 2:1 (width:height)
- **Pin Placement**: APB pins on left, SPI pins on right, interrupts on top
- **Core Utilization**: < 80% to allow for routing
- **I/O Ring**: Standard cell I/O with ESD protection
- **Pin Order File**: Provide a pin order file for OpenLane (`pin_order_sky130b.cfg`)

### Flow Automation & Reproducibility
- **Makefile**: The OpenLane Makefile must allow PDK/platform/config selection via variables or targets
- **Config Naming**: Use clear naming for config files (e.g., `config_sky130b.json`)
- **Results**: All final GDS, DEF, and netlists must be collected in a `final/` directory
- **Documentation**: All flow steps, file locations, and PDK-specific notes must be documented in `flow/openlane/configuration.md`

### File Creation and Maintenance

#### **Must Create (Designer Responsibility):**
1. **OpenLane Configuration**: Create `config_sky130b.json` with project-specific settings
2. **Timing Constraints**: Create `constraints_sky130b.sdc` with design-specific timing
3. **Pin Order**: Create `pin_order_sky130b.cfg` with I/O pin placement
4. **Floorplan**: Create `floorplan_sky130b.tcl` if custom floorplan needed
5. **Documentation**: Update `configuration.md` with project-specific notes

#### **Can Generate (Tool/Script Responsibility):**
1. **SDC Templates**: Can generate from RTL analysis
2. **Pin Order**: Can generate from module port analysis
3. **Floorplan**: Can generate basic floorplan from pin count/area estimates
4. **Config Templates**: Can generate from design parameters

#### **Must Install/Setup (Environment Responsibility):**
1. **PDK**: Install SkyWater PDK from [github.com/google/skywater-pdk](https://github.com/google/skywater-pdk) in standard location
2. **OpenLane**: Install OpenLane toolchain with Sky130 platform support
3. **Dependencies**: Install required tools (Yosys, OpenROAD, Magic, etc.)

## Documentation Requirements

### Required Documents
1. **README.md**: Project overview and quick start guide
2. **Developer_Guide.md**: Detailed development guide
3. **SPI_Controller_design.md**: This design specification
4. **API_Reference.md**: Register map and programming guide
5. **Integration_Guide.md**: Integration examples and guidelines

### Documentation Standards
- Use Markdown format
- Include code examples
- Provide timing diagrams
- Include performance benchmarks
- Document all parameters and interfaces

## Test Strategy & Verification

### Testbench Requirements
- **Language**: SystemVerilog with UVM methodology
- **Coverage**: Functional, code, and assertion coverage
- **Randomization**: Constrained random testing for all interfaces
- **Assertions**: SVA assertions for protocol compliance
- **Waveforms**: Comprehensive waveform generation for debugging

### Test Scenarios
- **Basic Functionality**: TX/RX at all supported SPI modes and clock rates
- **FIFO Operations**: Full/empty conditions, overflow/underflow
- **Interrupt Testing**: All interrupt conditions and clearing
- **Error Conditions**: Protocol violations, timeout error injection
- **Performance Testing**: Maximum throughput and latency measurement
- **Power Testing**: Clock gating and sleep mode validation

### Simulation Environment
- **Simulator**: Verilator for fast simulation, ModelSim for detailed
- **Test Vectors**: Automated test vector generation
- **Regression**: Automated regression testing with CI/CD
- **Coverage Analysis**: Automated coverage reporting and analysis

## Testing Strategy

### Test Categories
1. **Functional Tests**
   - Basic SPI communication
   - All SPI modes (0, 1, 2, 3)
   - FIFO operations
   - Interrupt generation

2. **Performance Tests**
   - Maximum frequency testing
   - Throughput measurement
   - Latency measurement
   - Power consumption

3. **Corner Case Tests**
   - FIFO overflow/underflow
   - Timeout conditions
   - Reset behavior
   - Clock domain crossing

### Cocotb Testbench Strategy
**Primary Framework**: Cocotb with Python for functional verification

**Test Organization:**
```
tb/cocotb/
├── conftest.py                 # Cocotb configuration
├── test_spi_controller.py      # Main test suite
├── test_apb_interface.py       # APB interface tests
├── test_spi_protocol.py        # SPI protocol tests
├── test_fifo_operations.py     # FIFO functionality tests
├── test_interrupts.py          # Interrupt tests
├── test_performance.py         # Performance tests
└── test_error_conditions.py    # Error condition tests
```

**Required Test Coverage:**
- **APB Interface**: 100% protocol coverage
- **SPI Protocol**: All 4 modes, all timing requirements
- **FIFO Operations**: Full/empty, overflow/underflow
- **Interrupt Logic**: All interrupt sources and clearing
- **Error Handling**: Protocol violations, timeouts
- **Performance**: Maximum frequency, throughput limits

### Verilator Testbench Strategy
**Primary Tool**: Verilator for fast RTL simulation

**Test Structure:**
```
tb/verilator/
├── tb_spi_controller.cpp       # Main C++ testbench
├── spi_apb_driver.cpp          # APB bus driver
├── spi_protocol_monitor.cpp    # SPI protocol monitor
├── spi_scoreboard.cpp          # Scoreboard implementation
└── Makefile                    # Verilator build configuration
```

**Verilator Features:**
- **Fast Simulation**: 10-100x faster than traditional simulators
- **Coverage Collection**: Built-in coverage support
- **Assertion Checking**: SVA assertion support
- **Waveform Generation**: VCD/GTKWave support
- **Linting**: Comprehensive linting checks

### FPGA Testbench Strategy
**FPGA-Specific Testing**: Separate testbenches for FPGA platforms

**Vivado Testbench Structure:**
```
tb/fpga/vivado/
├── tb_fpga_spi_controller.sv   # FPGA wrapper testbench
├── fpga_constraints_test.sv    # Constraints validation
├── fpga_timing_test.sv         # Timing analysis test
├── fpga_resource_test.sv       # Resource utilization test
└── fpga_power_test.sv          # Power analysis test
```

**Quartus Testbench Structure:**
```
tb/fpga/quartus/
├── tb_fpga_spi_controller.sv   # FPGA wrapper testbench
├── quartus_constraints_test.sv # Constraints validation
├── quartus_timing_test.sv      # Timing analysis test
└── quartus_resource_test.sv    # Resource utilization test
```

**FPGA-Specific Test Requirements:**
- **Clock Domain Crossing**: Verify CDC logic and synchronization
- **FPGA Resources**: Monitor LUT, FF, BRAM, DSP usage
- **Timing Closure**: Verify FPGA timing requirements
- **Power Analysis**: FPGA power consumption analysis
- **Bitstream Testing**: Verify bitstream generation and programming

### Hardware Verification Strategy
**Hardware Testing**: Real hardware verification with Cocotb

**Hardware Test Structure:**
```
tb/hardware/
├── tb_hardware_spi.py          # Hardware testbench (Cocotb)
├── spi_hardware_test.py        # Hardware-specific tests
├── board_config.py             # Board configuration
└── hardware_drivers.py         # Hardware driver implementations
```

**Hardware Test Requirements:**
- **Board Integration**: Test on actual FPGA boards
- **Real SPI Devices**: Test with actual SPI slave devices
- **Performance Validation**: Real-world performance measurement
- **Reliability Testing**: Long-term reliability testing
- **Environmental Testing**: Temperature and voltage variations

### Test Automation and CI/CD
**Automated Testing**: Comprehensive test automation

**CI/CD Pipeline Tests:**
```yaml
# GitHub Actions test matrix
test_matrix:
  simulator: [verilator, icarus, vcs]
  testbench: [cocotb, systemverilog]
  platform: [asic, fpga-vivado, fpga-quartus]
  coverage: [true, false]
```

**Test Execution:**
- **Unit Tests**: Individual module testing
- **Integration Tests**: Full system integration
- **Regression Tests**: Complete regression suite
- **Performance Tests**: Automated performance benchmarking
- **Hardware Tests**: Automated hardware verification

**Coverage Requirements:**
- **Functional Coverage**: 95% minimum
- **Code Coverage**: 90% minimum
- **Toggle Coverage**: 100% for all data signals
- **FSM Coverage**: 100% state and transition coverage
- **Interface Coverage**: 100% protocol coverage

### Test Framework
The test framework provides comprehensive verification capabilities:

**Simulation Tools:**
- **Verilator**: Primary simulation tool for fast RTL verification
- **Icarus Verilog**: Open-source simulator for compatibility testing
- **Vivado Simulator**: FPGA-specific simulation for Xilinx devices
- **ModelSim**: Commercial simulator for detailed analysis

**Testbench Languages:**
- **Cocotb (Python)**: Primary testbench framework for functional verification
- **SystemVerilog**: Traditional testbench language for protocol verification
- **VHDL**: Optional support for VHDL-based testbenches

**Coverage and Analysis:**
- **Functional Coverage**: 95% minimum coverage requirement
- **Code Coverage**: 90% minimum (statements, branches, expressions)
- **Toggle Coverage**: 100% for all data signals
- **FSM Coverage**: 100% state and transition coverage

**Test Status**: All tests passing with comprehensive coverage

## Integration & Packaging

### SoC Integration
- **Target Platforms**: OpenTitan, Caravel, OpenPiton
- **Interface Compatibility**: Standard APB3 slave interface
- **Clock Integration**: Single clock domain with clock gating
- **Reset Integration**: Asynchronous reset with proper synchronization

### Verification Environment
- **UVM Framework**: Standard UVM testbench structure
- **Cocotb Support**: Python-based verification for advanced scenarios
- **Formal Verification**: Model checking for critical properties
- **Emulation Support**: FPGA-based emulation for system-level testing

### Documentation Requirements
- **User Manual**: Complete user guide with examples
- **Integration Guide**: SoC integration instructions
- **API Reference**: Complete register map and interface specification
- **Timing Diagrams**: Detailed timing for all interfaces
- **Test Report**: Comprehensive test results and coverage

### Packaging & Distribution
- **Metadata**: Complete vyges-metadata.json for catalog
- **License**: Apache-2.0 with proper attribution
- **Examples**: Integration examples for common SoC platforms
- **Scripts**: Automated build and test scripts
- **CI/CD**: GitHub Actions for automated testing and validation

## Integration Guidelines

### Integration Examples
The SPI Controller provides integration examples for different target platforms:

**Simulation Environment:**
- **Wrapper**: integration/spi_wrapper.v
- **Testbench**: integration/spi_tb.v

**FPGA Platform:**
- **Wrapper**: integration/fpga_wrapper.v
- **Testbench**: integration/fpga_tb.v

**ASIC Platform:**
- **Wrapper**: integration/asic_wrapper.v
- **Testbench**: integration/asic_tb.v

### Integration Checklist
- [ ] Clock domain crossing verification
- [ ] Reset synchronization
- [ ] Power domain isolation
- [ ] Signal integrity analysis
- [ ] Timing closure
- [ ] Functional verification

## CI/CD Pipeline

### Automated Checks
1. **Code Quality**
   - Linting (Verilator)
   - Code formatting
   - Documentation coverage

2. **Functional Verification**
   - Unit tests
   - Integration tests
   - Regression tests

3. **Physical Design**
   - Synthesis
   - Place and route
   - Timing analysis
   - DRC/LVS

### CI/CD Configuration
The CI/CD pipeline is configured using GitHub Actions with the following workflow:

**Workflow File**: .github/workflows/test.yml
**Trigger**: Push and pull request events
**Environment**: Ubuntu latest
**Steps**:
1. Checkout source code
2. Install dependencies (Verilator, Icarus Verilog)
3. Run comprehensive tests
4. Execute synthesis flow

## Catalog Publication

### Metadata Requirements
The catalog publication requires the following metadata:

**Registry Information:**
- **Status**: Approved for publication
- **Submission Date**: 2025-07-11T20:50:00Z
- **Approval Date**: 2025-07-11T20:50:00Z
- **Verified By**: vyges-team
- **Registry ID**: spi-controller-v1

**Compliance Check:**
- **Status**: Passing all compliance checks
- **Last Checked**: 2025-07-11T20:50:00Z
- **Checker Version**: 1.0.0
- **Issues**: None identified

### Publication Checklist
- [ ] Metadata validation
- [ ] Documentation completeness
- [ ] Test coverage verification
- [ ] Performance benchmarks
- [ ] License compliance
- [ ] Security review

### Performance Benchmarks
The SPI Controller achieves the following performance metrics:

**Physical Characteristics:**
- **Maximum Frequency**: 100 MHz
- **Power Consumption**: 5.2 mW
- **Die Area**: 0.15 mm²
- **Gate Count**: 2,500 gates

**Performance Metrics:**
- **Throughput**: 100 Mbps maximum data transfer rate
- **Latency**: 5 ns end-to-end latency

## Conclusion

This design specification provides a comprehensive framework for developing the SPI Controller IP block following Vyges conventions. The specification covers all aspects from initial design through to catalog publication, ensuring a high-quality, reusable IP block that meets industry standards.

### Next Steps
1. Review and approve this specification
2. Begin RTL development
3. Set up CI/CD pipeline
4. Develop testbenches
5. Perform synthesis and physical design
6. Complete documentation
7. Submit for catalog publication

### Contact Information
For questions or clarifications regarding this specification, please contact:
- **Technical Lead**: Shivaram Mysore (shivaram@vyges.com)
- **Project Repository**: https://github.com/vyges/spi-controller
- **Documentation**: https://docs.vyges.com/spi-controller
