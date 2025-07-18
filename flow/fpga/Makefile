#==============================================================================
# SPI Controller FPGA Synthesis Makefile
#==============================================================================
# Description: Makefile for running Yosys FPGA synthesis on SPI controller implementation
# Target: Xilinx 7-series FPGAs
# Author:      Vyges Team
# Date:        2025-07-18
# Version:     1.0.0
#==============================================================================

# Yosys executable
YOSYS = yosys

# FPGA synthesis targets
.PHONY: all spi_controller clean help fpga_analysis comprehensive_report

# Default target
all: spi_controller

# Synthesize SPI controller implementation for FPGA
spi_controller:
	@echo "Synthesizing SPI controller implementation for FPGA..."
	$(YOSYS) synth_spi_controller_fpga.ys
	@echo "SPI controller FPGA synthesis complete"

# Generate FPGA resource analysis report
fpga_analysis: all
	@echo "Generating FPGA resource analysis report..."
	python3 fpga_analysis.py
	@echo "FPGA analysis report generated"

# Generate comprehensive FPGA report
comprehensive_report: all fpga_analysis
	@echo "Generating comprehensive FPGA report..."
	@echo "# SPI Controller FPGA Synthesis Comprehensive Report" > comprehensive_fpga_report.md
	@echo "Generated: $(shell date)" >> comprehensive_fpga_report.md
	@echo "" >> comprehensive_fpga_report.md
	@echo "## FPGA Resource Analysis" >> comprehensive_fpga_report.md
	@echo "" >> comprehensive_fpga_report.md
	@cat fpga_analysis_report.md >> comprehensive_fpga_report.md
	@echo "" >> comprehensive_fpga_report.md
	@echo "## Synthesis Statistics" >> comprehensive_fpga_report.md
	@echo "" >> comprehensive_fpga_report.md
	@echo "### SPI Controller Implementation" >> comprehensive_fpga_report.md
	@echo "\`\`\`" >> comprehensive_fpga_report.md
	@cat spi_controller_fpga_stats.txt >> comprehensive_fpga_report.md
	@echo "\`\`\`" >> comprehensive_fpga_report.md
	@echo "" >> comprehensive_fpga_report.md
	@echo "## Design Hierarchy" >> comprehensive_fpga_report.md
	@echo "" >> comprehensive_fpga_report.md
	@echo "\`\`\`" >> comprehensive_fpga_report.md
	@cat spi_controller_fpga_hierarchy.txt >> comprehensive_fpga_report.md
	@echo "\`\`\`" >> comprehensive_fpga_report.md
	@echo "" >> comprehensive_fpga_report.md
	@echo "## Resource Utilization" >> comprehensive_fpga_report.md
	@echo "" >> comprehensive_fpga_report.md
	@echo "\`\`\`" >> comprehensive_fpga_report.md
	@cat spi_controller_fpga_resources.txt >> comprehensive_fpga_report.md
	@echo "\`\`\`" >> comprehensive_fpga_report.md
	@echo "Comprehensive FPGA report generated: comprehensive_fpga_report.md"

# Clean target
clean:
	rm -f *.v
	rm -f *.json
	rm -f *.txt
	rm -f fpga_analysis_report.md
	rm -f comprehensive_fpga_report.md

# Help target
help:
	@echo "SPI Controller FPGA Synthesis Makefile"
	@echo "======================================"
	@echo ""
	@echo "Available targets:"
	@echo "  all                 - Synthesize SPI controller for FPGA"
	@echo "  spi_controller      - Synthesize SPI controller implementation"
	@echo "  fpga_analysis       - Generate FPGA resource analysis report"
	@echo "  comprehensive_report - Generate comprehensive FPGA analysis report"
	@echo "  clean               - Clean synthesis artifacts"
	@echo "  help                - Show this help message"
	@echo ""
	@echo "Generated files:"
	@echo "  spi_controller_fpga.v            - Synthesized FPGA netlist"
	@echo "  spi_controller_fpga.json         - JSON representation of netlist"
	@echo "  spi_controller_fpga_stats.txt    - Synthesis statistics"
	@echo "  spi_controller_fpga_hierarchy.txt - Design hierarchy"
	@echo "  spi_controller_fpga_resources.txt - FPGA resource utilization"
	@echo "  fpga_analysis_report.md - FPGA resource analysis report"
	@echo "  comprehensive_fpga_report.md - Complete FPGA analysis report" 