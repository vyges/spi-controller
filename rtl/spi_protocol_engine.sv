//=============================================================================
// Module Name: spi_protocol_engine
//=============================================================================
// Description: SPI protocol engine that implements all 4 SPI modes with
//              configurable clock polarity (CPOL) and clock phase (CPHA).
//              Supports configurable baud rate and 8-bit data transfers.
//
// Features:
// - Support for all 4 SPI modes (0, 1, 2, 3)
// - Configurable clock polarity and phase
// - Configurable baud rate divider
// - 8-bit data transfers
// - Busy and done status indicators
//
// SPI Modes:
// - Mode 0: CPOL=0, CPHA=0 (clock idle low, data sampled on rising edge)
// - Mode 1: CPOL=0, CPHA=1 (clock idle low, data sampled on falling edge)
// - Mode 2: CPOL=1, CPHA=0 (clock idle high, data sampled on falling edge)
// - Mode 3: CPOL=1, CPHA=1 (clock idle high, data sampled on rising edge)
//
// Author: Shivaram Mysore
// License: Apache-2.0
//=============================================================================

module spi_protocol_engine (
    // Clock and Reset
    input  logic        clk_i,          // System clock input
    input  logic        reset_n_i,      // Reset input (active low)
    
    // Control Interface
    input  logic        enable_i,       // Enable SPI engine
    input  logic [1:0]  mode_i,         // SPI mode (0-3)
    input  logic [15:0] baud_div_i,     // Baud rate divider
    
    // Data Interface
    input  logic [7:0]  tx_data_i,      // Transmit data
    input  logic        tx_valid_i,     // Transmit data valid
    output logic        tx_ready_o,     // Transmit ready
    
    output logic [7:0]  rx_data_o,      // Receive data
    output logic        rx_valid_o,     // Receive data valid
    
    // SPI Interface
    output logic        spi_clk_o,      // SPI clock output
    output logic        spi_mosi_o,     // SPI master out, slave in
    input  logic        spi_miso_i,     // SPI master in, slave out
    output logic        spi_csn_o,      // SPI chip select (active low)
    
    // Status
    output logic        busy_o,         // SPI engine busy
    output logic        done_o          // Transfer complete
);

    // Local parameters
    localparam int COUNTER_WIDTH = 16;
    
    // Internal signals
    logic [COUNTER_WIDTH-1:0] clk_counter;      // Clock divider counter
    logic                     spi_clk_internal; // Internal SPI clock
    logic [2:0]              bit_counter;      // Bit counter (0-7)
    logic [7:0]              tx_shift_reg;     // Transmit shift register
    logic [7:0]              rx_shift_reg;     // Receive shift register
    logic                     spi_csn_internal; // Internal chip select
    
    // SPI mode decoding
    logic cpol;  // Clock polarity
    logic cpha;  // Clock phase
    
    assign cpol = mode_i[1];  // CPOL = mode[1]
    assign cpha = mode_i[0];  // CPHA = mode[0]
    
    // Clock divider
    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) begin
            clk_counter <= '0;
            spi_clk_internal <= cpol;  // Start with idle state
        end else if (enable_i && busy_o) begin
            if (clk_counter >= baud_div_i - 1) begin
                clk_counter <= '0;
                spi_clk_internal <= ~spi_clk_internal;
            end else begin
                clk_counter <= clk_counter + 1;
            end
        end else begin
            clk_counter <= '0;
            spi_clk_internal <= cpol;  // Return to idle state
        end
    end
    
    // SPI clock output (with polarity)
    assign spi_clk_o = spi_clk_internal;
    
    // Main state machine
    typedef enum logic [2:0] {
        IDLE,
        START,
        TRANSFER,
        STOP
    } state_t;
    
    state_t current_state, next_state;
    
    // State register
    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) begin
            current_state <= IDLE;
        end else begin
            current_state <= next_state;
        end
    end
    
    // Next state logic
    always_comb begin
        next_state = current_state;
        
        case (current_state)
            IDLE: begin
                if (enable_i && tx_valid_i) begin
                    next_state = START;
                end
            end
            
            START: begin
                if (clk_counter == 0 && spi_clk_internal == (cpol ^ cpha)) begin
                    next_state = TRANSFER;
                end
            end
            
            TRANSFER: begin
                if (bit_counter == 7 && clk_counter == 0 && spi_clk_internal == (cpol ^ cpha)) begin
                    next_state = STOP;
                end
            end
            
            STOP: begin
                if (clk_counter == 0 && spi_clk_internal == cpol) begin
                    next_state = IDLE;
                end
            end
            
            default: next_state = IDLE;
        endcase
    end
    
    // Bit counter
    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) begin
            bit_counter <= '0;
        end else if (current_state == IDLE) begin
            bit_counter <= '0;
        end else if (current_state == TRANSFER && clk_counter == 0 && spi_clk_internal == (cpol ^ cpha)) begin
            bit_counter <= bit_counter + 1;
        end
    end
    
    // Transmit shift register
    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) begin
            tx_shift_reg <= '0;
        end else if (current_state == IDLE && tx_valid_i) begin
            tx_shift_reg <= tx_data_i;
        end else if (current_state == TRANSFER && clk_counter == 0 && spi_clk_internal == (cpol ^ cpha)) begin
            tx_shift_reg <= {tx_shift_reg[6:0], 1'b0};
        end
    end
    
    // Receive shift register
    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) begin
            rx_shift_reg <= '0;
        end else if (current_state == TRANSFER && clk_counter == 0 && spi_clk_internal == (cpol ^ ~cpha)) begin
            rx_shift_reg <= {rx_shift_reg[6:0], spi_miso_i};
        end
    end
    
    // Chip select logic
    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) begin
            spi_csn_internal <= 1'b1;  // Inactive (high)
        end else if (current_state == START) begin
            spi_csn_internal <= 1'b0;  // Active (low)
        end else if (current_state == STOP && clk_counter == 0 && spi_clk_internal == cpol) begin
            spi_csn_internal <= 1'b1;  // Inactive (high)
        end
    end
    
    // Output assignments
    assign spi_mosi_o = tx_shift_reg[7];
    assign spi_csn_o = spi_csn_internal;
    
    // Status signals
    assign busy_o = (current_state != IDLE);
    assign done_o = (current_state == STOP && clk_counter == 0 && spi_clk_internal == cpol);
    
    // Data interface
    assign tx_ready_o = (current_state == IDLE);
    assign rx_data_o = rx_shift_reg;
    assign rx_valid_o = done_o;

endmodule 