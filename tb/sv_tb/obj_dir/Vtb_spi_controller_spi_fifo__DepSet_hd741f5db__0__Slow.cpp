// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_controller.h for the primary calling header

#include "Vtb_spi_controller__pch.h"
#include "Vtb_spi_controller__Syms.h"
#include "Vtb_spi_controller_spi_fifo.h"

VL_ATTR_COLD void Vtb_spi_controller_spi_fifo___stl_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0(Vtb_spi_controller_spi_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_spi_controller_spi_fifo___stl_sequent__TOP__tb_spi_controller__DOT__dut__DOT__tx_fifo__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__pclk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelfRef.__Vtogcov__clk_i = vlSymsp->TOP.tb_spi_controller__DOT__pclk;
    }
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__presetn) 
         ^ (IData)(vlSelfRef.__Vtogcov__reset_n_i))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelfRef.__Vtogcov__reset_n_i = vlSymsp->TOP.tb_spi_controller__DOT__presetn;
    }
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_i))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelfRef.__Vtogcov__wr_i = vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr;
    }
    if (((0x10U == (IData)(vlSelfRef.__PVT__count)) 
         ^ (IData)(vlSelfRef.__Vtogcov__full_o))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelfRef.__Vtogcov__full_o = (0x10U == (IData)(vlSelfRef.__PVT__count));
    }
    if (((0U == (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
         ^ (IData)(vlSelfRef.__Vtogcov__rd_i))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelfRef.__Vtogcov__rd_i = (0U == (IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state));
    }
    if (((0U == (IData)(vlSelfRef.__PVT__count)) ^ (IData)(vlSelfRef.__Vtogcov__empty_o))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelfRef.__Vtogcov__empty_o = (0U == (IData)(vlSelfRef.__PVT__count));
    }
    vlSelfRef.empty_o = (0U == (IData)(vlSelfRef.__PVT__count));
    vlSelfRef.full_o = (0x10U == (IData)(vlSelfRef.__PVT__count));
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

VL_ATTR_COLD void Vtb_spi_controller_spi_fifo___stl_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__0(Vtb_spi_controller_spi_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_spi_controller_spi_fifo___stl_sequent__TOP__tb_spi_controller__DOT__dut__DOT__rx_fifo__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__pclk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelfRef.__Vtogcov__clk_i = vlSymsp->TOP.tb_spi_controller__DOT__pclk;
    }
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__presetn) 
         ^ (IData)(vlSelfRef.__Vtogcov__reset_n_i))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelfRef.__Vtogcov__reset_n_i = vlSymsp->TOP.tb_spi_controller__DOT__presetn;
    }
    if (((0x10U == (IData)(vlSelfRef.__PVT__count)) 
         ^ (IData)(vlSelfRef.__Vtogcov__full_o))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelfRef.__Vtogcov__full_o = (0x10U == (IData)(vlSelfRef.__PVT__count));
    }
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd) 
         ^ (IData)(vlSelfRef.__Vtogcov__rd_i))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelfRef.__Vtogcov__rd_i = vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd;
    }
    if (((0U == (IData)(vlSelfRef.__PVT__count)) ^ (IData)(vlSelfRef.__Vtogcov__empty_o))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelfRef.__Vtogcov__empty_o = (0U == (IData)(vlSelfRef.__PVT__count));
    }
    vlSelfRef.empty_o = (0U == (IData)(vlSelfRef.__PVT__count));
    vlSelfRef.full_o = (0x10U == (IData)(vlSelfRef.__PVT__count));
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
    vlSelfRef.data_o = vlSelfRef.__PVT__fifo_mem[vlSelfRef.__PVT__rd_ptr];
    if (((IData)(vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_i))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelfRef.__Vtogcov__wr_i = vlSymsp->TOP.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr;
    }
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

