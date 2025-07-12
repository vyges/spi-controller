//=============================================================================
// Module Name: example_soc
//=============================================================================
// Description: Example SoC integration for SPI Controller IP block
//              Demonstrates integration into a simple system with APB bus,
//              processor interface, and SPI slave device.
//
// Features:
// - APB bus fabric
// - Simple processor interface
// - SPI slave device simulation
// - Interrupt handling
// - Memory-mapped registers
//
// Author: Shivaram Mysore
// License: Apache-2.0
//=============================================================================

module example_soc (
    // Clock and Reset
    input  logic        clk_i,           // System clock input (100 MHz)
    input  logic        rst_n_i,         // System reset input (active low)
    
    // External SPI Interface
    output logic        spi_clk_o,       // SPI clock output
    output logic        spi_mosi_o,      // SPI master out, slave in
    input  logic        spi_miso_i,      // SPI master in, slave out
    output logic        spi_csn_o,       // SPI chip select (active low)
    
    // External Interrupt
    output logic        irq_o,           // System interrupt output
    
    // Debug Interface
    output logic [7:0]  debug_o          // Debug output
);

    // Internal signals
    logic        pclk;                   // APB clock
    logic        presetn;                // APB reset
    logic        psel_spi;               // SPI controller select
    logic        penable;                // APB enable
    logic        pwrite;                 // APB write
    logic [7:0]  paddr;                  // APB address
    logic [31:0] pwdata;                 // APB write data
    logic [31:0] prdata_spi;             // SPI controller read data
    logic        pready_spi;             // SPI controller ready
    logic        pslverr_spi;            // SPI controller error
    logic        spi_irq;                // SPI interrupt
    
    // Clock and reset assignment
    assign pclk = clk_i;
    assign presetn = rst_n_i;
    
    // Simple APB master (processor simulation)
    apb_master u_apb_master (
        .pclk_i(pclk),
        .presetn_i(presetn),
        .psel_o(psel_spi),
        .penable_o(penable),
        .pwrite_o(pwrite),
        .paddr_o(paddr),
        .pwdata_o(pwdata),
        .prdata_i(prdata_spi),
        .pready_i(pready_spi),
        .pslverr_i(pslverr_spi)
    );
    
    // SPI Controller instantiation
    spi_controller u_spi_ctrl (
        .pclk_i(pclk),
        .presetn_i(presetn),
        .psel_i(psel_spi),
        .penable_i(penable),
        .pwrite_i(pwrite),
        .paddr_i(paddr),
        .pwdata_i(pwdata),
        .prdata_o(prdata_spi),
        .pready_o(pready_spi),
        .pslverr_o(pslverr_spi),
        .spi_clk_o(spi_clk_o),
        .spi_mosi_o(spi_mosi_o),
        .spi_miso_i(spi_miso_i),
        .spi_csn_o(spi_csn_o),
        .spi_irq_o(spi_irq)
    );
    
    // Interrupt handling
    assign irq_o = spi_irq;
    
    // Debug output
    assign debug_o = {
        spi_irq,        // [7]
        spi_csn_o,      // [6]
        spi_mosi_o,     // [5]
        spi_miso_i,     // [4]
        presetn,        // [3]
        pclk,           // [2]
        psel_spi,       // [1]
        penable         // [0]
    };

endmodule

// Simple APB Master (Processor Simulation)
module apb_master (
    input  logic        pclk_i,
    input  logic        presetn_i,
    output logic        psel_o,
    output logic        penable_o,
    output logic        pwrite_o,
    output logic [7:0]  paddr_o,
    output logic [31:0] pwdata_o,
    input  logic [31:0] prdata_i,
    input  logic        pready_i,
    input  logic        pslverr_i
);

    // Simple state machine for APB transactions
    typedef enum logic [1:0] {
        IDLE,
        SETUP,
        ACCESS
    } state_t;
    
    state_t current_state, next_state;
    logic [7:0] test_addr;
    logic [31:0] test_data;
    int transaction_count;
    
    // State machine
    always_ff @(posedge pclk_i or negedge presetn_i) begin
        if (!presetn_i) begin
            current_state <= IDLE;
            test_addr <= 8'h00;
            test_data <= 32'hA5A5A5A5;
            transaction_count <= 0;
        end else begin
            current_state <= next_state;
            if (current_state == ACCESS && pready_i) begin
                test_addr <= test_addr + 8'h04;
                test_data <= test_data + 32'h01010101;
                transaction_count <= transaction_count + 1;
            end
        end
    end
    
    // Next state logic
    always_comb begin
        next_state = current_state;
        case (current_state)
            IDLE: begin
                if (transaction_count < 10) begin
                    next_state = SETUP;
                end
            end
            SETUP: next_state = ACCESS;
            ACCESS: begin
                if (pready_i) begin
                    next_state = IDLE;
                end
            end
        endcase
    end
    
    // Output logic
    always_comb begin
        psel_o = (current_state == SETUP || current_state == ACCESS);
        penable_o = (current_state == ACCESS);
        pwrite_o = 1'b1;  // Always write for this example
        paddr_o = test_addr;
        pwdata_o = test_data;
    end

endmodule 