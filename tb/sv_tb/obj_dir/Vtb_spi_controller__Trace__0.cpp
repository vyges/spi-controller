// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_spi_controller__Syms.h"


void Vtb_spi_controller___024root__trace_chg_0_sub_0(Vtb_spi_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_spi_controller___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root__trace_chg_0\n"); );
    // Init
    Vtb_spi_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_spi_controller___024root*>(voidSelf);
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_spi_controller___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_spi_controller___024root__trace_chg_0_sub_0(Vtb_spi_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root__trace_chg_0_sub_0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_spi_controller__DOT__presetn));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_spi_controller__DOT__psel));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_spi_controller__DOT__penable));
        bufp->chgBit(oldp+3,(vlSelfRef.tb_spi_controller__DOT__pwrite));
        bufp->chgCData(oldp+4,(vlSelfRef.tb_spi_controller__DOT__paddr),8);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_spi_controller__DOT__pwdata),32);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_spi_controller__DOT__test_data[0]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_spi_controller__DOT__test_data[1]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_spi_controller__DOT__test_data[2]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.tb_spi_controller__DOT__test_data[3]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_spi_controller__DOT__test_data[4]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.tb_spi_controller__DOT__test_data[5]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_spi_controller__DOT__test_data[6]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_spi_controller__DOT__test_data[7]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.tb_spi_controller__DOT__test_data[8]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.tb_spi_controller__DOT__test_data[9]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.tb_spi_controller__DOT__test_data[10]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.tb_spi_controller__DOT__test_data[11]),8);
        bufp->chgCData(oldp+18,(vlSelfRef.tb_spi_controller__DOT__test_data[12]),8);
        bufp->chgCData(oldp+19,(vlSelfRef.tb_spi_controller__DOT__test_data[13]),8);
        bufp->chgCData(oldp+20,(vlSelfRef.tb_spi_controller__DOT__test_data[14]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_spi_controller__DOT__test_data[15]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.tb_spi_controller__DOT__test_data[16]),8);
        bufp->chgCData(oldp+23,(vlSelfRef.tb_spi_controller__DOT__test_data[17]),8);
        bufp->chgCData(oldp+24,(vlSelfRef.tb_spi_controller__DOT__test_data[18]),8);
        bufp->chgCData(oldp+25,(vlSelfRef.tb_spi_controller__DOT__test_data[19]),8);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_spi_controller__DOT__test_data[20]),8);
        bufp->chgCData(oldp+27,(vlSelfRef.tb_spi_controller__DOT__test_data[21]),8);
        bufp->chgCData(oldp+28,(vlSelfRef.tb_spi_controller__DOT__test_data[22]),8);
        bufp->chgCData(oldp+29,(vlSelfRef.tb_spi_controller__DOT__test_data[23]),8);
        bufp->chgCData(oldp+30,(vlSelfRef.tb_spi_controller__DOT__test_data[24]),8);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_spi_controller__DOT__test_data[25]),8);
        bufp->chgCData(oldp+32,(vlSelfRef.tb_spi_controller__DOT__test_data[26]),8);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_spi_controller__DOT__test_data[27]),8);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_spi_controller__DOT__test_data[28]),8);
        bufp->chgCData(oldp+35,(vlSelfRef.tb_spi_controller__DOT__test_data[29]),8);
        bufp->chgCData(oldp+36,(vlSelfRef.tb_spi_controller__DOT__test_data[30]),8);
        bufp->chgCData(oldp+37,(vlSelfRef.tb_spi_controller__DOT__test_data[31]),8);
        bufp->chgCData(oldp+38,(vlSelfRef.tb_spi_controller__DOT__received_data[0]),8);
        bufp->chgCData(oldp+39,(vlSelfRef.tb_spi_controller__DOT__received_data[1]),8);
        bufp->chgCData(oldp+40,(vlSelfRef.tb_spi_controller__DOT__received_data[2]),8);
        bufp->chgCData(oldp+41,(vlSelfRef.tb_spi_controller__DOT__received_data[3]),8);
        bufp->chgCData(oldp+42,(vlSelfRef.tb_spi_controller__DOT__received_data[4]),8);
        bufp->chgCData(oldp+43,(vlSelfRef.tb_spi_controller__DOT__received_data[5]),8);
        bufp->chgCData(oldp+44,(vlSelfRef.tb_spi_controller__DOT__received_data[6]),8);
        bufp->chgCData(oldp+45,(vlSelfRef.tb_spi_controller__DOT__received_data[7]),8);
        bufp->chgCData(oldp+46,(vlSelfRef.tb_spi_controller__DOT__received_data[8]),8);
        bufp->chgCData(oldp+47,(vlSelfRef.tb_spi_controller__DOT__received_data[9]),8);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_spi_controller__DOT__received_data[10]),8);
        bufp->chgCData(oldp+49,(vlSelfRef.tb_spi_controller__DOT__received_data[11]),8);
        bufp->chgCData(oldp+50,(vlSelfRef.tb_spi_controller__DOT__received_data[12]),8);
        bufp->chgCData(oldp+51,(vlSelfRef.tb_spi_controller__DOT__received_data[13]),8);
        bufp->chgCData(oldp+52,(vlSelfRef.tb_spi_controller__DOT__received_data[14]),8);
        bufp->chgCData(oldp+53,(vlSelfRef.tb_spi_controller__DOT__received_data[15]),8);
        bufp->chgCData(oldp+54,(vlSelfRef.tb_spi_controller__DOT__received_data[16]),8);
        bufp->chgCData(oldp+55,(vlSelfRef.tb_spi_controller__DOT__received_data[17]),8);
        bufp->chgCData(oldp+56,(vlSelfRef.tb_spi_controller__DOT__received_data[18]),8);
        bufp->chgCData(oldp+57,(vlSelfRef.tb_spi_controller__DOT__received_data[19]),8);
        bufp->chgCData(oldp+58,(vlSelfRef.tb_spi_controller__DOT__received_data[20]),8);
        bufp->chgCData(oldp+59,(vlSelfRef.tb_spi_controller__DOT__received_data[21]),8);
        bufp->chgCData(oldp+60,(vlSelfRef.tb_spi_controller__DOT__received_data[22]),8);
        bufp->chgCData(oldp+61,(vlSelfRef.tb_spi_controller__DOT__received_data[23]),8);
        bufp->chgCData(oldp+62,(vlSelfRef.tb_spi_controller__DOT__received_data[24]),8);
        bufp->chgCData(oldp+63,(vlSelfRef.tb_spi_controller__DOT__received_data[25]),8);
        bufp->chgCData(oldp+64,(vlSelfRef.tb_spi_controller__DOT__received_data[26]),8);
        bufp->chgCData(oldp+65,(vlSelfRef.tb_spi_controller__DOT__received_data[27]),8);
        bufp->chgCData(oldp+66,(vlSelfRef.tb_spi_controller__DOT__received_data[28]),8);
        bufp->chgCData(oldp+67,(vlSelfRef.tb_spi_controller__DOT__received_data[29]),8);
        bufp->chgCData(oldp+68,(vlSelfRef.tb_spi_controller__DOT__received_data[30]),8);
        bufp->chgCData(oldp+69,(vlSelfRef.tb_spi_controller__DOT__received_data[31]),8);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_spi_controller__DOT__test_count),32);
        bufp->chgIData(oldp+71,(vlSelfRef.tb_spi_controller__DOT__pass_count),32);
        bufp->chgIData(oldp+72,(vlSelfRef.tb_spi_controller__DOT__fail_count),32);
        bufp->chgIData(oldp+73,(vlSelfRef.tb_spi_controller__DOT__status),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tb_spi_controller__DOT__interrupt_status),32);
        bufp->chgIData(oldp+75,(vlSelfRef.tb_spi_controller__DOT__start_time),32);
        bufp->chgIData(oldp+76,(vlSelfRef.tb_spi_controller__DOT__end_time),32);
        bufp->chgIData(oldp+77,(vlSelfRef.tb_spi_controller__DOT__cycle_count),32);
        bufp->chgBit(oldp+78,(vlSelfRef.tb_spi_controller__DOT__fifo_overflow_detected));
        bufp->chgBit(oldp+79,(vlSelfRef.tb_spi_controller__DOT__fifo_underflow_detected));
        bufp->chgBit(oldp+80,(vlSelfRef.tb_spi_controller__DOT__interrupt_generated));
        bufp->chgBit(oldp+81,(vlSelfRef.tb_spi_controller__DOT__error_detected));
        bufp->chgBit(oldp+82,(vlSelfRef.tb_spi_controller__DOT__timeout_detected));
        bufp->chgBit(oldp+83,(vlSelfRef.tb_spi_controller__DOT__loopback_tested));
        bufp->chgBit(oldp+84,(vlSelfRef.tb_spi_controller__DOT__cs_delay_tested));
        bufp->chgIData(oldp+85,(vlSelfRef.tb_spi_controller__DOT__unnamedblk3__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+86,(vlSelfRef.tb_spi_controller__DOT__spi_irq));
        bufp->chgIData(oldp+87,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg),32);
        bufp->chgIData(oldp+88,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg),32);
        bufp->chgBit(oldp+89,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_timeout));
        bufp->chgSData(oldp+90,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__timeout_counter),16);
        bufp->chgCData(oldp+91,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__retry_count),4);
        bufp->chgBit(oldp+92,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__recovery_in_progress));
        bufp->chgCData(oldp+93,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__rd_ptr),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+94,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[0]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[1]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[2]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[3]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[4]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[5]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[6]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[7]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[8]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[9]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[10]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[11]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[12]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[13]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[14]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[15]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+110,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal));
        bufp->chgCData(oldp+111,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg),8);
        bufp->chgIData(oldp+112,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg),32);
        bufp->chgSData(oldp+113,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter),16);
        bufp->chgCData(oldp+114,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter),3);
        bufp->chgCData(oldp+115,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+116,((1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
                                      >> 7U))));
        bufp->chgCData(oldp+117,(vlSelfRef.tb_spi_controller__DOT__slave_data),8);
        bufp->chgCData(oldp+118,(vlSelfRef.tb_spi_controller__DOT__slave_rx_data),8);
        bufp->chgBit(oldp+119,(vlSelfRef.tb_spi_controller__DOT__slave_rx_valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+120,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg),32);
        bufp->chgIData(oldp+121,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg),32);
        bufp->chgIData(oldp+122,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg),32);
        bufp->chgIData(oldp+123,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg),32);
        bufp->chgBit(oldp+124,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr));
        bufp->chgBit(oldp+125,((0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count))));
        bufp->chgBit(oldp+126,((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count))));
        bufp->chgCData(oldp+127,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count),5);
        bufp->chgBit(oldp+128,((0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count))));
        bufp->chgBit(oldp+129,((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count))));
        bufp->chgCData(oldp+130,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count),5);
        bufp->chgBit(oldp+131,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_overflow));
        bufp->chgBit(oldp+132,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                      >> 0xcU))));
        bufp->chgBit(oldp+133,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                      >> 0xdU))));
        bufp->chgCData(oldp+134,((0xfU & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+135,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                      >> 7U))));
        bufp->chgCData(oldp+136,((0xfU & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                          >> 8U))),4);
        bufp->chgCData(oldp+137,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr),4);
        bufp->chgBit(oldp+138,((1U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg)));
        bufp->chgBit(oldp+139,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                      >> 1U))));
        bufp->chgBit(oldp+140,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                      >> 2U))));
        bufp->chgBit(oldp+141,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                      >> 3U))));
        bufp->chgBit(oldp+142,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                      >> 5U))));
        bufp->chgCData(oldp+143,((3U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg)),2);
        bufp->chgSData(oldp+144,((0xffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg)),16);
        bufp->chgCData(oldp+145,((0xffU & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                                           >> 8U))),8);
        bufp->chgBit(oldp+146,(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_valid_i));
        bufp->chgBit(oldp+147,((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                                      >> 1U))));
        bufp->chgBit(oldp+148,((1U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg)));
        bufp->chgCData(oldp+149,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr),4);
        bufp->chgCData(oldp+150,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+151,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[0]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[1]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[2]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[3]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[4]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[5]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[6]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[7]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[8]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[9]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[10]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[11]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[12]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[13]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[14]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[15]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+167,((1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
                                      >> 7U))));
        bufp->chgBit(oldp+168,((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))));
        bufp->chgBit(oldp+169,((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))));
        bufp->chgCData(oldp+170,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg),8);
        bufp->chgCData(oldp+171,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+172,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr));
        bufp->chgBit(oldp+173,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr_enabled));
        bufp->chgCData(oldp+174,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state),3);
    }
    bufp->chgBit(oldp+175,(vlSelfRef.tb_spi_controller__DOT__pclk));
    bufp->chgIData(oldp+176,(((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                               ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg
                               : ((4U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                   ? (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count) 
                                       << 0xdU) | (
                                                   ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count) 
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
                                                                     == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)))))))))
                                   : ((0xcU == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                       ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__rd_ptr]
                                       : ((0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                           ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg
                                           : ((0x14U 
                                               == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                               ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg
                                               : ((0x18U 
                                                   == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                                   ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg
                                                   : 
                                                  ((0x1cU 
                                                    == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                                    ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg
                                                    : 0U)))))))),32);
    bufp->chgCData(oldp+177,((((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                               & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                  >> 3U)) ? (0xfU & 
                                             (~ (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                                 >> 8U)))
                               : 0xfU)),4);
    bufp->chgIData(oldp+178,((((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count) 
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
    bufp->chgIData(oldp+179,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem
                             [vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr]),32);
    bufp->chgIData(oldp+180,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem
                             [vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__rd_ptr]),32);
    bufp->chgBit(oldp+181,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd));
    bufp->chgBit(oldp+182,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_underflow));
    bufp->chgBit(oldp+183,((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                            & (0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)))));
    bufp->chgBit(oldp+184,(((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                            & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                >> 7U) & ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count)) 
                                          & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)))))));
    bufp->chgBit(oldp+185,(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_clk_gated));
    bufp->chgCData(oldp+186,((0xffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr])),8);
    bufp->chgBit(oldp+187,((1U & ((0x20U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg)
                                   ? ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
                                      >> 7U) : ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
                                                >> 7U)))));
}

void Vtb_spi_controller___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root__trace_cleanup\n"); );
    // Init
    Vtb_spi_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_spi_controller___024root*>(voidSelf);
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
}