VL_ATTR_COLD void Vtb_spi_controller_spi_fifo___configure_coverage(Vtb_spi_controller_spi_fifo* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_spi_controller_spi_fifo___configure_coverage\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1281]), first, "../../rtl/spi_fifo.sv", 24, 37, "", "v_toggle/spi_fifo", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1282]), first, "../../rtl/spi_fifo.sv", 25, 37, "", "v_toggle/spi_fifo", "reset_n_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1283]), first, "../../rtl/spi_fifo.sv", 28, 37, "", "v_toggle/spi_fifo", "wr_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1284]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1285]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1286]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1287]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1288]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1289]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1290]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1291]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1292]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1293]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1294]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1295]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1296]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1297]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1298]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1299]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1300]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1301]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1302]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1303]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1304]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1305]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1306]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1307]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1308]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1309]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1310]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1311]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1312]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1313]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1314]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1315]), first, "../../rtl/spi_fifo.sv", 29, 37, "", "v_toggle/spi_fifo", "data_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1316]), first, "../../rtl/spi_fifo.sv", 30, 37, "", "v_toggle/spi_fifo", "full_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1317]), first, "../../rtl/spi_fifo.sv", 33, 37, "", "v_toggle/spi_fifo", "rd_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1318]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1319]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1320]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1321]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1322]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1323]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1324]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1325]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1326]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1327]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1328]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1329]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1330]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1331]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1332]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1333]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1334]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1335]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1336]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1337]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1338]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1339]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1340]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1341]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1342]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1343]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1344]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1345]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1346]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1347]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1348]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1349]), first, "../../rtl/spi_fifo.sv", 34, 37, "", "v_toggle/spi_fifo", "data_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1350]), first, "../../rtl/spi_fifo.sv", 35, 37, "", "v_toggle/spi_fifo", "empty_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1351]), first, "../../rtl/spi_fifo.sv", 38, 41, "", "v_toggle/spi_fifo", "level_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1352]), first, "../../rtl/spi_fifo.sv", 38, 41, "", "v_toggle/spi_fifo", "level_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1353]), first, "../../rtl/spi_fifo.sv", 38, 41, "", "v_toggle/spi_fifo", "level_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1354]), first, "../../rtl/spi_fifo.sv", 38, 41, "", "v_toggle/spi_fifo", "level_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "../../rtl/spi_fifo.sv", 38, 41, "", "v_toggle/spi_fifo", "level_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1356]), first, "../../rtl/spi_fifo.sv", 46, 28, "", "v_toggle/spi_fifo", "wr_ptr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1357]), first, "../../rtl/spi_fifo.sv", 46, 28, "", "v_toggle/spi_fifo", "wr_ptr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1358]), first, "../../rtl/spi_fifo.sv", 46, 28, "", "v_toggle/spi_fifo", "wr_ptr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1359]), first, "../../rtl/spi_fifo.sv", 46, 28, "", "v_toggle/spi_fifo", "wr_ptr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1360]), first, "../../rtl/spi_fifo.sv", 47, 28, "", "v_toggle/spi_fifo", "rd_ptr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1361]), first, "../../rtl/spi_fifo.sv", 47, 28, "", "v_toggle/spi_fifo", "rd_ptr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1362]), first, "../../rtl/spi_fifo.sv", 47, 28, "", "v_toggle/spi_fifo", "rd_ptr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1363]), first, "../../rtl/spi_fifo.sv", 47, 28, "", "v_toggle/spi_fifo", "rd_ptr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1351]), first, "../../rtl/spi_fifo.sv", 48, 28, "", "v_toggle/spi_fifo", "count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1352]), first, "../../rtl/spi_fifo.sv", 48, 28, "", "v_toggle/spi_fifo", "count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1353]), first, "../../rtl/spi_fifo.sv", 48, 28, "", "v_toggle/spi_fifo", "count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1354]), first, "../../rtl/spi_fifo.sv", 48, 28, "", "v_toggle/spi_fifo", "count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "../../rtl/spi_fifo.sv", 48, 28, "", "v_toggle/spi_fifo", "count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1364]), first, "../../rtl/spi_fifo.sv", 56, 35, "", "v_expr/spi_fifo", "((wr_ptr == (FIFO_DEPTH - 32'sh1))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1365]), first, "../../rtl/spi_fifo.sv", 56, 35, "", "v_expr/spi_fifo", "((wr_ptr == (FIFO_DEPTH - 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1366]), first, "../../rtl/spi_fifo.sv", 56, 52, "", "v_branch/spi_fifo", "cond_then", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1367]), first, "../../rtl/spi_fifo.sv", 56, 53, "", "v_branch/spi_fifo", "cond_else", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1368]), first, "../../rtl/spi_fifo.sv", 55, 13, "", "v_branch/spi_fifo", "if", "55-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1369]), first, "../../rtl/spi_fifo.sv", 55, 14, "", "v_branch/spi_fifo", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1370]), first, "../../rtl/spi_fifo.sv", 55, 22, "", "v_expr/spi_fifo", "(wr_i==1 && full_o==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1371]), first, "../../rtl/spi_fifo.sv", 55, 22, "", "v_expr/spi_fifo", "(full_o==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1372]), first, "../../rtl/spi_fifo.sv", 55, 22, "", "v_expr/spi_fifo", "(wr_i==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1373]), first, "../../rtl/spi_fifo.sv", 52, 9, "", "v_branch/spi_fifo", "if", "52-53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1374]), first, "../../rtl/spi_fifo.sv", 52, 10, "", "v_branch/spi_fifo", "else", "54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1375]), first, "../../rtl/spi_fifo.sv", 52, 13, "", "v_expr/spi_fifo", "(reset_n_i==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1376]), first, "../../rtl/spi_fifo.sv", 52, 13, "", "v_expr/spi_fifo", "(reset_n_i==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1377]), first, "../../rtl/spi_fifo.sv", 51, 5, "", "v_line/spi_fifo", "block", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1378]), first, "../../rtl/spi_fifo.sv", 67, 35, "", "v_expr/spi_fifo", "((rd_ptr == (FIFO_DEPTH - 32'sh1))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1379]), first, "../../rtl/spi_fifo.sv", 67, 35, "", "v_expr/spi_fifo", "((rd_ptr == (FIFO_DEPTH - 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1380]), first, "../../rtl/spi_fifo.sv", 67, 52, "", "v_branch/spi_fifo", "cond_then", "67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1381]), first, "../../rtl/spi_fifo.sv", 67, 53, "", "v_branch/spi_fifo", "cond_else", "67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1382]), first, "../../rtl/spi_fifo.sv", 66, 13, "", "v_branch/spi_fifo", "if", "66-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1383]), first, "../../rtl/spi_fifo.sv", 66, 14, "", "v_branch/spi_fifo", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1384]), first, "../../rtl/spi_fifo.sv", 66, 22, "", "v_expr/spi_fifo", "(rd_i==1 && empty_o==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1385]), first, "../../rtl/spi_fifo.sv", 66, 22, "", "v_expr/spi_fifo", "(empty_o==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1386]), first, "../../rtl/spi_fifo.sv", 66, 22, "", "v_expr/spi_fifo", "(rd_i==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1387]), first, "../../rtl/spi_fifo.sv", 63, 9, "", "v_branch/spi_fifo", "if", "63-64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1388]), first, "../../rtl/spi_fifo.sv", 63, 10, "", "v_branch/spi_fifo", "else", "65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1389]), first, "../../rtl/spi_fifo.sv", 63, 13, "", "v_expr/spi_fifo", "(reset_n_i==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1390]), first, "../../rtl/spi_fifo.sv", 63, 13, "", "v_expr/spi_fifo", "(reset_n_i==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1391]), first, "../../rtl/spi_fifo.sv", 62, 5, "", "v_line/spi_fifo", "block", "62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1392]), first, "../../rtl/spi_fifo.sv", 74, 9, "", "v_branch/spi_fifo", "if", "74-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1393]), first, "../../rtl/spi_fifo.sv", 74, 10, "", "v_branch/spi_fifo", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1394]), first, "../../rtl/spi_fifo.sv", 74, 18, "", "v_expr/spi_fifo", "(wr_i==1 && full_o==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1395]), first, "../../rtl/spi_fifo.sv", 74, 18, "", "v_expr/spi_fifo", "(full_o==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1396]), first, "../../rtl/spi_fifo.sv", 74, 18, "", "v_expr/spi_fifo", "(wr_i==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1397]), first, "../../rtl/spi_fifo.sv", 73, 5, "", "v_line/spi_fifo", "block", "73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1398]), first, "../../rtl/spi_fifo.sv", 87, 25, "", "v_expr/spi_fifo", "(wr_i==1 && full_o==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1399]), first, "../../rtl/spi_fifo.sv", 87, 25, "", "v_expr/spi_fifo", "(full_o==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1400]), first, "../../rtl/spi_fifo.sv", 87, 25, "", "v_expr/spi_fifo", "(wr_i==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1401]), first, "../../rtl/spi_fifo.sv", 87, 42, "", "v_expr/spi_fifo", "(rd_i==1 && empty_o==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1402]), first, "../../rtl/spi_fifo.sv", 87, 42, "", "v_expr/spi_fifo", "(empty_o==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1403]), first, "../../rtl/spi_fifo.sv", 87, 42, "", "v_expr/spi_fifo", "(rd_i==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1404]), first, "../../rtl/spi_fifo.sv", 88, 22, "", "v_line/spi_fifo", "case", "88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1405]), first, "../../rtl/spi_fifo.sv", 89, 22, "", "v_line/spi_fifo", "case", "89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1406]), first, "../../rtl/spi_fifo.sv", 90, 22, "", "v_line/spi_fifo", "case", "90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1407]), first, "../../rtl/spi_fifo.sv", 91, 17, "", "v_line/spi_fifo", "case", "91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1408]), first, "../../rtl/spi_fifo.sv", 84, 9, "", "v_branch/spi_fifo", "if", "84-85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1409]), first, "../../rtl/spi_fifo.sv", 84, 10, "", "v_branch/spi_fifo", "else", "86-87");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1410]), first, "../../rtl/spi_fifo.sv", 84, 13, "", "v_expr/spi_fifo", "(reset_n_i==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1411]), first, "../../rtl/spi_fifo.sv", 84, 13, "", "v_expr/spi_fifo", "(reset_n_i==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1412]), first, "../../rtl/spi_fifo.sv", 83, 5, "", "v_line/spi_fifo", "block", "83");
}
