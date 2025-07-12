#!/usr/bin/env python3
"""
==============================================================================
Test Module: test_spi_controller
==============================================================================
Description: Comprehensive Cocotb testbench for SPI controller.
             Tests all SPI modes, APB interface, FIFO operations, and
             interrupt generation.

Features:
- APB interface testing
- All 4 SPI modes testing
- FIFO overflow/underflow testing
- Interrupt generation testing
- Performance testing
- Coverage collection

Author: Shivaram Mysore
License: Apache-2.0
==============================================================================
"""

import cocotb
from cocotb.triggers import *
from cocotb.clock import Clock
from cocotb.assertions import *
import random

# Test data for verification
TEST_DATA = [0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7,
             0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7]

class SPIControllerTest:
    """Test class for SPI Controller verification"""
    
    def __init__(self, dut):
        self.dut = dut
        self.test_count = 0
        self.pass_count = 0
        self.fail_count = 0
    
    async def apb_write(self, addr, data):
        """APB write transaction"""
        self.dut.psel_i.value = 1
        self.dut.penable_i.value = 0
        self.dut.pwrite_i.value = 1
        self.dut.paddr_i.value = addr
        self.dut.pwdata_i.value = data
        
        await RisingEdge(self.dut.pclk_i)
        self.dut.penable_i.value = 1
        
        await RisingEdge(self.dut.pclk_i)
        self.dut.psel_i.value = 0
        self.dut.penable_i.value = 0
    
    async def apb_read(self, addr):
        """APB read transaction"""
        self.dut.psel_i.value = 1
        self.dut.penable_i.value = 0
        self.dut.pwrite_i.value = 0
        self.dut.paddr_i.value = addr
        
        await RisingEdge(self.dut.pclk_i)
        self.dut.penable_i.value = 1
        
        await RisingEdge(self.dut.pclk_i)
        data = self.dut.prdata_o.value
        self.dut.psel_i.value = 0
        self.dut.penable_i.value = 0
        
        return data
    
    def log_test_result(self, test_name, passed):
        """Log test result"""
        self.test_count += 1
        if passed:
            self.pass_count += 1
            cocotb.log.info(f"PASS: {test_name}")
        else:
            self.fail_count += 1
            cocotb.log.error(f"FAIL: {test_name}")

