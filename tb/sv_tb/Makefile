#==============================================================================
# SPI Controller SystemVerilog Testbench Makefile
#==============================================================================
# Description: Makefile for running SystemVerilog testbench with various
#              simulators including Icarus Verilog and Verilator.
# Author:      Vyges Team
# Date:        2025-07-17
# Version:     1.0.0
#==============================================================================

# Defaults
SIM ?= icarus
TOPLEVEL = tb_spi_controller

# OS detection for Verilator paths
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
    # macOS with Homebrew
    VERILATOR_INCLUDE = /opt/homebrew/Cellar/verilator/5.038/share/verilator/include
    VERILATOR_VLTSTD = /opt/homebrew/Cellar/verilator/5.038/share/verilator/include/vltstd
else
    # Linux (Ubuntu/Debian)
    VERILATOR_INCLUDE = /usr/share/verilator/include
    VERILATOR_VLTSTD = /usr/share/verilator/include/vltstd
endif

# Source files
RTL_SOURCES = ../../rtl/spi_controller.sv ../../rtl/spi_fifo.sv ../../rtl/spi_protocol_engine.sv
TB_SOURCES = tb_spi_controller.sv

# Simulator-specific settings
ifeq ($(SIM),icarus)
    # Icarus Verilog settings
    VLOG = iverilog
    VVP = vvp
    VLOG_FLAGS = -g2012 -I ../../rtl
    SIM_EXEC = simv.out
    COMPILE = $(VLOG) $(VLOG_FLAGS) -o $(SIM_EXEC) $(RTL_SOURCES) $(TB_SOURCES)
    RUN = $(VVP) $(SIM_EXEC)
else ifeq ($(SIM),verilator)
    # Verilator settings
    VLOG = verilator
    VLOG_FLAGS = --cc --build --trace --top-module $(TOPLEVEL) --timing --Wno-fatal --Wno-TIMESCALEMOD --Wno-WIDTHEXPAND --Wno-WIDTHTRUNC --Wno-CASEINCOMPLETE
    VLOG_FLAGS += -I../../rtl
    SIM_EXEC = verilator_sim
    COMPILE = $(VLOG) $(VLOG_FLAGS) $(RTL_SOURCES) $(TB_SOURCES) && \
              c++ -I. -Iobj_dir -I$(VERILATOR_INCLUDE) \
              -I$(VERILATOR_VLTSTD) \
              -std=gnu++20 verilator_wrapper.cpp obj_dir/libVtb_spi_controller.a \
              obj_dir/libverilated.a -o $(SIM_EXEC)
    RUN = ./$(SIM_EXEC)
else ifeq ($(SIM),vcs)
    # VCS settings
    VLOG = vcs
    VLOG_FLAGS = -full64 -sverilog -I ../../rtl
    SIM_EXEC = simv
    COMPILE = $(VLOG) $(VLOG_FLAGS) $(RTL_SOURCES) $(TB_SOURCES) -o $(SIM_EXEC)
    RUN = ./$(SIM_EXEC)
endif

# Default target
all: compile run

# Compile target
compile:
	@echo "Compiling SystemVerilog testbench with $(SIM)..."
	$(COMPILE)
	@echo "Compilation complete"

# Run target
run: compile
	@echo "Running SystemVerilog testbench..."
	$(RUN)
	@echo "Simulation complete"

# Test targets
test_basic: run
	@echo "Basic functionality test completed"

test_random: run
	@echo "Random input test completed"

test_spi_modes: run
	@echo "SPI modes test completed"

test_fifo: run
	@echo "FIFO overflow/underflow test completed"

test_interrupts: run
	@echo "Interrupt generation test completed"

test_performance: run
	@echo "Performance test completed"

test_coverage: run
	@echo "Coverage test completed"

test_all: test_basic test_random test_spi_modes test_fifo test_interrupts test_performance test_coverage
	@echo "All tests completed"

# Individual module tests
test_spi_controller:
	@echo "Testing SPI Controller Module..."
	$(VLOG) $(VLOG_FLAGS) -o simv_controller.out ../../rtl/spi_controller.sv tb_spi_controller.sv
	$(VVP) simv_controller.out
	@echo "SPI Controller test completed"

test_spi_fifo:
	@echo "Testing SPI FIFO Module..."
ifeq ($(SIM),verilator)
	verilator --cc --build --trace --top-module tb_spi_fifo --timing -I../../rtl ../../rtl/spi_fifo.sv tb_spi_fifo.sv && \
	c++ -I. -Iobj_dir -I$(VERILATOR_INCLUDE) \
	-I$(VERILATOR_VLTSTD) \
	-std=gnu++20 verilator_wrapper_fifo.cpp obj_dir/libVtb_spi_fifo.a \
	obj_dir/libverilated.a -o verilator_fifo_sim && \
	./verilator_fifo_sim
else
	$(VLOG) $(VLOG_FLAGS) -o simv_fifo.out ../../rtl/spi_fifo.sv tb_spi_fifo.sv
	$(VVP) simv_fifo.out
endif
	@echo "SPI FIFO test completed"

test_spi_protocol_engine:
	@echo "Testing SPI Protocol Engine Module..."
