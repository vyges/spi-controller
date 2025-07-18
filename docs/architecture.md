# Architecture: SPI Controller IP

## Overview

This document describes the internal architecture, APB interface, and design details of the SPI Controller IP block. The module provides a configurable Serial Peripheral Interface (SPI) master controller with APB interface, supporting multiple SPI modes, FIFO buffering, and interrupt capabilities.

---

## Block Diagram

```
                    +------------------------------------------+
                    |              SPI Controller              |
                    |                                          |
                    |  +-------------+    +----------------+   |
                    |  |    APB      |    |     Control    |   |
                    |  |  Interface  |◀──▶|   Registers    |   |
                    |  |             |    |                |   |
                    |  +-------------+    +----------------+   |
                    |         │                   │            |
                    |         ▼                   ▼            |
                    |  +-------------+    +----------------+   |
                    |  |     TX      |    |      RX        |   |
                    |  |    FIFO     |    |     FIFO       |   |
                    |  |             |    |                |   |
                    |  +-------------+    +----------------+   |
                    |         │                   │            |
                    |         ▼                   ▼            |
                    |  +-------------+    +----------------+   |
                    |  |   SPI       |    |   Interrupt    |   |
                    |  | Protocol    |    |  Controller    |   |
                    |  | Engine      |    |                |   |
                    |  +-------------+    +----------------+   |
                    |         │                   │            |
                    |         └───────────────────┘            |
                    |                   │                      |
                    |            +-------------+               |
                    |            |   SPI       |               |
                    |            | Interface   |               |
                    |            +-------------+               |
                    +------------------------------------------+
```

---

## Parameters

| Parameter     | Type | Default | Description                        |
|---------------|------|---------|------------------------------------|
| `FIFO_DEPTH`  | int  | 16      | FIFO depth (4-64 entries)          |
| `DATA_WIDTH`  | int  | 8       | Data width (8, 16, or 32 bits)     |
| `BAUD_DIV`    | int  | 10      | Default baud rate divider          |

---

## APB Interface

| Signal     | Direction | Width  | Description                        |
|------------|-----------|--------|------------------------------------|
| `pclk_i`   | input     | 1      | APB clock                          |
| `presetn_i`| input     | 1      | APB reset (active low)             |
| `psel_i`   | input     | 1      | APB select                         |
| `penable_i`| input     | 1      | APB enable                         |
| `pwrite_i` | input     | 1      | APB write enable                   |
| `paddr_i`  | input     | 8      | APB address                        |
| `pwdata_i` | input     | 32     | Write data                         |
| `prdata_o` | output    | 32     | Read data                          |
| `pready_o` | output    | 1      | Ready handshake                    |
| `pslverr_o`| output    | 1      | Slave error                        |

---

## SPI Interface

| Signal        | Direction | Width  | Description                        |
|---------------|-----------|--------|------------------------------------|
| `spi_clk_o`   | output    | 1      | SPI clock output                   |
| `spi_mosi_o`  | output    | 1      | SPI master out, slave in           |
| `spi_miso_i`  | input     | 1      | SPI master in, slave out           |
| `spi_csn_o`   | output    | 1      | SPI chip select (active low)       |
| `spi_irq_o`   | output    | 1      | SPI interrupt output               |

---

## Registers

| Address   | Name          | Access | Description                         |
|-----------|---------------|--------|-------------------------------------|
| `0x00`    | `CTRL`        | R/W    | Control register                    |
| `0x04`    | `STAT`        | R      | Status register                     |
| `0x08`    | `TXDATA`      | W      | TX data register                    |
| `0x0C`    | `RXDATA`      | R      | RX data register                    |
| `0x10`    | `BAUD`        | R/W    | Baud rate configuration             |
| `0x14`    | `FIFO`        | R/W    | FIFO configuration                  |
| `0x18`    | `INT`         | R/W    | Interrupt configuration             |
| `0x1C`    | `MODE`        | R/W    | SPI mode configuration              |

---

## Internal Modules

- **APB Interface**: Implements APB3 slave protocol with register access
- **Control Registers**: Manages configuration and control bits
- **TX FIFO**: Buffers transmit data with configurable depth
- **RX FIFO**: Buffers receive data with configurable depth
- **SPI Protocol Engine**: Implements all 4 SPI modes with configurable timing
- **Interrupt Controller**: Manages interrupt generation and clearing

---

## SPI Modes

- **Mode 0**: CPOL=0, CPHA=0 (clock idle low, data sampled on rising edge)
- **Mode 1**: CPOL=0, CPHA=1 (clock idle low, data sampled on falling edge)
- **Mode 2**: CPOL=1, CPHA=0 (clock idle high, data sampled on falling edge)
- **Mode 3**: CPOL=1, CPHA=1 (clock idle high, data sampled on rising edge)

---

## Data Flow

1. **Transmit Path**: APB write → TX FIFO → SPI Protocol Engine → SPI Interface
2. **Receive Path**: SPI Interface → SPI Protocol Engine → RX FIFO → APB read
3. **Control Path**: APB register access → Control logic → Module configuration
4. **Interrupt Path**: Status monitoring → Interrupt controller → Interrupt output

---

## Notes

- All registers are 32 bits wide
- FIFO depth is configurable from 4 to 64 entries
- Data width supports 8, 16, and 32-bit transfers
- Interrupts are level-sensitive and require software clearing
- Reset clears all registers and FIFOs to known state

---
