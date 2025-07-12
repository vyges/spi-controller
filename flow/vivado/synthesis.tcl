# Vivado Synthesis TCL Script for SPI Controller

read_verilog ../../rtl/spi_controller.sv
read_verilog ../../rtl/spi_fifo.sv
read_verilog ../../rtl/spi_protocol_engine.sv
synth_design -top spi_controller -part xc7a35tcsg324-1
write_checkpoint -force spi_controller_synth.dcp
report_timing_summary -file timing_synth.rpt
report_utilization -file utilization_synth.rpt 