# Vivado Project TCL Script for SPI Controller

create_project spi_controller ./spi_controller -part xc7a35tcsg324-1
add_files ../../rtl/spi_controller.sv ../../rtl/spi_fifo.sv ../../rtl/spi_protocol_engine.sv
set_property top spi_controller [current_fileset]
add_files -fileset constrs_1 ./constraints.xdc
update_compile_order -fileset sources_1
launch_runs synth_1
wait_on_run synth_1
launch_runs impl_1
wait_on_run impl_1
write_bitstream -force spi_controller.bit 