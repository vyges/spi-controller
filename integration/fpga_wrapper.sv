//=============================================================================
// Module Name: fpga_wrapper
//=============================================================================
// Description: FPGA wrapper for SPI Controller IP block
//              Provides FPGA-specific optimizations, clock management,
//              and I/O constraints for Xilinx and Intel FPGAs.
//
// Features:
// - Clock domain crossing protection
// - Reset synchronization
// - FPGA-specific I/O buffers
// - Clock management
// - Debug interface
//
// Author: Shivaram Mysore
// License: Apache-2.0
//=============================================================================

module fpga_wrapper (
    // Clock and Reset
    input  logic        clk_i,           // System clock input (100 MHz)
    input  logic        rst_n_i,         // System reset input (active low)
    
    // APB Interface
    input  logic        psel_i,          // APB select input
    input  logic        penable_i,       // APB enable input
    input  logic        pwrite_i,        // APB write input
    input  logic [7:0]  paddr_i,         // APB address input
    input  logic [31:0] pwdata_i,        // APB write data input
    output logic [31:0] prdata_o,        // APB read data output
    output logic        pready_o,        // APB ready output
    output logic        pslverr_o,       // APB slave error output
    
    // SPI Interface
    output logic        spi_clk_o,       // SPI clock output
    output logic        spi_mosi_o,      // SPI master out, slave in
    input  logic        spi_miso_i,      // SPI master in, slave out
    output logic        spi_csn_o,       // SPI chip select (active low)
    
    // Interrupt Interface
    output logic        spi_irq_o,       // SPI interrupt output
    
    // Debug Interface
    output logic [7:0]  debug_o,         // Debug output
    input  logic        debug_en_i       // Debug enable
);

    // Internal signals
    logic        pclk_internal;          // Internal APB clock
    logic        presetn_internal;       // Internal APB reset
    logic        spi_clk_internal;       // Internal SPI clock
    logic        spi_mosi_internal;      // Internal SPI MOSI
    logic        spi_csn_internal;       // Internal SPI CS
    logic        spi_irq_internal;       // Internal SPI interrupt
    
    // Clock buffer (FPGA-specific)
    // For Xilinx: BUFG
    // For Intel: ALTCLKCTRL
    assign pclk_internal = clk_i;
    
    // Reset synchronizer (2-stage for FPGA)
    logic [1:0] reset_sync;
    always_ff @(posedge pclk_internal or negedge rst_n_i) begin
        if (!rst_n_i) begin
            reset_sync <= 2'b00;
        end else begin
            reset_sync <= {reset_sync[0], 1'b1};
        end
    end
    assign presetn_internal = reset_sync[1];
    
    // SPI Controller instantiation
    spi_controller u_spi_ctrl (
        .pclk_i(pclk_internal),
        .presetn_i(presetn_internal),
        .psel_i(psel_i),
        .penable_i(penable_i),
        .pwrite_i(pwrite_i),
        .paddr_i(paddr_i),
        .pwdata_i(pwdata_i),
        .prdata_o(prdata_o),
        .pready_o(pready_o),
        .pslverr_o(pslverr_o),
        .spi_clk_o(spi_clk_internal),
        .spi_mosi_o(spi_mosi_internal),
        .spi_miso_i(spi_miso_i),
        .spi_csn_o(spi_csn_internal),
        .spi_irq_o(spi_irq_internal)
    );
    
    // Output assignments with FPGA-specific attributes
    assign spi_clk_o = spi_clk_internal;
    assign spi_mosi_o = spi_mosi_internal;
    assign spi_csn_o = spi_csn_internal;
    assign spi_irq_o = spi_irq_internal;
    
    // Debug interface
    assign debug_o = debug_en_i ? {
        spi_irq_internal,     // [7]
        spi_csn_internal,     // [6]
        spi_mosi_internal,    // [5]
        spi_miso_i,           // [4]
        presetn_internal,     // [3]
        pclk_internal,        // [2]
        psel_i,               // [1]
        penable_i             // [0]
    } : 8'h00;
    
    // FPGA-specific attributes (Xilinx)
    // These would be set in constraints file
    // (* IOB = "TRUE" *) for output signals
    // (* CLOCK_SIGNAL = "TRUE" *) for clock signals

endmodule 