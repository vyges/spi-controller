// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_spi_controller__Syms.h"


VL_ATTR_COLD void Vtb_spi_controller___024root__trace_init_sub__TOP__0(Vtb_spi_controller___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root__trace_init_sub__TOP__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_spi_controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+176,0,"pclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"presetn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"penable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"pwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"paddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"pwdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+189,0,"pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"spi_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"spi_mosi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"spi_miso",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"spi_csn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+87,0,"spi_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("test_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+7+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("received_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+39+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+71,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+72,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+73,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+74,0,"status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"interrupt_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"start_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+77,0,"end_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+78,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+191,0,"spi_mode_test",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+79,0,"fifo_overflow_detected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"fifo_underflow_detected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"interrupt_generated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"error_detected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"timeout_detected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"loopback_tested",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"cs_delay_tested",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"slave_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+119,0,"slave_rx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+120,0,"slave_rx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+192,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+193,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+194,0,"MAX_FREQ_MHZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+176,0,"pclk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"presetn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"psel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"penable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"pwrite_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"paddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"pwdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"prdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+189,0,"pready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"pslverr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"spi_clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"spi_mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"spi_miso_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"spi_csn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+87,0,"spi_irq_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"ctrl_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"stat_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"txdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"rxdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"baud_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"fifo_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"int_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"mode_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"tx_fifo_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,0,"tx_fifo_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"tx_fifo_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"tx_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"tx_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"tx_fifo_level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+181,0,"rx_fifo_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+173,0,"rx_fifo_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"rx_fifo_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"rx_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"rx_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"rx_fifo_level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+170,0,"spi_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"spi_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"spi_tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+112,0,"spi_rx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+197,0,"spi_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"spi_data_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"tx_fifo_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"rx_fifo_underflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"spi_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"timeout_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+184,0,"timeout_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"error_recovery_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"auto_retry_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"retry_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+135,0,"max_retries",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+93,0,"recovery_in_progress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"power_down_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"clock_gated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"spi_clk_gated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"fifo_clk_gated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"slave_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+178,0,"cs_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+174,0,"rx_fifo_wr_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rx_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+199,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+193,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+176,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"level_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+200,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("fifo_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+95+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+138,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+94,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+131,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("spi_engine", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+192,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+186,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"tx_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"rx_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"cs_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"loopback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+145,0,"baud_div_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+146,0,"cs_delay_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+187,0,"tx_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+147,0,"tx_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"tx_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"rx_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+173,0,"rx_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"spi_clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"spi_mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"spi_miso_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"done_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"COUNTER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+201,0,"BIT_COUNTER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+114,0,"clk_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+111,0,"spi_clk_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"bit_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+171,0,"tx_shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+112,0,"rx_shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+116,0,"cs_delay_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+202,0,"cs_delay_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"cpol",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"cpha",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+175,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("tx_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+199,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+193,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+176,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+126,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"level_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+200,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("fifo_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+152+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+150,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+151,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+128,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+86,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_spi_controller___024root__trace_init_top(Vtb_spi_controller___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root__trace_init_top\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_spi_controller___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_spi_controller___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_spi_controller___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_spi_controller___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_spi_controller___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_spi_controller___024root__trace_register(Vtb_spi_controller___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root__trace_register\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_spi_controller___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_spi_controller___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_spi_controller___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_spi_controller___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_spi_controller___024root__trace_const_0_sub_0(Vtb_spi_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_spi_controller___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root__trace_const_0\n"); );
    // Init
    Vtb_spi_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_spi_controller___024root*>(voidSelf);
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_spi_controller___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_spi_controller___024root__trace_const_0_sub_0(Vtb_spi_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root__trace_const_0_sub_0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+189,(1U));
    bufp->fullBit(oldp+190,(0U));
    bufp->fullCData(oldp+191,(vlSelfRef.tb_spi_controller__DOT__spi_mode_test),2);
    bufp->fullIData(oldp+192,(8U),32);
    bufp->fullIData(oldp+193,(0x10U),32);
    bufp->fullIData(oldp+194,(0x64U),32);
    bufp->fullIData(oldp+195,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rxdata_reg),32);
    bufp->fullCData(oldp+196,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_tx_data),8);
    bufp->fullBit(oldp+197,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_data_valid));
    bufp->fullBit(oldp+198,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_data_ready));
    bufp->fullIData(oldp+199,(0x20U),32);
    bufp->fullIData(oldp+200,(4U),32);
    bufp->fullIData(oldp+201,(3U),32);
    bufp->fullBit(oldp+202,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_active));
}

