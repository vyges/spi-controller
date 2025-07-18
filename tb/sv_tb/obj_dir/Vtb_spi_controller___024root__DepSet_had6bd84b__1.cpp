// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_controller.h for the primary calling header

#include "Vtb_spi_controller__pch.h"
#include "Vtb_spi_controller__Syms.h"
#include "Vtb_spi_controller___024root.h"

void Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__0(Vtb_spi_controller_spi_fifo* vlSelf);
void Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0(Vtb_spi_controller_spi_fifo* vlSelf);
void Vtb_spi_controller___024root___nba_sequent__TOP__0(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__1(Vtb_spi_controller_spi_fifo* vlSelf);
void Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__1(Vtb_spi_controller_spi_fifo* vlSelf);
void Vtb_spi_controller___024root___nba_sequent__TOP__1(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller___024root___act_sequent__TOP__0(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller_spi_fifo___act_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0(Vtb_spi_controller_spi_fifo* vlSelf);
void Vtb_spi_controller___024root___nba_comb__TOP__0(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller_spi_fifo___act_comb__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0(Vtb_spi_controller_spi_fifo* vlSelf);
void Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__3(Vtb_spi_controller_spi_fifo* vlSelf);
void Vtb_spi_controller___024root___nba_sequent__TOP__3(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__3(Vtb_spi_controller_spi_fifo* vlSelf);
void Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__4(Vtb_spi_controller_spi_fifo* vlSelf);
void Vtb_spi_controller___024root___nba_sequent__TOP__4(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller___024root___nba_comb__TOP__1(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller_spi_fifo___nba_comb__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__1(Vtb_spi_controller_spi_fifo* vlSelf);
void Vtb_spi_controller___024root___nba_comb__TOP__2(Vtb_spi_controller___024root* vlSelf);

void Vtb_spi_controller___024root___eval_nba(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_nba\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__0((&vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0((&vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo));
        Vtb_spi_controller___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__1((&vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__1((&vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___act_sequent__TOP__0(vlSelf);
        Vtb_spi_controller_spi_fifo___act_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0((&vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo));
        Vtb_spi_controller_spi_fifo___act_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0((&vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo));
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___nba_comb__TOP__0(vlSelf);
        Vtb_spi_controller_spi_fifo___act_comb__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0((&vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo));
        Vtb_spi_controller_spi_fifo___act_comb__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0((&vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo));
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__3((&vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo));
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
        Vtb_spi_controller___024root___nba_sequent__TOP__3(vlSelf);
        Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__3((&vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo));
        Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__4((&vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo));
        Vtb_spi_controller___024root___nba_sequent__TOP__4(vlSelf);
        Vtb_spi_controller___024root___nba_comb__TOP__1(vlSelf);
        Vtb_spi_controller_spi_fifo___nba_comb__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__1((&vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo));
        Vtb_spi_controller_spi_fifo___nba_comb__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__1((&vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo));
    }
    if ((0xeULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___nba_comb__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_sequent__TOP__0(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_sequent__TOP__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter;
    __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter = 0;
    // Body
    __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter;
    vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg;
    vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg;
    vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal;
    vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter;
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        if ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
            ++(vlSymsp->__Vcoverage[1241]);
            __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter = 0U;
        } else {
            if ((((2U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                  & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) 
                 & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                    == (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                               >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg))))) {
                __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter)));
                ++(vlSymsp->__Vcoverage[1235]);
            } else {
                ++(vlSymsp->__Vcoverage[1236]);
            }
            if ((((2U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                  & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) 
                 & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                    == (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                               >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg))))) {
                ++(vlSymsp->__Vcoverage[1237]);
            }
            if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                 != (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                            >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg)))) {
                ++(vlSymsp->__Vcoverage[1238]);
            }
            if ((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) {
                ++(vlSymsp->__Vcoverage[1239]);
            }
            if ((2U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
                ++(vlSymsp->__Vcoverage[1240]);
            }
        }
    } else {
        ++(vlSymsp->__Vcoverage[1242]);
        __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1243]);
    }
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1244]);
    }
    ++(vlSymsp->__Vcoverage[1245]);
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        if (((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
             & (0U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)))) {
            ++(vlSymsp->__Vcoverage[1252]);
            vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg 
                = vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_data_i;
        } else {
            if ((((2U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                  & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) 
                 & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                    == (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                               >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg))))) {
                vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg 
                    = (0xfeU & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
                                << 1U));
                ++(vlSymsp->__Vcoverage[1246]);
            } else {
                ++(vlSymsp->__Vcoverage[1247]);
            }
            if ((((2U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                  & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) 
                 & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                    == (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                               >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg))))) {
                ++(vlSymsp->__Vcoverage[1248]);
            }
            if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                 != (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                            >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg)))) {
                ++(vlSymsp->__Vcoverage[1249]);
            }
            if ((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) {
                ++(vlSymsp->__Vcoverage[1250]);
            }
            if ((2U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
                ++(vlSymsp->__Vcoverage[1251]);
            }
        }
        if (((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
             & (0U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)))) {
            ++(vlSymsp->__Vcoverage[1253]);
        }
        if ((0U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count))) {
            ++(vlSymsp->__Vcoverage[1254]);
        }
        if ((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
            ++(vlSymsp->__Vcoverage[1255]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1257]);
    }
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1258]);
    }
    ++(vlSymsp->__Vcoverage[1259]);
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        if ((((2U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
              & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) 
             & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                == (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                           >> 1U) ^ (~ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg)))))) {
            vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg 
                = ((0xfeU & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                             << 1U)) | (1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
                                              >> 7U)));
            ++(vlSymsp->__Vcoverage[1260]);
        } else {
            ++(vlSymsp->__Vcoverage[1261]);
        }
        if ((((2U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
              & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) 
             & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                == (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                           >> 1U) ^ (~ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg)))))) {
            ++(vlSymsp->__Vcoverage[1262]);
        }
        if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
             != (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                        >> 1U) ^ (~ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg))))) {
            ++(vlSymsp->__Vcoverage[1263]);
        }
        if ((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) {
            ++(vlSymsp->__Vcoverage[1264]);
        }
        if ((2U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
            ++(vlSymsp->__Vcoverage[1265]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1267]);
    }
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1268]);
    }
    ++(vlSymsp->__Vcoverage[1269]);
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        if ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
             & (0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)))) {
            if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
                 >= ((0xffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg) 
                     - (IData)(1U)))) {
                vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal 
                    = (1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal)));
                if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal)))) {
                    ++(vlSymsp->__Vcoverage[1184]);
                }
                vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter = 0U;
                if (vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) {
                    ++(vlSymsp->__Vcoverage[1185]);
                }
                ++(vlSymsp->__Vcoverage[1186]);
            } else {
                vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
                ++(vlSymsp->__Vcoverage[1187]);
            }
            ++(vlSymsp->__Vcoverage[1188]);
        } else {
            ++(vlSymsp->__Vcoverage[1189]);
            vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter = 0U;
            vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal 
                = (1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                         >> 1U));
        }
        if ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
             & (0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)))) {
            ++(vlSymsp->__Vcoverage[1190]);
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
            ++(vlSymsp->__Vcoverage[1191]);
        }
        if ((1U & (~ vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg))) {
            ++(vlSymsp->__Vcoverage[1192]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter = 0U;
        vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal 
            = (1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                     >> 1U));
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1194]);
    }
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1195]);
    }
    ++(vlSymsp->__Vcoverage[1196]);
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        if (((vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
              >> 2U) & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr))) {
            ++(vlSymsp->__Vcoverage[1125]);
        }
        vlSelfRef.tb_spi_controller__DOT__spi_irq = 
            (((vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
               & (0U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count))) 
              | ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                  >> 1U) & (0x10U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count)))) 
             | ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                 >> 2U) & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr)));
        if (((vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
              >> 1U) & (0x10U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count)))) {
            ++(vlSymsp->__Vcoverage[1126]);
        }
        if ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
             & (0U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)))) {
            ++(vlSymsp->__Vcoverage[1127]);
        }
        if ((((0U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)) 
              & (0x10U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count))) 
             & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr)))) {
            ++(vlSymsp->__Vcoverage[1128]);
        }
        if (((((0U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)) 
               & (0x10U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count))) 
              & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr))) 
             & (~ (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                   >> 3U)))) {
            ++(vlSymsp->__Vcoverage[1129]);
        }
        if ((((0U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)) 
              & (0x10U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count))) 
             & (~ (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                   >> 2U)))) {
            ++(vlSymsp->__Vcoverage[1130]);
        }
        if ((IData)(((0U == (0xcU & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg)) 
                     & ((0U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)) 
                        & (0x10U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count)))))) {
            ++(vlSymsp->__Vcoverage[1131]);
        }
        if ((((0U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count)) 
              & (~ (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                    >> 1U))) & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr)))) {
            ++(vlSymsp->__Vcoverage[1132]);
        }
        if ((IData)((((0U == (0xaU & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg)) 
                      & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr))) 
                     & (0U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count))))) {
            ++(vlSymsp->__Vcoverage[1133]);
        }
        if ((IData)(((0U == (6U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg)) 
                     & (0U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count))))) {
            ++(vlSymsp->__Vcoverage[1134]);
        }
        if ((IData)(((0U == (0xeU & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg)) 
                     & (0U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo.__PVT__count))))) {
            ++(vlSymsp->__Vcoverage[1135]);
        }
        if ((((~ vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg) 
              & (0x10U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count))) 
             & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr)))) {
            ++(vlSymsp->__Vcoverage[1136]);
        }
        if ((IData)((((0U == (9U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg)) 
                      & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr))) 
                     & (0x10U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count))))) {
            ++(vlSymsp->__Vcoverage[1137]);
        }
        if ((IData)(((0U == (5U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg)) 
                     & (0x10U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count))))) {
            ++(vlSymsp->__Vcoverage[1138]);
        }
        if ((IData)(((0U == (0xdU & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg)) 
                     & (0x10U != (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count))))) {
            ++(vlSymsp->__Vcoverage[1139]);
        }
        if ((IData)(((0U == (3U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg)) 
                     & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr))))) {
            ++(vlSymsp->__Vcoverage[1140]);
        }
        if ((1U & (IData)(((0U == (0xbU & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg)) 
                           & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr)))))) {
            ++(vlSymsp->__Vcoverage[1141]);
        }
        if ((IData)((0U == (7U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg)))) {
            ++(vlSymsp->__Vcoverage[1142]);
        }
        if ((IData)((0U == (0xfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg)))) {
            ++(vlSymsp->__Vcoverage[1143]);
        }
        ++(vlSymsp->__Vcoverage[1145]);
    } else {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelfRef.tb_spi_controller__DOT__spi_irq = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1146]);
    }
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1147]);
    }
    ++(vlSymsp->__Vcoverage[1148]);
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter 
        = __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter;
    if ((1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__bit_counter)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__bit_counter 
            = ((6U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__bit_counter)) 
               | (1U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__bit_counter)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__bit_counter 
            = ((5U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__bit_counter)) 
               | (2U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__bit_counter)))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__bit_counter 
            = ((3U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__bit_counter)) 
               | (4U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter)));
    }
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__spi_irq) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__spi_irq))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__spi_irq 
            = vlSelfRef.tb_spi_controller__DOT__spi_irq;
    }
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_sequent__TOP__1(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_sequent__TOP__1\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__tb_spi_controller__DOT__slave_data;
    __Vdly__tb_spi_controller__DOT__slave_data = 0;
    // Body
    __Vdly__tb_spi_controller__DOT__slave_data = vlSelfRef.tb_spi_controller__DOT__slave_data;
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        if (vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_csn_internal) {
            ++(vlSymsp->__Vcoverage[688]);
        } else {
            __Vdly__tb_spi_controller__DOT__slave_data 
                = ((0xfeU & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
                             << 1U)) | (1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
                                              >> 7U)));
            if (vlSelfRef.tb_spi_controller__DOT__slave_rx_valid) {
                ++(vlSymsp->__Vcoverage[685]);
                vlSelfRef.tb_spi_controller__DOT__slave_rx_data 
                    = vlSelfRef.tb_spi_controller__DOT__slave_data;
            } else {
                ++(vlSymsp->__Vcoverage[686]);
            }
            ++(vlSymsp->__Vcoverage[687]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_csn_internal)))) {
            ++(vlSymsp->__Vcoverage[689]);
        }
        if (vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_csn_internal) {
            ++(vlSymsp->__Vcoverage[690]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[691]);
        __Vdly__tb_spi_controller__DOT__slave_data = 0U;
        vlSelfRef.tb_spi_controller__DOT__slave_rx_data = 0U;
        vlSelfRef.tb_spi_controller__DOT__slave_rx_valid = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[692]);
    }
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[693]);
    }
    ++(vlSymsp->__Vcoverage[694]);
    vlSelfRef.tb_spi_controller__DOT__slave_data = __Vdly__tb_spi_controller__DOT__slave_data;
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_valid) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_valid))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_valid 
            = vlSelfRef.tb_spi_controller__DOT__slave_rx_valid;
    }
    if ((IData)((((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
                  >> 7U) ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__spi_miso)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__spi_miso 
            = (1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
                     >> 7U));
    }
    if ((1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data)))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data 
            = ((0xfeU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data)) 
               | (1U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_data)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data)))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data 
            = ((0xfdU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data)) 
               | (2U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_data)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data)))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data 
            = ((0xfbU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data)) 
               | (4U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_data)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data)))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data 
            = ((0xf7U & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data)) 
               | (8U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data)))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data 
            = ((0xefU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data)) 
               | (0x10U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data)))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data 
            = ((0xdfU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data)) 
               | (0x20U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data)))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data 
            = ((0xbfU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_data)) 
               | (0x40U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_data)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data 
            = ((0xfeU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)) 
               | (1U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data 
            = ((0xfdU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)) 
               | (2U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data 
            = ((0xfbU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)) 
               | (4U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data 
            = ((0xf7U & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)) 
               | (8U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data 
            = ((0xefU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)) 
               | (0x10U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data 
            = ((0xdfU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)) 
               | (0x20U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data 
            = ((0xbfU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)) 
               | (0x40U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data 
            = ((0x7fU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__slave_rx_data)) 
               | (0x80U & (IData)(vlSelfRef.tb_spi_controller__DOT__slave_rx_data)));
    }
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_comb__TOP__0(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_comb__TOP__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__presetn) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__presetn))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__presetn 
            = vlSelfRef.tb_spi_controller__DOT__presetn;
    }
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__psel) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__psel))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__psel 
            = vlSelfRef.tb_spi_controller__DOT__psel;
    }
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__penable) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__penable))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__penable 
            = vlSelfRef.tb_spi_controller__DOT__penable;
    }
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__pwrite) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwrite))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwrite 
            = vlSelfRef.tb_spi_controller__DOT__pwrite;
    }
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__fifo_overflow_detected) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__fifo_overflow_detected))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__fifo_overflow_detected 
            = vlSelfRef.tb_spi_controller__DOT__fifo_overflow_detected;
    }
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__fifo_underflow_detected) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__fifo_underflow_detected))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__fifo_underflow_detected 
            = vlSelfRef.tb_spi_controller__DOT__fifo_underflow_detected;
    }
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__interrupt_generated) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_generated))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_generated 
            = vlSelfRef.tb_spi_controller__DOT__interrupt_generated;
    }
    if ((1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__paddr) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr 
            = ((0xfeU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)) 
               | (1U & (IData)(vlSelfRef.tb_spi_controller__DOT__paddr)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_spi_controller__DOT__paddr) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr 
            = ((0xfdU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)) 
               | (2U & (IData)(vlSelfRef.tb_spi_controller__DOT__paddr)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_spi_controller__DOT__paddr) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr 
            = ((0xfbU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)) 
               | (4U & (IData)(vlSelfRef.tb_spi_controller__DOT__paddr)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_spi_controller__DOT__paddr) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr 
            = ((0xf7U & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)) 
               | (8U & (IData)(vlSelfRef.tb_spi_controller__DOT__paddr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_spi_controller__DOT__paddr) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr 
            = ((0xefU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)) 
               | (0x10U & (IData)(vlSelfRef.tb_spi_controller__DOT__paddr)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_spi_controller__DOT__paddr) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr 
            = ((0xdfU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)) 
               | (0x20U & (IData)(vlSelfRef.tb_spi_controller__DOT__paddr)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_spi_controller__DOT__paddr) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr 
            = ((0xbfU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)) 
               | (0x40U & (IData)(vlSelfRef.tb_spi_controller__DOT__paddr)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_spi_controller__DOT__paddr) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr 
            = ((0x7fU & (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__paddr)) 
               | (0x80U & (IData)(vlSelfRef.tb_spi_controller__DOT__paddr)));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfffffffeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (1U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfffffffdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (2U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfffffffbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (4U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfffffff7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (8U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xffffffefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x10U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xffffffdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x20U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xffffffbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x40U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xffffff7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x80U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x100U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfffffeffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x100U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x200U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfffffdffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x200U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x400U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfffffbffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x400U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x800U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfffff7ffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x800U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x1000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xffffefffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x1000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x2000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xffffdfffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x2000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x4000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xffffbfffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x4000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x8000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xffff7fffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x8000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x10000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfffeffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x10000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x20000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfffdffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x20000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x40000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfffbffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x40000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x80000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfff7ffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x80000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x100000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xffefffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x100000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x200000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xffdfffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x200000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x400000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xffbfffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x400000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x800000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xff7fffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x800000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x1000000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfeffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x1000000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x2000000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfdffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x2000000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x4000000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xfbffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x4000000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x8000000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xf7ffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x8000000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x10000000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                        ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xefffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x10000000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x20000000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                        ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xdfffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x20000000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((0x40000000U & (vlSelfRef.tb_spi_controller__DOT__pwdata 
                        ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0xbfffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x40000000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if (((vlSelfRef.tb_spi_controller__DOT__pwdata 
          ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata 
            = ((0x7fffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__pwdata) 
               | (0x80000000U & vlSelfRef.tb_spi_controller__DOT__pwdata));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__status 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfffffffeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (1U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__status 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfffffffdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (2U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__status 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfffffffbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (4U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__status 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfffffff7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (8U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__status 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xffffffefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x10U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__status 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xffffffdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x20U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__status 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xffffffbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x40U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__status 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xffffff7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x80U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x100U & (vlSelfRef.tb_spi_controller__DOT__status 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfffffeffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x100U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x200U & (vlSelfRef.tb_spi_controller__DOT__status 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfffffdffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x200U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x400U & (vlSelfRef.tb_spi_controller__DOT__status 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfffffbffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x400U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x800U & (vlSelfRef.tb_spi_controller__DOT__status 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfffff7ffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x800U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x1000U & (vlSelfRef.tb_spi_controller__DOT__status 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xffffefffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x1000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x2000U & (vlSelfRef.tb_spi_controller__DOT__status 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xffffdfffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x2000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x4000U & (vlSelfRef.tb_spi_controller__DOT__status 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xffffbfffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x4000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x8000U & (vlSelfRef.tb_spi_controller__DOT__status 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xffff7fffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x8000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x10000U & (vlSelfRef.tb_spi_controller__DOT__status 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfffeffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x10000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x20000U & (vlSelfRef.tb_spi_controller__DOT__status 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfffdffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x20000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x40000U & (vlSelfRef.tb_spi_controller__DOT__status 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfffbffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x40000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x80000U & (vlSelfRef.tb_spi_controller__DOT__status 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfff7ffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x80000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x100000U & (vlSelfRef.tb_spi_controller__DOT__status 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xffefffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x100000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x200000U & (vlSelfRef.tb_spi_controller__DOT__status 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xffdfffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x200000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x400000U & (vlSelfRef.tb_spi_controller__DOT__status 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xffbfffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x400000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x800000U & (vlSelfRef.tb_spi_controller__DOT__status 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xff7fffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x800000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x1000000U & (vlSelfRef.tb_spi_controller__DOT__status 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfeffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x1000000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x2000000U & (vlSelfRef.tb_spi_controller__DOT__status 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfdffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x2000000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x4000000U & (vlSelfRef.tb_spi_controller__DOT__status 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xfbffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x4000000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x8000000U & (vlSelfRef.tb_spi_controller__DOT__status 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xf7ffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x8000000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x10000000U & (vlSelfRef.tb_spi_controller__DOT__status 
                        ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xefffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x10000000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x20000000U & (vlSelfRef.tb_spi_controller__DOT__status 
                        ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xdfffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x20000000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((0x40000000U & (vlSelfRef.tb_spi_controller__DOT__status 
                        ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0xbfffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x40000000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if (((vlSelfRef.tb_spi_controller__DOT__status 
          ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__status 
            = ((0x7fffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__status) 
               | (0x80000000U & vlSelfRef.tb_spi_controller__DOT__status));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfffffffeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (1U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfffffffdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (2U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfffffffbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (4U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
               ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfffffff7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (8U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xffffffefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x10U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xffffffdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x20U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xffffffbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x40U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                  ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xffffff7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x80U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x100U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfffffeffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x100U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x200U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfffffdffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x200U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x400U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfffffbffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x400U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x800U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                   ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfffff7ffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x800U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x1000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xffffefffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x1000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x2000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xffffdfffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x2000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x4000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xffffbfffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x4000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x8000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                    ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xffff7fffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x8000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x10000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfffeffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x10000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x20000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfffdffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x20000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x40000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfffbffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x40000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x80000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                     ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfff7ffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x80000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x100000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xffefffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x100000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x200000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xffdfffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x200000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x400000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xffbfffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x400000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x800000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                      ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xff7fffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x800000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x1000000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfeffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x1000000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x2000000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfdffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x2000000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x4000000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xfbffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x4000000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x8000000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                       ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xf7ffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x8000000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x10000000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                        ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xefffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x10000000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x20000000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                        ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xdfffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x20000000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((0x40000000U & (vlSelfRef.tb_spi_controller__DOT__interrupt_status 
                        ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0xbfffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x40000000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if (((vlSelfRef.tb_spi_controller__DOT__interrupt_status 
          ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status 
            = ((0x7fffffffU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__interrupt_status) 
               | (0x80000000U & vlSelfRef.tb_spi_controller__DOT__interrupt_status));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [0U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [0U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [0U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [0U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [0U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [0U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [0U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [0U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [1U]))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[1U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [1U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [1U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [1U]))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[1U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [1U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [1U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [1U]))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[1U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [1U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [1U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [1U]))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[1U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [1U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [1U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[1U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [1U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [1U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[1U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [1U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [1U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[1U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [1U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [1U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[1U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [1U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [1U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [2U]))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[2U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [2U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [2U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [2U]))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[2U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [2U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [2U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [2U]))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[2U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [2U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [2U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [2U]))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[2U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [2U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [2U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[2U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [2U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [2U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[2U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [2U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [2U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[2U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [2U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [2U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[2U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [2U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [2U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [3U]))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[3U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [3U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [3U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [3U]))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[3U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [3U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [3U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [3U]))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[3U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [3U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [3U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [3U]))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[3U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [3U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [3U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[3U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [3U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [3U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[3U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [3U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [3U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[3U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [3U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [3U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[3U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [3U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [3U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [4U]))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[4U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [4U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [4U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [4U]))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[4U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [4U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [4U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [4U]))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[4U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [4U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [4U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [4U]))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[4U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [4U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [4U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[4U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [4U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [4U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[4U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [4U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [4U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[4U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [4U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [4U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[4U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [4U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [4U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [5U]))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[5U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [5U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [5U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [5U]))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[5U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [5U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [5U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [5U]))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[5U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [5U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [5U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [5U]))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[5U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [5U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [5U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[5U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [5U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [5U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[5U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [5U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [5U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[5U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [5U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [5U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[5U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [5U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [5U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [6U]))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[6U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [6U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [6U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [6U]))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[6U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [6U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [6U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [6U]))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[6U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [6U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [6U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [6U]))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[6U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [6U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [6U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[6U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [6U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [6U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[6U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [6U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [6U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[6U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [6U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [6U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[6U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [6U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [6U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [7U]))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[7U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [7U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [7U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [7U]))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[7U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [7U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [7U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [7U]))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[7U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [7U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [7U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [7U]))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[7U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [7U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [7U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[7U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [7U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [7U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[7U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [7U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [7U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[7U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [7U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [7U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[7U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [7U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [7U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [8U]))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[8U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [8U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [8U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [8U]))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[8U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [8U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [8U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [8U]))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[8U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [8U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [8U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [8U]))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[8U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [8U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [8U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[8U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [8U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [8U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[8U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [8U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [8U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[8U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [8U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [8U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[8U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [8U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [8U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [9U]))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[9U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [9U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [9U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [9U]))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[9U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [9U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [9U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [9U]))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[9U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [9U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [9U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [9U]))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[9U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [9U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [9U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[9U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [9U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [9U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[9U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [9U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [9U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[9U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [9U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [9U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[9U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [9U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                         [9U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xaU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xaU]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xaU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xaU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xaU]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xaU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xaU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xaU]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xaU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xaU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xaU]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xaU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xaU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xaU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xaU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xaU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xaU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xaU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xaU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xaU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xaU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xaU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xaU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xaU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xbU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xbU]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xbU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xbU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xbU]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xbU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xbU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xbU]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xbU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xbU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xbU]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xbU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xbU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xbU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xbU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xbU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xbU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xbU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xbU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xbU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xbU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xbU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xbU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xbU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xcU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xcU]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xcU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xcU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xcU]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xcU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xcU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xcU]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xcU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xcU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xcU]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xcU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xcU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xcU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xcU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xcU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xcU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xcU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xcU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xcU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xcU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xcU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xcU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xcU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xdU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xdU]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xdU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xdU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xdU]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xdU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xdU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xdU]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xdU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xdU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xdU]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xdU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xdU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xdU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xdU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xdU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xdU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xdU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xdU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xdU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xdU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xdU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xdU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xdU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xeU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xeU]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xeU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xeU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xeU]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xeU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xeU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xeU]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xeU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xeU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xeU]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xeU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xeU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xeU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xeU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xeU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xeU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xeU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xeU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xeU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xeU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xeU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xeU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xeU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xfU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xfU]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xfU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xfU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xfU]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xfU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xfU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xfU]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xfU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xfU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xfU]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xfU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xfU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xfU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xfU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xfU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xfU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xfU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xfU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xfU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xfU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0xfU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0xfU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                           [0xfU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x10U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x10U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x10U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x10U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x10U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x10U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x10U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x10U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x10U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x10U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x10U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x10U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x10U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x10U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x10U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x10U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x10U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x10U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x10U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x10U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x10U]))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x10U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x10U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x10U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x10U]))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x10U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x10U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x10U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x11U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x11U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x11U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x11U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x11U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x11U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x11U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x11U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x11U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x11U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x11U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x11U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x11U]))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x11U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x11U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x11U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x11U]))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x11U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x11U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x11U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x11U]))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x11U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x11U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x11U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x11U]))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x11U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x11U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x11U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x12U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x12U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x12U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x12U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x12U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x12U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x12U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x12U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x12U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x12U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x12U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x12U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x12U]))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x12U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x12U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x12U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x12U]))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x12U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x12U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x12U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x12U]))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x12U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x12U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x12U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x12U]))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x12U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x12U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x12U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x13U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x13U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x13U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x13U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x13U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x13U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x13U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x13U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x13U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x13U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x13U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x13U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x13U]))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x13U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x13U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x13U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x13U]))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x13U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x13U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x13U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x13U]))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x13U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x13U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x13U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x13U]))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x13U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x13U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x13U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x14U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x14U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x14U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x14U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x14U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x14U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x14U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x14U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x14U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x14U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x14U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x14U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x14U]))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x14U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x14U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x14U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x14U]))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x14U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x14U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x14U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x14U]))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x14U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x14U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x14U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x14U]))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x14U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x14U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x14U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x15U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x15U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x15U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x15U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x15U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x15U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x15U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x15U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x15U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x15U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x15U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x15U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x15U]))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x15U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x15U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x15U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x15U]))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x15U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x15U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x15U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x15U]))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x15U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x15U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x15U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x15U]))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x15U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x15U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x15U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x16U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x16U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x16U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x16U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x16U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x16U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x16U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x16U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x16U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x16U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x16U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x16U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x16U]))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x16U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x16U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x16U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x16U]))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x16U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x16U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x16U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x16U]))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x16U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x16U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x16U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x16U]))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x16U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x16U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x16U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x17U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x17U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x17U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x17U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x17U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x17U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x17U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x17U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x17U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x17U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x17U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x17U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x17U]))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x17U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x17U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x17U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x17U]))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x17U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x17U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x17U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x17U]))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x17U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x17U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x17U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x17U]))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x17U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x17U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x17U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x18U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x18U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x18U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x18U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x18U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x18U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x18U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x18U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x18U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x18U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x18U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x18U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x18U]))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x18U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x18U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x18U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x18U]))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x18U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x18U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x18U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x18U]))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x18U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x18U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x18U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x18U]))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x18U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x18U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x18U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x19U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x19U]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x19U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x19U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x19U]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x19U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x19U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x19U]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x19U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x19U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x19U]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x19U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x19U]))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x19U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x19U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x19U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x19U]))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x19U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x19U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x19U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x19U]))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x19U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x19U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x19U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x19U]))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x19U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x19U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x19U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1aU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1aU]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1aU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1aU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1aU]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1aU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1aU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1aU]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1aU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1aU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1aU]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1aU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1aU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1aU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1aU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1aU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1aU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1aU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1aU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1aU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1aU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1aU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1aU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1aU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1bU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1bU]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1bU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1bU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1bU]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1bU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1bU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1bU]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1bU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1bU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1bU]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1bU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1bU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1bU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1bU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1bU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1bU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1bU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1bU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1bU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1bU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1bU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1bU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1bU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1cU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1cU]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1cU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1cU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1cU]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1cU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1cU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1cU]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1cU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1cU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1cU]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1cU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1cU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1cU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1cU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1cU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1cU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1cU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1cU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1cU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1cU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1cU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1cU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1cU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1dU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1dU]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1dU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1dU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1dU]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1dU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1dU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1dU]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1dU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1dU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1dU]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1dU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1dU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1dU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1dU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1dU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1dU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1dU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1dU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1dU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1dU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1dU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1dU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1dU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1eU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1eU]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1eU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1eU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1eU]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1eU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1eU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1eU]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1eU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1eU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1eU]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1eU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1eU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1eU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1eU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1eU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1eU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1eU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1eU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1eU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1eU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1eU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1eU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1eU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1fU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1fU]) | (1U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1fU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1fU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1fU]) | (2U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1fU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1fU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1fU]) | (4U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1fU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__test_data
               [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1fU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1fU]) | (8U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1fU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1fU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1fU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1fU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1fU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1fU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1fU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1fU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1fU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1fU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__test_data
                  [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                  [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data[0x1fU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__test_data
                [0x1fU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__test_data
                            [0x1fU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [0U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [0U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [0U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [0U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [0U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [0U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [0U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [0U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [1U]))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[1U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [1U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [1U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [1U]))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[1U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [1U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [1U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [1U]))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[1U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [1U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [1U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [1U]))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[1U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [1U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [1U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[1U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [1U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [1U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[1U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [1U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [1U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[1U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [1U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [1U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [1U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[1U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [1U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [1U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [2U]))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[2U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [2U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [2U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [2U]))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[2U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [2U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [2U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [2U]))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[2U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [2U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [2U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [2U]))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[2U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [2U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [2U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[2U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [2U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [2U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[2U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [2U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [2U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[2U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [2U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [2U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [2U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[2U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [2U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [2U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [3U]))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[3U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [3U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [3U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [3U]))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[3U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [3U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [3U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [3U]))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[3U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [3U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [3U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [3U]))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[3U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [3U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [3U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[3U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [3U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [3U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[3U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [3U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [3U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[3U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [3U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [3U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [3U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[3U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [3U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [3U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [4U]))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[4U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [4U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [4U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [4U]))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[4U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [4U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [4U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [4U]))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[4U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [4U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [4U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [4U]))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[4U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [4U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [4U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[4U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [4U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [4U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[4U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [4U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [4U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[4U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [4U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [4U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [4U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[4U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [4U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [4U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [5U]))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[5U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [5U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [5U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [5U]))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[5U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [5U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [5U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [5U]))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[5U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [5U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [5U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [5U]))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[5U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [5U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [5U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[5U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [5U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [5U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[5U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [5U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [5U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[5U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [5U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [5U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [5U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[5U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [5U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [5U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [6U]))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[6U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [6U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [6U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [6U]))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[6U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [6U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [6U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [6U]))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[6U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [6U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [6U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [6U]))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[6U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [6U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [6U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[6U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [6U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [6U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[6U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [6U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [6U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[6U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [6U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [6U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [6U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[6U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [6U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [6U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [7U]))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[7U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [7U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [7U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [7U]))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[7U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [7U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [7U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [7U]))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[7U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [7U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [7U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [7U]))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[7U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [7U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [7U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[7U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [7U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [7U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[7U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [7U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [7U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[7U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [7U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [7U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [7U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[7U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [7U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [7U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [8U]))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[8U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [8U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [8U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [8U]))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[8U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [8U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [8U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [8U]))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[8U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [8U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [8U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [8U]))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[8U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [8U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [8U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[8U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [8U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [8U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[8U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [8U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [8U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[8U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [8U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [8U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [8U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[8U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [8U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [8U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [9U]))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[9U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [9U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [9U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [9U]))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[9U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [9U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [9U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [9U]))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[9U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [9U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [9U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [9U]))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[9U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [9U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [9U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[9U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [9U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [9U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[9U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [9U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [9U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[9U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [9U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [9U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [9U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[9U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [9U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                         [9U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xaU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xaU]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xaU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xaU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xaU]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xaU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xaU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xaU]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xaU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xaU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xaU]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xaU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xaU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xaU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xaU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xaU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xaU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xaU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xaU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xaU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xaU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xaU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xaU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xaU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xaU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xbU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xbU]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xbU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xbU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xbU]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xbU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xbU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xbU]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xbU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xbU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xbU]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xbU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xbU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xbU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xbU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xbU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xbU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xbU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xbU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xbU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xbU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xbU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xbU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xbU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xbU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xcU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xcU]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xcU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xcU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xcU]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xcU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xcU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xcU]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xcU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xcU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xcU]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xcU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xcU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xcU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xcU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xcU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xcU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xcU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xcU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xcU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xcU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xcU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xcU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xcU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xcU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xdU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xdU]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xdU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xdU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xdU]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xdU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xdU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xdU]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xdU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xdU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xdU]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xdU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xdU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xdU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xdU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xdU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xdU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xdU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xdU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xdU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xdU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xdU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xdU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xdU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xdU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xeU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xeU]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xeU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xeU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xeU]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xeU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xeU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xeU]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xeU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xeU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xeU]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xeU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xeU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xeU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xeU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xeU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xeU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xeU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xeU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xeU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xeU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xeU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xeU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xeU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xeU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xfU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xfU]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xfU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xfU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xfU]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xfU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xfU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xfU]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xfU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xfU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xfU]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xfU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xfU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xfU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xfU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xfU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xfU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xfU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xfU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xfU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xfU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0xfU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0xfU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0xfU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                           [0xfU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x10U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x10U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x10U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x10U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x10U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x10U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x10U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x10U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x10U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x10U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x10U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x10U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x10U]))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x10U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x10U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x10U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x10U]))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x10U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x10U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x10U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x10U]))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x10U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x10U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x10U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x10U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x10U]))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x10U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x10U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x10U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x11U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x11U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x11U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x11U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x11U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x11U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x11U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x11U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x11U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x11U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x11U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x11U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x11U]))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x11U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x11U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x11U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x11U]))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x11U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x11U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x11U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x11U]))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x11U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x11U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x11U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x11U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x11U]))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x11U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x11U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x11U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x12U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x12U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x12U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x12U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x12U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x12U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x12U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x12U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x12U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x12U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x12U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x12U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x12U]))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x12U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x12U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x12U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x12U]))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x12U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x12U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x12U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x12U]))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x12U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x12U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x12U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x12U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x12U]))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x12U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x12U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x12U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x13U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x13U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x13U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x13U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x13U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x13U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x13U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x13U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x13U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x13U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x13U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x13U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x13U]))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x13U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x13U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x13U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x13U]))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x13U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x13U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x13U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x13U]))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x13U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x13U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x13U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x13U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x13U]))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x13U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x13U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x13U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x14U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x14U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x14U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x14U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x14U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x14U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x14U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x14U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x14U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x14U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x14U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x14U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x14U]))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x14U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x14U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x14U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x14U]))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x14U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x14U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x14U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x14U]))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x14U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x14U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x14U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x14U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x14U]))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x14U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x14U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x14U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x15U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x15U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x15U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x15U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x15U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x15U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x15U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x15U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x15U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x15U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x15U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x15U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x15U]))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x15U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x15U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x15U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x15U]))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x15U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x15U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x15U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x15U]))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x15U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x15U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x15U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x15U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x15U]))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x15U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x15U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x15U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x16U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x16U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x16U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x16U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x16U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x16U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x16U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x16U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x16U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x16U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x16U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x16U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x16U]))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x16U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x16U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x16U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x16U]))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x16U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x16U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x16U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x16U]))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x16U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x16U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x16U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x16U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x16U]))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x16U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x16U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x16U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x17U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x17U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x17U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x17U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x17U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x17U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x17U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x17U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x17U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x17U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x17U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x17U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x17U]))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x17U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x17U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x17U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x17U]))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x17U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x17U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x17U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x17U]))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x17U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x17U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x17U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x17U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x17U]))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x17U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x17U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x17U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x18U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x18U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x18U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x18U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x18U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x18U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x18U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x18U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x18U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x18U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x18U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x18U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x18U]))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x18U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x18U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x18U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x18U]))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x18U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x18U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x18U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x18U]))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x18U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x18U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x18U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x18U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x18U]))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x18U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x18U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x18U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x19U] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x19U]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x19U]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x19U] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x19U]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x19U]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x19U] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x19U]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x19U]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x19U] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x19U]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x19U]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x19U]))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x19U] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x19U]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x19U]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x19U]))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x19U] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x19U]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x19U]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x19U]))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x19U] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x19U]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x19U]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x19U] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x19U]))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x19U] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x19U]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x19U]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1aU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1aU]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1aU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1aU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1aU]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1aU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1aU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1aU]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1aU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1aU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1aU]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1aU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1aU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1aU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1aU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1aU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1aU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1aU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1aU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1aU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1aU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1aU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1aU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1aU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1aU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1bU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1bU]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1bU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1bU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1bU]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1bU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1bU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1bU]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1bU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1bU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1bU]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1bU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1bU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1bU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1bU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1bU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1bU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1bU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1bU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1bU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1bU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1bU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1bU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1bU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1bU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1cU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1cU]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1cU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1cU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1cU]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1cU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1cU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1cU]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1cU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1cU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1cU]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1cU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1cU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1cU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1cU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1cU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1cU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1cU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1cU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1cU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1cU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1cU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1cU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1cU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1cU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1dU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1dU]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1dU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1dU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1dU]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1dU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1dU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1dU]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1dU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1dU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1dU]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1dU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1dU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1dU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1dU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1dU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1dU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1dU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1dU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1dU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1dU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1dU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1dU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1dU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1dU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1eU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1eU]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1eU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1eU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1eU]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1eU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1eU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1eU]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1eU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1eU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1eU]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1eU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1eU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1eU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1eU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1eU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1eU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1eU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1eU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1eU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1eU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1eU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1eU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1eU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1eU]));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1fU] 
            = ((0xfeU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1fU]) | (1U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1fU]));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1fU] 
            = ((0xfdU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1fU]) | (2U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1fU]));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1fU] 
            = ((0xfbU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1fU]) | (4U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1fU]));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__received_data
               [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1fU] 
            = ((0xf7U & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1fU]) | (8U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1fU]));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1fU] 
            = ((0xefU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1fU]) | (0x10U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1fU]));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1fU] 
            = ((0xdfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1fU]) | (0x20U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1fU]));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1fU] 
            = ((0xbfU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1fU]) | (0x40U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1fU]));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__received_data
                  [0x1fU] ^ vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                  [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data[0x1fU] 
            = ((0x7fU & vlSelfRef.tb_spi_controller__DOT____Vtogcov__received_data
                [0x1fU]) | (0x80U & vlSelfRef.tb_spi_controller__DOT__received_data
                            [0x1fU]));
    }
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_sequent__TOP__3(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_sequent__TOP__3\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg 
        = vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg;
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg 
        = vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg;
    if (((0x10U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count)) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_full))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_full 
            = (0x10U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count));
    }
    if (((0U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count)) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_empty))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_empty 
            = (0U == (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count));
    }
    if ((1U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level 
            = ((0xfeU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)) 
               | (1U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level 
            = ((0xfdU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)) 
               | (2U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level 
            = ((0xfbU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)) 
               | (4U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level 
            = ((0xf7U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)) 
               | (8U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level 
            = ((0xefU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)) 
               | (0x10U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level 
            = ((0xdfU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)) 
               | (0x20U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level 
            = ((0xbfU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)) 
               | (0x40U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level 
            = ((0x7fU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_level)) 
               | (0x80U & (IData)(vlSymsp->TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo.__PVT__count)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data 
            = ((0xfeU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)) 
               | (1U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data 
            = ((0xfdU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)) 
               | (2U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data 
            = ((0xfbU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)) 
               | (4U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data 
            = ((0xf7U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)) 
               | (8U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data 
            = ((0xefU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)) 
               | (0x10U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data 
            = ((0xdfU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)) 
               | (0x20U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data 
            = ((0xbfU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)) 
               | (0x40U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data 
            = ((0x7fU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_rx_data)) 
               | (0x80U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        if (((((IData)(vlSelfRef.tb_spi_controller__DOT__psel) 
               & (IData)(vlSelfRef.tb_spi_controller__DOT__penable)) 
              & (IData)(vlSelfRef.tb_spi_controller__DOT__pwrite)) 
             & (8U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr)))) {
            ++(vlSymsp->__Vcoverage[1112]);
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                = vlSelfRef.tb_spi_controller__DOT__pwdata;
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1113]);
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr = 0U;
        }
        if (((((IData)(vlSelfRef.tb_spi_controller__DOT__psel) 
               & (IData)(vlSelfRef.tb_spi_controller__DOT__penable)) 
              & (IData)(vlSelfRef.tb_spi_controller__DOT__pwrite)) 
             & (8U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr)))) {
            ++(vlSymsp->__Vcoverage[1114]);
        }
        if ((8U != (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
            ++(vlSymsp->__Vcoverage[1115]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__pwrite)))) {
            ++(vlSymsp->__Vcoverage[1116]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__penable)))) {
            ++(vlSymsp->__Vcoverage[1117]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__psel)))) {
            ++(vlSymsp->__Vcoverage[1118]);
        }
        ++(vlSymsp->__Vcoverage[1120]);
    } else {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1121]);
    }
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1122]);
    }
    ++(vlSymsp->__Vcoverage[1123]);
    if ((IData)((((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
                  >> 7U) ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__spi_mosi)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__spi_mosi 
            = (1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
                     >> 7U));
    }
    if ((1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg 
            = ((0xfeU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg)) 
               | (1U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg 
            = ((0xfdU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg)) 
               | (2U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg 
            = ((0xfbU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg)) 
               | (4U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg 
            = ((0xf7U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg)) 
               | (8U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg 
            = ((0xefU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg)) 
               | (0x10U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg 
            = ((0xdfU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg)) 
               | (0x20U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg 
            = ((0xbfU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__tx_shift_reg)) 
               | (0x40U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg)));
    }
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        if ((1U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
            ++(vlSymsp->__Vcoverage[1276]);
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_csn_internal = 0U;
        } else {
            if ((((3U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                  & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) 
                 & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                    == (1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                              >> 1U))))) {
                ++(vlSymsp->__Vcoverage[1270]);
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_csn_internal = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1271]);
            }
            if ((((3U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                  & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) 
                 & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                    == (1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                              >> 1U))))) {
                ++(vlSymsp->__Vcoverage[1272]);
            }
            if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                 != (1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                           >> 1U)))) {
                ++(vlSymsp->__Vcoverage[1273]);
            }
            if ((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) {
                ++(vlSymsp->__Vcoverage[1274]);
            }
            if ((3U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
                ++(vlSymsp->__Vcoverage[1275]);
            }
        }
    } else {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_csn_internal = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1278]);
    }
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1279]);
    }
    ++(vlSymsp->__Vcoverage[1280]);
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal 
        = vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal;
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter 
        = vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter;
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_wr))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_wr 
            = vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr;
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfffffffeU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (1U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfffffffdU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (2U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfffffffbU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (4U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfffffff7U & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (8U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xffffffefU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x10U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xffffffdfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x20U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xffffffbfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x40U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xffffff7fU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x80U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x100U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfffffeffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x100U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x200U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfffffdffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x200U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x400U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfffffbffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x400U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x800U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfffff7ffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x800U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x1000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xffffefffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x1000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x2000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xffffdfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x2000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x4000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xffffbfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x4000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x8000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xffff7fffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x8000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x10000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfffeffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x10000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x20000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfffdffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x20000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x40000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfffbffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x40000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x80000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfff7ffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x80000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x100000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xffefffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x100000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x200000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xffdfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x200000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x400000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xffbfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x400000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x800000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xff7fffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x800000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x1000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfeffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x1000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x2000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfdffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x2000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x4000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xfbffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x4000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x8000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xf7ffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x8000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x10000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xefffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x10000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x20000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xdfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x20000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x40000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0xbfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x40000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if (((vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
          ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg 
            = ((0x7fffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__txdata_reg) 
               | (0x80000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_csn_internal) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__spi_csn))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__spi_csn 
            = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_csn_internal;
    }
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT____Vtogcov__spi_clk))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.tb_spi_controller__DOT____Vtogcov__spi_clk 
            = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal;
    }
    if ((1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xfffeU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (1U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xfffdU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (2U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xfffbU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (4U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xfff7U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (8U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xffefU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (0x10U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xffdfU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (0x20U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xffbfU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (0x40U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
                  ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xff7fU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (0x80U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
                   ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xfeffU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (0x100U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((0x200U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
                   ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xfdffU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (0x200U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((0x400U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
                   ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xfbffU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (0x400U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((0x800U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
                   ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xf7ffU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (0x800U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
                    ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xefffU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (0x1000U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
                    ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xdfffU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (0x2000U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
                    ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0xbfffU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (0x4000U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
                    ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter 
            = ((0x7fffU & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__clk_counter)) 
               | (0x8000U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
    }
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state 
            = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state;
    } else {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1205]);
    }
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1206]);
    }
    ++(vlSymsp->__Vcoverage[1207]);
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        if ((((IData)(vlSelfRef.tb_spi_controller__DOT__psel) 
              & (IData)(vlSelfRef.tb_spi_controller__DOT__penable)) 
             & (IData)(vlSelfRef.tb_spi_controller__DOT__pwrite))) {
            if ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                ++(vlSymsp->__Vcoverage[1087]);
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                    = vlSelfRef.tb_spi_controller__DOT__pwdata;
            } else if ((0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                ++(vlSymsp->__Vcoverage[1088]);
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                    = vlSelfRef.tb_spi_controller__DOT__pwdata;
            } else if ((0x14U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                ++(vlSymsp->__Vcoverage[1089]);
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                    = vlSelfRef.tb_spi_controller__DOT__pwdata;
            } else if ((0x18U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                ++(vlSymsp->__Vcoverage[1090]);
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                    = vlSelfRef.tb_spi_controller__DOT__pwdata;
            } else if ((0x1cU == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                ++(vlSymsp->__Vcoverage[1091]);
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                    = vlSelfRef.tb_spi_controller__DOT__pwdata;
            }
            ++(vlSymsp->__Vcoverage[1092]);
        } else {
            ++(vlSymsp->__Vcoverage[1093]);
        }
        if ((((IData)(vlSelfRef.tb_spi_controller__DOT__psel) 
              & (IData)(vlSelfRef.tb_spi_controller__DOT__penable)) 
             & (IData)(vlSelfRef.tb_spi_controller__DOT__pwrite))) {
            ++(vlSymsp->__Vcoverage[1094]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__pwrite)))) {
            ++(vlSymsp->__Vcoverage[1095]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__penable)))) {
            ++(vlSymsp->__Vcoverage[1096]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__psel)))) {
            ++(vlSymsp->__Vcoverage[1097]);
        }
        ++(vlSymsp->__Vcoverage[1099]);
    } else {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg = 0U;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg = 0xaU;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg = 0x10U;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg = 0U;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1100]);
    }
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1101]);
    }
    ++(vlSymsp->__Vcoverage[1102]);
    if (((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_rd))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__tx_fifo_rd 
            = (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state));
    }
    if (((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_busy))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__spi_busy 
            = (0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state));
    }
    if ((1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__current_state)))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__current_state 
            = ((6U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__current_state)) 
               | (1U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__current_state)))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__current_state 
            = ((5U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__current_state)) 
               | (2U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state) 
               ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__current_state)))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__current_state 
            = ((3U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT____Vtogcov__current_state)) 
               | (4U & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfffffffeU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (1U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfffffffdU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (2U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfffffffbU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (4U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfffffff7U & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (8U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xffffffefU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x10U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xffffffdfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x20U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xffffffbfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x40U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xffffff7fU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x80U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x100U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfffffeffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x100U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x200U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfffffdffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x200U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x400U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfffffbffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x400U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x800U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfffff7ffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x800U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x1000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xffffefffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x1000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x2000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xffffdfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x2000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x4000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xffffbfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x4000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x8000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xffff7fffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x8000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x10000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfffeffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x10000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x20000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfffdffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x20000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x40000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfffbffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x40000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x80000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfff7ffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x80000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x100000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xffefffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x100000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x200000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xffdfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x200000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x400000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xffbfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x400000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x800000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xff7fffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x800000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x1000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfeffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x1000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x2000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfdffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x2000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x4000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xfbffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x4000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x8000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xf7ffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x8000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x10000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xefffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x10000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x20000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xdfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x20000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((0x40000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0xbfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x40000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if (((vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
          ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg 
            = ((0x7fffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__baud_reg) 
               | (0x80000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfffffffeU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (1U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfffffffdU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (2U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfffffffbU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (4U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfffffff7U & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (8U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xffffffefU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x10U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xffffffdfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x20U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xffffffbfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x40U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xffffff7fU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x80U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x100U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfffffeffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x100U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x200U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfffffdffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x200U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x400U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfffffbffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x400U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x800U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfffff7ffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x800U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x1000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xffffefffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x1000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x2000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xffffdfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x2000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x4000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xffffbfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x4000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x8000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xffff7fffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x8000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x10000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfffeffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x10000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x20000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfffdffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x20000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x40000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfffbffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x40000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x80000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfff7ffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x80000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x100000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xffefffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x100000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x200000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xffdfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x200000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x400000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xffbfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x400000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x800000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xff7fffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x800000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x1000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfeffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x1000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x2000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfdffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x2000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x4000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xfbffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x4000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x8000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xf7ffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x8000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x10000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xefffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x10000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x20000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xdfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x20000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((0x40000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0xbfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x40000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if (((vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
          ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg 
            = ((0x7fffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__fifo_reg) 
               | (0x80000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfffffffeU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (1U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfffffffdU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (2U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfffffffbU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (4U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfffffff7U & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (8U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xffffffefU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x10U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xffffffdfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x20U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xffffffbfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x40U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xffffff7fU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x80U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x100U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfffffeffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x100U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x200U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfffffdffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x200U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x400U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfffffbffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x400U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x800U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfffff7ffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x800U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x1000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xffffefffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x1000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x2000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xffffdfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x2000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x4000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xffffbfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x4000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x8000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xffff7fffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x8000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x10000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfffeffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x10000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x20000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfffdffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x20000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x40000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfffbffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x40000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x80000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfff7ffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x80000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x100000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xffefffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x100000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x200000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xffdfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x200000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x400000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xffbfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x400000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x800000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xff7fffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x800000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x1000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfeffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x1000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x2000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfdffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x2000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x4000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xfbffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x4000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x8000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xf7ffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x8000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x10000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xefffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x10000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x20000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xdfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x20000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((0x40000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0xbfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x40000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if (((vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
          ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg 
            = ((0x7fffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__int_reg) 
               | (0x80000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg));
    }
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfffffffeU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (1U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfffffffdU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (2U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfffffffbU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (4U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfffffff7U & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (8U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xffffffefU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x10U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xffffffdfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x20U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xffffffbfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x40U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xffffff7fU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x80U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x100U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfffffeffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x100U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x200U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfffffdffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x200U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x400U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfffffbffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x400U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x800U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfffff7ffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x800U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x1000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xffffefffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x1000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x2000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xffffdfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x2000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x4000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xffffbfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x4000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x8000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xffff7fffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x8000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x10000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfffeffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x10000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x20000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfffdffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x20000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x40000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfffbffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x40000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x80000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfff7ffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x80000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x100000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xffefffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x100000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x200000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xffdfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x200000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x400000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xffbfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x400000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x800000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xff7fffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x800000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x1000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfeffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x1000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x2000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfdffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x2000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x4000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xfbffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x4000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x8000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xf7ffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x8000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x10000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xefffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x10000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x20000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xdfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x20000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if ((0x40000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0xbfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x40000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    if (((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
          ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg 
            = ((0x7fffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__ctrl_reg) 
               | (0x80000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg));
    }
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr 
        = ((3U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
           & ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)) 
              & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                 == (1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                           >> 1U)))));
    if ((1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfffffffeU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (1U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((2U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfffffffdU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (2U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((4U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfffffffbU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (4U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((8U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
               ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfffffff7U & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (8U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x10U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xffffffefU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x10U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x20U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xffffffdfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x20U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x40U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xffffffbfU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x40U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x80U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                  ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xffffff7fU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x80U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x100U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfffffeffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x100U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x200U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfffffdffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x200U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x400U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfffffbffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x400U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x800U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                   ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfffff7ffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x800U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x1000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xffffefffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x1000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x2000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xffffdfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x2000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x4000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xffffbfffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x4000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x8000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                    ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xffff7fffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x8000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x10000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfffeffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x10000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x20000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfffdffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x20000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x40000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfffbffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x40000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x80000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                     ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfff7ffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x80000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x100000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xffefffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x100000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x200000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xffdfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x200000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x400000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xffbfffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x400000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x800000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                      ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xff7fffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x800000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x1000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfeffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x1000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x2000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfdffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x2000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x4000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xfbffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x4000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x8000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                       ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xf7ffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x8000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x10000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xefffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x10000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x20000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xdfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x20000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if ((0x40000000U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                        ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0xbfffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x40000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if (((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
          ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg 
            = ((0x7fffffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__mode_reg) 
               | (0x80000000U & vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg));
    }
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr) 
         ^ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_wr))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vtogcov__rx_fifo_wr 
            = vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr;
    }
}
