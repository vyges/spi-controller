# OpenLane Makefile for SPI Controller
# Targets for complete ASIC flow

# Configuration
DESIGN_NAME = spi_controller
OPENLANE_ROOT = $(shell pwd)/../../..
FLOW_PATH = $(OPENLANE_ROOT)/flow
DESIGN_PATH = $(shell pwd)/$(DESIGN_NAME)

# OpenLane commands
OPENLANE_CMD = $(FLOW_PATH)/scripts/openlane
OPENLANE_SCRIPT = $(FLOW_PATH)/scripts/openlane

# Default target
all: gds

# Synthesis
synth:
	@echo "Running synthesis for $(DESIGN_NAME)..."
	$(OPENLANE_CMD) -interactive -file $(DESIGN_PATH)/config.tcl -tag $(DESIGN_NAME)_synth
	@echo "Synthesis complete"

# Floorplan
floorplan:
	@echo "Running floorplan for $(DESIGN_NAME)..."
	$(OPENLANE_CMD) -interactive -file $(DESIGN_PATH)/config.tcl -tag $(DESIGN_NAME)_floorplan
	@echo "Floorplan complete"

# Placement
place:
	@echo "Running placement for $(DESIGN_NAME)..."
	$(OPENLANE_CMD) -interactive -file $(DESIGN_PATH)/config.tcl -tag $(DESIGN_NAME)_place
	@echo "Placement complete"

# Clock Tree Synthesis
cts:
	@echo "Running CTS for $(DESIGN_NAME)..."
	$(OPENLANE_CMD) -interactive -file $(DESIGN_PATH)/config.tcl -tag $(DESIGN_NAME)_cts
	@echo "CTS complete"

# Routing
route:
	@echo "Running routing for $(DESIGN_NAME)..."
	$(OPENLANE_CMD) -interactive -file $(DESIGN_PATH)/config.tcl -tag $(DESIGN_NAME)_route
	@echo "Routing complete"

# Timing Analysis
timing:
	@echo "Running timing analysis for $(DESIGN_NAME)..."
	$(OPENLANE_CMD) -interactive -file $(DESIGN_PATH)/config.tcl -tag $(DESIGN_NAME)_timing
	@echo "Timing analysis complete"

# DRC Check
drc:
	@echo "Running DRC check for $(DESIGN_NAME)..."
	$(OPENLANE_CMD) -interactive -file $(DESIGN_PATH)/config.tcl -tag $(DESIGN_NAME)_drc
	@echo "DRC check complete"

# LVS Check
lvs:
	@echo "Running LVS check for $(DESIGN_NAME)..."
	$(OPENLANE_CMD) -interactive -file $(DESIGN_PATH)/config.tcl -tag $(DESIGN_NAME)_lvs
	@echo "LVS check complete"

# Power Analysis
power:
	@echo "Running power analysis for $(DESIGN_NAME)..."
	$(OPENLANE_CMD) -interactive -file $(DESIGN_PATH)/config.tcl -tag $(DESIGN_NAME)_power
	@echo "Power analysis complete"

# Complete flow (synthesis to GDS)
flow: synth floorplan place cts route timing drc lvs power
	@echo "Complete OpenLane flow finished"

# GDS generation
gds: flow
	@echo "Generating GDS for $(DESIGN_NAME)..."
	$(OPENLANE_CMD) -interactive -file $(DESIGN_PATH)/config.tcl -tag $(DESIGN_NAME)_gds
	@echo "GDS generation complete"

# Clean
clean:
	@echo "Cleaning OpenLane runs..."
	rm -rf runs/
	rm -rf logs/
	rm -rf reports/
	@echo "Clean complete"

# Help
help:
	@echo "Available targets:"
	@echo "  synth     - Run synthesis"
	@echo "  floorplan - Run floorplanning"
	@echo "  place     - Run placement"
	@echo "  cts       - Run clock tree synthesis"
	@echo "  route     - Run routing"
	@echo "  timing    - Run timing analysis"
	@echo "  drc       - Run DRC check"
	@echo "  lvs       - Run LVS check"
	@echo "  power     - Run power analysis"
	@echo "  flow      - Run complete flow (synthesis to verification)"
	@echo "  gds       - Generate GDS (includes complete flow)"
	@echo "  clean     - Clean all generated files"
	@echo "  help      - Show this help message"

.PHONY: all synth floorplan place cts route timing drc lvs power flow gds clean help
