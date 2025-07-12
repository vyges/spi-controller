# Vivado XDC Constraints for SPI Controller

# Clock constraints
create_clock -name pclk -period 10.0 [get_ports pclk_i]

# Input/output delays
set_input_delay 2.0 -clock pclk [get_ports *]
set_output_delay 2.0 -clock pclk [get_ports *]

# Pin assignments (example, update for your board)
# set_property PACKAGE_PIN <pin> [get_ports spi_clk_o]
# set_property PACKAGE_PIN <pin> [get_ports spi_mosi_o]
# set_property PACKAGE_PIN <pin> [get_ports spi_miso_i]
# set_property PACKAGE_PIN <pin> [get_ports spi_csn_o]
# set_property PACKAGE_PIN <pin> [get_ports spi_irq_o] 