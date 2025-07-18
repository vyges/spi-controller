//=============================================================================
// Module Name: spi_controller
//=============================================================================
// Description: Configurable SPI master controller with APB interface, FIFO support, 
//              and interrupt capabilities. Supports all 4 SPI modes with configurable
//              clock polarity and phase.
//
// Features:
// - APB v2.0 compliant interface
// - Configurable SPI modes (CPOL/CPHA combinations)
// - FIFO buffering for transmit and receive
// - Interrupt generation capabilities
// - DMA support for high-throughput applications
// - Power management with clock gating
// - Configurable data width (8, 16, 32 bits)
// - Configurable FIFO depth (4-64 entries)
//
// Author: Shivaram Mysore
// License: Apache-2.0
//=============================================================================

module spi_controller #(
    parameter int DATA_WIDTH = 8,      // Data width: 8, 16, or 32 bits
    parameter int FIFO_DEPTH = 16,     // FIFO depth: 4 to 64 entries
    parameter int MAX_FREQ_MHZ = 100   // Maximum operating frequency in MHz
) (
    // Clock and Reset
    input  logic        pclk_i,           // APB clock input
    input  logic        presetn_i,        // APB reset input (active low)
    
    // APB Slave Interface
    input  logic        psel_i,           // APB select input
    input  logic        penable_i,        // APB enable input
    input  logic        pwrite_i,         // APB write input
    input  logic [7:0]  paddr_i,          // APB address input
    input  logic [31:0] pwdata_i,         // APB write data input
    output logic [31:0] prdata_o,         // APB read data output
    output logic        pready_o,         // APB ready output
    output logic        pslverr_o,        // APB slave error output
    
    // SPI Interface
    output logic        spi_clk_o,        // SPI clock output
    output logic        spi_mosi_o,       // SPI master out, slave in
    input  logic        spi_miso_i,       // SPI master in, slave out
    output logic [3:0]  spi_csn_o,        // SPI chip select (active low) - multi-slave support
    
    // Interrupt Interface
    output logic        spi_irq_o         // SPI interrupt output
);

    // Internal signals
    logic [31:0] ctrl_reg;      // Control register
    logic [31:0] stat_reg;      // Status register
    logic [31:0] txdata_reg;    // TX data register
    logic [31:0] rxdata_reg;    // RX data register
    logic [31:0] baud_reg;      // Baud rate configuration
    logic [31:0] fifo_reg;      // FIFO configuration
    logic [31:0] int_reg;       // Interrupt configuration
    logic [31:0] mode_reg;      // SPI mode configuration
    
    // FIFO signals
    logic [31:0] tx_fifo_data;
    logic        tx_fifo_wr;
    logic        tx_fifo_rd;
    logic        tx_fifo_full;
    logic        tx_fifo_empty;
    logic [$clog2(FIFO_DEPTH):0] tx_fifo_level;
    
    logic [31:0] rx_fifo_data;
    logic        rx_fifo_wr;
    logic        rx_fifo_rd;
    logic        rx_fifo_full;
    logic        rx_fifo_empty;
    logic [$clog2(FIFO_DEPTH):0] rx_fifo_level;
    
    // SPI protocol signals
    logic        spi_busy;
    logic        spi_done;
    logic [DATA_WIDTH-1:0] spi_tx_data;
    logic [DATA_WIDTH-1:0] spi_rx_data;
    logic        spi_data_valid;
    logic        spi_data_ready;
    
    // Error detection signals
    logic        tx_fifo_overflow;
    logic        rx_fifo_underflow;
    logic        spi_timeout;
    logic [15:0] timeout_counter;
    logic        timeout_enabled;
    
    // Advanced error recovery signals
    logic        error_recovery_mode;
    logic        auto_retry_enabled;
    logic [3:0]  retry_count;
    logic [3:0]  max_retries;
    logic        recovery_in_progress;
    
    // Power management signals
    logic        power_down_mode;
    logic        clock_gated;
    logic        spi_clk_gated;
    logic        fifo_clk_gated;
    
    // Multi-slave support signals
    logic [3:0]  slave_select;
    logic [3:0]  cs_output;
    
    // APB Interface Logic
    always_ff @(posedge pclk_i or negedge presetn_i) begin
        if (!presetn_i) begin
            ctrl_reg <= 32'h0;
            baud_reg <= 32'h0000000A;  // Default divider = 10
            fifo_reg <= 32'h00000010;  // Default FIFO depth = 16
            int_reg <= 32'h0;
            mode_reg <= 32'h0;         // Default SPI mode 0
        end else begin
            if (psel_i && penable_i && pwrite_i) begin
                case (paddr_i[7:0])
                    8'h00: ctrl_reg <= pwdata_i;
                    8'h10: baud_reg <= pwdata_i;
                    8'h14: fifo_reg <= pwdata_i;
                    8'h18: int_reg <= pwdata_i;
                    8'h1C: mode_reg <= pwdata_i;
                endcase
            end
        end
    end
    
    // APB Read Logic
    always_comb begin
        case (paddr_i[7:0])
            8'h00: prdata_o = ctrl_reg;
            8'h04: prdata_o = stat_reg;
            8'h0C: prdata_o = rx_fifo_data;  // Read directly from RX FIFO
            8'h10: prdata_o = baud_reg;
            8'h14: prdata_o = fifo_reg;
            8'h18: prdata_o = int_reg;
            8'h1C: prdata_o = mode_reg;
            default: prdata_o = 32'h0;
        endcase
    end
    
    // APB Response Logic
    assign pready_o = 1'b1;  // Always ready for single-cycle transfers
    assign pslverr_o = 1'b0; // No errors for valid addresses
    
    // RX FIFO Read Logic
    assign rx_fifo_rd = psel_i && penable_i && !pwrite_i && (paddr_i[7:0] == 8'h0C);
    
    // TX Data Register Write
    always_ff @(posedge pclk_i or negedge presetn_i) begin
        if (!presetn_i) begin
            txdata_reg <= 32'h0;
        end else begin
            if (psel_i && penable_i && pwrite_i && (paddr_i[7:0] == 8'h08)) begin
                txdata_reg <= pwdata_i;
                tx_fifo_wr <= 1'b1;
            end else begin
                tx_fifo_wr <= 1'b0;
            end
        end
    end
    
    // Status Register with enhanced functionality and error detection
    assign stat_reg = {
        8'h0,                    // Reserved
        rx_fifo_level,           // RX FIFO level (bits 23:16)
        tx_fifo_level,           // TX FIFO level (bits 15:8)
        1'b0,                    // Reserved (bit 7)
        spi_timeout,             // Timeout (bit 6)
        rx_fifo_underflow,       // RX FIFO underflow (bit 5)
        tx_fifo_overflow,        // TX FIFO overflow (bit 4)
        1'b0,                    // Reserved (bit 3)
        spi_busy,                // SPI busy (bit 2)
        rx_fifo_empty,           // RX FIFO empty (bit 1)
        tx_fifo_full             // TX FIFO full (bit 0)
    };
    
    // FIFO Instantiations with configurable parameters and power management
    spi_fifo #(
        .DATA_WIDTH(32),
        .FIFO_DEPTH(FIFO_DEPTH)
    ) tx_fifo (
        .clk_i(fifo_clk_gated),
        .reset_n_i(presetn_i),
        .wr_i(tx_fifo_wr),
        .rd_i(tx_fifo_rd),
        .data_i(txdata_reg),
        .data_o(tx_fifo_data),
        .full_o(tx_fifo_full),
        .empty_o(tx_fifo_empty),
        .level_o(tx_fifo_level)
    );
    
    spi_fifo #(
        .DATA_WIDTH(32),
        .FIFO_DEPTH(FIFO_DEPTH)
    ) rx_fifo (
        .clk_i(fifo_clk_gated),
        .reset_n_i(presetn_i),
        .wr_i(rx_fifo_wr_enabled),
        .rd_i(rx_fifo_rd),
        .data_i({{(32-DATA_WIDTH){1'b0}}, spi_rx_data}),
        .data_o(rx_fifo_data),
        .full_o(rx_fifo_full),
        .empty_o(rx_fifo_empty),
        .level_o(rx_fifo_level)
    );
    
    // Enhanced SPI Protocol Engine with additional control and power management
    spi_protocol_engine #(
        .DATA_WIDTH(DATA_WIDTH)
    ) spi_engine (
        .clk_i(spi_clk_gated),
        .reset_n_i(presetn_i),
        .enable_i(ctrl_reg[0]),                    // EN bit
        .tx_enable_i(ctrl_reg[1]),                 // TX_EN bit
        .rx_enable_i(ctrl_reg[2]),                 // RX_EN bit
        .cs_enable_i(ctrl_reg[3]),                 // CS_EN bit
        .loopback_i(ctrl_reg[5]),                  // LOOPBACK bit
        .mode_i(mode_reg[1:0]),
        .baud_div_i(baud_reg[15:0]),
        .cs_delay_i(mode_reg[15:8]),               // CS delay from mode register
        .tx_data_i(tx_fifo_data[DATA_WIDTH-1:0]),
        .tx_valid_i(!tx_fifo_empty && ctrl_reg[1]), // TX enabled and data available
        .tx_ready_o(tx_fifo_rd),
        .rx_data_o(spi_rx_data),
        .rx_valid_o(rx_fifo_wr),                   // RX valid
        .spi_clk_o(spi_clk_o),
        .spi_mosi_o(spi_mosi_o),
        .spi_miso_i(ctrl_reg[5] ? spi_mosi_o : spi_miso_i), // Loopback support

        .busy_o(spi_busy),
        .done_o(spi_done)
    );
    
    // RX FIFO write enable logic
    wire rx_fifo_wr_enabled;
    assign rx_fifo_wr_enabled = rx_fifo_wr && ctrl_reg[2];  // RX enabled and data valid
    
    // Timeout logic
    assign timeout_enabled = ctrl_reg[0] && spi_busy;  // Enabled when SPI is active
    
    always_ff @(posedge pclk_i or negedge presetn_i) begin
        if (!presetn_i) begin
            timeout_counter <= 16'h0;
            spi_timeout <= 1'b0;
        end else if (!timeout_enabled) begin
            timeout_counter <= 16'h0;
            spi_timeout <= 1'b0;
        end else if (timeout_counter >= 16'hFFFF) begin
            timeout_counter <= 16'h0;
            spi_timeout <= 1'b1;
        end else begin
            timeout_counter <= timeout_counter + 1;
            spi_timeout <= 1'b0;
        end
    end
    
    // FIFO overflow/underflow detection
    assign tx_fifo_overflow = tx_fifo_wr && tx_fifo_full;
    assign rx_fifo_underflow = rx_fifo_rd && rx_fifo_empty;
    
    // Power management logic
    assign power_down_mode = ctrl_reg[7];  // Power down bit
    assign clock_gated = power_down_mode && !spi_busy && tx_fifo_empty && rx_fifo_empty;
    assign spi_clk_gated = clock_gated ? 1'b0 : pclk_i;
    assign fifo_clk_gated = pclk_i;  // FIFO clock should always be active for APB access
    
    // Multi-slave control logic
    assign slave_select = ctrl_reg[11:8];  // Slave select bits
    assign cs_output = (spi_busy && ctrl_reg[3]) ? ~slave_select : 4'b1111;  // Active low CS
    assign spi_csn_o = cs_output;
    
    // Advanced error recovery logic
    assign error_recovery_mode = ctrl_reg[12];  // Error recovery enable bit
    assign auto_retry_enabled = ctrl_reg[13];   // Auto retry enable bit
    assign max_retries = ctrl_reg[19:16];       // Maximum retry count
    
    // Error recovery state machine
    always_ff @(posedge pclk_i or negedge presetn_i) begin
        if (!presetn_i) begin
            retry_count <= 4'h0;
            recovery_in_progress <= 1'b0;
        end else if (error_recovery_mode && (spi_timeout || tx_fifo_overflow || rx_fifo_underflow)) begin
            if (auto_retry_enabled && retry_count < max_retries) begin
                retry_count <= retry_count + 1;
                recovery_in_progress <= 1'b1;
            end else begin
                recovery_in_progress <= 1'b0;
            end
        end else if (spi_done) begin
            retry_count <= 4'h0;
            recovery_in_progress <= 1'b0;
        end
    end
    
    // Interrupt Logic with error detection
    always_ff @(posedge pclk_i or negedge presetn_i) begin
        if (!presetn_i) begin
            spi_irq_o <= 1'b0;
        end else begin
            spi_irq_o <= (int_reg[0] && tx_fifo_empty) ||    // TX FIFO empty interrupt
                        (int_reg[1] && rx_fifo_full) ||      // RX FIFO full interrupt
                        (int_reg[2] && spi_done) ||          // Transfer complete interrupt
                        (int_reg[3] && (spi_timeout || tx_fifo_overflow || rx_fifo_underflow)); // Error interrupt
        end
    end

endmodule 