#==============================================================================
# SPI Controller SystemVerilog Testbench Makefile
#==============================================================================
# Description: SystemVerilog testbench automation for SPI Controller IP block
#              Supports multiple simulators (Icarus, Verilator)
# Author:      Vyges Team
# Date:        2025-07-17
# Version:     1.0.0
#==============================================================================

# Testbench configuration
TOP_MODULE := tb_spi_controller
RTL_FILES := ../rtl/spi_controller.sv ../rtl/spi_fifo.sv ../rtl/spi_protocol_engine.sv
TB_FILES := sv_tb/tb_spi_controller.sv

# Simulator configuration
VERILATOR := verilator
ICARUS := iverilog
VVP := vvp

# Simulation options
SIM_OPTS := -g2012
VERILATOR_OPTS := --cc --exe --build --trace --coverage --assert --Wall --Wno-fatal --Wno-EOFNEWLINE --Wno-DECLFILENAME --Wno-UNUSEDSIGNAL --Wno-TIMESCALEMOD --Wno-PKGNODECL --Wno-NEEDTIMINGOPT
ICARUS_OPTS := -g2012 -Wall

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
	@echo "SPI Controller SystemVerilog Testbench"
	@echo "======================================"
	@echo ""
	@echo "Available simulators (set SIM=<simulator>):"
	@echo "  icarus    - Icarus Verilog (default)"
	@echo "  verilator - Verilator"
	@echo ""
	@echo "Test targets:"
	@echo "  test_basic   - Run basic functionality test"
	@echo "  test_random  - Run random stimulus test"
	@echo "  test_all     - Run all tests"
	@echo "  coverage     - Run coverage analysis (Verilator only)"
	@echo ""
	@echo "Utility targets:"
	@echo "  compile      - Compile testbench"
	@echo "  run          - Run simulation"
	@echo "  waves        - View waveforms"
	@echo "  clean        - Clean build artifacts"
	@echo "  help         - Show this help message"
	@echo ""
	@echo "Usage examples:"
	@echo "  make test_basic SIM=icarus"
	@echo "  make test_all SIM=verilator"
	@echo "  make coverage SIM=verilator"

# Validation target
.PHONY: validate_simulator
validate_simulator:
	@if [ "$(filter $(SIM),icarus verilator)" = "" ]; then \
		echo "Error: Invalid simulator '$(SIM)'. Valid simulators: icarus verilator"; \
		exit 1; \
	fi

# Create build directories
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(WAVES_DIR):
	mkdir -p $(WAVES_DIR)

$(COVERAGE_DIR):
	mkdir -p $(COVERAGE_DIR)

# Compile target
.PHONY: compile
compile: validate_simulator $(BUILD_DIR)
	@echo "Compiling testbench with $(SIM) simulator..."
	@case "$(SIM)" in \
		icarus) \
			$(ICARUS) $(ICARUS_OPTS) -o $(BUILD_DIR)/$(TOP_MODULE)_icarus \
				$(RTL_FILES) $(TB_FILES) || exit 1; \
			;; \
		verilator) \
			$(VERILATOR) $(VERILATOR_OPTS) \
				-CFLAGS "-std=c++11" \
				$(RTL_FILES) $(TB_FILES) \
				-o $(BUILD_DIR)/$(TOP_MODULE)_verilator || exit 1; \
			;; \
	esac
	@echo "Compilation completed successfully!"

# Run target
.PHONY: run
run: validate_simulator compile
	@echo "Running simulation with $(SIM) simulator..."
	@case "$(SIM)" in \
		icarus) \
			$(VVP) $(BUILD_DIR)/$(TOP_MODULE)_icarus || exit 1; \
			;; \
		verilator) \
			$(BUILD_DIR)/obj_dir/V$(TOP_MODULE) +trace || exit 1; \
			;; \
	esac
	@echo "Simulation completed successfully!"

# Test targets
.PHONY: test_basic
test_basic: validate_simulator $(BUILD_DIR)
	@echo "Running basic functionality test with $(SIM) simulator..."
	@case "$(SIM)" in \
		icarus) \
			$(ICARUS) $(ICARUS_OPTS) -o $(BUILD_DIR)/$(TOP_MODULE)_icarus \
				$(RTL_FILES) $(TB_FILES) || exit 1; \
			$(VVP) $(BUILD_DIR)/$(TOP_MODULE)_icarus || exit 1; \
			;; \
		verilator) \
			$(VERILATOR) $(VERILATOR_OPTS) \
				-CFLAGS "-std=c++11" \
				$(RTL_FILES) $(TB_FILES) \
				-o $(BUILD_DIR)/$(TOP_MODULE)_verilator || exit 1; \
			$(BUILD_DIR)/obj_dir/V$(TOP_MODULE) +trace || exit 1; \
			;; \
	esac
	@echo "Basic test completed successfully!"

