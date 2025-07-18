# SDC Timing Constraints for SPI Controller
# Generated for OpenLane flow

# Clock Definition
create_clock -name pclk -period 10.0 -waveform {0 5} [get_ports pclk_i]

# Clock Uncertainty
set_clock_uncertainty 0.1 [get_clocks pclk]

# Input Delays
set_input_delay -clock pclk -max 2.0 [get_ports presetn_i]
set_input_delay -clock pclk -max 2.0 [get_ports psel_i]
set_input_delay -clock pclk -max 2.0 [get_ports penable_i]
set_input_delay -clock pclk -max 2.0 [get_ports pwrite_i]
set_input_delay -clock pclk -max 2.0 [get_ports paddr_i]
set_input_delay -clock pclk -max 2.0 [get_ports pwdata_i]
set_input_delay -clock pclk -max 2.0 [get_ports spi_miso_i]

# Output Delays
set_output_delay -clock pclk -max 2.0 [get_ports prdata_o]
set_output_delay -clock pclk -max 2.0 [get_ports pready_o]
set_output_delay -clock pclk -max 2.0 [get_ports pslverr_o]
set_output_delay -clock pclk -max 2.0 [get_ports spi_clk_o]
set_output_delay -clock pclk -max 2.0 [get_ports spi_mosi_o]
set_output_delay -clock pclk -max 2.0 [get_ports spi_csn_o]
set_output_delay -clock pclk -max 2.0 [get_ports spi_irq_o]

# False Paths
set_false_path -from [get_ports presetn_i]
set_false_path -to [get_ports spi_irq_o]

# Multicycle Paths
set_multicycle_path -setup 2 -from [get_clocks pclk] -to [get_clocks pclk]
set_multicycle_path -hold 1 -from [get_clocks pclk] -to [get_clocks pclk]

# Load Capacitance
set_load 0.1 [all_outputs]

# Drive Strength
set_drive 1.0 [all_inputs]

# Operating Conditions
set_operating_conditions -library sky130_fd_sc_hd__tt_025C_1v80

# Wire Load Model
set_wire_load_model -name "sky130_fd_sc_hd__tt_025C_1v80"

# Area Constraints
set_max_area 0

# Power Constraints
set_max_dynamic_power 0
set_max_leakage_power 0 