# Waveform Examples: SPI Controller IP

This document captures key waveform behaviors observed in simulation to verify correct SPI controller functionality.

---

## 1. APB Write Transaction (Write to TXDATA)

**Scenario**: Writing data to the TX FIFO via APB interface.

```
| Time(ns) | pclk | presetn | psel | penable | pwrite | paddr | pwdata    | pready | Notes              |
| -------- | ---- | ------- | ---- | ------- | ------ | ----- | --------- | ------ | ------------------ |
| 0        | 0    | 0       | 0    | 0       | 0      | -     | -         | 0      | Reset active       |
| 100      | 1    | 1       | 1    | 0       | 1      | 0x08  | 0x000000AA| 1      | Setup phase         |
| 110      | 1    | 1       | 1    | 1       | 1      | 0x08  | 0x000000AA| 1      | Access phase        |
| 120      | 1    | 1       | 0    | 0       | 0      | -     | -         | 0      | Data written to FIFO|
```

---

## 2. SPI Mode 0 Transmission (CPOL=0, CPHA=0)

**Scenario**: SPI transmission in Mode 0 with 8-bit data.

```
| Time(ns) | pclk | spi_clk | spi_csn | spi_mosi | spi_miso | bit_cnt | Notes              |
| -------- | ---- | ------- | ------- | -------- | -------- | ------- | ------------------ |
| 0        | 1    | 0       | 1       | X        | 0        | 0       | Idle state         |
| 100      | 1    | 0       | 0       | 1        | 0        | 0       | CS active, MSB=1   |
| 200      | 1    | 1       | 0       | 1        | 0        | 0       | Clock rising edge  |
| 300      | 1    | 0       | 0       | 0        | 0        | 1       | Clock falling edge |
| 400      | 1    | 1       | 0       | 0        | 0        | 1       | Next bit           |
| ...      | ...  | ...     | 0       | ...      | ...      | ...     | Continue for 8 bits|
| 1600     | 1    | 0       | 1       | X        | 0        | 7       | CS inactive        |
```

---

## 3. SPI Mode 1 Transmission (CPOL=0, CPHA=1)

**Scenario**: SPI transmission in Mode 1 with data sampled on falling edge.

```
| Time(ns) | pclk | spi_clk | spi_csn | spi_mosi | spi_miso | bit_cnt | Notes              |
| -------- | ---- | ------- | ------- | -------- | -------- | ------- | ------------------ |
| 0        | 1    | 0       | 1       | X        | 0        | 0       | Idle state         |
| 100      | 1    | 0       | 0       | 1        | 0        | 0       | CS active, MSB=1   |
| 200      | 1    | 1       | 0       | 1        | 0        | 0       | Clock rising edge  |
| 300      | 1    | 0       | 0       | 0        | 0        | 1       | Clock falling, sample|
| 400      | 1    | 1       | 0       | 0        | 0        | 1       | Next bit           |
| ...      | ...  | ...     | 0       | ...      | ...      | ...     | Continue for 8 bits|
| 1600     | 1    | 0       | 1       | X        | 0        | 7       | CS inactive        |
```

---

## 4. FIFO Overflow Detection

**Scenario**: TX FIFO becomes full and overflow is detected.

```
| Time(ns) | pclk | tx_fifo_wr | tx_fifo_level | tx_fifo_full | stat_reg[2] | Notes              |
| -------- | ---- | ---------- | ------------- | ------------ | ----------- | ------------------ |
| 0        | 1    | 0          | 0             | 0            | 0           | FIFO empty         |
| 100      | 1    | 1          | 1             | 0            | 0           | First write        |
| 200      | 1    | 1          | 2             | 0            | 0           | Second write       |
| ...      | ...  | 1          | ...           | 0            | 0           | Continue filling   |
| 1600     | 1    | 1          | 16            | 1            | 1           | FIFO full          |
| 1700     | 1    | 1          | 16            | 1            | 1           | Overflow detected  |
```

---

## 5. Interrupt Generation

**Scenario**: Interrupt generation when TX FIFO becomes empty.

```
| Time(ns) | pclk | tx_fifo_empty | int_reg[0] | spi_irq | Notes              |
| -------- | ---- | ------------- | ---------- | ------- | ------------------ |
| 0        | 1    | 1             | 1          | 1       | TX empty, IRQ active|
| 100      | 1    | 0             | 1          | 0       | Data written, IRQ clear|
| 200      | 1    | 1             | 1          | 1       | FIFO empty again   |
| 300      | 1    | 0             | 0          | 0       | IRQ disabled       |
```