.PHONY: test_random
test_random: validate_simulator $(BUILD_DIR)
	@echo "Running random stimulus test with $(SIM) simulator..."
	@case "$(SIM)" in \
		icarus) \
			$(ICARUS) $(ICARUS_OPTS) -o $(BUILD_DIR)/$(TOP_MODULE)_icarus \
				$(RTL_FILES) $(TB_FILES) || exit 1; \
			$(VVP) $(BUILD_DIR)/$(TOP_MODULE)_icarus +random_test=1 || exit 1; \
			;; \
		verilator) \
			$(VERILATOR) $(VERILATOR_OPTS) \
				-CFLAGS "-std=c++11" \
				$(RTL_FILES) $(TB_FILES) \
				-o $(BUILD_DIR)/$(TOP_MODULE)_verilator || exit 1; \
			$(BUILD_DIR)/obj_dir/V$(TOP_MODULE) +trace +random_test=1 || exit 1; \
			;; \
	esac
	@echo "Random test completed successfully!"

.PHONY: test_all
test_all: validate_simulator
	@echo "Running all tests with $(SIM) simulator..."
	$(MAKE) test_basic SIM=$(SIM)
	$(MAKE) test_random SIM=$(SIM)
	@echo "All tests completed successfully!"

# Coverage target
.PHONY: coverage
coverage: validate_simulator $(COVERAGE_DIR)
	@if [ "$(SIM)" != "verilator" ]; then \
		echo "Error: Coverage only supported with Verilator simulator"; \
		exit 1; \
	fi
	@echo "Running coverage analysis with Verilator..."
	$(VERILATOR) $(VERILATOR_OPTS) --coverage \
		-CFLAGS "-std=c++11" \
		$(RTL_FILES) $(TB_FILES) \
		-o $(BUILD_DIR)/$(TOP_MODULE)_verilator || exit 1
	$(BUILD_DIR)/obj_dir/V$(TOP_MODULE) +trace || exit 1
	@echo "Coverage analysis completed successfully!"

# Waveform viewing
.PHONY: waves
waves: validate_simulator $(WAVES_DIR)
	@echo "Opening waveform viewer..."
	@if [ -f "$(BUILD_DIR)/$(TOP_MODULE).vcd" ]; then \
		gtkwave $(BUILD_DIR)/$(TOP_MODULE).vcd || echo "GTKWave not available"; \
	elif [ -f "$(BUILD_DIR)/obj_dir/$(TOP_MODULE).vcd" ]; then \
		gtkwave $(BUILD_DIR)/obj_dir/$(TOP_MODULE).vcd || echo "GTKWave not available"; \
	else \
		echo "No waveform file found. Run simulation first."; \
	fi

# Linting
.PHONY: lint
lint:
	@echo "Running Verilator linting..."
	$(VERILATOR) --lint-only --Wall --Wno-fatal --Wno-EOFNEWLINE --Wno-DECLFILENAME --Wno-UNUSEDSIGNAL --Wno-TIMESCALEMOD --Wno-PKGNODECL --Wno-NEEDTIMINGOPT $(RTL_FILES) $(TB_FILES)

# Clean target
.PHONY: clean
clean:
	@echo "Cleaning build artifacts..."
	rm -rf $(BUILD_DIR)
	rm -rf $(WAVES_DIR)
	rm -rf $(COVERAGE_DIR)
	rm -rf work
	rm -rf transcript
	rm -rf *.vcd
	rm -rf *.vvp
	rm -rf *.log
	@echo "Clean completed successfully!"

# Check dependencies
.PHONY: check-deps
check-deps:
	@echo "Checking testbench dependencies..."
	@which $(VERILATOR) || echo "Verilator not found"
	@which $(ICARUS) || echo "Icarus Verilog not found"
	@which $(VVP) || echo "VVP not found"
	@which gtkwave || echo "GTKWave not found (optional)"

.PHONY: help compile run test_basic test_random test_all coverage waves lint clean check-deps

