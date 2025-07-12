# SPI Controller Integration Guide

## Overview
This guide describes how to integrate the SPI Controller IP block into ASIC or FPGA designs.

## Integration Steps
1. **Add RTL Files**: Include `spi_controller.sv`, `spi_fifo.sv`, and `spi_protocol_engine.sv` in your project.
2. **Instantiate Module**: Connect all required ports (see below).
3. **Connect APB Interface**: Wire up APB signals to your SoC bus fabric.
4. **Connect SPI Interface**: Connect SPI signals to external devices or board pins.
5. **Interrupts**: Connect `spi_irq_o` to your interrupt controller if needed.
6. **Configure Parameters**: Set FIFO depth, data width, and baud divider as required.

## Example Instantiation
```systemverilog
spi_controller u_spi_ctrl (
    .pclk_i      (pclk),
    .presetn_i   (presetn),
    .psel_i      (psel),
    .penable_i   (penable),
    .pwrite_i    (pwrite),
    .paddr_i     (paddr),
    .pwdata_i    (pwdata),
    .prdata_o    (prdata),
    .pready_o    (pready),
    .pslverr_o   (pslverr),
    .spi_clk_o   (spi_clk),
    .spi_mosi_o  (spi_mosi),
    .spi_miso_i  (spi_miso),
    .spi_csn_o   (spi_csn),
    .spi_irq_o   (spi_irq)
);
```

## Clock and Reset
- **pclk_i**: Connect to system APB clock (e.g., 100 MHz).
- **presetn_i**: Connect to system reset (active low).

## APB Bus Wiring
- Connect all APB signals to your SoC's APB bus fabric.
- Ensure address decoding matches the register map.

## SPI Wiring
- Connect `spi_clk_o`, `spi_mosi_o`, `spi_csn_o` to board pins or other IP.
- Connect `spi_miso_i` to the SPI slave device.

## Interrupts
- Connect `spi_irq_o` to your interrupt controller or processor.
- Enable/disable interrupts via the INT register.

## FPGA Integration Notes
- Use provided constraints for pin mapping and timing.
- Simulate with Vivado/Quartus or Cocotb testbenches.

## ASIC Integration Notes
- Use OpenLane or commercial flows for synthesis and P&R.
- Provide SDC constraints for timing.

## Support
For further help, contact the Vyges team or refer to the design specification. 