# SPI Controller User Guide

## Overview
The SPI Controller IP block is a configurable, high-performance SPI master with APB interface, FIFO buffering, and interrupt support. It is suitable for ASIC and FPGA integration.

## Getting Started
1. **Integrate RTL**: Add `spi_controller.sv`, `spi_fifo.sv`, and `spi_protocol_engine.sv` to your project.
2. **Instantiate**: Connect the APB and SPI interfaces as per your SoC or FPGA design.
3. **Configure**: Set parameters (FIFO depth, data width, baud rate) as needed.
4. **Simulate**: Use provided SystemVerilog or Cocotb testbenches for verification.

## Configuration
- **APB Registers**: Control, status, data, baud, FIFO, interrupt, and mode registers.
- **Parameters**: FIFO depth, data width, baud divider (see vyges-metadata.json).
- **Interrupts**: Enable/disable via INT register.

## Usage
- **Transmit**: Write data to TXDATA register via APB.
- **Receive**: Read data from RXDATA register.
- **SPI Modes**: Set CPOL/CPHA via MODE register.
- **FIFO**: Monitor FIFO status via STAT register.

## Example APB Transactions
- Enable controller: Write `0x1` to CTRL.
- Set baud: Write divider to BAUD.
- Set mode: Write value to MODE.
- Write data: Write to TXDATA.
- Read data: Read from RXDATA.

## Troubleshooting
- **No SPI output**: Check CTRL enable, APB clock/reset, and SPI mode.
- **FIFO full/empty**: Monitor STAT register, adjust FIFO depth if needed.
- **Interrupts not firing**: Check INT register and interrupt wiring.

## Support
For further help, contact the Vyges team or refer to the design specification. 