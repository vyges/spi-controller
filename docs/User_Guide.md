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
- **Error Detection**: Timeout, FIFO overflow/underflow detection.
- **Loopback Mode**: Internal loopback for testing.
- **Chip Select Delay**: Configurable CS delay timing.

## Usage
- **Transmit**: Write data to TXDATA register via APB.
- **Receive**: Read data from RXDATA register.
- **SPI Modes**: Set CPOL/CPHA via MODE register.
- **FIFO**: Monitor FIFO status via STAT register.

## Enhanced Features

### Error Detection
- **Timeout**: Automatic timeout detection with configurable threshold
- **FIFO Overflow**: Detects when TX FIFO becomes full during writes
- **FIFO Underflow**: Detects when RX FIFO is empty during reads
- **Error Interrupts**: Enable via INT[3] for automatic error reporting

### Loopback Mode
- **Enable**: Set CTRL[5] = 1
- **Testing**: Internal loopback connects MOSI to MISO for self-testing
- **Use Case**: Verify SPI controller functionality without external devices

### Chip Select Delay
- **Configuration**: Set CS delay in MODE[15:8] register
- **Timing**: Configurable delay between CS assertion and data transfer
- **Compatibility**: Supports devices requiring setup time after CS activation

### Individual Control
- **TX Enable**: CTRL[1] - Enable transmitter independently
- **RX Enable**: CTRL[2] - Enable receiver independently  
- **CS Enable**: CTRL[3] - Enable chip select independently

### Power Management
- **Power Down Mode**: CTRL[7] - Enable power down when idle
- **Clock Gating**: Automatic clock gating for power savings
- **Dynamic Power**: Reduced power consumption in idle state

### Multi-Slave Support
- **Slave Selection**: CTRL[11:8] - Select target slave (0-15)
- **CS Control**: Independent chip select for each slave
- **Multi-Device**: Support for up to 16 SPI devices

### Advanced Error Recovery
- **Error Recovery**: CTRL[12] - Enable automatic error recovery
- **Auto Retry**: CTRL[13] - Enable automatic retry on errors
- **Retry Count**: CTRL[19:16] - Maximum retry attempts
- **Recovery Logic**: Automatic recovery from timeout/overflow

### Performance Optimization
- **Max Frequency**: MODE[19:16] - Configure maximum operating frequency
- **High-Speed**: Optimized for frequencies up to 100MHz
- **Timing Closure**: Advanced timing optimization

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