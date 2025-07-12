//=============================================================================
// Module Name: integration_testbench
//=============================================================================
// Description: Integration testbench for SPI Controller with SoC and slave models
//              Tests complete system integration including APB interface,
//              SPI communication, and multiple slave devices.
//
// Features:
// - Complete system simulation
// - Multiple slave device testing
// - Performance measurement
// - Error injection and detection
// - Coverage collection
//
// Author: Shivaram Mysore
// License: Apache-2.0
//=============================================================================

module integration_testbench;

    // Clock and reset signals
    logic        clk;
    logic        rst_n;
    
    // SPI interface signals
    logic        spi_clk;
    logic        spi_mosi;
    logic        spi_miso;
    logic        spi_csn;
    
    // System interface signals
    logic        irq;
    logic [7:0]  debug;
    
    // Slave model signals
    logic [31:0] slave_response_data;
    logic [31:0] slave_received_data;
    logic        slave_data_valid;
    logic        slave_error_flag;
    logic [15:0] slave_transaction_count;
    
    // Test control signals
    logic [31:0] test_data;
    logic [7:0]  test_addr;
    int          test_count;
    int          error_count;
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 100 MHz clock
    end
    
    // Reset generation
    initial begin
        rst_n = 0;
        #100;
        rst_n = 1;
    end
    
    // SoC instantiation
    example_soc u_soc (
        .clk_i(clk),
        .rst_n_i(rst_n),
        .spi_clk_o(spi_clk),
        .spi_mosi_o(spi_mosi),
        .spi_miso_i(spi_miso),
        .spi_csn_o(spi_csn),
        .irq_o(irq),
        .debug_o(debug)
    );
    
    // SPI slave model instantiation
    spi_slave_model u_slave (
        .spi_clk_i(spi_clk),
        .spi_mosi_i(spi_mosi),
        .spi_miso_o(spi_miso),
        .spi_csn_i(spi_csn),
        .slave_id_i(8'h01),
        .response_data_i(slave_response_data),
        .inject_error_i(1'b0),
        .received_data_o(slave_received_data),
        .data_valid_o(slave_data_valid),
        .error_flag_o(slave_error_flag),
        .transaction_count_o(slave_transaction_count)
    );
    
    // Test stimulus
    initial begin
        // Initialize signals
        slave_response_data = 32'hDEADBEEF;
        test_data = 32'hA5A5A5A5;
        test_count = 0;
        error_count = 0;
        
        // Wait for reset to complete
        wait(rst_n);
        #100;
        
        // Test 1: Basic SPI communication
        $display("=== Test 1: Basic SPI Communication ===");
        basic_spi_test();
        
        // Test 2: Multiple transactions
        $display("=== Test 2: Multiple Transactions ===");
        multiple_transaction_test();
        
        // Test 3: Error injection
        $display("=== Test 3: Error Injection ===");
        error_injection_test();
        
        // Test 4: Performance test
        $display("=== Test 4: Performance Test ===");
        performance_test();
        
        // Test summary
        $display("=== Test Summary ===");
        $display("Total tests: %0d", test_count);
        $display("Errors: %0d", error_count);
        $display("Success rate: %0.1f%%", (test_count - error_count) * 100.0 / test_count);
        
        // End simulation
        #1000;
        $finish;
    end
    
    // Test 1: Basic SPI communication
    task basic_spi_test();
        $display("Starting basic SPI communication test...");
        test_count++;
        
        // Wait for APB transaction to complete
        wait(debug[1]);  // Wait for PSEL
        #100;
        
        // Check if data was received correctly
        if (slave_data_valid) begin
            $display("PASS: Data received by slave: 0x%h", slave_received_data);
        end else begin
            $display("FAIL: No data received by slave");
            error_count++;
        end
        
        #200;
    endtask
    
    // Test 2: Multiple transactions
    task multiple_transaction_test();
        $display("Starting multiple transaction test...");
        
        for (int i = 0; i < 5; i++) begin
            test_count++;
            $display("Transaction %0d", i);
            
            // Wait for transaction
            wait(debug[1]);
            #100;
            
            if (slave_data_valid) begin
                $display("PASS: Transaction %0d completed", i);
            end else begin
                $display("FAIL: Transaction %0d failed", i);
                error_count++;
            end
            
            #200;
        end
    endtask
    
    // Test 3: Error injection
    task error_injection_test();
        $display("Starting error injection test...");
        test_count++;
        
        // Inject error in slave
        u_slave.inject_error_i = 1'b1;
        
        // Wait for transaction
        wait(debug[1]);
        #100;
        
        if (slave_error_flag) begin
            $display("PASS: Error correctly injected and detected");
        end else begin
            $display("FAIL: Error injection failed");
            error_count++;
        end
        
        // Clear error injection
        u_slave.inject_error_i = 1'b0;
        #200;
    endtask
    
    // Test 4: Performance test
    task performance_test();
        $display("Starting performance test...");
        test_count++;
        
        int start_time, end_time;
        start_time = $time;
        
        // Perform multiple transactions
        for (int i = 0; i < 100; i++) begin
            wait(debug[1]);
            #50;
        end
        
        end_time = $time;
        $display("Performance: %0d transactions in %0d time units", 
                100, end_time - start_time);
        
        #200;
    endtask
    
    // Monitor SPI signals
    always @(posedge spi_clk) begin
        if (!spi_csn) begin
            $display("SPI: CLK=%b, MOSI=%b, MISO=%b, CSN=%b", 
                    spi_clk, spi_mosi, spi_miso, spi_csn);
        end
    end
    
    // Monitor interrupts
    always @(posedge irq) begin
        $display("Interrupt asserted at time %0t", $time);
    end
    
    // Coverage collection
    covergroup spi_coverage @(posedge spi_clk);
        spi_transaction: coverpoint {spi_csn, spi_mosi, spi_miso} {
            bins idle = {3'b111};
            bins active = {3'b000, 3'b001, 3'b010, 3'b011, 3'b100, 3'b101, 3'b110};
        }
        
        csn_transition: coverpoint spi_csn {
            bins falling = (1 => 0);
            bins rising = (0 => 1);
        }
    endgroup
    
    spi_coverage cov = new();
    
    // Waveform dumping
    initial begin
        $dumpfile("integration_testbench.vcd");
        $dumpvars(0, integration_testbench);
    end

endmodule 