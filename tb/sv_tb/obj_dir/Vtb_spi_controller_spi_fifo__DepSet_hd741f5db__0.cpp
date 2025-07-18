// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_controller.h for the primary calling header

#include "Vtb_spi_controller__pch.h"
#include "Vtb_spi_controller__Syms.h"
#include "Vtb_spi_controller_spi_fifo.h"

VL_INLINE_OPT void Vtb_spi_controller_spi_fifo___act_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0(Vtb_spi_controller_spi_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_spi_controller_spi_fifo___act_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__pclk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelfRef.__Vtogcov__clk_i = vlSymsp->TOP.tb_spi_controller__DOT__pclk;
    }
}

VL_INLINE_OPT void Vtb_spi_controller_spi_fifo___act_comb__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0(Vtb_spi_controller_spi_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_spi_controller_spi_fifo___act_comb__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__presetn) 
         ^ (IData)(vlSelfRef.__Vtogcov__reset_n_i))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelfRef.__Vtogcov__reset_n_i = vlSymsp->TOP.tb_spi_controller__DOT__presetn;
    }
}

VL_INLINE_OPT void Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0(Vtb_spi_controller_spi_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    // Body
    vlSelfRef.__Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    vlSelfRef.__Vdly__count = vlSelfRef.__PVT__count;
    if (vlSymsp->TOP.tb_spi_controller__DOT__presetn) {
        if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
             & (0x10U != (IData)(vlSelfRef.__PVT__count)))) {
            vlSelfRef.__Vdly__wr_ptr = (0xfU & ((0xfU 
                                                 == (IData)(vlSelfRef.__PVT__wr_ptr))
                                                 ? 
                                                ([&]() {
                            ++(vlSymsp->__Vcoverage[1366]);
                        }(), 0U) : ([&]() {
                            ++(vlSymsp->__Vcoverage[1367]);
                        }(), ((IData)(1U) + (IData)(vlSelfRef.__PVT__wr_ptr)))));
            if ((0xfU == (IData)(vlSelfRef.__PVT__wr_ptr))) {
                ++(vlSymsp->__Vcoverage[1364]);
            }
            if ((0xfU != (IData)(vlSelfRef.__PVT__wr_ptr))) {
                ++(vlSymsp->__Vcoverage[1365]);
            }
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            ++(vlSymsp->__Vcoverage[1369]);
        }
        if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
             & (0x10U != (IData)(vlSelfRef.__PVT__count)))) {
            ++(vlSymsp->__Vcoverage[1370]);
        }
        if ((0x10U == (IData)(vlSelfRef.__PVT__count))) {
            ++(vlSymsp->__Vcoverage[1371]);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr)))) {
            ++(vlSymsp->__Vcoverage[1372]);
        }
        ++(vlSymsp->__Vcoverage[1374]);
    } else {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelfRef.__Vdly__wr_ptr = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1375]);
    }
    if (vlSymsp->TOP.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    if (vlSymsp->TOP.tb_spi_controller__DOT__presetn) {
        if (((0U == (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
             & (0U != (IData)(vlSelfRef.__PVT__count)))) {
            __Vdly__rd_ptr = (0xfU & ((0xfU == (IData)(vlSelfRef.__PVT__rd_ptr))
                                       ? ([&]() {
                            ++(vlSymsp->__Vcoverage[1380]);
                        }(), 0U) : ([&]() {
                            ++(vlSymsp->__Vcoverage[1381]);
                        }(), ((IData)(1U) + (IData)(vlSelfRef.__PVT__rd_ptr)))));
            if ((0xfU == (IData)(vlSelfRef.__PVT__rd_ptr))) {
                ++(vlSymsp->__Vcoverage[1378]);
            }
            if ((0xfU != (IData)(vlSelfRef.__PVT__rd_ptr))) {
                ++(vlSymsp->__Vcoverage[1379]);
            }
            ++(vlSymsp->__Vcoverage[1382]);
        } else {
            ++(vlSymsp->__Vcoverage[1383]);
        }
        if (((0U == (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
             & (0U != (IData)(vlSelfRef.__PVT__count)))) {
            ++(vlSymsp->__Vcoverage[1384]);
        }
        if ((0U == (IData)(vlSelfRef.__PVT__count))) {
            ++(vlSymsp->__Vcoverage[1385]);
        }
        if ((0U != (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
            ++(vlSymsp->__Vcoverage[1386]);
        }
        ++(vlSymsp->__Vcoverage[1388]);
    } else {
        ++(vlSymsp->__Vcoverage[1387]);
        __Vdly__rd_ptr = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1389]);
    }
    if (vlSymsp->TOP.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1390]);
    }
    ++(vlSymsp->__Vcoverage[1391]);
    if (vlSymsp->TOP.tb_spi_controller__DOT__presetn) {
        if ((2U == ((((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
                      & (~ (IData)(vlSelfRef.full_o))) 
                     << 1U) | ((0U == (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                               & (~ (IData)(vlSelfRef.empty_o)))))) {
            vlSelfRef.__Vdly__count = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__count)));
            ++(vlSymsp->__Vcoverage[1404]);
        } else if ((1U == ((((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
                             & (~ (IData)(vlSelfRef.full_o))) 
                            << 1U) | ((0U == (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                                      & (~ (IData)(vlSelfRef.empty_o)))))) {
            ++(vlSymsp->__Vcoverage[1405]);
            vlSelfRef.__Vdly__count = (0x1fU & ((IData)(vlSelfRef.__PVT__count) 
                                                - (IData)(1U)));
        } else if ((3U == ((((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
                             & (~ (IData)(vlSelfRef.full_o))) 
                            << 1U) | ((0U == (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                                      & (~ (IData)(vlSelfRef.empty_o)))))) {
            ++(vlSymsp->__Vcoverage[1406]);
            vlSelfRef.__Vdly__count = vlSelfRef.__PVT__count;
        } else {
            ++(vlSymsp->__Vcoverage[1407]);
            vlSelfRef.__Vdly__count = vlSelfRef.__PVT__count;
        }
        if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
             & (~ (IData)(vlSelfRef.full_o)))) {
            ++(vlSymsp->__Vcoverage[1398]);
        }
        if (vlSelfRef.full_o) {
            ++(vlSymsp->__Vcoverage[1399]);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr)))) {
            ++(vlSymsp->__Vcoverage[1400]);
        }
        if (((0U == (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
             & (~ (IData)(vlSelfRef.empty_o)))) {
            ++(vlSymsp->__Vcoverage[1401]);
        }
        if (vlSelfRef.empty_o) {
            ++(vlSymsp->__Vcoverage[1402]);
        }
        if ((0U != (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
            ++(vlSymsp->__Vcoverage[1403]);
        }
        ++(vlSymsp->__Vcoverage[1409]);
    } else {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.__Vdly__count = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1410]);
    }
    if (vlSymsp->TOP.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1411]);
    }
    ++(vlSymsp->__Vcoverage[1412]);
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    if ((1U & ((IData)(vlSelfRef.__PVT__rd_ptr) ^ (IData)(vlSelfRef.__Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelfRef.__Vtogcov__rd_ptr = ((0xeU & (IData)(vlSelfRef.__Vtogcov__rd_ptr)) 
                                       | (1U & (IData)(vlSelfRef.__PVT__rd_ptr)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__rd_ptr) ^ (IData)(vlSelfRef.__Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelfRef.__Vtogcov__rd_ptr = ((0xdU & (IData)(vlSelfRef.__Vtogcov__rd_ptr)) 
                                       | (2U & (IData)(vlSelfRef.__PVT__rd_ptr)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__rd_ptr) ^ (IData)(vlSelfRef.__Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelfRef.__Vtogcov__rd_ptr = ((0xbU & (IData)(vlSelfRef.__Vtogcov__rd_ptr)) 
                                       | (4U & (IData)(vlSelfRef.__PVT__rd_ptr)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__rd_ptr) ^ (IData)(vlSelfRef.__Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelfRef.__Vtogcov__rd_ptr = ((7U & (IData)(vlSelfRef.__Vtogcov__rd_ptr)) 
                                       | (8U & (IData)(vlSelfRef.__PVT__rd_ptr)));
    }
}

VL_INLINE_OPT void Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__1(Vtb_spi_controller_spi_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__1\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__fifo_mem__v0;
    __VdlyVal__fifo_mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fifo_mem__v0;
    __VdlyDim0__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__fifo_mem__v0;
    __VdlySet__fifo_mem__v0 = 0;
    // Body
    __VdlySet__fifo_mem__v0 = 0U;
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
         & (0x10U != (IData)(vlSelfRef.__PVT__count)))) {
        ++(vlSymsp->__Vcoverage[1392]);
        __VdlyVal__fifo_mem__v0 = vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg;
        __VdlyDim0__fifo_mem__v0 = vlSelfRef.__PVT__wr_ptr;
        __VdlySet__fifo_mem__v0 = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[1393]);
    }
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
         & (0x10U != (IData)(vlSelfRef.__PVT__count)))) {
        ++(vlSymsp->__Vcoverage[1394]);
    }
    if ((0x10U == (IData)(vlSelfRef.__PVT__count))) {
        ++(vlSymsp->__Vcoverage[1395]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr)))) {
        ++(vlSymsp->__Vcoverage[1396]);
    }
    ++(vlSymsp->__Vcoverage[1397]);
    if (__VdlySet__fifo_mem__v0) {
        vlSelfRef.__PVT__fifo_mem[__VdlyDim0__fifo_mem__v0] 
            = __VdlyVal__fifo_mem__v0;
    }
}

VL_INLINE_OPT void Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__3(Vtb_spi_controller_spi_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__3\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_ptr = vlSelfRef.__Vdly__wr_ptr;
    vlSelfRef.__PVT__count = vlSelfRef.__Vdly__count;
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_i))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelfRef.__Vtogcov__wr_i = vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr;
    }
    if ((1U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
               ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (1U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((2U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
               ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (2U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((4U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
               ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (4U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((8U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
               ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (8U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x10U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                  ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelfRef.__Vtogcov__data_i = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x10U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x20U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                  ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelfRef.__Vtogcov__data_i = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x20U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x40U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                  ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelfRef.__Vtogcov__data_i = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x40U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x80U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                  ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelfRef.__Vtogcov__data_i = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x80U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x100U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                   ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x100U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x200U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                   ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x200U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x400U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                   ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x400U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x800U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                   ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x800U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x1000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                    ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelfRef.__Vtogcov__data_i = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x1000U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x2000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                    ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelfRef.__Vtogcov__data_i = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x2000U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x4000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                    ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelfRef.__Vtogcov__data_i = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x4000U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x8000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                    ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelfRef.__Vtogcov__data_i = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x8000U & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x10000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                     ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x10000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x20000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                     ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x20000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x40000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                     ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x40000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x80000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                     ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelfRef.__Vtogcov__data_i = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x80000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x100000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                      ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelfRef.__Vtogcov__data_i = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x100000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x200000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                      ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelfRef.__Vtogcov__data_i = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x200000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x400000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                      ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelfRef.__Vtogcov__data_i = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x400000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x800000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                      ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelfRef.__Vtogcov__data_i = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x800000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x1000000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                       ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelfRef.__Vtogcov__data_i = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x2000000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                       ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelfRef.__Vtogcov__data_i = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x4000000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                       ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelfRef.__Vtogcov__data_i = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x8000000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                       ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelfRef.__Vtogcov__data_i = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x10000000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                        ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelfRef.__Vtogcov__data_i = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x20000000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                        ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelfRef.__Vtogcov__data_i = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if ((0x40000000U & (vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                        ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelfRef.__Vtogcov__data_i = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if (((vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg 
          ^ vlSelfRef.__Vtogcov__data_i) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelfRef.__Vtogcov__data_i = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__txdata_reg));
    }
    if (((0U == (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
         ^ (IData)(vlSelfRef.__Vtogcov__rd_i))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelfRef.__Vtogcov__rd_i = (0U == (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state));
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__wr_ptr) ^ (IData)(vlSelfRef.__Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelfRef.__Vtogcov__wr_ptr = ((0xeU & (IData)(vlSelfRef.__Vtogcov__wr_ptr)) 
                                       | (1U & (IData)(vlSelfRef.__PVT__wr_ptr)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__wr_ptr) ^ (IData)(vlSelfRef.__Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelfRef.__Vtogcov__wr_ptr = ((0xdU & (IData)(vlSelfRef.__Vtogcov__wr_ptr)) 
                                       | (2U & (IData)(vlSelfRef.__PVT__wr_ptr)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__wr_ptr) ^ (IData)(vlSelfRef.__Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelfRef.__Vtogcov__wr_ptr = ((0xbU & (IData)(vlSelfRef.__Vtogcov__wr_ptr)) 
                                       | (4U & (IData)(vlSelfRef.__PVT__wr_ptr)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__wr_ptr) ^ (IData)(vlSelfRef.__Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelfRef.__Vtogcov__wr_ptr = ((7U & (IData)(vlSelfRef.__Vtogcov__wr_ptr)) 
                                       | (8U & (IData)(vlSelfRef.__PVT__wr_ptr)));
    }
    if (((0x10U == (IData)(vlSelfRef.__PVT__count)) 
         ^ (IData)(vlSelfRef.__Vtogcov__full_o))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelfRef.__Vtogcov__full_o = (0x10U == (IData)(vlSelfRef.__PVT__count));
    }
    if (((0U == (IData)(vlSelfRef.__PVT__count)) ^ (IData)(vlSelfRef.__Vtogcov__empty_o))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelfRef.__Vtogcov__empty_o = (0U == (IData)(vlSelfRef.__PVT__count));
    }
    vlSelfRef.empty_o = (0U == (IData)(vlSelfRef.__PVT__count));
    vlSelfRef.full_o = (0x10U == (IData)(vlSelfRef.__PVT__count));
    if ((1U & ((IData)(vlSelfRef.__PVT__count) ^ (IData)(vlSelfRef.__Vtogcov__level_o)))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelfRef.__Vtogcov__level_o = ((0x1eU & (IData)(vlSelfRef.__Vtogcov__level_o)) 
                                        | (1U & (IData)(vlSelfRef.__PVT__count)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__count) ^ (IData)(vlSelfRef.__Vtogcov__level_o)))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelfRef.__Vtogcov__level_o = ((0x1dU & (IData)(vlSelfRef.__Vtogcov__level_o)) 
                                        | (2U & (IData)(vlSelfRef.__PVT__count)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__count) ^ (IData)(vlSelfRef.__Vtogcov__level_o)))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelfRef.__Vtogcov__level_o = ((0x1bU & (IData)(vlSelfRef.__Vtogcov__level_o)) 
                                        | (4U & (IData)(vlSelfRef.__PVT__count)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__count) ^ (IData)(vlSelfRef.__Vtogcov__level_o)))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelfRef.__Vtogcov__level_o = ((0x17U & (IData)(vlSelfRef.__Vtogcov__level_o)) 
                                        | (8U & (IData)(vlSelfRef.__PVT__count)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__count) ^ (IData)(vlSelfRef.__Vtogcov__level_o)))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelfRef.__Vtogcov__level_o = ((0xfU & (IData)(vlSelfRef.__Vtogcov__level_o)) 
                                        | (0x10U & (IData)(vlSelfRef.__PVT__count)));
    }
}

VL_INLINE_OPT void Vtb_spi_controller_spi_fifo___nba_comb__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__1(Vtb_spi_controller_spi_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_spi_controller_spi_fifo___nba_comb__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__1\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_o = vlSelfRef.__PVT__fifo_mem[vlSelfRef.__PVT__rd_ptr];
    if ((1U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelfRef.__Vtogcov__data_o = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (1U & vlSelfRef.data_o));
    }
    if ((2U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelfRef.__Vtogcov__data_o = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (2U & vlSelfRef.data_o));
    }
    if ((4U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelfRef.__Vtogcov__data_o = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (4U & vlSelfRef.data_o));
    }
    if ((8U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelfRef.__Vtogcov__data_o = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (8U & vlSelfRef.data_o));
    }
    if ((0x10U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelfRef.__Vtogcov__data_o = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x10U & vlSelfRef.data_o));
    }
    if ((0x20U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelfRef.__Vtogcov__data_o = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x20U & vlSelfRef.data_o));
    }
    if ((0x40U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.__Vtogcov__data_o = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x40U & vlSelfRef.data_o));
    }
    if ((0x80U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelfRef.__Vtogcov__data_o = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x80U & vlSelfRef.data_o));
    }
    if ((0x100U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelfRef.__Vtogcov__data_o = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x100U & vlSelfRef.data_o));
    }
    if ((0x200U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelfRef.__Vtogcov__data_o = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x200U & vlSelfRef.data_o));
    }
    if ((0x400U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelfRef.__Vtogcov__data_o = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x400U & vlSelfRef.data_o));
    }
    if ((0x800U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelfRef.__Vtogcov__data_o = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x800U & vlSelfRef.data_o));
    }
    if ((0x1000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelfRef.__Vtogcov__data_o = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x1000U & vlSelfRef.data_o));
    }
    if ((0x2000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelfRef.__Vtogcov__data_o = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x2000U & vlSelfRef.data_o));
    }
    if ((0x4000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelfRef.__Vtogcov__data_o = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x4000U & vlSelfRef.data_o));
    }
    if ((0x8000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.__Vtogcov__data_o = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x8000U & vlSelfRef.data_o));
    }
    if ((0x10000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.__Vtogcov__data_o = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x10000U 
                                          & vlSelfRef.data_o));
    }
    if ((0x20000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelfRef.__Vtogcov__data_o = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x20000U 
                                          & vlSelfRef.data_o));
    }
    if ((0x40000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelfRef.__Vtogcov__data_o = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x40000U 
                                          & vlSelfRef.data_o));
    }
    if ((0x80000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelfRef.__Vtogcov__data_o = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x80000U 
                                          & vlSelfRef.data_o));
    }
    if ((0x100000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelfRef.__Vtogcov__data_o = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x100000U 
                                          & vlSelfRef.data_o));
    }
    if ((0x200000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelfRef.__Vtogcov__data_o = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x200000U 
                                          & vlSelfRef.data_o));
    }
    if ((0x400000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelfRef.__Vtogcov__data_o = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x400000U 
                                          & vlSelfRef.data_o));
    }
    if ((0x800000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelfRef.__Vtogcov__data_o = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x800000U 
                                          & vlSelfRef.data_o));
    }
    if ((0x1000000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelfRef.__Vtogcov__data_o = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x1000000U 
                                          & vlSelfRef.data_o));
    }
    if ((0x2000000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelfRef.__Vtogcov__data_o = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x2000000U 
                                          & vlSelfRef.data_o));
    }
    if ((0x4000000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelfRef.__Vtogcov__data_o = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x4000000U 
                                          & vlSelfRef.data_o));
    }
    if ((0x8000000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelfRef.__Vtogcov__data_o = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x8000000U 
                                          & vlSelfRef.data_o));
    }
    if ((0x10000000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelfRef.__Vtogcov__data_o = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x10000000U 
                                          & vlSelfRef.data_o));
    }
    if ((0x20000000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelfRef.__Vtogcov__data_o = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x20000000U 
                                          & vlSelfRef.data_o));
    }
    if ((0x40000000U & (vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelfRef.__Vtogcov__data_o = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x40000000U 
                                          & vlSelfRef.data_o));
    }
    if (((vlSelfRef.data_o ^ vlSelfRef.__Vtogcov__data_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelfRef.__Vtogcov__data_o = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__data_o) 
                                       | (0x80000000U 
                                          & vlSelfRef.data_o));
    }
}

