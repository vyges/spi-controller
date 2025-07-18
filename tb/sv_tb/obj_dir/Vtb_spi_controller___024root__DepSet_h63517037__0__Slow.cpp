// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_controller.h for the primary calling header

#include "Vtb_spi_controller__pch.h"
#include "Vtb_spi_controller___024root.h"

VL_ATTR_COLD void Vtb_spi_controller___024root___eval_static(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_static\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal__0 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_controller__DOT__presetn__0 
        = vlSelfRef.tb_spi_controller__DOT__presetn;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_controller__DOT__pclk__0 
        = vlSelfRef.tb_spi_controller__DOT__pclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_controller__DOT__dut__DOT__spi_clk_gated__0 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_clk_gated;
}

VL_ATTR_COLD void Vtb_spi_controller___024root___eval_final(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_final\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_controller___024root___dump_triggers__stl(Vtb_spi_controller___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_spi_controller___024root___eval_phase__stl(Vtb_spi_controller___024root* vlSelf);

VL_ATTR_COLD void Vtb_spi_controller___024root___eval_settle(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_settle\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_spi_controller___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_spi_controller.sv", 22, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_spi_controller___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_controller___024root___dump_triggers__stl(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___dump_triggers__stl\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_spi_controller___024root___stl_sequent__TOP__0(Vtb_spi_controller___024root* vlSelf);
VL_ATTR_COLD void Vtb_spi_controller___024root____Vm_traceActivitySetAll(Vtb_spi_controller___024root* vlSelf);

VL_ATTR_COLD void Vtb_spi_controller___024root___eval_stl(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_stl\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_spi_controller___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_spi_controller___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_spi_controller___024root___stl_sequent__TOP__0(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___stl_sequent__TOP__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_full 
        = (0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count));
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_empty 
        = (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count));
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_full 
        = (0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count));
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_empty 
        = (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count));
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_clk_gated 
        = ((~ ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
               & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                   >> 7U) & ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count)) 
                             & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)))))) 
           & (IData)(vlSelfRef.tb_spi_controller__DOT__pclk));
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr 
        = ((4U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
           & ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)) 
              & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                 == (1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                           >> 1U)))));
    vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_valid_i 
        = ((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)) 
           & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
              >> 1U));
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_overflow 
        = ((0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)) 
           & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr));
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd 
        = ((IData)(vlSelfRef.tb_spi_controller__DOT__penable) 
           & ((IData)(vlSelfRef.tb_spi_controller__DOT__psel) 
              & ((~ (IData)(vlSelfRef.tb_spi_controller__DOT__pwrite)) 
                 & (0xcU == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr)))));
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr_enabled 
        = ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr) 
           & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
              >> 2U));
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state;
    if ((4U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
        if ((2U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state = 0U;
        } else if (((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)) 
                    & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                       == (1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                                 >> 1U))))) {
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
            if ((((7U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter)) 
                  & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) 
                 & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                    == (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                               >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg))))) {
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state = 4U;
            }
        } else if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter) 
                    >= (0xffU & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                                 >> 8U)))) {
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state 
            = ((0U == (0xffU & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                                >> 8U))) ? 3U : 2U);
    } else if ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_valid_i))) {
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state = 1U;
    }
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_underflow 
        = ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd) 
           & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count)));
    vlSelfRef.tb_spi_controller__DOT__prdata = ((0U 
                                                 == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                                 ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                                  ? 
                                                 (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count) 
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
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                                   ? 
                                                  vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__rd_ptr]
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                                    ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                                     ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                                      ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))
                                                       ? vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg
                                                       : 0U)))))));
}

VL_ATTR_COLD void Vtb_spi_controller___024root___eval_triggers__stl(Vtb_spi_controller___024root* vlSelf);

VL_ATTR_COLD bool Vtb_spi_controller___024root___eval_phase__stl(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_phase__stl\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_spi_controller___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_spi_controller___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_controller___024root___dump_triggers__act(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___dump_triggers__act\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_spi_controller.dut.spi_engine.spi_clk_internal)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_spi_controller.presetn)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_spi_controller.pclk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_spi_controller.dut.spi_clk_gated)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_controller___024root___dump_triggers__nba(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___dump_triggers__nba\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_spi_controller.dut.spi_engine.spi_clk_internal)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_spi_controller.presetn)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_spi_controller.pclk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_spi_controller.dut.spi_clk_gated)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_spi_controller___024root____Vm_traceActivitySetAll(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root____Vm_traceActivitySetAll\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
}

