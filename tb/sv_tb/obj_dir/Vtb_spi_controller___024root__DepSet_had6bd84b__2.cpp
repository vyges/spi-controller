// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_controller.h for the primary calling header

#include "Vtb_spi_controller__pch.h"
#include "Vtb_spi_controller__Syms.h"
#include "Vtb_spi_controller___024root.h"

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_sequent__TOP__4(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_sequent__TOP__4\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((0x10U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_full))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_full 
            = (0x10U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count));
    }
    if (((0U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_empty))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_empty 
            = (0U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count));
    }
    if (((0U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_valid_i))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_valid_i 
            = (0U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count));
    }
    if ((1U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level 
            = ((0xfeU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)) 
               | (1U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level 
            = ((0xfdU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)) 
               | (2U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level 
            = ((0xfbU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)) 
               | (4U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level 
            = ((0xf7U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)) 
               | (8U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level 
            = ((0xefU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)) 
               | (0x10U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level 
            = ((0xdfU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)) 
               | (0x20U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level 
            = ((0xbfU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)) 
               | (0x40U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level 
            = ((0x7fU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_level)) 
               | (0x80U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)));
    }
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state;
    if ((4U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state = 0U;
        ++(vlSymsp->__Vcoverage[1233]);
    } else if ((2U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
            if (((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)) 
                 & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                    == (1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                              >> 1U))))) {
                ++(vlSymsp->__Vcoverage[1227]);
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1228]);
            }
            ++(vlSymsp->__Vcoverage[1232]);
        } else {
            if ((((7U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter)) 
                  & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) 
                 & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                    == (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                               >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg))))) {
                ++(vlSymsp->__Vcoverage[1220]);
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state = 3U;
            } else {
                ++(vlSymsp->__Vcoverage[1221]);
            }
            ++(vlSymsp->__Vcoverage[1226]);
        }
    } else if ((1U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
        if (((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)) 
             & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                == (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                           >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg))))) {
            ++(vlSymsp->__Vcoverage[1214]);
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state = 2U;
        } else {
            ++(vlSymsp->__Vcoverage[1215]);
        }
        ++(vlSymsp->__Vcoverage[1219]);
    } else {
        if ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
             & (0U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)))) {
            ++(vlSymsp->__Vcoverage[1208]);
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1209]);
        }
        ++(vlSymsp->__Vcoverage[1213]);
    }
    if ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
         & (0U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)))) {
        ++(vlSymsp->__Vcoverage[1210]);
    }
    if ((0U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count))) {
        ++(vlSymsp->__Vcoverage[1211]);
    }
    if ((1U & (~ vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[1212]);
    }
    if (((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)) 
         & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
            == (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                       >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg))))) {
        ++(vlSymsp->__Vcoverage[1216]);
    }
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
         != (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                    >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg)))) {
        ++(vlSymsp->__Vcoverage[1217]);
    }
    if ((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) {
        ++(vlSymsp->__Vcoverage[1218]);
    }
    if ((((7U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter)) 
          & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) 
         & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
            == (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                       >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg))))) {
        ++(vlSymsp->__Vcoverage[1222]);
    }
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
         != (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                    >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg)))) {
        ++(vlSymsp->__Vcoverage[1223]);
    }
    if ((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) {
        ++(vlSymsp->__Vcoverage[1224]);
    }
    if ((7U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter))) {
        ++(vlSymsp->__Vcoverage[1225]);
    }
    if (((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)) 
         & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
            == (1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                      >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1229]);
    }
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
         != (1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                   >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1230]);
    }
    if ((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) {
        ++(vlSymsp->__Vcoverage[1231]);
    }
    ++(vlSymsp->__Vcoverage[1234]);
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
        = (((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count) 
            << 0x10U) | (((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count) 
                          << 8U) | ((((0U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count)) 
                                      << 3U) | ((0x10U 
                                                 == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)) 
                                                << 2U)) 
                                    | ((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                                       << 1U))));
    if ((1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__next_state)))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__next_state 
            = ((6U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__next_state)) 
               | (1U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__next_state)))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__next_state 
            = ((5U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__next_state)) 
               | (2U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__next_state)))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__next_state 
            = ((3U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__next_state)) 
               | (4U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state)));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfffffffeU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (1U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfffffffdU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (2U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfffffffbU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (4U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfffffff7U & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (8U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xffffffefU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x10U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xffffffdfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x20U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xffffffbfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x40U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xffffff7fU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x80U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x100U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfffffeffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x100U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x200U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfffffdffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x200U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x400U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfffffbffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x400U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x800U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfffff7ffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x800U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x1000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xffffefffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x1000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x2000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xffffdfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x2000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x4000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xffffbfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x4000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x8000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xffff7fffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x8000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x10000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfffeffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x10000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x20000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfffdffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x20000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x40000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfffbffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x40000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x80000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfff7ffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x80000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x100000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xffefffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x100000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x200000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xffdfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x200000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x400000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xffbfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x400000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x800000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xff7fffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x800000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x1000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfeffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x1000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x2000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfdffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x2000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x4000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xfbffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x4000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x8000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xf7ffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x8000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x10000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xefffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x10000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x20000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xdfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x20000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if ((0x40000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0xbfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x40000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
    if (((vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg 
          ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg 
            = ((0x7fffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__stat_reg) 
               | (0x80000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg));
    }
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_comb__TOP__1(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_comb__TOP__1\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
        = vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__fifo_mem
        [vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__rd_ptr];
    vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i 
        = (0xffU & vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__fifo_mem
           [vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__rd_ptr]);
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
        = vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__fifo_mem
        [vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__rd_ptr];
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfffffffeU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (1U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfffffffdU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (2U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfffffffbU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (4U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfffffff7U & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (8U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xffffffefU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x10U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xffffffdfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x20U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xffffffbfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x40U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xffffff7fU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x80U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x100U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfffffeffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x100U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x200U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfffffdffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x200U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x400U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfffffbffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x400U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x800U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfffff7ffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x800U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x1000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xffffefffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x1000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x2000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xffffdfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x2000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x4000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xffffbfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x4000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x8000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xffff7fffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x8000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x10000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfffeffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x10000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x20000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfffdffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x20000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x40000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfffbffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x40000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x80000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfff7ffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x80000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x100000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xffefffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x100000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x200000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xffdfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x200000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x400000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xffbfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x400000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x800000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xff7fffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x800000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x1000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfeffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x1000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x2000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfdffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x2000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x4000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xfbffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x4000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x8000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xf7ffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x8000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x10000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xefffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x10000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x20000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xdfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x20000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((0x40000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0xbfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x40000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if (((vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data 
          ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data 
            = ((0x7fffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_data) 
               | (0x80000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_data));
    }
    if ((1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i 
            = ((0xfeU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)) 
               | (1U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i 
            = ((0xfdU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)) 
               | (2U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i 
            = ((0xfbU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)) 
               | (4U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i 
            = ((0xf7U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)) 
               | (8U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i 
            = ((0xefU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)) 
               | (0x10U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i 
            = ((0xdfU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)) 
               | (0x20U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i 
            = ((0xbfU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)) 
               | (0x40U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i 
            = ((0x7fU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_data_i)) 
               | (0x80U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i)));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfffffffeU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (1U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfffffffdU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (2U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfffffffbU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (4U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfffffff7U & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (8U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xffffffefU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x10U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xffffffdfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x20U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xffffffbfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x40U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xffffff7fU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x80U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x100U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfffffeffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x100U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x200U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfffffdffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x200U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x400U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfffffbffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x400U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x800U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfffff7ffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x800U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x1000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xffffefffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x1000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x2000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xffffdfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x2000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x4000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xffffbfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x4000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x8000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xffff7fffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x8000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x10000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfffeffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x10000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x20000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfffdffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x20000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x40000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfffbffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x40000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x80000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfff7ffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x80000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x100000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xffefffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x100000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x200000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xffdfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x200000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x400000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xffbfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x400000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x800000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xff7fffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x800000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x1000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfeffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x1000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x2000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfdffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x2000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x4000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xfbffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x4000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x8000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xf7ffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x8000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x10000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xefffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x10000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x20000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xdfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x20000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if ((0x40000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0xbfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x40000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
    if (((vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data 
          ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data 
            = ((0x7fffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_data) 
               | (0x80000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_data));
    }
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_comb__TOP__2(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_comb__TOP__2\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
        vlSelfRef.tb_spi_controller__DOT__prdata = vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg;
        ++(vlSymsp->__Vcoverage[1103]);
    } else if ((4U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelfRef.tb_spi_controller__DOT__prdata = vlSelfRef.tb_spi_controller__DOT__dut__DOT__stat_reg;
    } else if ((0xcU == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelfRef.tb_spi_controller__DOT__prdata = vlSelfRef.tb_spi_controller__DOT__dut__DOT__rxdata_reg;
    } else if ((0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelfRef.tb_spi_controller__DOT__prdata = vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg;
    } else if ((0x14U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelfRef.tb_spi_controller__DOT__prdata = vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg;
    } else if ((0x18U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelfRef.tb_spi_controller__DOT__prdata = vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg;
    } else if ((0x1cU == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelfRef.tb_spi_controller__DOT__prdata = vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg;
    } else {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelfRef.tb_spi_controller__DOT__prdata = 0U;
    }
    ++(vlSymsp->__Vcoverage[1111]);
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__prdata 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfffffffeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (1U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__prdata 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfffffffdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (2U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__prdata 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfffffffbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (4U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__prdata 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfffffff7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (8U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xffffffefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x10U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xffffffdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x20U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xffffffbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x40U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xffffff7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x80U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x100U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfffffeffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x100U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x200U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfffffdffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x200U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x400U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfffffbffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x400U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x800U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfffff7ffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x800U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x1000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xffffefffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x1000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x2000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xffffdfffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x2000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x4000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xffffbfffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x4000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x8000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xffff7fffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x8000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x10000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfffeffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x10000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x20000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfffdffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x20000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x40000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfffbffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x40000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x80000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfff7ffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x80000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x100000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xffefffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x100000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x200000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xffdfffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x200000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x400000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xffbfffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x400000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x800000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xff7fffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x800000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x1000000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfeffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x1000000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x2000000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfdffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x2000000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x4000000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xfbffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x4000000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x8000000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xf7ffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x8000000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x10000000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                        ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xefffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x10000000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x20000000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                        ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xdfffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x20000000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if ((0x40000000U & (vlSelfRef.tb_spi_controller__DOT__prdata 
                        ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0xbfffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x40000000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
    if (((vlSelfRef.tb_spi_controller__DOT__prdata 
          ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata 
            = ((0x7fffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__prdata) 
               | (0x80000000U & vlSelfRef.tb_spi_controller__DOT__prdata));
    }
}