VL_INLINE_OPT void Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__0(Vtb_spi_controller_spi_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    // Body
    vlSelfRef.__Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__Vdly__count = vlSelfRef.__PVT__count;
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    if (vlSymsp->TOP.tb_spi_controller__DOT__presetn) {
        if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr) 
             & (0x10U != (IData)(vlSelfRef.__PVT__count)))) {
            vlSelfRef.__Vdly__wr_ptr = (0xfU & ((0xfU 
                                                 == (IData)(vlSelfRef.__PVT__wr_ptr))
                                                 ? 
                                                ([&]() {
                            ++(vlSymsp->__Vcoverage[1366]);
                        }(), 0U) : ([&]() {
                            ++(vlSymsp->__Vcoverage[1367]);
                        }(), ((IData)(1U) + (IData)(vlSelfRef.__PVT__wr_ptr)))));
            if ((0xfU == (IData)(vlSelfRef.__PVT__wr_ptr))) {
                ++(vlSymsp->__Vcoverage[1364]);
            }
            if ((0xfU != (IData)(vlSelfRef.__PVT__wr_ptr))) {
                ++(vlSymsp->__Vcoverage[1365]);
            }
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            ++(vlSymsp->__Vcoverage[1369]);
        }
        if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr) 
             & (0x10U != (IData)(vlSelfRef.__PVT__count)))) {
            ++(vlSymsp->__Vcoverage[1370]);
        }
        if ((0x10U == (IData)(vlSelfRef.__PVT__count))) {
            ++(vlSymsp->__Vcoverage[1371]);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr)))) {
            ++(vlSymsp->__Vcoverage[1372]);
        }
        ++(vlSymsp->__Vcoverage[1374]);
    } else {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelfRef.__Vdly__wr_ptr = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1375]);
    }
    if (vlSymsp->TOP.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    if (vlSymsp->TOP.tb_spi_controller__DOT__presetn) {
        if ((2U == ((((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr) 
                      & (~ (IData)(vlSelfRef.full_o))) 
                     << 1U) | ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd) 
                               & (~ (IData)(vlSelfRef.empty_o)))))) {
            vlSelfRef.__Vdly__count = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__count)));
            ++(vlSymsp->__Vcoverage[1404]);
        } else if ((1U == ((((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr) 
                             & (~ (IData)(vlSelfRef.full_o))) 
                            << 1U) | ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd) 
                                      & (~ (IData)(vlSelfRef.empty_o)))))) {
            ++(vlSymsp->__Vcoverage[1405]);
            vlSelfRef.__Vdly__count = (0x1fU & ((IData)(vlSelfRef.__PVT__count) 
                                                - (IData)(1U)));
        } else if ((3U == ((((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr) 
                             & (~ (IData)(vlSelfRef.full_o))) 
                            << 1U) | ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd) 
                                      & (~ (IData)(vlSelfRef.empty_o)))))) {
            ++(vlSymsp->__Vcoverage[1406]);
            vlSelfRef.__Vdly__count = vlSelfRef.__PVT__count;
        } else {
            ++(vlSymsp->__Vcoverage[1407]);
            vlSelfRef.__Vdly__count = vlSelfRef.__PVT__count;
        }
        if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr) 
             & (~ (IData)(vlSelfRef.full_o)))) {
            ++(vlSymsp->__Vcoverage[1398]);
        }
        if (vlSelfRef.full_o) {
            ++(vlSymsp->__Vcoverage[1399]);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr)))) {
            ++(vlSymsp->__Vcoverage[1400]);
        }
        if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd) 
             & (~ (IData)(vlSelfRef.empty_o)))) {
            ++(vlSymsp->__Vcoverage[1401]);
        }
        if (vlSelfRef.empty_o) {
            ++(vlSymsp->__Vcoverage[1402]);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd)))) {
            ++(vlSymsp->__Vcoverage[1403]);
        }
        ++(vlSymsp->__Vcoverage[1409]);
    } else {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.__Vdly__count = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1410]);
    }
    if (vlSymsp->TOP.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1411]);
    }
    ++(vlSymsp->__Vcoverage[1412]);
    if (vlSymsp->TOP.tb_spi_controller__DOT__presetn) {
        if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd) 
             & (0U != (IData)(vlSelfRef.__PVT__count)))) {
            __Vdly__rd_ptr = (0xfU & ((0xfU == (IData)(vlSelfRef.__PVT__rd_ptr))
                                       ? ([&]() {
                            ++(vlSymsp->__Vcoverage[1380]);
                        }(), 0U) : ([&]() {
                            ++(vlSymsp->__Vcoverage[1381]);
                        }(), ((IData)(1U) + (IData)(vlSelfRef.__PVT__rd_ptr)))));
            if ((0xfU == (IData)(vlSelfRef.__PVT__rd_ptr))) {
                ++(vlSymsp->__Vcoverage[1378]);
            }
            if ((0xfU != (IData)(vlSelfRef.__PVT__rd_ptr))) {
                ++(vlSymsp->__Vcoverage[1379]);
            }
            ++(vlSymsp->__Vcoverage[1382]);
        } else {
            ++(vlSymsp->__Vcoverage[1383]);
        }
        if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd) 
             & (0U != (IData)(vlSelfRef.__PVT__count)))) {
            ++(vlSymsp->__Vcoverage[1384]);
        }
        if ((0U == (IData)(vlSelfRef.__PVT__count))) {
            ++(vlSymsp->__Vcoverage[1385]);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd)))) {
            ++(vlSymsp->__Vcoverage[1386]);
        }
        ++(vlSymsp->__Vcoverage[1388]);
    } else {
        ++(vlSymsp->__Vcoverage[1387]);
        __Vdly__rd_ptr = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_spi_controller__DOT__presetn)))) {
        ++(vlSymsp->__Vcoverage[1389]);
    }
    if (vlSymsp->TOP.tb_spi_controller__DOT__presetn) {
        ++(vlSymsp->__Vcoverage[1390]);
    }
    ++(vlSymsp->__Vcoverage[1391]);
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    if ((1U & ((IData)(vlSelfRef.__PVT__rd_ptr) ^ (IData)(vlSelfRef.__Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelfRef.__Vtogcov__rd_ptr = ((0xeU & (IData)(vlSelfRef.__Vtogcov__rd_ptr)) 
                                       | (1U & (IData)(vlSelfRef.__PVT__rd_ptr)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__rd_ptr) ^ (IData)(vlSelfRef.__Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelfRef.__Vtogcov__rd_ptr = ((0xdU & (IData)(vlSelfRef.__Vtogcov__rd_ptr)) 
                                       | (2U & (IData)(vlSelfRef.__PVT__rd_ptr)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__rd_ptr) ^ (IData)(vlSelfRef.__Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelfRef.__Vtogcov__rd_ptr = ((0xbU & (IData)(vlSelfRef.__Vtogcov__rd_ptr)) 
                                       | (4U & (IData)(vlSelfRef.__PVT__rd_ptr)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__rd_ptr) ^ (IData)(vlSelfRef.__Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelfRef.__Vtogcov__rd_ptr = ((7U & (IData)(vlSelfRef.__Vtogcov__rd_ptr)) 
                                       | (8U & (IData)(vlSelfRef.__PVT__rd_ptr)));
    }
}

VL_INLINE_OPT void Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__1(Vtb_spi_controller_spi_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__1\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__fifo_mem__v0;
    __VdlyVal__fifo_mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fifo_mem__v0;
    __VdlyDim0__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__fifo_mem__v0;
    __VdlySet__fifo_mem__v0 = 0;
    // Body
    __VdlySet__fifo_mem__v0 = 0U;
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr) 
         & (0x10U != (IData)(vlSelfRef.__PVT__count)))) {
        ++(vlSymsp->__Vcoverage[1392]);
        __VdlyVal__fifo_mem__v0 = vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg;
        __VdlyDim0__fifo_mem__v0 = vlSelfRef.__PVT__wr_ptr;
        __VdlySet__fifo_mem__v0 = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[1393]);
    }
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr) 
         & (0x10U != (IData)(vlSelfRef.__PVT__count)))) {
        ++(vlSymsp->__Vcoverage[1394]);
    }
    if ((0x10U == (IData)(vlSelfRef.__PVT__count))) {
        ++(vlSymsp->__Vcoverage[1395]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr)))) {
        ++(vlSymsp->__Vcoverage[1396]);
    }
    ++(vlSymsp->__Vcoverage[1397]);
    if (__VdlySet__fifo_mem__v0) {
        vlSelfRef.__PVT__fifo_mem[__VdlyDim0__fifo_mem__v0] 
            = __VdlyVal__fifo_mem__v0;
    }
}

