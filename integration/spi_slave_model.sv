//=============================================================================
// Module Name: spi_slave_model
//=============================================================================
// Description: Simple SPI slave model for testing SPI Controller integration
//              Provides a configurable slave device that can be used to
//              verify SPI controller functionality.
//
// Features:
// - Configurable data response
// - Multiple slave devices support
// - Error injection
// - Performance monitoring
// - Debug interface
//
// Author: Shivaram Mysore
// License: Apache-2.0
//=============================================================================

module spi_slave_model (
    // SPI Interface
    input  logic        spi_clk_i,       // SPI clock input
    input  logic        spi_mosi_i,      // SPI master out, slave in
    output logic        spi_miso_o,      // SPI master in, slave out
    input  logic        spi_csn_i,       // SPI chip select (active low)
    
    // Configuration Interface
    input  logic [7:0]  slave_id_i,      // Slave device ID
    input  logic [31:0] response_data_i, // Response data to send
    input  logic        inject_error_i,  // Inject error flag
    
    // Status Interface
    output logic [31:0] received_data_o, // Received data
    output logic        data_valid_o,    // Data valid flag
    output logic        error_flag_o,    // Error flag
    output logic [15:0] transaction_count_o, // Transaction counter
    
    // Debug Interface
    output logic [7:0]  debug_o          // Debug output
);

    // Internal signals
    logic [7:0]  rx_shift_reg;           // Receive shift register
    logic [7:0]  tx_shift_reg;           // Transmit shift register
    logic [2:0]  bit_counter;            // Bit counter
    logic        spi_clk_prev;           // Previous SPI clock
    logic        spi_csn_prev;           // Previous chip select
    logic [15:0] transaction_count;      // Transaction counter
    logic [31:0] received_data;          // Received data buffer
    logic        data_valid;             // Data valid flag
    logic        error_flag;             // Error flag
    
    // SPI clock edge detection
    always_ff @(posedge spi_clk_i) begin
        spi_clk_prev <= spi_clk_i;
        spi_csn_prev <= spi_csn_i;
    end
    
    // Chip select edge detection
    logic csn_falling, csn_rising;
    assign csn_falling = spi_csn_prev && !spi_csn_i;
    assign csn_rising = !spi_csn_prev && spi_csn_i;
    
    // Bit counter
    always_ff @(posedge spi_clk_i or posedge csn_falling) begin
        if (csn_falling) begin
            bit_counter <= 3'b000;
        end else if (!spi_csn_i) begin
            bit_counter <= bit_counter + 1;
        end
    end
    
    // Receive shift register
    always_ff @(posedge spi_clk_i) begin
        if (!spi_csn_i) begin
            rx_shift_reg <= {rx_shift_reg[6:0], spi_mosi_i};
        end
    end
    
    // Transmit shift register
    always_ff @(posedge spi_clk_i) begin
        if (csn_falling) begin
            tx_shift_reg <= response_data_i[7:0];
        end else if (!spi_csn_i) begin
            tx_shift_reg <= {tx_shift_reg[6:0], 1'b0};
        end
    end
    
    // SPI MISO output
    assign spi_miso_o = (!spi_csn_i) ? tx_shift_reg[7] : 1'bz;
    
    // Transaction completion detection
    always_ff @(posedge spi_clk_i) begin
        if (csn_rising) begin
            if (bit_counter == 3'b111) begin
                received_data <= {received_data[23:0], rx_shift_reg};
                data_valid <= 1'b1;
                transaction_count <= transaction_count + 1;
                
                // Error injection
                if (inject_error_i) begin
                    error_flag <= 1'b1;
                end
            end
        end else begin
            data_valid <= 1'b0;
            error_flag <= 1'b0;
        end
    end
    
    // Output assignments
    assign received_data_o = received_data;
    assign data_valid_o = data_valid;
    assign error_flag_o = error_flag;
    assign transaction_count_o = transaction_count;
    
    // Debug output
    assign debug_o = {
        error_flag,          // [7]
        data_valid,          // [6]
        spi_csn_i,           // [5]
        spi_mosi_i,          // [4]
        spi_miso_o,          // [3]
        bit_counter[2],      // [2]
        bit_counter[1],      // [1]
        bit_counter[0]       // [0]
    };

endmodule

// SPI Slave Device Array (Multiple Slaves)
module spi_slave_array (
    // SPI Interface
    input  logic        spi_clk_i,       // SPI clock input
    input  logic        spi_mosi_i,      // SPI master out, slave in
    output logic        spi_miso_o,      // SPI master in, slave out
    input  logic [3:0]  spi_csn_i,       // SPI chip select (active low)
    
    // Configuration Interface
    input  logic [31:0] response_data_0_i, // Slave 0 response data
    input  logic [31:0] response_data_1_i, // Slave 1 response data
    input  logic [31:0] response_data_2_i, // Slave 2 response data
    input  logic [31:0] response_data_3_i, // Slave 3 response data
    
    // Status Interface
    output logic [31:0] received_data_0_o, // Slave 0 received data
    output logic [31:0] received_data_1_o, // Slave 1 received data
    output logic [31:0] received_data_2_o, // Slave 2 received data
    output logic [31:0] received_data_3_o, // Slave 3 received data
    output logic [3:0]  data_valid_o,      // Data valid flags
    output logic [3:0]  error_flag_o       // Error flags
);

    // Individual slave instances
    spi_slave_model slave_0 (
        .spi_clk_i(spi_clk_i),
        .spi_mosi_i(spi_mosi_i),
        .spi_miso_o(slave_miso[0]),
        .spi_csn_i(spi_csn_i[0]),
        .slave_id_i(8'h00),
        .response_data_i(response_data_0_i),
        .inject_error_i(1'b0),
        .received_data_o(received_data_0_o),
        .data_valid_o(data_valid_o[0]),
        .error_flag_o(error_flag_o[0])
    );
    
    spi_slave_model slave_1 (
        .spi_clk_i(spi_clk_i),
        .spi_mosi_i(spi_mosi_i),
        .spi_miso_o(slave_miso[1]),
        .spi_csn_i(spi_csn_i[1]),
        .slave_id_i(8'h01),
        .response_data_i(response_data_1_i),
        .inject_error_i(1'b0),
        .received_data_o(received_data_1_o),
        .data_valid_o(data_valid_o[1]),
        .error_flag_o(error_flag_o[1])
    );
    
    spi_slave_model slave_2 (
        .spi_clk_i(spi_clk_i),
        .spi_mosi_i(spi_mosi_i),
        .spi_miso_o(slave_miso[2]),
        .spi_csn_i(spi_csn_i[2]),
        .slave_id_i(8'h02),
        .response_data_i(response_data_2_i),
        .inject_error_i(1'b0),
        .received_data_o(received_data_2_o),
        .data_valid_o(data_valid_o[2]),
        .error_flag_o(error_flag_o[2])
    );
    
    spi_slave_model slave_3 (
        .spi_clk_i(spi_clk_i),
        .spi_mosi_i(spi_mosi_i),
        .spi_miso_o(slave_miso[3]),
        .spi_csn_i(spi_csn_i[3]),
        .slave_id_i(8'h03),
        .response_data_i(response_data_3_i),
        .inject_error_i(1'b0),
        .received_data_o(received_data_3_o),
        .data_valid_o(data_valid_o[3]),
        .error_flag_o(error_flag_o[3])
    );
    
    // MISO output multiplexing
    logic [3:0] slave_miso;
    assign spi_miso_o = (spi_csn_i == 4'b1110) ? slave_miso[0] :
                       (spi_csn_i == 4'b1101) ? slave_miso[1] :
                       (spi_csn_i == 4'b1011) ? slave_miso[2] :
                       (spi_csn_i == 4'b0111) ? slave_miso[3] : 1'bz;

endmodule 