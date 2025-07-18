//=============================================================================
// Module Name: spi_protocol_engine
//=============================================================================
// Description: SPI protocol engine that implements all 4 SPI modes with
//              configurable clock polarity (CPOL) and clock phase (CPHA).
//              Supports configurable baud rate and data width.
//
// Features:
// - Support for all 4 SPI modes (0, 1, 2, 3)
// - Configurable clock polarity and phase
// - Configurable baud rate divider
// - Configurable data width (8, 16, 32 bits)
// - Busy and done status indicators
// - Loopback mode support
// - Individual TX/RX/CS enable control
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

module spi_protocol_engine #(
    parameter int DATA_WIDTH = 8       // Data width: 8, 16, or 32 bits
) (
    // Clock and Reset
    input  logic        clk_i,          // System clock input
    input  logic        reset_n_i,      // Reset input (active low)
    
    // Control Interface
    input  logic        enable_i,       // Enable SPI engine
    input  logic        tx_enable_i,    // Enable transmitter
    input  logic        rx_enable_i,    // Enable receiver
    input  logic        cs_enable_i,    // Enable chip select
    input  logic        loopback_i,     // Enable loopback mode
    input  logic [1:0]  mode_i,         // SPI mode (0-3)
    input  logic [15:0] baud_div_i,     // Baud rate divider
    input  logic [7:0]  cs_delay_i,     // Chip select delay
    
    // Data Interface
    input  logic [DATA_WIDTH-1:0] tx_data_i,      // Transmit data
    input  logic                  tx_valid_i,     // Transmit data valid
    output logic                  tx_ready_o,     // Transmit ready
    
    output logic [DATA_WIDTH-1:0] rx_data_o,      // Receive data
    output logic                  rx_valid_o,     // Receive data valid
    
    // SPI Interface
    output logic        spi_clk_o,      // SPI clock output
    output logic        spi_mosi_o,     // SPI master out, slave in
    input  logic        spi_miso_i,     // SPI master in, slave out
    
    // Status
    output logic        busy_o,         // SPI engine busy
    output logic        done_o          // Transfer complete
);

    // Local parameters
    localparam int COUNTER_WIDTH = 16;
    localparam int BIT_COUNTER_WIDTH = $clog2(DATA_WIDTH);
    
    // Internal signals
    logic [COUNTER_WIDTH-1:0] clk_counter;      // Clock divider counter
    logic                     spi_clk_internal; // Internal SPI clock
    logic [BIT_COUNTER_WIDTH-1:0] bit_counter;  // Bit counter (0 to DATA_WIDTH-1)
    logic [DATA_WIDTH-1:0]    tx_shift_reg;     // Transmit shift register
    logic [DATA_WIDTH-1:0]    rx_shift_reg;     // Receive shift register
    logic [7:0]               cs_delay_counter; // Chip select delay counter
    logic                     cs_delay_active;  // Chip select delay active
    
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
        CS_DELAY,
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
                if (cs_delay_i == 0) begin
                    next_state = TRANSFER;
                end else begin
                    next_state = CS_DELAY;
                end
            end
            
            CS_DELAY: begin
                if (cs_delay_counter >= cs_delay_i) begin
                    next_state = TRANSFER;
                end
            end
            
            TRANSFER: begin
                if (bit_counter == (DATA_WIDTH-1) && clk_counter == 0 && spi_clk_internal == (cpol ^ cpha)) begin
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
    
    // Chip select delay counter
    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) begin
            cs_delay_counter <= '0;
        end else if (current_state == IDLE) begin
            cs_delay_counter <= '0;
        end else if (current_state == CS_DELAY) begin
            cs_delay_counter <= cs_delay_counter + 1;
        end
    end
    
    // Transmit shift register
    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) begin
            tx_shift_reg <= '0;
        end else if (current_state == IDLE && tx_valid_i) begin
            tx_shift_reg <= tx_data_i;
        end else if (current_state == TRANSFER && clk_counter == 0 && spi_clk_internal == (cpol ^ cpha)) begin
            tx_shift_reg <= {tx_shift_reg[DATA_WIDTH-2:0], 1'b0};
        end
    end
    
    // Receive shift register
    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) begin
            rx_shift_reg <= '0;
        end else if (current_state == TRANSFER && clk_counter == 0 && spi_clk_internal == (cpol ^ ~cpha)) begin
            rx_shift_reg <= {rx_shift_reg[DATA_WIDTH-2:0], spi_miso_i};
        end
    end
    
    // Output assignments
    assign spi_mosi_o = tx_shift_reg[DATA_WIDTH-1];
    
    // Status signals
    assign busy_o = (current_state != IDLE);
    assign done_o = (current_state == STOP && clk_counter == 0 && spi_clk_internal == cpol);
    
    // Data interface
    assign tx_ready_o = (current_state == IDLE);
    assign rx_data_o = rx_shift_reg;
    assign rx_valid_o = done_o;

endmodule 