VL_INLINE_OPT void Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__3(Vtb_spi_controller_spi_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__3\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_ptr = vlSelfRef.__Vdly__wr_ptr;
    vlSelfRef.__PVT__count = vlSelfRef.__Vdly__count;
    if ((1U & ((IData)(vlSelfRef.__PVT__wr_ptr) ^ (IData)(vlSelfRef.__Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelfRef.__Vtogcov__wr_ptr = ((0xeU & (IData)(vlSelfRef.__Vtogcov__wr_ptr)) 
                                       | (1U & (IData)(vlSelfRef.__PVT__wr_ptr)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__wr_ptr) ^ (IData)(vlSelfRef.__Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelfRef.__Vtogcov__wr_ptr = ((0xdU & (IData)(vlSelfRef.__Vtogcov__wr_ptr)) 
                                       | (2U & (IData)(vlSelfRef.__PVT__wr_ptr)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__wr_ptr) ^ (IData)(vlSelfRef.__Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelfRef.__Vtogcov__wr_ptr = ((0xbU & (IData)(vlSelfRef.__Vtogcov__wr_ptr)) 
                                       | (4U & (IData)(vlSelfRef.__PVT__wr_ptr)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__wr_ptr) ^ (IData)(vlSelfRef.__Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelfRef.__Vtogcov__wr_ptr = ((7U & (IData)(vlSelfRef.__Vtogcov__wr_ptr)) 
                                       | (8U & (IData)(vlSelfRef.__PVT__wr_ptr)));
    }
    if (((0x10U == (IData)(vlSelfRef.__PVT__count)) 
         ^ (IData)(vlSelfRef.__Vtogcov__full_o))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelfRef.__Vtogcov__full_o = (0x10U == (IData)(vlSelfRef.__PVT__count));
    }
    if (((0U == (IData)(vlSelfRef.__PVT__count)) ^ (IData)(vlSelfRef.__Vtogcov__empty_o))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelfRef.__Vtogcov__empty_o = (0U == (IData)(vlSelfRef.__PVT__count));
    }
    vlSelfRef.empty_o = (0U == (IData)(vlSelfRef.__PVT__count));
    vlSelfRef.full_o = (0x10U == (IData)(vlSelfRef.__PVT__count));
    if ((1U & ((IData)(vlSelfRef.__PVT__count) ^ (IData)(vlSelfRef.__Vtogcov__level_o)))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelfRef.__Vtogcov__level_o = ((0x1eU & (IData)(vlSelfRef.__Vtogcov__level_o)) 
                                        | (1U & (IData)(vlSelfRef.__PVT__count)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__count) ^ (IData)(vlSelfRef.__Vtogcov__level_o)))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelfRef.__Vtogcov__level_o = ((0x1dU & (IData)(vlSelfRef.__Vtogcov__level_o)) 
                                        | (2U & (IData)(vlSelfRef.__PVT__count)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__count) ^ (IData)(vlSelfRef.__Vtogcov__level_o)))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelfRef.__Vtogcov__level_o = ((0x1bU & (IData)(vlSelfRef.__Vtogcov__level_o)) 
                                        | (4U & (IData)(vlSelfRef.__PVT__count)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__count) ^ (IData)(vlSelfRef.__Vtogcov__level_o)))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelfRef.__Vtogcov__level_o = ((0x17U & (IData)(vlSelfRef.__Vtogcov__level_o)) 
                                        | (8U & (IData)(vlSelfRef.__PVT__count)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__count) ^ (IData)(vlSelfRef.__Vtogcov__level_o)))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelfRef.__Vtogcov__level_o = ((0xfU & (IData)(vlSelfRef.__Vtogcov__level_o)) 
                                        | (0x10U & (IData)(vlSelfRef.__PVT__count)));
    }
}

VL_INLINE_OPT void Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__4(Vtb_spi_controller_spi_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_spi_controller_spi_fifo___nba_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__4\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
               ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (1U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
               ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (2U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
               ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (4U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
               ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (8U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                  ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelfRef.__Vtogcov__data_i = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x10U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                  ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelfRef.__Vtogcov__data_i = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x20U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                  ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelfRef.__Vtogcov__data_i = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x40U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                  ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelfRef.__Vtogcov__data_i = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x80U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                   ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x100U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                   ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x200U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                   ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x400U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                   ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x800U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                    ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelfRef.__Vtogcov__data_i = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x1000U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                    ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelfRef.__Vtogcov__data_i = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x2000U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                    ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelfRef.__Vtogcov__data_i = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x4000U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                    ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelfRef.__Vtogcov__data_i = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x8000U & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x10000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                     ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x10000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x20000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                     ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x20000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x40000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                     ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelfRef.__Vtogcov__data_i = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x40000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x80000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                     ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelfRef.__Vtogcov__data_i = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x80000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x100000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                      ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelfRef.__Vtogcov__data_i = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x100000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x200000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                      ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelfRef.__Vtogcov__data_i = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x200000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x400000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                      ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelfRef.__Vtogcov__data_i = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x400000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x800000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                      ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelfRef.__Vtogcov__data_i = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x800000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x1000000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                       ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelfRef.__Vtogcov__data_i = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x1000000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x2000000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                       ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelfRef.__Vtogcov__data_i = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x2000000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x4000000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                       ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelfRef.__Vtogcov__data_i = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x4000000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x8000000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                       ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelfRef.__Vtogcov__data_i = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x8000000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x10000000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                        ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelfRef.__Vtogcov__data_i = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x10000000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x20000000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                        ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelfRef.__Vtogcov__data_i = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x20000000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((0x40000000U & ((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                        ^ vlSelfRef.__Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelfRef.__Vtogcov__data_i = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x40000000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if ((((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
          ^ vlSelfRef.__Vtogcov__data_i) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelfRef.__Vtogcov__data_i = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__data_i) 
                                       | (0x80000000U 
                                          & (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg)));
    }
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_i))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelfRef.__Vtogcov__wr_i = vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr;
    }
}