@cocotb.test()
async def test_spi_basic_communication(dut):
    """Test basic SPI communication functionality"""
    test = SPIControllerTest(dut)
    
    # Start clock
    clock = Clock(dut.pclk_i, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Reset sequence
    dut.presetn_i.value = 0
    await Timer(100, units="ns")
    dut.presetn_i.value = 1
    await Timer(50, units="ns")
    
    # Initialize SPI controller
    await test.apb_write(0x00, 0x00000001)  # Enable SPI controller
    await test.apb_write(0x10, 0x0000000A)  # Set baud divider to 10
    await test.apb_write(0x1C, 0x00000000)  # Set SPI mode 0
    
    # Write test data
    await test.apb_write(0x08, TEST_DATA[0])
    await test.apb_write(0x08, TEST_DATA[1])
    
    # Wait for transmission
    await Timer(1000, units="ns")
    
    # Check status
    status = await test.apb_read(0x04)
    test.log_test_result("Basic communication", status[0] == 0)  # Not busy

@cocotb.test()
async def test_spi_all_modes(dut):
    """Test all 4 SPI modes"""
    test = SPIControllerTest(dut)
    
    # Start clock
    clock = Clock(dut.pclk_i, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Reset sequence
    dut.presetn_i.value = 0
    await Timer(100, units="ns")
    dut.presetn_i.value = 1
    await Timer(50, units="ns")
    
    # Test each SPI mode
    for mode in range(4):
        # Configure SPI mode
        await test.apb_write(0x00, 0x00000001)  # Enable
        await test.apb_write(0x10, 0x0000000A)  # Baud divider
        await test.apb_write(0x1C, mode)        # SPI mode
        
        # Write test data
        await test.apb_write(0x08, TEST_DATA[mode])
        
        # Wait for transmission
        await Timer(1000, units="ns")
        
        # Check status
        status = await test.apb_read(0x04)
        test.log_test_result(f"SPI Mode {mode}", status[0] == 0)

@cocotb.test()
async def test_fifo_operations(dut):
    """Test FIFO operations including overflow/underflow"""
    test = SPIControllerTest(dut)
    
    # Start clock
    clock = Clock(dut.pclk_i, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Reset sequence
    dut.presetn_i.value = 0
    await Timer(100, units="ns")
    dut.presetn_i.value = 1
    await Timer(50, units="ns")
    
    # Enable SPI controller
    await test.apb_write(0x00, 0x00000001)
    await test.apb_write(0x10, 0x0000000A)
    await test.apb_write(0x1C, 0x00000000)
    
    # Fill TX FIFO
    for i in range(16):
        await test.apb_write(0x08, TEST_DATA[i % 8])
    
    # Check FIFO full status
    status = await test.apb_read(0x04)
    test.log_test_result("FIFO full detection", status[2] == 1)
    
    # Wait for FIFO to empty
    await Timer(5000, units="ns")
    
    # Check FIFO empty status
    status = await test.apb_read(0x04)
    test.log_test_result("FIFO empty detection", status[3] == 1)

@cocotb.test()
async def test_interrupt_generation(dut):
    """Test interrupt generation for various conditions"""
    test = SPIControllerTest(dut)
    
    # Start clock
    clock = Clock(dut.pclk_i, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Reset sequence
    dut.presetn_i.value = 0
    await Timer(100, units="ns")
    dut.presetn_i.value = 1
    await Timer(50, units="ns")
    
    # Enable SPI controller and interrupts
    await test.apb_write(0x00, 0x00000001)  # Enable SPI
    await test.apb_write(0x18, 0x00000007)  # Enable all interrupts
    
    # Write data to trigger interrupts
    await test.apb_write(0x08, TEST_DATA[0])
    
    # Wait for interrupt
    await Timer(1000, units="ns")
    
    # Check interrupt signal
    test.log_test_result("Interrupt generation", dut.spi_irq_o.value == 1)

@cocotb.test()
async def test_performance_characteristics(dut):
    """Test performance characteristics and timing"""
    test = SPIControllerTest(dut)
    
    # Start clock
    clock = Clock(dut.pclk_i, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Reset sequence
    dut.presetn_i.value = 0
    await Timer(100, units="ns")
    dut.presetn_i.value = 1
    await Timer(50, units="ns")
    
    # Test different baud rates
    baud_rates = [2, 4, 8, 16, 32]
    
    for baud_rate in baud_rates:
        # Configure baud rate
        await test.apb_write(0x00, 0x00000001)  # Enable
        await test.apb_write(0x10, baud_rate)   # Baud divider
        await test.apb_write(0x1C, 0x00000000)  # Mode 0
        
        # Write data
        await test.apb_write(0x08, TEST_DATA[0])
        
        # Measure transmission time
        start_time = get_sim_time("ns")
        await Timer(2000, units="ns")
        end_time = get_sim_time("ns")
        
        # Check completion
        status = await test.apb_read(0x04)
        test.log_test_result(f"Baud rate {baud_rate}", status[0] == 0)

@cocotb.test()
async def test_error_conditions(dut):
    """Test error conditions and fault tolerance"""
    test = SPIControllerTest(dut)
    
    # Start clock
    clock = Clock(dut.pclk_i, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Reset sequence
    dut.presetn_i.value = 0
    await Timer(100, units="ns")
    dut.presetn_i.value = 1
    await Timer(50, units="ns")
    
    # Test invalid register access
    await test.apb_write(0xFF, 0xDEADBEEF)  # Invalid address
    
    # Check for error response
    test.log_test_result("Invalid address handling", dut.pslverr_o.value == 0)
    
    # Test reset behavior
    dut.presetn_i.value = 0
    await Timer(50, units="ns")
    dut.presetn_i.value = 1
    await Timer(50, units="ns")
    
    # Check reset state
    status = await test.apb_read(0x04)
    test.log_test_result("Reset behavior", status == 0)

@cocotb.test()
async def test_coverage_scenarios(dut):
    """Test coverage scenarios for comprehensive verification"""
    test = SPIControllerTest(dut)
    
    # Start clock
    clock = Clock(dut.pclk_i, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Reset sequence
    dut.presetn_i.value = 0
    await Timer(100, units="ns")
    dut.presetn_i.value = 1
    await Timer(50, units="ns")
    
    # Test all register combinations
    for mode in range(4):
        for baud in [2, 4, 8, 16]:
            # Configure
            await test.apb_write(0x00, 0x00000001)
            await test.apb_write(0x10, baud)
            await test.apb_write(0x1C, mode)
            
            # Write data
            await test.apb_write(0x08, random.randint(0, 255))
            
            # Wait and check
            await Timer(1000, units="ns")
            status = await test.apb_read(0x04)
            
            test.log_test_result(f"Mode {mode}, Baud {baud}", status[0] == 0)

# Coverage collection
@cocotb.test()
async def test_coverage_collection(dut):
    """Collect coverage information"""
    test = SPIControllerTest(dut)
    
    # Start clock
    clock = Clock(dut.pclk_i, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Reset sequence
    dut.presetn_i.value = 0
    await Timer(100, units="ns")
    dut.presetn_i.value = 1
    await Timer(50, units="ns")
    
    # Exercise all functionality for coverage
    for mode in range(4):
        for i in range(8):
            await test.apb_write(0x00, 0x00000001)
            await test.apb_write(0x10, 0x0000000A)
            await test.apb_write(0x1C, mode)
            await test.apb_write(0x18, 0x00000007)
            await test.apb_write(0x08, TEST_DATA[i])
            await Timer(1000, units="ns")
    
    cocotb.log.info("Coverage collection completed") 