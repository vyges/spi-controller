# Vivado Implementation TCL Script for SPI Controller

open_checkpoint spi_controller_synth.dcp
opt_design
place_design
route_design
write_checkpoint -force spi_controller_impl.dcp
report_timing_summary -file timing_impl.rpt
report_utilization -file utilization_impl.rpt
write_bitstream -force spi_controller.bit 