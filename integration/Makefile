#=============================================================================
# SPI Controller Integration Makefile
#=============================================================================
# Build system for integration examples and testbenches
# Supports simulation of complete system integration
#
# Author: Shivaram Mysore
# License: Apache-2.0
#=============================================================================

# Integration configuration
INTEGRATION_DIR := integration
RTL_DIR := ../rtl
TB_DIR := ../tb

# Source files
RTL_FILES := $(RTL_DIR)/spi_controller.sv \
             $(RTL_DIR)/spi_fifo.sv \
             $(RTL_DIR)/spi_protocol_engine.sv

INTEGRATION_FILES := $(INTEGRATION_DIR)/asic_wrapper.sv \
                    $(INTEGRATION_DIR)/fpga_wrapper.sv \
                    $(INTEGRATION_DIR)/example_soc.sv \
                    $(INTEGRATION_DIR)/spi_slave_model.sv \
                    $(INTEGRATION_DIR)/integration_testbench.sv

# Tool configuration
VERILATOR := verilator
ICARUS := iverilog
VCS := vcs

# Simulation options
SIM_OPTS := -g2012
VERILATOR_OPTS := --cc --exe --build --trace --coverage --assert

# Output directories
BUILD_DIR := build
WAVES_DIR := waves
COVERAGE_DIR := coverage

# Default target
.PHONY: all
all: help

# Help target
.PHONY: help
help:
	@echo "SPI Controller Integration Build System"
	@echo "======================================"
	@echo ""
	@echo "Integration Targets:"
	@echo "  sim-integration   - Run integration testbench"
	@echo "  sim-soc           - Run SoC example simulation"
	@echo "  sim-slave         - Run slave model test"
	@echo "  sim-all           - Run all integration tests"
	@echo ""
	@echo "Wrapper Targets:"
	@echo "  lint-asic         - Lint ASIC wrapper"
	@echo "  lint-fpga         - Lint FPGA wrapper"
	@echo "  lint-all          - Lint all wrappers"
	@echo ""
	@echo "Documentation:"
	@echo "  docs              - Generate integration docs"
	@echo ""
	@echo "Cleanup:"
	@echo "  clean             - Clean build artifacts"

# Create build directories
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(WAVES_DIR):
	mkdir -p $(WAVES_DIR)

$(COVERAGE_DIR):
	mkdir -p $(COVERAGE_DIR)

# Integration testbench simulation
.PHONY: sim-integration
sim-integration: $(BUILD_DIR)
	@echo "Running integration testbench..."
	$(VERILATOR) $(VERILATOR_OPTS) \
		-CFLAGS "-std=c++11" \
		$(RTL_FILES) \
		$(INTEGRATION_FILES) \
		-o $(BUILD_DIR)/integration_test
	$(BUILD_DIR)/obj_dir/Vintegration_testbench +trace

# SoC example simulation
.PHONY: sim-soc
sim-soc: $(BUILD_DIR)
	@echo "Running SoC example simulation..."
	$(VERILATOR) $(VERILATOR_OPTS) \
		-CFLAGS "-std=c++11" \
		$(RTL_FILES) \
		$(INTEGRATION_DIR)/example_soc.sv \
		$(INTEGRATION_DIR)/spi_slave_model.sv \
		-o $(BUILD_DIR)/soc_test
	$(BUILD_DIR)/obj_dir/Vexample_soc +trace

# Slave model test
.PHONY: sim-slave
sim-slave: $(BUILD_DIR)
	@echo "Running slave model test..."
	$(ICARUS) $(SIM_OPTS) -o $(BUILD_DIR)/slave_test \
		$(INTEGRATION_DIR)/spi_slave_model.sv \
		$(TB_DIR)/sv_tb/tb_spi_slave.sv
	vvp $(BUILD_DIR)/slave_test

# Run all integration tests
.PHONY: sim-all
sim-all: sim-integration sim-soc sim-slave

# Lint ASIC wrapper
.PHONY: lint-asic
lint-asic:
	@echo "Linting ASIC wrapper..."
	$(VERILATOR) --lint-only \
		$(RTL_FILES) \
		$(INTEGRATION_DIR)/asic_wrapper.sv

# Lint FPGA wrapper
.PHONY: lint-fpga
lint-fpga:
	@echo "Linting FPGA wrapper..."
	$(VERILATOR) --lint-only \
		$(RTL_FILES) \
		$(INTEGRATION_DIR)/fpga_wrapper.sv

# Lint all wrappers
.PHONY: lint-all
lint-all: lint-asic lint-fpga

# Documentation generation
.PHONY: docs
docs:
	@echo "Generating integration documentation..."
	@echo "Integration documentation available in $(INTEGRATION_DIR)/"

# Coverage collection
.PHONY: coverage
coverage: $(COVERAGE_DIR)
	@echo "Collecting integration coverage..."
	@echo "Coverage reports available in $(COVERAGE_DIR)/"

# Performance analysis
.PHONY: performance
performance: sim-integration
	@echo "Analyzing integration performance..."
	@echo "Performance reports available in $(BUILD_DIR)/"

# Clean targets
.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)
	rm -rf $(WAVES_DIR)
	rm -rf $(COVERAGE_DIR)
	rm -rf *.vcd
	rm -rf *.vvp
	rm -rf *.log

# Install integration dependencies
.PHONY: install-deps
install-deps:
	@echo "Installing integration dependencies..."
	@echo "Please ensure the following are available:"
	@echo "  - SPI Controller RTL files"
	@echo "  - Verilator with SystemVerilog support"
	@echo "  - Icarus Verilog"
	@echo "  - Waveform viewer (GTKWave recommended)"

# Check integration setup
.PHONY: check-setup
check-setup:
	@echo "Checking integration setup..."
	@test -f $(RTL_DIR)/spi_controller.sv || echo "ERROR: spi_controller.sv not found"
	@test -f $(INTEGRATION_DIR)/example_soc.sv || echo "ERROR: example_soc.sv not found"
	@test -f $(INTEGRATION_DIR)/spi_slave_model.sv || echo "ERROR: spi_slave_model.sv not found"
	@which $(VERILATOR) || echo "WARNING: Verilator not found"
	@which $(ICARUS) || echo "WARNING: Icarus Verilog not found" 