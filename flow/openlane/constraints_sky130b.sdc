# SDC Constraints for SPI Controller (Sky130B)

create_clock -name pclk -period 10.0 [get_ports pclk_i]
set_input_delay 2.0 -clock pclk [all_inputs]
set_output_delay 2.0 -clock pclk [all_outputs]
set_clock_uncertainty 0.2 [get_clocks pclk]
set_clock_latency 0.5 [get_clocks pclk]
set_false_path -from [get_ports presetn_i] 