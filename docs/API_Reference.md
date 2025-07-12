# SPI Controller API Reference

## Register Map
| Address | Name    | Access | Description                |
|---------|---------|--------|----------------------------|
| 0x00    | CTRL    | R/W    | Control Register           |
| 0x04    | STAT    | R      | Status Register            |
| 0x08    | TXDATA  | W      | TX Data Register           |
| 0x0C    | RXDATA  | R      | RX Data Register           |
| 0x10    | BAUD    | R/W    | Baud Rate Configuration    |
| 0x14    | FIFO    | R/W    | FIFO Configuration         |
| 0x18    | INT     | R/W    | Interrupt Configuration    |
| 0x1C    | MODE    | R/W    | SPI Mode Configuration     |

## Register Details

### CTRL (0x00)
| Bit(s) | Name            | Access | Description                  |
|--------|-----------------|--------|------------------------------|
| 0      | EN              | R/W    | Enable SPI controller        |
| 1      | TX_EN           | R/W    | Enable transmitter           |
| 2      | RX_EN           | R/W    | Enable receiver              |
| 3      | CS_EN           | R/W    | Enable chip select           |
| 4      | DMA_EN          | R/W    | Enable DMA mode              |
| 5      | LOOPBACK        | R/W    | Enable loopback mode         |
| 8-15   | TX_FIFO_THRESH  | R/W    | TX FIFO threshold            |
| 16-23  | RX_FIFO_THRESH  | R/W    | RX FIFO threshold            |

### STAT (0x04)
| Bit(s) | Name            | Access | Description                  |
|--------|-----------------|--------|------------------------------|
| 0      | TX_BUSY         | R      | Transmitter busy             |
| 1      | RX_BUSY         | R      | Receiver busy                |
| 2      | TX_FIFO_FULL    | R      | TX FIFO full                 |
| 3      | RX_FIFO_EMPTY   | R      | RX FIFO empty                |
| 4      | TX_FIFO_OVERFLOW| R      | TX FIFO overflow             |
| 5      | RX_FIFO_UNDERFLOW| R     | RX FIFO underflow            |
| 6      | TIMEOUT         | R      | Transfer timeout             |
| 8-15   | TX_FIFO_LEVEL   | R      | TX FIFO level                |
| 16-23  | RX_FIFO_LEVEL   | R      | RX FIFO level                |

### BAUD (0x10)
| Bit(s) | Name        | Access | Description           |
|--------|-------------|--------|-----------------------|
| 0-15   | CLOCK_DIV   | R/W    | Clock divider value   |

### MODE (0x1C)
| Bit(s) | Name        | Access | Description           |
|--------|-------------|--------|-----------------------|
| 0      | CPOL        | R/W    | Clock polarity        |
| 1      | CPHA        | R/W    | Clock phase           |
| 2-3    | DATA_WIDTH  | R/W    | Data width (00=8, 01=16, 10=32) |
| 8-15   | CS_DELAY    | R/W    | Chip select delay     |

## Interrupts
- **INT (0x18)**: Enable/disable interrupt sources (TX empty, RX full, transfer complete, error).
- **SPI_IRQ**: Asserted when enabled interrupt condition occurs.

## Notes
- All registers are 32 bits wide.
- Unused/reserved bits should be written as 0.
- For more details, see the design specification. 