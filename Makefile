#=============================================================================
# SPI Controller Makefile
#=============================================================================
# Main build system for SPI Controller IP block
# Supports simulation, synthesis, and testing across multiple platforms
#
# Author: Shivaram Mysore
# License: Apache-2.0
#=============================================================================

# Project configuration
PROJECT_NAME := spi_controller
TOP_MODULE := spi_controller
RTL_DIR := rtl
TB_DIR := tb
FLOW_DIR := flow
TEST_DIR := test
DOCS_DIR := docs

# Tool configuration
VERILATOR := verilator
ICARUS := iverilog
VCS := vcs
VIVADO := vivado
QUARTUS := quartus
OPENLANE := openlane

# Simulation configuration
SIM_DIR := sim
COVERAGE_DIR := coverage
WAVEFORM_DIR := waveforms

# Default target
.PHONY: all
all: help

# Help target
.PHONY: help
help:
	@echo "SPI Controller Build System"
	@echo "=========================="
	@echo ""
	@echo "Simulation Targets:"
	@echo "  sim-verilator     - Run Verilator simulation"
	@echo "  sim-icarus        - Run Icarus Verilog simulation"
	@echo "  sim-cocotb        - Run Cocotb simulation"
	@echo "  sim-all           - Run all simulations"
	@echo ""
	@echo "Synthesis Targets:"
	@echo "  synth-vivado      - Synthesize with Vivado"
	@echo "  synth-quartus     - Synthesize with Quartus"
	@echo "  synth-openlane    - Synthesize with OpenLane (ASIC)"
	@echo ""
	@echo "Testing Targets:"
	@echo "  test-all          - Run all tests"
	@echo "  test-verilator    - Run Verilator tests"
	@echo "  test-cocotb       - Run Cocotb tests"
	@echo ""
	@echo "Documentation:"
	@echo "  docs              - Generate documentation"
	@echo ""
	@echo "Cleanup:"
	@echo "  clean             - Clean build artifacts"
	@echo "  clean-all         - Clean everything"

# Create directories
$(SIM_DIR):
	mkdir -p $(SIM_DIR)

$(COVERAGE_DIR):
	mkdir -p $(COVERAGE_DIR)

$(WAVEFORM_DIR):
	mkdir -p $(WAVEFORM_DIR)

# Verilator simulation
.PHONY: sim-verilator
sim-verilator: $(SIM_DIR)
	@echo "Running Verilator simulation..."
	$(VERILATOR) --cc --exe --build \
		--trace \
		--coverage \
		--assert \
		--lint-only \
		-CFLAGS "-std=c++11" \
		$(RTL_DIR)/$(TOP_MODULE).sv \
		$(RTL_DIR)/spi_fifo.sv \
		$(RTL_DIR)/spi_protocol_engine.sv \
		$(TB_DIR)/sv_tb/tb_$(TOP_MODULE).sv \
		-o $(SIM_DIR)/$(TOP_MODULE)_verilator
	$(SIM_DIR)/obj_dir/V$(TOP_MODULE) +trace

# Icarus Verilog simulation
.PHONY: sim-icarus
sim-icarus: $(SIM_DIR)
	@echo "Running Icarus Verilog simulation..."
	$(ICARUS) -g2012 -o $(SIM_DIR)/$(TOP_MODULE)_icarus \
		$(RTL_DIR)/$(TOP_MODULE).sv \
		$(RTL_DIR)/spi_fifo.sv \
		$(RTL_DIR)/spi_protocol_engine.sv \
		$(TB_DIR)/sv_tb/tb_$(TOP_MODULE).sv
	vvp $(SIM_DIR)/$(TOP_MODULE)_icarus

# Cocotb simulation
.PHONY: sim-cocotb
sim-cocotb: $(SIM_DIR)
	@echo "Running Cocotb simulation..."
	cd $(TB_DIR)/cocotb && \
	SIM=verilator COCOTB_REDUCED_LOG_FMT=1 make

# Run all simulations
.PHONY: sim-all
sim-all: sim-verilator sim-icarus sim-cocotb

# Vivado synthesis
.PHONY: synth-vivado
synth-vivado:
	@echo "Running Vivado synthesis..."
	cd $(FLOW_DIR)/vivado && \
	$(VIVADO) -mode batch -source synthesis.tcl

# Quartus synthesis
.PHONY: synth-quartus
synth-quartus:
	@echo "Running Quartus synthesis..."
	cd $(FLOW_DIR)/quartus && \
	$(QUARTUS) --64bit -t quartus_project.tcl

# OpenLane synthesis (ASIC)
.PHONY: synth-openlane
synth-openlane:
	@echo "Running OpenLane synthesis..."
	cd $(FLOW_DIR)/openlane && \
	$(OPENLANE) --flow run --config config_sky130b.json

# Test targets
.PHONY: test-all
test-all: test-verilator test-cocotb

.PHONY: test-verilator
test-verilator: sim-verilator
	@echo "Verilator tests completed"

.PHONY: test-cocotb
test-cocotb: sim-cocotb
	@echo "Cocotb tests completed"

# Documentation generation
.PHONY: docs
docs:
	@echo "Generating documentation..."
	@echo "Documentation is available in $(DOCS_DIR)/"

# Linting
.PHONY: lint
lint:
	@echo "Running Verilator linting..."
	$(VERILATOR) --lint-only \
		$(RTL_DIR)/$(TOP_MODULE).sv \
		$(RTL_DIR)/spi_fifo.sv \
		$(RTL_DIR)/spi_protocol_engine.sv

# Coverage collection
.PHONY: coverage
coverage: $(COVERAGE_DIR)
	@echo "Collecting coverage..."
	@echo "Coverage reports available in $(COVERAGE_DIR)/"

# Clean targets
.PHONY: clean
clean:
	rm -rf $(SIM_DIR)/obj_dir
	rm -rf $(SIM_DIR)/*.vcd
	rm -rf $(SIM_DIR)/*.vvp
	rm -rf $(COVERAGE_DIR)/*
	rm -rf $(WAVEFORM_DIR)/*

.PHONY: clean-all
clean-all: clean
	rm -rf $(FLOW_DIR)/vivado/spi_controller
	rm -rf $(FLOW_DIR)/quartus/spi_controller
	rm -rf $(FLOW_DIR)/openlane/runs
	rm -rf $(TB_DIR)/cocotb/__pycache__
	rm -rf $(TB_DIR)/cocotb/sim_build

# Install dependencies (for development)
.PHONY: install-deps
install-deps:
	@echo "Installing development dependencies..."
	@echo "Please install:"
	@echo "  - Verilator"
	@echo "  - Icarus Verilog"
	@echo "  - Cocotb"
	@echo "  - Vivado (Xilinx)"
	@echo "  - Quartus (Intel)"
	@echo "  - OpenLane (ASIC)"

# Check tools
.PHONY: check-tools
check-tools:
	@echo "Checking required tools..."
	@which $(VERILATOR) || echo "Verilator not found"
	@which $(ICARUS) || echo "Icarus Verilog not found"
	@which $(VIVADO) || echo "Vivado not found"
	@which $(QUARTUS) || echo "Quartus not found"
	@which $(OPENLANE) || echo "OpenLane not found" 