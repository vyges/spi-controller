//==============================================================================
// Verilator Wrapper for SPI Controller Testbench
//==============================================================================
// Description: C++ wrapper to run the Verilator-generated testbench
// Author:      Vyges Team
// Date:        2025-07-17
// Version:     1.0.0
//==============================================================================

#include "obj_dir/Vtb_spi_controller.h"
#include "obj_dir/Vtb_spi_controller___024root.h"
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>

// Time stamp function required by Verilator
double sc_time_stamp() { return 0; }

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create the testbench instance
    Vtb_spi_controller* top = new Vtb_spi_controller;
    
    // Initialize trace
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("tb_spi_controller.vcd");
    
    // Initialize the design
    top->rootp->tb_spi_controller__DOT__pclk = 0;
    top->rootp->tb_spi_controller__DOT__presetn = 0;
    top->eval();
    
    // Run the simulation
    int time = 0;
    while (!Verilated::gotFinish() && time < 10000) {
        // Toggle clock
        top->rootp->tb_spi_controller__DOT__pclk = !top->rootp->tb_spi_controller__DOT__pclk;
        
        // Evaluate the design
        top->eval();
        
        // Dump trace
        tfp->dump(time);
        
        time++;
    }
    
    // Cleanup
    tfp->close();
    delete top;
    delete tfp;
    
    std::cout << "Verilator simulation completed successfully!" << std::endl;
    return 0;
} 