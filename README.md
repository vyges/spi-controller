# SPI Controller IP Documentation

Generated on: Fri Jul 18 22:54:47 UTC 2025

## Project Structure

.
├── docs
│   ├── images
│   ├── API_Reference.md
│   ├── Integration_Guide.md
│   ├── SPI_Controller_design.md
│   ├── User_Guide.md
│   ├── architecture.md
│   └── waveforms.md
├── flow
│   ├── fpga
│   │   ├── Makefile
│   │   ├── README.md
│   │   ├── comprehensive_fpga_report.md
│   │   ├── fpga_analysis.py
│   │   ├── fpga_analysis_report.md
│   │   ├── spi_controller_fpga.json
│   │   ├── spi_controller_fpga.v
│   │   ├── spi_controller_fpga_hierarchy.txt
│   │   ├── spi_controller_fpga_resources.txt
│   │   ├── spi_controller_fpga_stats.txt
│   │   └── synth_spi_controller_fpga.ys
│   ├── openlane
│   │   ├── spi_controller
│   │   │   ├── config.tcl
│   │   │   └── constraint.sdc
│   │   ├── Makefile
│   │   ├── config.template.json
│   │   ├── config_sky130b.json
│   │   ├── configuration.md
│   │   ├── constraints_sky130b.sdc
│   │   └── pin_order_sky130b.cfg
│   ├── openlane2
│   ├── verilator
│   ├── vivado
│   │   ├── constraints.xdc
│   │   ├── implementation.tcl
│   │   ├── synthesis.tcl
│   │   └── vivado_project.tcl
│   ├── yosys
│   │   ├── reports
│   │   │   └── comprehensive_report.md
│   │   ├── Makefile
│   │   ├── gate_analysis.py
│   │   ├── spi_controller_synth.json
│   │   ├── spi_controller_synth.v
│   │   └── synth_spi_controller.ys
│   └── synth_report.md
├── integration
│   ├── Makefile
│   ├── README.md
│   ├── asic_wrapper.sv
│   ├── example_soc.sv
│   ├── fpga_wrapper.sv
│   ├── integration_testbench.sv
│   └── spi_slave_model.sv
├── packaging
│   └── README.md
├── public
│   ├── README.md
│   └── comprehensive_report.md
├── rtl
│   ├── spi_controller.sv
│   ├── spi_fifo.sv
│   └── spi_protocol_engine.sv
├── tb
│   ├── cocotb
│   │   ├── sim_build
│   │   │   └── cmds.f
│   │   ├── Makefile
│   │   └── test_spi_controller.py
│   ├── sv_tb
│   │   ├── obj_dir
│   │   │   ├── Vtb_spi_controller.cpp
│   │   │   ├── Vtb_spi_controller.h
│   │   │   ├── Vtb_spi_controller.mk
│   │   │   ├── Vtb_spi_controller__ALL.cpp
│   │   │   ├── Vtb_spi_controller__Syms.cpp
│   │   │   ├── Vtb_spi_controller__Syms.h
│   │   │   ├── Vtb_spi_controller__TraceDecls__0__Slow.cpp
│   │   │   ├── Vtb_spi_controller__Trace__0.cpp
│   │   │   ├── Vtb_spi_controller__Trace__0__Slow.cpp
│   │   │   ├── Vtb_spi_controller___024root.h
│   │   │   ├── Vtb_spi_controller___024root__DepSet_h2fb0cf77__0.cpp
│   │   │   ├── Vtb_spi_controller___024root__DepSet_h2fb0cf77__0__Slow.cpp
│   │   │   ├── Vtb_spi_controller___024root__DepSet_ha4d276b0__0.cpp
│   │   │   ├── Vtb_spi_controller___024root__DepSet_ha4d276b0__0__Slow.cpp
│   │   │   ├── Vtb_spi_controller___024root__Slow.cpp
│   │   │   ├── Vtb_spi_controller__pch.h
│   │   │   ├── Vtb_spi_controller__ver.d
│   │   │   ├── Vtb_spi_controller__verFiles.dat
│   │   │   └── Vtb_spi_controller_classes.mk
│   │   ├── Makefile
│   │   ├── simv.out
│   │   └── tb_spi_controller.sv
│   └── Makefile
├── test
├── Developer_Guide.md
├── LICENSE
├── Makefile
├── NOTICE
├── README.md
├── generate_test_harness_report.py
├── test_harness_report.md
├── vyges-metadata.json
└── vyges-metadata.template.json

22 directories, 84 files

## RTL Files

rtl/spi_controller.sv
rtl/spi_fifo.sv
rtl/spi_protocol_engine.sv

## Testbench Files

tb/cocotb/test_spi_controller.py
tb/sv_tb/tb_spi_controller.sv
