# OpenLane Flow Configuration for SPI Controller

## Overview
This document describes the OpenLane flow configuration for synthesizing and implementing the SPI Controller IP block using the Sky130B PDK.

## Key Files
- `config_sky130b.json`: Main OpenLane configuration file
- `constraints_sky130b.sdc`: SDC timing constraints
- `pin_order_sky130b.cfg`: Pin order for I/O placement

## Flow Steps
1. **Synthesis**: Yosys-based RTL synthesis
2. **Floorplanning**: Pin placement and core/die area definition
3. **Placement**: Standard cell placement
4. **Clock Tree Synthesis**: CTS for pclk_i
5. **Routing**: Signal routing and DRC
6. **Timing Analysis**: STA using SDC constraints
7. **GDSII Generation**: Final layout output

## Configuration Highlights
- **Platform**: sky130bhd
- **Clock**: pclk_i, 100 MHz (10ns period)
- **Core Utilization**: 80%
- **Die Area**: 0.5mm x 0.5mm
- **Pin Order**: Defined in `pin_order_sky130b.cfg`
- **PDK**: Sky130B (Open Source)

## Running the Flow
1. Set up OpenLane and Sky130B PDK as per OpenLane documentation.
2. Place all config and constraint files in `flow/openlane/`.
3. Run OpenLane with `config_sky130b.json` as the main config.

## References
- [OpenLane Documentation](https://openlane.readthedocs.io/)
- [SkyWater PDK](https://github.com/google/skywater-pdk)
