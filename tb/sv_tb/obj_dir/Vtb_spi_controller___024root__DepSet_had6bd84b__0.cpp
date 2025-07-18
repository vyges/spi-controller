// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_controller.h for the primary calling header

#include "Vtb_spi_controller__pch.h"
#include "Vtb_spi_controller__Syms.h"
#include "Vtb_spi_controller___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_controller___024root___dump_triggers__act(Vtb_spi_controller___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_spi_controller___024root___eval_triggers__act(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_triggers__act\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_spi_controller__DOT__presetn)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_controller__DOT__presetn__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.tb_spi_controller__DOT__pclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_controller__DOT__pclk__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_clk_gated) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_controller__DOT__dut__DOT__spi_clk_gated__0))));
    vlSelfRef.__VactTriggered.setBit(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal__0 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_controller__DOT__presetn__0 
        = vlSelfRef.tb_spi_controller__DOT__presetn;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_controller__DOT__pclk__0 
        = vlSelfRef.tb_spi_controller__DOT__pclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_controller__DOT__dut__DOT__spi_clk_gated__0 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_clk_gated;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_spi_controller___024root___dump_triggers__act(vlSelf);
    }
#endif
}
