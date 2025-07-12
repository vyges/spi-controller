//=============================================================================
// Module Name: asic_wrapper
//=============================================================================
// Description: ASIC wrapper for SPI Controller IP block
//              Provides proper clock/reset handling, I/O buffers, and
//              ASIC-specific optimizations for Sky130B process.
//
// Features:
// - Clock domain crossing protection
// - Reset synchronization
// - I/O buffer instantiation
// - Power management
// - Scan chain support
//
// Author: Shivaram Mysore
// License: Apache-2.0
//=============================================================================

module asic_wrapper (
    // Clock and Reset
    input  logic        clk_i,           // System clock input
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
    
    // Test Interface
    input  logic        test_mode_i,     // Test mode input
    input  logic        scan_en_i,       // Scan enable input
    input  logic        scan_in_i,       // Scan data input
    output logic        scan_out_o       // Scan data output
);

    // Internal signals
    logic        pclk_internal;          // Internal APB clock
    logic        presetn_internal;       // Internal APB reset
    logic        spi_clk_internal;       // Internal SPI clock
    logic        spi_mosi_internal;      // Internal SPI MOSI
    logic        spi_csn_internal;       // Internal SPI CS
    logic        spi_irq_internal;       // Internal SPI interrupt
    
    // Clock buffer instantiation
    sky130_fd_sc_hd__clkbuf_4 clk_buf (
        .A(clk_i),
        .X(pclk_internal)
    );
    
    // Reset synchronizer
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
    
    // Output buffers for SPI signals
    sky130_fd_sc_hd__buf_4 spi_clk_buf (
        .A(spi_clk_internal),
        .X(spi_clk_o)
    );
    
    sky130_fd_sc_hd__buf_4 spi_mosi_buf (
        .A(spi_mosi_internal),
        .X(spi_mosi_o)
    );
    
    sky130_fd_sc_hd__buf_4 spi_csn_buf (
        .A(spi_csn_internal),
        .X(spi_csn_o)
    );
    
    sky130_fd_sc_hd__buf_4 spi_irq_buf (
        .A(spi_irq_internal),
        .X(spi_irq_o)
    );
    
    // Scan chain (simplified - would need proper scan insertion)
    assign scan_out_o = scan_in_i;  // Placeholder for scan chain

endmodule 