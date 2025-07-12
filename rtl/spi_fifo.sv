//=============================================================================
// Module Name: spi_fifo
//=============================================================================
// Description: Configurable FIFO (First-In-First-Out) buffer for SPI controller.
//              Supports configurable data width and depth with synchronous
//              read/write operations.
//
// Features:
// - Configurable data width and FIFO depth
// - Synchronous read/write operations
// - Full/empty status indicators
// - FIFO level counter
// - Overflow/underflow protection
//
// Author: Shivaram Mysore
// License: Apache-2.0
//=============================================================================

module spi_fifo #(
    parameter int DATA_WIDTH = 32,
    parameter int FIFO_DEPTH = 16
) (
    // Clock and Reset
    input  logic                    clk_i,      // Clock input
    input  logic                    reset_n_i,  // Reset input (active low)
    
    // Write Interface
    input  logic                    wr_i,       // Write enable
    input  logic [DATA_WIDTH-1:0]   data_i,     // Write data
    output logic                    full_o,     // FIFO full indicator
    
    // Read Interface
    input  logic                    rd_i,       // Read enable
    output logic [DATA_WIDTH-1:0]   data_o,     // Read data
    output logic                    empty_o,    // FIFO empty indicator
    
    // Status
    output logic [$clog2(FIFO_DEPTH):0] level_o // Current FIFO level
);

    // Local parameters
    localparam int ADDR_WIDTH = $clog2(FIFO_DEPTH);
    
    // Internal signals
    logic [DATA_WIDTH-1:0] fifo_mem [FIFO_DEPTH-1:0];  // FIFO memory array
    logic [ADDR_WIDTH-1:0] wr_ptr;                      // Write pointer
    logic [ADDR_WIDTH-1:0] rd_ptr;                      // Read pointer
    logic [ADDR_WIDTH:0]   count;                       // FIFO count
    
    // Write pointer logic
    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) begin
            wr_ptr <= '0;
        end else begin
            if (wr_i && !full_o) begin
                wr_ptr <= (wr_ptr == FIFO_DEPTH-1) ? '0 : wr_ptr + 1;
            end
        end
    end
    
    // Read pointer logic
    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) begin
            rd_ptr <= '0;
        end else begin
            if (rd_i && !empty_o) begin
                rd_ptr <= (rd_ptr == FIFO_DEPTH-1) ? '0 : rd_ptr + 1;
            end
        end
    end
    
    // FIFO memory write
    always_ff @(posedge clk_i) begin
        if (wr_i && !full_o) begin
            fifo_mem[wr_ptr] <= data_i;
        end
    end
    
    // FIFO memory read
    assign data_o = fifo_mem[rd_ptr];
    
    // FIFO count logic
    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) begin
            count <= '0;
        end else begin
            case ({wr_i && !full_o, rd_i && !empty_o})
                2'b10: count <= count + 1;  // Write only
                2'b01: count <= count - 1;  // Read only
                2'b11: count <= count;      // Read and write (no change)
                default: count <= count;    // No operation
            endcase
        end
    end
    
    // Status signals
    assign full_o = (count == FIFO_DEPTH);
    assign empty_o = (count == 0);
    assign level_o = count;

endmodule 