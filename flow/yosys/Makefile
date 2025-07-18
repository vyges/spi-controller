# ASIC Synthesis Makefile for SPI Controller
# Using Yosys for synthesis

# Configuration
DESIGN_NAME = spi_controller
RTL_DIR = ../../rtl
BUILD_DIR = build
REPORTS_DIR = reports

# Default target
all: synth gate_analysis comprehensive_report

# Create directories
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(REPORTS_DIR):
	mkdir -p $(REPORTS_DIR)

# Synthesis
synth: $(BUILD_DIR)
	@echo "Running ASIC synthesis for $(DESIGN_NAME)..."
	yosys -l $(BUILD_DIR)/synthesis.log synth_spi_controller.ys
	@echo "Synthesis complete. Log: $(BUILD_DIR)/synthesis.log"

# Gate analysis
gate_analysis: synth $(REPORTS_DIR)
	@echo "Running gate-level analysis..."
	python3 gate_analysis.py
	@echo "Gate analysis complete"

# Comprehensive report
comprehensive_report: gate_analysis
	@echo "Generating comprehensive report..."
	@echo "# SPI Controller ASIC Synthesis Report" > $(REPORTS_DIR)/comprehensive_report.md
	@echo "" >> $(REPORTS_DIR)/comprehensive_report.md
	@echo "Generated on: $$(date)" >> $(REPORTS_DIR)/comprehensive_report.md
	@echo "" >> $(REPORTS_DIR)/comprehensive_report.md
	@echo "## Synthesis Results" >> $(REPORTS_DIR)/comprehensive_report.md
	@echo "" >> $(REPORTS_DIR)/comprehensive_report.md
	@if [ -f $(BUILD_DIR)/gate_analysis_report.md ]; then cat $(BUILD_DIR)/gate_analysis_report.md >> $(REPORTS_DIR)/comprehensive_report.md; fi
	@echo "" >> $(REPORTS_DIR)/comprehensive_report.md
	@echo "## Files Generated" >> $(REPORTS_DIR)/comprehensive_report.md
	@echo "" >> $(REPORTS_DIR)/comprehensive_report.md
	@echo "- \`spi_controller_synth.v\`: Synthesized netlist" >> $(REPORTS_DIR)/comprehensive_report.md
	@echo "- \`spi_controller_synth.json\`: JSON representation" >> $(REPORTS_DIR)/comprehensive_report.md
	@echo "- \`synthesis.log\`: Synthesis log" >> $(REPORTS_DIR)/comprehensive_report.md
	@echo "" >> $(REPORTS_DIR)/comprehensive_report.md
	@echo "## Resource Utilization" >> $(REPORTS_DIR)/comprehensive_report.md
	@echo "" >> $(REPORTS_DIR)/comprehensive_report.md
	@if [ -f $(BUILD_DIR)/gate_stats.txt ]; then echo "\`\`\`" >> $(REPORTS_DIR)/comprehensive_report.md; cat $(BUILD_DIR)/gate_stats.txt >> $(REPORTS_DIR)/comprehensive_report.md; echo "\`\`\`" >> $(REPORTS_DIR)/comprehensive_report.md; fi
	@echo "Comprehensive report generated: $(REPORTS_DIR)/comprehensive_report.md"

# Clean
clean:
	rm -rf $(BUILD_DIR) $(REPORTS_DIR)
	rm -f *.v *.json *.log

# Help
help:
	@echo "ASIC Synthesis Makefile for SPI Controller"
	@echo "=========================================="
	@echo ""
	@echo "Available targets:"
	@echo "  synth              - Run synthesis only"
	@echo "  gate_analysis      - Run gate-level analysis"
	@echo "  comprehensive_report - Generate comprehensive report"
	@echo "  all                - Run complete synthesis flow"
	@echo "  clean              - Clean build artifacts"
	@echo "  help               - Show this help message"
	@echo ""
	@echo "Example usage:"
	@echo "  make all"
	@echo "  make synth"
	@echo "  make gate_analysis"

.PHONY: all synth gate_analysis comprehensive_report clean help 