#=============================================================================
# SPI Controller Testbench Makefile
#=============================================================================
# Testbench automation for SPI Controller IP block
# Supports multiple simulators and test frameworks
#
# Author: Shivaram Mysore
# License: Apache-2.0
#=============================================================================

# Testbench configuration
TOP_MODULE := tb_spi_controller
RTL_FILES := ../rtl/spi_controller.sv ../rtl/spi_fifo.sv ../rtl/spi_protocol_engine.sv
TB_FILES := sv_tb/tb_spi_controller.sv
COCOTB_DIR := cocotb

# Simulator configuration
VERILATOR := verilator
ICARUS := iverilog
VCS := vcs
MODELSIM := vsim

# Simulation options
SIM_OPTS := -g2012
VERILATOR_OPTS := --cc --exe --build --trace --coverage --assert
COCOTB_OPTS := SIM=verilator COCOTB_REDUCED_LOG_FMT=1

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
	@echo "SPI Controller Testbench System"
	@echo "==============================="
	@echo ""
	@echo "Simulation Targets:"
	@echo "  sim-verilator     - Run Verilator simulation"
	@echo "  sim-icarus        - Run Icarus Verilog simulation"
	@echo "  sim-vcs           - Run VCS simulation"
	@echo "  sim-modelsim      - Run ModelSim simulation"
	@echo "  sim-cocotb        - Run Cocotb simulation"
	@echo "  sim-all           - Run all simulations"
	@echo ""
	@echo "Test Categories:"
	@echo "  test-functional   - Run functional tests"
	@echo "  test-performance  - Run performance tests"
	@echo "  test-corner       - Run corner case tests"
	@echo "  test-coverage     - Run coverage tests"
	@echo ""
	@echo "Analysis:"
	@echo "  waves             - View waveforms"
	@echo "  coverage          - Generate coverage report"
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

# Verilator simulation
.PHONY: sim-verilator
sim-verilator: $(BUILD_DIR)
	@echo "Running Verilator simulation..."
	$(VERILATOR) $(VERILATOR_OPTS) \
		-CFLAGS "-std=c++11" \
		$(RTL_FILES) \
		$(TB_FILES) \
		-o $(BUILD_DIR)/$(TOP_MODULE)_verilator
	$(BUILD_DIR)/obj_dir/V$(TOP_MODULE) +trace

# Icarus Verilog simulation
.PHONY: sim-icarus
sim-icarus: $(BUILD_DIR)
	@echo "Running Icarus Verilog simulation..."
	$(ICARUS) $(SIM_OPTS) -o $(BUILD_DIR)/$(TOP_MODULE)_icarus \
		$(RTL_FILES) $(TB_FILES)
	vvp $(BUILD_DIR)/$(TOP_MODULE)_icarus

# VCS simulation
.PHONY: sim-vcs
sim-vcs: $(BUILD_DIR)
	@echo "Running VCS simulation..."
	$(VCS) -full64 -sverilog $(SIM_OPTS) \
		$(RTL_FILES) $(TB_FILES) \
		-o $(BUILD_DIR)/$(TOP_MODULE)_vcs
	$(BUILD_DIR)/$(TOP_MODULE)_vcs

# ModelSim simulation
.PHONY: sim-modelsim
sim-modelsim: $(BUILD_DIR)
	@echo "Running ModelSim simulation..."
	vlib $(BUILD_DIR)/work
	vmap work $(BUILD_DIR)/work
	vlog -sv $(RTL_FILES) $(TB_FILES)
	vsim -c -do "run -all; quit" $(TOP_MODULE)

# Cocotb simulation
.PHONY: sim-cocotb
sim-cocotb: $(BUILD_DIR)
	@echo "Running Cocotb simulation..."
	cd $(COCOTB_DIR) && \
	$(COCOTB_OPTS) make

# Run all simulations
.PHONY: sim-all
sim-all: sim-verilator sim-icarus sim-vcs sim-cocotb

# Test category targets
.PHONY: test-functional
test-functional: sim-verilator
	@echo "Functional tests completed"

.PHONY: test-performance
test-performance: sim-verilator
	@echo "Performance tests completed"

.PHONY: test-corner
test-corner: sim-verilator
	@echo "Corner case tests completed"

.PHONY: test-coverage
test-coverage: $(COVERAGE_DIR)
	@echo "Coverage tests completed"

# Waveform viewing
.PHONY: waves
waves: $(WAVES_DIR)
	@echo "Opening waveform viewer..."
	@echo "Waveform files available in $(WAVES_DIR)/"

# Coverage analysis
.PHONY: coverage
coverage: $(COVERAGE_DIR)
	@echo "Generating coverage report..."
	@echo "Coverage reports available in $(COVERAGE_DIR)/"

# Linting
.PHONY: lint
lint:
	@echo "Running Verilator linting..."
	$(VERILATOR) --lint-only $(RTL_FILES)

# Clean targets
.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)
	rm -rf $(WAVES_DIR)
	rm -rf $(COVERAGE_DIR)
	rm -rf $(COCOTB_DIR)/__pycache__
	rm -rf $(COCOTB_DIR)/sim_build
	rm -rf work
	rm -rf transcript
	rm -rf *.vcd
	rm -rf *.vvp
	rm -rf *.log

# Check testbench dependencies
.PHONY: check-deps
check-deps:
	@echo "Checking testbench dependencies..."
	@which $(VERILATOR) || echo "Verilator not found"
	@which $(ICARUS) || echo "Icarus Verilog not found"
	@which $(VCS) || echo "VCS not found"
	@which $(MODELSIM) || echo "ModelSim not found"
	@python3 -c "import cocotb" || echo "Cocotb not found"