ifeq ($(SIM),verilator)
	verilator --cc --build --trace --top-module tb_spi_protocol_engine --timing -I../../rtl ../../rtl/spi_protocol_engine.sv tb_spi_protocol_engine.sv && \
	c++ -I. -Iobj_dir -I$(VERILATOR_INCLUDE) \
	-I$(VERILATOR_VLTSTD) \
	-std=gnu++20 verilator_wrapper_protocol.cpp obj_dir/libVtb_spi_protocol_engine.a \
	obj_dir/libverilated.a -o verilator_protocol_sim && \
	./verilator_protocol_sim
else
	$(VLOG) $(VLOG_FLAGS) -o simv_protocol.out ../../rtl/spi_protocol_engine.sv tb_spi_protocol_engine.sv
	$(VVP) simv_protocol.out
endif
	@echo "SPI Protocol Engine test completed"

test_all_modules: test_spi_controller test_spi_fifo test_spi_protocol_engine
	@echo "All SPI controller modules tested successfully!"

# Coverage target
coverage:
ifeq ($(SIM),verilator)
	@echo "Running coverage analysis with Verilator..."
	verilator --cc --build --trace --coverage --top-module $(TOPLEVEL) --timing --Wno-fatal --Wno-TIMESCALEMOD --Wno-WIDTHEXPAND --Wno-WIDTHTRUNC --Wno-CASEINCOMPLETE -I../../rtl $(RTL_SOURCES) $(TB_SOURCES) && \
	c++ -I. -Iobj_dir -I$(VERILATOR_INCLUDE) \
	-I$(VERILATOR_VLTSTD) \
	-std=gnu++20 verilator_wrapper.cpp obj_dir/libVtb_spi_controller.a \
	obj_dir/libverilated.a -o obj_dir/V$(TOPLEVEL)
	./obj_dir/V$(TOPLEVEL)
	@echo "Coverage analysis completed"
else
	@echo "Coverage analysis only supported with Verilator simulator"
	@exit 1
endif

# Waveform viewing
waves:
ifeq ($(SIM),icarus)
	@echo "Use GTKWave to view waveforms: gtkwave tb_spi_controller.vcd"
else ifeq ($(SIM),verilator)
	@echo "Use GTKWave to view waveforms: gtkwave tb_spi_controller_uvm.vcd"
else ifeq ($(SIM),vcs)
	@echo "Use DVE or Verdi to view VCS waveforms"
endif

# Clean target
clean:
	rm -rf work
	rm -rf transcript
	rm -rf vsim.wlf
	rm -rf *.log
	rm -rf *.vcd
	rm -rf *.fst
	rm -rf *.ghw
	rm -rf simv
	rm -rf simv.daidir
	rm -rf csrc
	rm -rf ucli.key
	rm -rf *.so
	rm -rf obj_dir
	rm -rf *.exe
	rm -rf *.o
	rm -rf *.a
	rm -rf *.d
	rm -rf simv.out
	rm -rf simv_*.out
	rm -rf verilator_*_sim

# Debug target
debug:
	@echo "OS Detection Debug Info:"
	@echo "  UNAME_S: $(UNAME_S)"
	@echo "  VERILATOR_INCLUDE: $(VERILATOR_INCLUDE)"
	@echo "  VERILATOR_VLTSTD: $(VERILATOR_VLTSTD)"
	@echo "  SIM: $(SIM)"
	@echo "  RTL_SOURCES: $(RTL_SOURCES)"
	@echo "  TB_SOURCES: $(TB_SOURCES)"

# Help target
help:
	@echo "SPI Controller SystemVerilog Testbench Makefile"
	@echo "==============================================="
	@echo ""
	@echo "Available targets:"
	@echo "  all                    - Compile and run (default)"
	@echo "  compile                - Compile the design and testbench"
	@echo "  run                    - Run the simulation"
	@echo "  test_basic             - Run basic functionality test"
	@echo "  test_random            - Run random input test"
	@echo "  test_spi_modes         - Run SPI modes test (0,1,2,3)"
	@echo "  test_fifo              - Run FIFO overflow/underflow test"
	@echo "  test_interrupts        - Run interrupt generation test"
	@echo "  test_performance       - Run performance benchmark test"
	@echo "  test_coverage          - Run coverage analysis test"
	@echo "  test_all               - Run all tests"
	@echo "  test_spi_controller    - Test SPI controller module"
	@echo "  test_spi_fifo          - Test SPI FIFO module"
	@echo "  test_spi_protocol_engine - Test SPI protocol engine module"
	@echo "  test_all_modules       - Test all SPI controller modules"
	@echo "  coverage               - Run coverage analysis (Verilator only)"
	@echo "  waves                  - View waveforms"
	@echo "  clean                  - Clean build artifacts"
	@echo "  debug                  - Show OS detection and path info"
	@echo "  help                   - Show this help message"
	@echo ""
	@echo "Available simulators (set SIM=<simulator>):"
	@echo "  icarus        - Icarus Verilog (default)"
	@echo "  verilator     - Verilator"
	@echo "  vcs           - VCS (if available)"
	@echo ""
	@echo "Example usage:"
	@echo "  make test_basic SIM=icarus"
	@echo "  make test_all SIM=verilator"
	@echo "  make coverage SIM=verilator"
	@echo "  make waves SIM=icarus"

.PHONY: all compile run test_basic test_random test_all test_spi_controller test_spi_fifo test_spi_protocol_engine test_all_modules coverage waves clean debug help 