# OpenLane Configuration for SPI Controller
# Optimized for SkyWater 130nm process

# Design Configuration
set ::env(DESIGN_NAME) "spi_controller"
set ::env(DESIGN_IS_CORE) 1
set ::env(FP_PDN_CORE_RING) 1
set ::env(FP_PDN_CORE_RING_VWIDTH) 3.1
set ::env(FP_PDN_CORE_RING_HWIDTH) 3.1
set ::env(FP_PDN_CORE_RING_VOFFSET) 12.45
set ::env(FP_PDN_CORE_RING_HOFFSET) 12.45
set ::env(FP_PDN_CORE_RING_VSPACING) 1.7
set ::env(FP_PDN_CORE_RING_HSPACING) 1.7

# Clock Configuration
set ::env(CLOCK_PERIOD) "10"
set ::env(CLOCK_PORT) "pclk_i"
set ::env(CLOCK_NET) "pclk_i"

# Floorplan Configuration
set ::env(FP_SIZING) "absolute"
set ::env(DIE_AREA) "0 0 1000 1000"
set ::env(PL_TARGET_DENSITY) 0.65
set ::env(FP_CORE_UTIL) 50
set ::env(FP_ASPECT_RATIO) 1
set ::env(FP_IO_MODE) 1
set ::env(FP_IO_VEXTEND) 4
set ::env(FP_IO_HEXTEND) 4
set ::env(FP_IO_VLENGTH) 2
set ::env(FP_IO_HLENGTH) 2

# Placement Configuration
set ::env(PL_BASIC_PLACEMENT) 0
set ::env(PL_SKIP_INITIAL_PLACEMENT) 0
set ::env(PL_RANDOM_GLB_PLACEMENT) 0
set ::env(PL_RANDOM_INITIAL_PLACEMENT) 0
set ::env(PL_ROUTABILITY_DRIVEN) 1
set ::env(PL_TIME_DRIVEN) 1
set ::env(PL_LIB) $::env(LIB_SYNTH_COMPLETE)

# CTS Configuration
set ::env(CTS_CLK_BUFFER_LIST) "sky130_fd_sc_hd__clkbuf_8 sky130_fd_sc_hd__clkbuf_4 sky130_fd_sc_hd__clkbuf_2"
set ::env(CTS_ROOT_BUFFER) sky130_fd_sc_hd__clkbuf_16
set ::env(CTS_MAX_CAP) 1.53169
set ::env(CTS_REPORT_TIMING) 1

# Routing Configuration
set ::env(ROUTING_STRATEGY) 2
set ::env(ROUTER_DESIGN_IS_GATE_CLK) 1
set ::env(ROUTER_CLOCK_DISTRIBUTION) 1
set ::env(ROUTER_RESIZING_OPTIMIZATION) 1
set ::env(ROUTER_TIMING_OPTIMIZATION) 1
set ::env(ROUTER_DETAILED_GRID) 1
set ::env(ROUTER_DETAILED_GRID_ONLY) 0

# Timing Configuration
set ::env(STA_REPORT_POWER) 1
set ::env(STA_WRITE_LIB) 1
set ::env(STA_USE_GP) 1
set ::env(STA_PRE_CTS) 0

# LVS Configuration
set ::env(LVS_CONNECT_BY_LABEL) 0
set ::env(LVS_INSERT_POWER_PINS) 1

# DRC Configuration
set ::env(QUIT_ON_DRC) 0
set ::env(QUIT_ON_LVS_ERROR) 0
set ::env(QUIT_ON_MAGIC_DRC) 0
set ::env(QUIT_ON_NEGATIVE_WNS) 0
set ::env(QUIT_ON_SLEW_VIOLATIONS) 0
set ::env(QUIT_ON_TIMING_VIOLATIONS) 0

# Power Configuration
set ::env(FP_PDN_MACRO_HOOKS) "spi_controller vccd1 vssd1 vccd1 vssd1"
set ::env(FP_PDN_ENABLE_RAILS) 1
set ::env(FP_PDN_AUTO_ADJUST) 1

# Synthesis Configuration
set ::env(SYNTH_STRATEGY) 2
set ::env(SYNTH_BUFFERING) 1
set ::env(SYNTH_SIZING) 1
set ::env(SYNTH_OPT) 0
set ::env(SYNTH_USE_PG_PINS_DEFINES) "USE_POWER_PINS"

# Magic Configuration
set ::env(MAGIC_DRC_USE_GDS) 1
set ::env(MAGIC_WRITE_FULL_LEF) 0
set ::env(MAGIC_LEF_WRITE_USE_GDS) 0

# Netgen Configuration
set ::env(NETGEN_SETUP_FILE) "none"
set ::env(NETGEN_LAYOUT_PREFIX) ""

# CVC Configuration
set ::env(CVC_SCRIPTS_DIR) "$::env(PDK_ROOT)/sky130A/libs.tech/openlane/cvc"

# Additional Configuration
set ::env(VERILOG_FILES) [glob $::env(DESIGN_DIR)/../../rtl/*.sv]
set ::env(VERILOG_FILES_BLACKBOX) [glob $::env(DESIGN_DIR)/../../rtl/*.sv]
set ::env(EXTRA_LEFS) [glob $::env(DESIGN_DIR)/../../lef/*.lef]
set ::env(EXTRA_GDS_FILES) [glob $::env(DESIGN_DIR)/../../gds/*.gds]
set ::env(EXTRA_LIBS) [glob $::env(DESIGN_DIR)/../../lib/*.lib]

# Save Configuration
set ::env(SAVE_DEF) 1
set ::env(SAVE_GDS) 1
set ::env(SAVE_NETLIST) 1
set ::env(SAVE_VERILOG) 1 