---

## 6. APB Read Transaction (Read from RXDATA)

**Scenario**: Reading received data from RX FIFO via APB interface.

```
| Time(ns) | pclk | presetn | psel | penable | pwrite | paddr | prdata    | pready | Notes              |
| -------- | ---- | ------- | ---- | ------- | ------ | ----- | --------- | ------ | ------------------ |
| 0        | 0    | 0       | 0    | 0       | 0      | -     | -         | 0      | Reset active       |
| 100      | 1    | 1       | 1    | 0       | 0      | 0x0C  | -         | 1      | Setup phase         |
| 110      | 1    | 1       | 1    | 1       | 0      | 0x0C  | 0x000000BB| 1      | Access phase        |
| 120      | 1    | 1       | 0    | 0       | 0      | -     | -         | 0      | Data read from FIFO|
```

---

## 7. SPI Mode 2 Transmission (CPOL=1, CPHA=0)

**Scenario**: SPI transmission in Mode 2 with clock idle high.

```
| Time(ns) | pclk | spi_clk | spi_csn | spi_mosi | spi_miso | bit_cnt | Notes              |
| -------- | ---- | ------- | ------- | -------- | -------- | ------- | ------------------ |
| 0        | 1    | 1       | 1       | X        | 0        | 0       | Idle state (high)  |
| 100      | 1    | 1       | 0       | 1        | 0        | 0       | CS active, MSB=1   |
| 200      | 1    | 0       | 0       | 1        | 0        | 0       | Clock falling edge |
| 300      | 1    | 1       | 0       | 0        | 0        | 1       | Clock rising edge  |
| 400      | 1    | 0       | 0       | 0        | 0        | 1       | Next bit           |
| ...      | ...  | ...     | 0       | ...      | ...      | ...     | Continue for 8 bits|
| 1600     | 1    | 1       | 1       | X        | 0        | 7       | CS inactive        |
```

---

## 8. SPI Mode 3 Transmission (CPOL=1, CPHA=1)

**Scenario**: SPI transmission in Mode 3 with clock idle high and data sampled on rising edge.

```
| Time(ns) | pclk | spi_clk | spi_csn | spi_mosi | spi_miso | bit_cnt | Notes              |
| -------- | ---- | ------- | ------- | -------- | -------- | ------- | ------------------ |
| 0        | 1    | 1       | 1       | X        | 0        | 0       | Idle state (high)  |
| 100      | 1    | 1       | 0       | 1        | 0        | 0       | CS active, MSB=1   |
| 200      | 1    | 0       | 0       | 1        | 0        | 0       | Clock falling edge |
| 300      | 1    | 1       | 0       | 0        | 0        | 1       | Clock rising, sample|
| 400      | 1    | 0       | 0       | 0        | 0        | 1       | Next bit           |
| ...      | ...  | ...     | 0       | ...      | ...      | ...     | Continue for 8 bits|
| 1600     | 1    | 1       | 1       | X        | 0        | 7       | CS inactive        |
```

---

## 9. Status Register Reading

**Scenario**: Reading status register to monitor FIFO levels and busy status.

```
| Time(ns) | pclk | psel | penable | pwrite | paddr | prdata      | Notes              |
| -------- | ---- | ---- | ------- | ------ | ----- | ----------- | ------------------ |
| 0        | 1    | 1    | 0       | 0      | 0x04  | -           | Setup phase         |
| 10       | 1    | 1    | 1       | 0      | 0x04  | 0x0000090A | Access phase        |
| 20       | 1    | 0    | 0       | 0      | -     | -           | Status read         |
```

**Status Register Bit Mapping:**
- `prdata[0]`: TX FIFO full
- `prdata[1]`: RX FIFO empty  
- `prdata[2]`: SPI busy
- `prdata[15:8]`: TX FIFO level
- `prdata[23:16]`: RX FIFO level

---

## Notes

- All waveforms can be visualized in GTKWave, ModelSim, or open-source VCD viewers
- Use APB transaction log to correlate waveform timing with register access
- SPI clock frequency is determined by the baud rate divider in the BAUD register
- Chip select (CS) is active low and controlled by the SPI protocol engine
- Interrupts are level-sensitive and require software clearing via register writes

---