VL_ATTR_COLD void Vtb_spi_controller___024root___ctor_var_reset(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___ctor_var_reset\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_spi_controller__DOT__pclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15960962490327912230ull);
    vlSelf->tb_spi_controller__DOT__presetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7635694681471612500ull);
    vlSelf->tb_spi_controller__DOT__psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 330679780575286857ull);
    vlSelf->tb_spi_controller__DOT__penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9317812183919365141ull);
    vlSelf->tb_spi_controller__DOT__pwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3906773235385230713ull);
    vlSelf->tb_spi_controller__DOT__paddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16863180985508858794ull);
    vlSelf->tb_spi_controller__DOT__pwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9363586382855903782ull);
    vlSelf->tb_spi_controller__DOT__prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1353065388794354310ull);
    vlSelf->tb_spi_controller__DOT__spi_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7372211118392041272ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_spi_controller__DOT__test_data[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15601538044258486866ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_spi_controller__DOT__received_data[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9938571010402389384ull);
    }
    vlSelf->tb_spi_controller__DOT__test_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12507029076349240758ull);
    vlSelf->tb_spi_controller__DOT__pass_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17953351081801559165ull);
    vlSelf->tb_spi_controller__DOT__fail_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4212616345666370970ull);
    vlSelf->tb_spi_controller__DOT__status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 412571091590659754ull);
    vlSelf->tb_spi_controller__DOT__interrupt_status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6021840083429604671ull);
    vlSelf->tb_spi_controller__DOT__start_time = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9911404705715435697ull);
    vlSelf->tb_spi_controller__DOT__end_time = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1510164972060032946ull);
    vlSelf->tb_spi_controller__DOT__cycle_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6109166926192580694ull);
    vlSelf->tb_spi_controller__DOT__spi_mode_test = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14844545160234479986ull);
    vlSelf->tb_spi_controller__DOT__fifo_overflow_detected = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11917246675195731288ull);
    vlSelf->tb_spi_controller__DOT__fifo_underflow_detected = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6463139660308286479ull);
    vlSelf->tb_spi_controller__DOT__interrupt_generated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 181432607892108144ull);
    vlSelf->tb_spi_controller__DOT__error_detected = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14900700575889302758ull);
    vlSelf->tb_spi_controller__DOT__timeout_detected = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9841268937493564645ull);
    vlSelf->tb_spi_controller__DOT__loopback_tested = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13312541222522055395ull);
    vlSelf->tb_spi_controller__DOT__cs_delay_tested = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5790635358294099423ull);
    vlSelf->tb_spi_controller__DOT__slave_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2768939511457082612ull);
    vlSelf->tb_spi_controller__DOT__slave_rx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5668519008349389178ull);
    vlSelf->tb_spi_controller__DOT__slave_rx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17036719495965695088ull);
    vlSelf->tb_spi_controller__DOT__unnamedblk3__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10390296056013049509ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__ctrl_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7648696986968776865ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__txdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1651656883837990384ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__rxdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7776787071218345821ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__baud_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13987202240226433187ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__fifo_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3880304881681084415ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__int_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 852390961579944012ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__mode_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9560772383828290981ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__tx_fifo_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6004291720975473033ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__tx_fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2396087100006945501ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__tx_fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9457160492566615905ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__rx_fifo_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17526695496018140023ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__rx_fifo_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 44557834419883175ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__rx_fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16762068912579415987ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__rx_fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10263085816542221533ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__spi_tx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4457040739074104741ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__spi_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16981342261311168224ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__spi_data_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17966641080595476402ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__tx_fifo_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2125851721309132598ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__rx_fifo_underflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 252030067787192041ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__spi_timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9014255829786455270ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__timeout_counter = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10052168792011715191ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__retry_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 238374412938538342ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__recovery_in_progress = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6288695023195827614ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__spi_clk_gated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7862598203681988217ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11495810557478048477ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__rx_fifo_wr_enabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16777987090065638497ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17186604769566857875ull);
    }
    vlSelf->tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13759219237342718161ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15087512260492511131ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9641437285085707235ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17583140213986619670ull);
    }
    vlSelf->tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14851275624395952755ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 366142619653315190ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6950578439779030274ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18023982789766321045ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5948655783918332483ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14978261660063415769ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6107408893856939798ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4394576625755678954ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8824993204687485637ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4502298934949930221ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2285293739144947561ull);
    vlSelf->tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16505651985215325597ull);
    vlSelf->__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3533428302613683357ull);
    vlSelf->__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14092661238263089009ull);
    vlSelf->__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13563238143466320263ull);
    vlSelf->__Vdly__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 165483126093277958ull);
    vlSelf->__Vdly__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11795197523002947964ull);
    vlSelf->__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1719509770409294464ull);
    vlSelf->__VdlyVal__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1017876002685237521ull);
    vlSelf->__VdlyDim0__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem__v0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14000036763816077168ull);
    vlSelf->__VdlySet__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4805163073291372243ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_controller__DOT__presetn__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3505429756024282229ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_controller__DOT__pclk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9649397374082288879ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_controller__DOT__dut__DOT__spi_clk_gated__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1982634688611548793ull);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