VL_ATTR_COLD void Vtb_spi_controller___024root__trace_full_0_sub_0(Vtb_spi_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_spi_controller___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root__trace_full_0\n"); );
    // Init
    Vtb_spi_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_spi_controller___024root*>(voidSelf);
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_spi_controller___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_spi_controller___024root__trace_full_0_sub_0(Vtb_spi_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root__trace_full_0_sub_0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_spi_controller__DOT__presetn));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_spi_controller__DOT__psel));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_spi_controller__DOT__penable));
    bufp->fullBit(oldp+4,(vlSelfRef.tb_spi_controller__DOT__pwrite));
    bufp->fullCData(oldp+5,(vlSelfRef.tb_spi_controller__DOT__paddr),8);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_spi_controller__DOT__pwdata),32);
    bufp->fullCData(oldp+7,(vlSelfRef.tb_spi_controller__DOT__test_data[0]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.tb_spi_controller__DOT__test_data[1]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.tb_spi_controller__DOT__test_data[2]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.tb_spi_controller__DOT__test_data[3]),8);
    bufp->fullCData(oldp+11,(vlSelfRef.tb_spi_controller__DOT__test_data[4]),8);
    bufp->fullCData(oldp+12,(vlSelfRef.tb_spi_controller__DOT__test_data[5]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_spi_controller__DOT__test_data[6]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.tb_spi_controller__DOT__test_data[7]),8);
    bufp->fullCData(oldp+15,(vlSelfRef.tb_spi_controller__DOT__test_data[8]),8);
    bufp->fullCData(oldp+16,(vlSelfRef.tb_spi_controller__DOT__test_data[9]),8);
    bufp->fullCData(oldp+17,(vlSelfRef.tb_spi_controller__DOT__test_data[10]),8);
    bufp->fullCData(oldp+18,(vlSelfRef.tb_spi_controller__DOT__test_data[11]),8);
    bufp->fullCData(oldp+19,(vlSelfRef.tb_spi_controller__DOT__test_data[12]),8);
    bufp->fullCData(oldp+20,(vlSelfRef.tb_spi_controller__DOT__test_data[13]),8);
    bufp->fullCData(oldp+21,(vlSelfRef.tb_spi_controller__DOT__test_data[14]),8);
    bufp->fullCData(oldp+22,(vlSelfRef.tb_spi_controller__DOT__test_data[15]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.tb_spi_controller__DOT__test_data[16]),8);
    bufp->fullCData(oldp+24,(vlSelfRef.tb_spi_controller__DOT__test_data[17]),8);
    bufp->fullCData(oldp+25,(vlSelfRef.tb_spi_controller__DOT__test_data[18]),8);
    bufp->fullCData(oldp+26,(vlSelfRef.tb_spi_controller__DOT__test_data[19]),8);
    bufp->fullCData(oldp+27,(vlSelfRef.tb_spi_controller__DOT__test_data[20]),8);
    bufp->fullCData(oldp+28,(vlSelfRef.tb_spi_controller__DOT__test_data[21]),8);
    bufp->fullCData(oldp+29,(vlSelfRef.tb_spi_controller__DOT__test_data[22]),8);
    bufp->fullCData(oldp+30,(vlSelfRef.tb_spi_controller__DOT__test_data[23]),8);
    bufp->fullCData(oldp+31,(vlSelfRef.tb_spi_controller__DOT__test_data[24]),8);
    bufp->fullCData(oldp+32,(vlSelfRef.tb_spi_controller__DOT__test_data[25]),8);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_spi_controller__DOT__test_data[26]),8);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_spi_controller__DOT__test_data[27]),8);
    bufp->fullCData(oldp+35,(vlSelfRef.tb_spi_controller__DOT__test_data[28]),8);
    bufp->fullCData(oldp+36,(vlSelfRef.tb_spi_controller__DOT__test_data[29]),8);
    bufp->fullCData(oldp+37,(vlSelfRef.tb_spi_controller__DOT__test_data[30]),8);
    bufp->fullCData(oldp+38,(vlSelfRef.tb_spi_controller__DOT__test_data[31]),8);
    bufp->fullCData(oldp+39,(vlSelfRef.tb_spi_controller__DOT__received_data[0]),8);
    bufp->fullCData(oldp+40,(vlSelfRef.tb_spi_controller__DOT__received_data[1]),8);
    bufp->fullCData(oldp+41,(vlSelfRef.tb_spi_controller__DOT__received_data[2]),8);
    bufp->fullCData(oldp+42,(vlSelfRef.tb_spi_controller__DOT__received_data[3]),8);
    bufp->fullCData(oldp+43,(vlSelfRef.tb_spi_controller__DOT__received_data[4]),8);
    bufp->fullCData(oldp+44,(vlSelfRef.tb_spi_controller__DOT__received_data[5]),8);
    bufp->fullCData(oldp+45,(vlSelfRef.tb_spi_controller__DOT__received_data[6]),8);
    bufp->fullCData(oldp+46,(vlSelfRef.tb_spi_controller__DOT__received_data[7]),8);
    bufp->fullCData(oldp+47,(vlSelfRef.tb_spi_controller__DOT__received_data[8]),8);
    bufp->fullCData(oldp+48,(vlSelfRef.tb_spi_controller__DOT__received_data[9]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.tb_spi_controller__DOT__received_data[10]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.tb_spi_controller__DOT__received_data[11]),8);
    bufp->fullCData(oldp+51,(vlSelfRef.tb_spi_controller__DOT__received_data[12]),8);
    bufp->fullCData(oldp+52,(vlSelfRef.tb_spi_controller__DOT__received_data[13]),8);
    bufp->fullCData(oldp+53,(vlSelfRef.tb_spi_controller__DOT__received_data[14]),8);
    bufp->fullCData(oldp+54,(vlSelfRef.tb_spi_controller__DOT__received_data[15]),8);
    bufp->fullCData(oldp+55,(vlSelfRef.tb_spi_controller__DOT__received_data[16]),8);
    bufp->fullCData(oldp+56,(vlSelfRef.tb_spi_controller__DOT__received_data[17]),8);
    bufp->fullCData(oldp+57,(vlSelfRef.tb_spi_controller__DOT__received_data[18]),8);
    bufp->fullCData(oldp+58,(vlSelfRef.tb_spi_controller__DOT__received_data[19]),8);
    bufp->fullCData(oldp+59,(vlSelfRef.tb_spi_controller__DOT__received_data[20]),8);
    bufp->fullCData(oldp+60,(vlSelfRef.tb_spi_controller__DOT__received_data[21]),8);
    bufp->fullCData(oldp+61,(vlSelfRef.tb_spi_controller__DOT__received_data[22]),8);
    bufp->fullCData(oldp+62,(vlSelfRef.tb_spi_controller__DOT__received_data[23]),8);
    bufp->fullCData(oldp+63,(vlSelfRef.tb_spi_controller__DOT__received_data[24]),8);
    bufp->fullCData(oldp+64,(vlSelfRef.tb_spi_controller__DOT__received_data[25]),8);
    bufp->fullCData(oldp+65,(vlSelfRef.tb_spi_controller__DOT__received_data[26]),8);
    bufp->fullCData(oldp+66,(vlSelfRef.tb_spi_controller__DOT__received_data[27]),8);
    bufp->fullCData(oldp+67,(vlSelfRef.tb_spi_controller__DOT__received_data[28]),8);
    bufp->fullCData(oldp+68,(vlSelfRef.tb_spi_controller__DOT__received_data[29]),8);
    bufp->fullCData(oldp+69,(vlSelfRef.tb_spi_controller__DOT__received_data[30]),8);
    bufp->fullCData(oldp+70,(vlSelfRef.tb_spi_controller__DOT__received_data[31]),8);
    bufp->fullIData(oldp+71,(vlSelfRef.tb_spi_controller__DOT__test_count),32);
    bufp->fullIData(oldp+72,(vlSelfRef.tb_spi_controller__DOT__pass_count),32);
    bufp->fullIData(oldp+73,(vlSelfRef.tb_spi_controller__DOT__fail_count),32);
    bufp->fullIData(oldp+74,(vlSelfRef.tb_spi_controller__DOT__status),32);
    bufp->fullIData(oldp+75,(vlSelfRef.tb_spi_controller__DOT__interrupt_status),32);
    bufp->fullIData(oldp+76,(vlSelfRef.tb_spi_controller__DOT__start_time),32);
    bufp->fullIData(oldp+77,(vlSelfRef.tb_spi_controller__DOT__end_time),32);
    bufp->fullIData(oldp+78,(vlSelfRef.tb_spi_controller__DOT__cycle_count),32);
    bufp->fullBit(oldp+79,(vlSelfRef.tb_spi_controller__DOT__fifo_overflow_detected));
    bufp->fullBit(oldp+80,(vlSelfRef.tb_spi_controller__DOT__fifo_underflow_detected));
    bufp->fullBit(oldp+81,(vlSelfRef.tb_spi_controller__DOT__interrupt_generated));
    bufp->fullBit(oldp+82,(vlSelfRef.tb_spi_controller__DOT__error_detected));
    bufp->fullBit(oldp+83,(vlSelfRef.tb_spi_controller__DOT__timeout_detected));
    bufp->fullBit(oldp+84,(vlSelfRef.tb_spi_controller__DOT__loopback_tested));
    bufp->fullBit(oldp+85,(vlSelfRef.tb_spi_controller__DOT__cs_delay_tested));
    bufp->fullIData(oldp+86,(vlSelfRef.tb_spi_controller__DOT__unnamedblk3__DOT__i),32);
    bufp->fullBit(oldp+87,(vlSelfRef.tb_spi_controller__DOT__spi_irq));
    bufp->fullIData(oldp+88,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg),32);
    bufp->fullIData(oldp+89,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg),32);
    bufp->fullBit(oldp+90,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_timeout));
    bufp->fullSData(oldp+91,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__timeout_counter),16);
    bufp->fullCData(oldp+92,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__retry_count),4);
    bufp->fullBit(oldp+93,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__recovery_in_progress));
    bufp->fullCData(oldp+94,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__rd_ptr),4);
    bufp->fullIData(oldp+95,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[0]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[1]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[2]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[3]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[4]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[5]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[6]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[7]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[8]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[9]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[10]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[11]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[12]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[13]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[14]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[15]),32);
    bufp->fullBit(oldp+111,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal));
    bufp->fullCData(oldp+112,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg),8);
    bufp->fullIData(oldp+113,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg),32);
    bufp->fullSData(oldp+114,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter),16);
    bufp->fullCData(oldp+115,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter),3);
    bufp->fullCData(oldp+116,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter),8);
    bufp->fullBit(oldp+117,((1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
                                   >> 7U))));
    bufp->fullCData(oldp+118,(vlSelfRef.tb_spi_controller__DOT__slave_data),8);
    bufp->fullCData(oldp+119,(vlSelfRef.tb_spi_controller__DOT__slave_rx_data),8);
    bufp->fullBit(oldp+120,(vlSelfRef.tb_spi_controller__DOT__slave_rx_valid));
    bufp->fullIData(oldp+121,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg),32);
    bufp->fullIData(oldp+122,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg),32);
    bufp->fullIData(oldp+123,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg),32);
    bufp->fullIData(oldp+124,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg),32);
    bufp->fullBit(oldp+125,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr));
    bufp->fullBit(oldp+126,((0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count))));
    bufp->fullBit(oldp+127,((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count))));
    bufp->fullCData(oldp+128,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count),5);
    bufp->fullBit(oldp+129,((0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count))));
    bufp->fullBit(oldp+130,((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count))));
    bufp->fullCData(oldp+131,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count),5);
    bufp->fullBit(oldp+132,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_overflow));
    bufp->fullBit(oldp+133,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                   >> 0xcU))));
    bufp->fullBit(oldp+134,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                   >> 0xdU))));
    bufp->fullCData(oldp+135,((0xfU & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+136,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                   >> 7U))));
    bufp->fullCData(oldp+137,((0xfU & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                       >> 8U))),4);
    bufp->fullCData(oldp+138,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr),4);
    bufp->fullBit(oldp+139,((1U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg)));
    bufp->fullBit(oldp+140,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                   >> 1U))));
    bufp->fullBit(oldp+141,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                   >> 2U))));
    bufp->fullBit(oldp+142,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                   >> 3U))));
    bufp->fullBit(oldp+143,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                   >> 5U))));
    bufp->fullCData(oldp+144,((3U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg)),2);
    bufp->fullSData(oldp+145,((0xffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg)),16);
    bufp->fullCData(oldp+146,((0xffU & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                                        >> 8U))),8);
    bufp->fullBit(oldp+147,(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_valid_i));
    bufp->fullBit(oldp+148,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                                   >> 1U))));
    bufp->fullBit(oldp+149,((1U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg)));
    bufp->fullCData(oldp+150,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr),4);
    bufp->fullCData(oldp+151,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr),4);
    bufp->fullIData(oldp+152,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[0]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[1]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[2]),32);
    bufp->fullIData(oldp+155,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[3]),32);
    bufp->fullIData(oldp+156,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[4]),32);
    bufp->fullIData(oldp+157,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[5]),32);
    bufp->fullIData(oldp+158,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[6]),32);
    bufp->fullIData(oldp+159,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[7]),32);
    bufp->fullIData(oldp+160,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[8]),32);
    bufp->fullIData(oldp+161,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[9]),32);
    bufp->fullIData(oldp+162,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[10]),32);
    bufp->fullIData(oldp+163,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[11]),32);
    bufp->fullIData(oldp+164,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[12]),32);
    bufp->fullIData(oldp+165,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[13]),32);
    bufp->fullIData(oldp+166,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[14]),32);
    bufp->fullIData(oldp+167,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[15]),32);
    bufp->fullBit(oldp+168,((1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
                                   >> 7U))));
    bufp->fullBit(oldp+169,((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))));
    bufp->fullBit(oldp+170,((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))));
    bufp->fullCData(oldp+171,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg),8);
    bufp->fullCData(oldp+172,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state),3);
    bufp->fullBit(oldp+173,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr));
    bufp->fullBit(oldp+174,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr_enabled));
    bufp->fullCData(oldp+175,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state),3);
    bufp->fullBit(oldp+176,(vlSelfRef.tb_spi_controller__DOT__pclk));
    bufp->fullIData(oldp+177,(((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg
                                : ((4U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                    ? (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count) 
                                         << 8U) | (
                                                   ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_timeout) 
                                                    << 6U) 
                                                   | (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_underflow) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_overflow) 
                                                          << 4U) 
                                                         | (((0U 
                                                              != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                                                             << 2U) 
                                                            | (((0U 
                                                                 == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count)) 
                                                                << 1U) 
                                                               | (0x10U 
                                                                  == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)))))))))
                                    : ((0xcU == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                        ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__rd_ptr]
                                        : ((0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                            ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg
                                            : ((0x14U 
                                                == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                                ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg
                                                : (
                                                   (0x18U 
                                                    == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                                    ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg
                                                    : 
                                                   ((0x1cU 
                                                     == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                                     ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg
                                                     : 0U)))))))),32);
    bufp->fullCData(oldp+178,((((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                                & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                   >> 3U)) ? (0xfU 
                                              & (~ 
                                                 (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                                  >> 8U)))
                                : 0xfU)),4);
    bufp->fullIData(oldp+179,((((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count) 
                                << 0xdU) | (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count) 
                                             << 8U) 
                                            | (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_timeout) 
                                                << 6U) 
                                               | (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_underflow) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_overflow) 
                                                      << 4U) 
                                                     | (((0U 
                                                          != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                                                         << 2U) 
                                                        | (((0U 
                                                             == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count)) 
                                                            << 1U) 
                                                           | (0x10U 
                                                              == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)))))))))),32);
    bufp->fullIData(oldp+180,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr]),32);
    bufp->fullIData(oldp+181,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+182,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd));
    bufp->fullBit(oldp+183,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_underflow));
    bufp->fullBit(oldp+184,((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                             & (0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)))));
    bufp->fullBit(oldp+185,(((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                             & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                 >> 7U) & ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count)) 
                                           & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)))))));
    bufp->fullBit(oldp+186,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_clk_gated));
    bufp->fullCData(oldp+187,((0xffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr])),8);
    bufp->fullBit(oldp+188,((1U & ((0x20U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg)
                                    ? ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
                                       >> 7U) : ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
                                                 >> 7U)))));
}
