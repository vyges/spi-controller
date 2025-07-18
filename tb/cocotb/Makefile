#==============================================================================
# SPI Controller Cocotb Makefile
#==============================================================================
# Description: Makefile for running cocotb testbench with various simulators
# Author:      Vyges Team
# Date:        2025-07-17
# Version:     1.0.0
#==============================================================================

# Defaults
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

# Top level module (can be overridden)
TOPLEVEL ?= spi_controller

# Python test file (can be overridden)
MODULE ?= test_spi_controller

# RTL directory
RTL_DIR = $(PWD)/../../rtl

# Include cocotb's make rules to take care of the simulator setup
include $(shell cocotb-config --makefiles)/Makefile.sim

# Additional simulator-specific settings
ifeq ($(SIM),icarus)
    # Icarus Verilog settings - compile all SPI controller files
    VERILOG_SOURCES = $(RTL_DIR)/spi_controller.sv $(RTL_DIR)/spi_fifo.sv $(RTL_DIR)/spi_protocol_engine.sv
else ifeq ($(SIM),verilator)
    # Verilator settings - specify all files to compile
    VERILOG_SOURCES = $(RTL_DIR)/spi_controller.sv $(RTL_DIR)/spi_fifo.sv $(RTL_DIR)/spi_protocol_engine.sv
    EXTRA_ARGS += --trace --trace-structs
else ifeq ($(SIM),vcs)
    # VCS settings
    VERILOG_SOURCES = $(RTL_DIR)/spi_controller.sv $(RTL_DIR)/spi_fifo.sv $(RTL_DIR)/spi_protocol_engine.sv
    EXTRA_ARGS += -full64
endif

# Test targets for different modules
.PHONY: test_spi_controller test_spi_fifo test_spi_protocol_engine test_all_modules clean

# Test main SPI controller
test_spi_controller:
	$(MAKE) clean
	$(MAKE) SIM=$(SIM) MODULE=test_spi_controller TOPLEVEL=spi_controller

# Test SPI FIFO module
test_spi_fifo:
	$(MAKE) clean
	$(MAKE) SIM=$(SIM) MODULE=test_spi_fifo TOPLEVEL=spi_fifo

# Test SPI protocol engine module
test_spi_protocol_engine:
	$(MAKE) clean
	$(MAKE) SIM=$(SIM) MODULE=test_spi_protocol_engine TOPLEVEL=spi_protocol_engine

# Test all modules
test_all_modules: test_spi_controller test_spi_fifo test_spi_protocol_engine

# Test with enhanced testbench
test_enhanced:
	$(MAKE) clean
	$(MAKE) SIM=$(SIM) MODULE=test_all_modules TOPLEVEL=spi_controller

# Legacy targets for backward compatibility
test_basic: test_spi_controller
test_random: test_spi_controller
test_all: test_all_modules

# Coverage target (Verilator only)
coverage:
ifeq ($(SIM),verilator)
	$(MAKE) clean
	$(MAKE) SIM=$(SIM) MODULE=test_spi_controller TOPLEVEL=spi_controller EXTRA_ARGS="--coverage"
else
	@echo "Coverage analysis only supported with Verilator simulator"
	@exit 1
endif

# Clean target
clean::
	rm -rf __pycache__
	rm -rf results.xml
	rm -rf dump.vcd
	rm -rf spi_controller.vcd
	rm -rf spi_fifo.vcd
	rm -rf spi_protocol_engine.vcd
	rm -rf sim_build
	rm -rf *.log
	rm -rf *.vcd
	rm -rf *.fst
	rm -rf *.ghw

# Help target
help:
	@echo "SPI Controller Cocotb Testbench"
	@echo "==============================="
	@echo ""
	@echo "Available targets:"
	@echo "  test_spi_controller      - Test main SPI controller"
	@echo "  test_spi_fifo            - Test SPI FIFO module"
	@echo "  test_spi_protocol_engine - Test SPI protocol engine module"
	@echo "  test_all_modules         - Test all SPI controller modules"
	@echo "  test_enhanced            - Test with enhanced testbench"
	@echo "  coverage                 - Run coverage analysis (Verilator only)"
	@echo "  clean                    - Clean build artifacts"
	@echo "  help                     - Show this help message"
	@echo ""
	@echo "Available simulators (set SIM=<simulator>):"
	@echo "  icarus        - Icarus Verilog (default)"
	@echo "  verilator     - Verilator"
	@echo "  vcs           - VCS (if available)"
	@echo ""
	@echo "Example usage:"
	@echo "  make test_spi_controller SIM=icarus"
	@echo "  make test_spi_fifo SIM=verilator"
	@echo "  make test_all_modules SIM=verilator"
	@echo "  make coverage SIM=verilator"
	@echo "  make test_enhanced SIM=icarus" 