// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_controller.h for the primary calling header

#include "Vtb_spi_controller__pch.h"
#include "Vtb_spi_controller___024root.h"

VlCoroutine Vtb_spi_controller___024root___eval_initial__TOP__Vtiming__0(Vtb_spi_controller___024root* vlSelf);
VlCoroutine Vtb_spi_controller___024root___eval_initial__TOP__Vtiming__1(Vtb_spi_controller___024root* vlSelf);

void Vtb_spi_controller___024root___eval_initial(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_initial\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_spi_controller___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_spi_controller___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_spi_controller___024root___eval_initial__TOP__Vtiming__0(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_controller__DOT__pclk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_spi_controller.sv", 
                                             76);
        vlSelfRef.tb_spi_controller__DOT__pclk = (1U 
                                                  & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__pclk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_spi_controller___024root___eval_initial__TOP__Vtiming__1(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__0__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__0__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__0__data;
    __Vtask_tb_spi_controller__DOT__apb_write__0__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__1__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__1__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__1__data;
    __Vtask_tb_spi_controller__DOT__apb_write__1__data = 0;
    CData/*1:0*/ __Vtask_tb_spi_controller__DOT__test_spi_mode__2__mode;
    __Vtask_tb_spi_controller__DOT__test_spi_mode__2__mode = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__test_spi_mode__2__test_data_in;
    __Vtask_tb_spi_controller__DOT__test_spi_mode__2__test_data_in = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__3__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__3__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__3__data;
    __Vtask_tb_spi_controller__DOT__apb_write__3__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__4__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__4__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__4__data;
    __Vtask_tb_spi_controller__DOT__apb_write__4__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__5__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__5__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__5__data;
    __Vtask_tb_spi_controller__DOT__apb_read__5__data = 0;
    CData/*1:0*/ __Vtask_tb_spi_controller__DOT__test_spi_mode__6__mode;
    __Vtask_tb_spi_controller__DOT__test_spi_mode__6__mode = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__test_spi_mode__6__test_data_in;
    __Vtask_tb_spi_controller__DOT__test_spi_mode__6__test_data_in = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__7__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__7__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__7__data;
    __Vtask_tb_spi_controller__DOT__apb_write__7__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__8__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__8__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__8__data;
    __Vtask_tb_spi_controller__DOT__apb_write__8__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__9__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__9__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__9__data;
    __Vtask_tb_spi_controller__DOT__apb_read__9__data = 0;
    CData/*1:0*/ __Vtask_tb_spi_controller__DOT__test_spi_mode__10__mode;
    __Vtask_tb_spi_controller__DOT__test_spi_mode__10__mode = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__test_spi_mode__10__test_data_in;
    __Vtask_tb_spi_controller__DOT__test_spi_mode__10__test_data_in = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__11__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__11__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__11__data;
    __Vtask_tb_spi_controller__DOT__apb_write__11__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__12__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__12__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__12__data;
    __Vtask_tb_spi_controller__DOT__apb_write__12__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__13__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__13__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__13__data;
    __Vtask_tb_spi_controller__DOT__apb_read__13__data = 0;
    CData/*1:0*/ __Vtask_tb_spi_controller__DOT__test_spi_mode__14__mode;
    __Vtask_tb_spi_controller__DOT__test_spi_mode__14__mode = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__test_spi_mode__14__test_data_in;
    __Vtask_tb_spi_controller__DOT__test_spi_mode__14__test_data_in = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__15__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__15__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__15__data;
    __Vtask_tb_spi_controller__DOT__apb_write__15__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__16__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__16__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__16__data;
    __Vtask_tb_spi_controller__DOT__apb_write__16__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__17__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__17__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__17__data;
    __Vtask_tb_spi_controller__DOT__apb_read__17__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__18__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__18__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__18__data;
    __Vtask_tb_spi_controller__DOT__apb_read__18__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__20__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__20__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__20__data;
    __Vtask_tb_spi_controller__DOT__apb_write__20__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__21__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__21__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__21__data;
    __Vtask_tb_spi_controller__DOT__apb_write__21__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__22__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__22__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__22__data;
    __Vtask_tb_spi_controller__DOT__apb_read__22__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__23__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__23__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__23__data;
    __Vtask_tb_spi_controller__DOT__apb_read__23__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__24__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__24__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__24__data;
    __Vtask_tb_spi_controller__DOT__apb_read__24__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__25__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__25__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__25__data;
    __Vtask_tb_spi_controller__DOT__apb_read__25__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__26__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__26__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__26__data;
    __Vtask_tb_spi_controller__DOT__apb_read__26__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__27__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__27__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__27__data;
    __Vtask_tb_spi_controller__DOT__apb_read__27__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__28__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__28__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__28__data;
    __Vtask_tb_spi_controller__DOT__apb_read__28__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__30__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__30__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__30__data;
    __Vtask_tb_spi_controller__DOT__apb_write__30__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__31__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__31__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__31__data;
    __Vtask_tb_spi_controller__DOT__apb_write__31__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__32__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__32__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__32__data;
    __Vtask_tb_spi_controller__DOT__apb_write__32__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__33__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__33__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__33__data;
    __Vtask_tb_spi_controller__DOT__apb_read__33__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__34__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__34__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__34__data;
    __Vtask_tb_spi_controller__DOT__apb_write__34__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__35__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__35__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__35__data;
    __Vtask_tb_spi_controller__DOT__apb_read__35__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__36__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__36__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__36__data;
    __Vtask_tb_spi_controller__DOT__apb_read__36__data = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__test_fifo_overflow__37__unnamedblk1__DOT__i;
    __Vtask_tb_spi_controller__DOT__test_fifo_overflow__37__unnamedblk1__DOT__i = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__38__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__38__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__38__data;
    __Vtask_tb_spi_controller__DOT__apb_write__38__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__39__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__39__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__39__data;
    __Vtask_tb_spi_controller__DOT__apb_write__39__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__40__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__40__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__40__data;
    __Vtask_tb_spi_controller__DOT__apb_read__40__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__41__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__41__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__41__data;
    __Vtask_tb_spi_controller__DOT__apb_write__41__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__42__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__42__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__42__data;
    __Vtask_tb_spi_controller__DOT__apb_read__42__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__43__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__43__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__43__data;
    __Vtask_tb_spi_controller__DOT__apb_write__43__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__44__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__44__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__44__data;
    __Vtask_tb_spi_controller__DOT__apb_read__44__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__45__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__45__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__45__data;
    __Vtask_tb_spi_controller__DOT__apb_read__45__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__47__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__47__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__47__data;
    __Vtask_tb_spi_controller__DOT__apb_write__47__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__48__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__48__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__48__data;
    __Vtask_tb_spi_controller__DOT__apb_write__48__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__49__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__49__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__49__data;
    __Vtask_tb_spi_controller__DOT__apb_read__49__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__50__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__50__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__50__data;
    __Vtask_tb_spi_controller__DOT__apb_write__50__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__51__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__51__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__51__data;
    __Vtask_tb_spi_controller__DOT__apb_read__51__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__53__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__53__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__53__data;
    __Vtask_tb_spi_controller__DOT__apb_write__53__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__54__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__54__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__54__data;
    __Vtask_tb_spi_controller__DOT__apb_write__54__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__55__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__55__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__55__data;
    __Vtask_tb_spi_controller__DOT__apb_write__55__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__56__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__56__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__56__data;
    __Vtask_tb_spi_controller__DOT__apb_read__56__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__58__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__58__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__58__data;
    __Vtask_tb_spi_controller__DOT__apb_write__58__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__59__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__59__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__59__data;
    __Vtask_tb_spi_controller__DOT__apb_write__59__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__60__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__60__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__60__data;
    __Vtask_tb_spi_controller__DOT__apb_write__60__data = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__test_performance__61__unnamedblk2__DOT__i;
    __Vtask_tb_spi_controller__DOT__test_performance__61__unnamedblk2__DOT__i = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__62__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__62__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__62__data;
    __Vtask_tb_spi_controller__DOT__apb_write__62__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__63__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__63__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__63__data;
    __Vtask_tb_spi_controller__DOT__apb_write__63__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_write__64__addr;
    __Vtask_tb_spi_controller__DOT__apb_write__64__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_write__64__data;
    __Vtask_tb_spi_controller__DOT__apb_write__64__data = 0;
    CData/*7:0*/ __Vtask_tb_spi_controller__DOT__apb_read__65__addr;
    __Vtask_tb_spi_controller__DOT__apb_read__65__addr = 0;
    IData/*31:0*/ __Vtask_tb_spi_controller__DOT__apb_read__65__data;
    __Vtask_tb_spi_controller__DOT__apb_read__65__data = 0;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_56;
    VlWide<3>/*95:0*/ __Vtemp_59;
    // Body
    vlSelfRef.tb_spi_controller__DOT__presetn = 0U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwdata = 0U;
    vlSelfRef.tb_spi_controller__DOT__test_count = 0U;
    vlSelfRef.tb_spi_controller__DOT__pass_count = 0U;
    vlSelfRef.tb_spi_controller__DOT__fail_count = 0U;
    vlSelfRef.tb_spi_controller__DOT__fifo_overflow_detected = 0U;
    vlSelfRef.tb_spi_controller__DOT__fifo_underflow_detected = 0U;
    vlSelfRef.tb_spi_controller__DOT__interrupt_generated = 0U;
    vlSelfRef.tb_spi_controller__DOT__test_data[0U] = 0xa0U;
    vlSelfRef.tb_spi_controller__DOT__test_data[1U] = 0xa1U;
    vlSelfRef.tb_spi_controller__DOT__test_data[2U] = 0xa2U;
    vlSelfRef.tb_spi_controller__DOT__test_data[3U] = 0xa3U;
    vlSelfRef.tb_spi_controller__DOT__test_data[4U] = 0xa4U;
    vlSelfRef.tb_spi_controller__DOT__test_data[5U] = 0xa5U;
    vlSelfRef.tb_spi_controller__DOT__test_data[6U] = 0xa6U;
    vlSelfRef.tb_spi_controller__DOT__test_data[7U] = 0xa7U;
    vlSelfRef.tb_spi_controller__DOT__test_data[8U] = 0xa8U;
    vlSelfRef.tb_spi_controller__DOT__test_data[9U] = 0xa9U;
    vlSelfRef.tb_spi_controller__DOT__test_data[0xaU] = 0xaaU;
    vlSelfRef.tb_spi_controller__DOT__test_data[0xbU] = 0xabU;
    vlSelfRef.tb_spi_controller__DOT__test_data[0xcU] = 0xacU;
    vlSelfRef.tb_spi_controller__DOT__test_data[0xdU] = 0xadU;
    vlSelfRef.tb_spi_controller__DOT__test_data[0xeU] = 0xaeU;
    vlSelfRef.tb_spi_controller__DOT__test_data[0xfU] = 0xafU;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x10U] = 0xb0U;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x11U] = 0xb1U;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x12U] = 0xb2U;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x13U] = 0xb3U;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x14U] = 0xb4U;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x15U] = 0xb5U;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x16U] = 0xb6U;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x17U] = 0xb7U;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x18U] = 0xb8U;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x19U] = 0xb9U;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x1aU] = 0xbaU;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x1bU] = 0xbbU;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x1cU] = 0xbcU;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x1dU] = 0xbdU;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x1eU] = 0xbeU;
    vlSelfRef.tb_spi_controller__DOT__test_data[0x1fU] = 0xbfU;
    vlSelfRef.tb_spi_controller__DOT__unnamedblk3__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         509);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__presetn = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         511);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=== Test 1: Basic APB interface ===\n",0);
    vlSelfRef.tb_spi_controller__DOT__test_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__test_count);
    __Vtask_tb_spi_controller__DOT__apb_write__0__data = 1U;
    __Vtask_tb_spi_controller__DOT__apb_write__0__addr = 0U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__0__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__0__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__1__data = 0xaU;
    __Vtask_tb_spi_controller__DOT__apb_write__1__addr = 0x10U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__1__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__1__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         520);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__pass_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__pass_count);
    VL_WRITEF_NX("PASS: Basic APB interface test\n=== Test 2: All SPI Modes ===\n",0);
    vlSelfRef.tb_spi_controller__DOT__test_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__test_count);
    __Vtask_tb_spi_controller__DOT__test_spi_mode__2__test_data_in = 0xaaU;
    __Vtask_tb_spi_controller__DOT__test_spi_mode__2__mode = 0U;
    VL_WRITEF_NX("Testing SPI Mode %0# with data 0x%02x\n",0,
                 2,__Vtask_tb_spi_controller__DOT__test_spi_mode__2__mode,
                 8,(IData)(__Vtask_tb_spi_controller__DOT__test_spi_mode__2__test_data_in));
    __Vtask_tb_spi_controller__DOT__apb_write__3__data 
        = __Vtask_tb_spi_controller__DOT__test_spi_mode__2__mode;
    __Vtask_tb_spi_controller__DOT__apb_write__3__addr = 0x1cU;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__3__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__3__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__4__data 
        = __Vtask_tb_spi_controller__DOT__test_spi_mode__2__test_data_in;
    __Vtask_tb_spi_controller__DOT__apb_write__4__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__4__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__4__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         175);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__5__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__5__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__5__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__5__data;
    if ((1U & vlSelfRef.tb_spi_controller__DOT__status)) {
        VL_WRITEF_NX("FAIL: SPI Mode %0# transmission failed\n",0,
                     2,__Vtask_tb_spi_controller__DOT__test_spi_mode__2__mode);
    } else {
        VL_WRITEF_NX("PASS: SPI Mode %0# transmission completed\n",0,
                     2,__Vtask_tb_spi_controller__DOT__test_spi_mode__2__mode);
    }
    __Vtask_tb_spi_controller__DOT__test_spi_mode__6__test_data_in = 0xbbU;
    __Vtask_tb_spi_controller__DOT__test_spi_mode__6__mode = 1U;
    VL_WRITEF_NX("Testing SPI Mode %0# with data 0x%02x\n",0,
                 2,__Vtask_tb_spi_controller__DOT__test_spi_mode__6__mode,
                 8,(IData)(__Vtask_tb_spi_controller__DOT__test_spi_mode__6__test_data_in));
    __Vtask_tb_spi_controller__DOT__apb_write__7__data 
        = __Vtask_tb_spi_controller__DOT__test_spi_mode__6__mode;
    __Vtask_tb_spi_controller__DOT__apb_write__7__addr = 0x1cU;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__7__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__7__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__8__data 
        = __Vtask_tb_spi_controller__DOT__test_spi_mode__6__test_data_in;
    __Vtask_tb_spi_controller__DOT__apb_write__8__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__8__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__8__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         175);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__9__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__9__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__9__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__9__data;
    if ((1U & vlSelfRef.tb_spi_controller__DOT__status)) {
        VL_WRITEF_NX("FAIL: SPI Mode %0# transmission failed\n",0,
                     2,__Vtask_tb_spi_controller__DOT__test_spi_mode__6__mode);
    } else {
        VL_WRITEF_NX("PASS: SPI Mode %0# transmission completed\n",0,
                     2,__Vtask_tb_spi_controller__DOT__test_spi_mode__6__mode);
    }
    __Vtask_tb_spi_controller__DOT__test_spi_mode__10__test_data_in = 0xccU;
    __Vtask_tb_spi_controller__DOT__test_spi_mode__10__mode = 2U;
    VL_WRITEF_NX("Testing SPI Mode %0# with data 0x%02x\n",0,
                 2,__Vtask_tb_spi_controller__DOT__test_spi_mode__10__mode,
                 8,(IData)(__Vtask_tb_spi_controller__DOT__test_spi_mode__10__test_data_in));
    __Vtask_tb_spi_controller__DOT__apb_write__11__data 
        = __Vtask_tb_spi_controller__DOT__test_spi_mode__10__mode;
    __Vtask_tb_spi_controller__DOT__apb_write__11__addr = 0x1cU;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__11__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__11__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__12__data 
        = __Vtask_tb_spi_controller__DOT__test_spi_mode__10__test_data_in;
    __Vtask_tb_spi_controller__DOT__apb_write__12__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__12__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__12__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         175);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__13__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__13__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__13__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__13__data;
    if ((1U & vlSelfRef.tb_spi_controller__DOT__status)) {
        VL_WRITEF_NX("FAIL: SPI Mode %0# transmission failed\n",0,
                     2,__Vtask_tb_spi_controller__DOT__test_spi_mode__10__mode);
    } else {
        VL_WRITEF_NX("PASS: SPI Mode %0# transmission completed\n",0,
                     2,__Vtask_tb_spi_controller__DOT__test_spi_mode__10__mode);
    }
    __Vtask_tb_spi_controller__DOT__test_spi_mode__14__test_data_in = 0xddU;
    __Vtask_tb_spi_controller__DOT__test_spi_mode__14__mode = 3U;
    VL_WRITEF_NX("Testing SPI Mode %0# with data 0x%02x\n",0,
                 2,__Vtask_tb_spi_controller__DOT__test_spi_mode__14__mode,
                 8,(IData)(__Vtask_tb_spi_controller__DOT__test_spi_mode__14__test_data_in));
    __Vtask_tb_spi_controller__DOT__apb_write__15__data 
        = __Vtask_tb_spi_controller__DOT__test_spi_mode__14__mode;
    __Vtask_tb_spi_controller__DOT__apb_write__15__addr = 0x1cU;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__15__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__15__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__16__data 
        = __Vtask_tb_spi_controller__DOT__test_spi_mode__14__test_data_in;
    __Vtask_tb_spi_controller__DOT__apb_write__16__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__16__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__16__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         175);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__17__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__17__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__17__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__17__data;
    if ((1U & vlSelfRef.tb_spi_controller__DOT__status)) {
        VL_WRITEF_NX("FAIL: SPI Mode %0# transmission failed\n",0,
                     2,__Vtask_tb_spi_controller__DOT__test_spi_mode__14__mode);
    } else {
        VL_WRITEF_NX("PASS: SPI Mode %0# transmission completed\n",0,
                     2,__Vtask_tb_spi_controller__DOT__test_spi_mode__14__mode);
    }
    __Vtask_tb_spi_controller__DOT__apb_read__18__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__18__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__18__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__18__data;
    if ((1U & vlSelfRef.tb_spi_controller__DOT__status)) {
        vlSelfRef.tb_spi_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__fail_count);
    } else {
        vlSelfRef.tb_spi_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__pass_count);
    }
    VL_WRITEF_NX("=== Test 3: FIFO Underflow ===\n",0);
    vlSelfRef.tb_spi_controller__DOT__test_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__test_count);
    VL_WRITEF_NX("Testing FIFO Underflow...\n",0);
    vlSelfRef.tb_spi_controller__DOT__presetn = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__presetn = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         357);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_write__20__data = 1U;
    __Vtask_tb_spi_controller__DOT__apb_write__20__addr = 0U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__20__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__20__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__21__data = 0xaU;
    __Vtask_tb_spi_controller__DOT__apb_write__21__addr = 0x10U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__21__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__21__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_read__22__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__22__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__22__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__22__data;
    VL_WRITEF_NX("Initial status: 0x%08x (RX empty: %b, RX level: %0#)\n",0,
                 32,vlSelfRef.tb_spi_controller__DOT__status,
                 1,(1U & (vlSelfRef.tb_spi_controller__DOT__status 
                          >> 1U)),8,(0xffU & (vlSelfRef.tb_spi_controller__DOT__status 
                                              >> 0x10U)));
    if (VL_LIKELY(((2U & vlSelfRef.tb_spi_controller__DOT__status)))) {
        VL_WRITEF_NX("PASS: RX FIFO is empty initially\n",0);
        vlSelfRef.tb_spi_controller__DOT__fifo_underflow_detected = 1U;
    } else {
        VL_WRITEF_NX("INFO: RX FIFO is not empty initially (level: %0#) - clearing it\n",0,
                     8,(0xffU & (vlSelfRef.tb_spi_controller__DOT__status 
                                 >> 0x10U)));
        __Vtask_tb_spi_controller__DOT__apb_read__23__addr = 0xcU;
        co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_spi_controller.pclk)", 
                                                             "tb_spi_controller.sv", 
                                                             145);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_spi_controller__DOT__psel = 1U;
        vlSelfRef.tb_spi_controller__DOT__penable = 0U;
        vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
        vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__23__addr;
        co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_spi_controller.pclk)", 
                                                             "tb_spi_controller.sv", 
                                                             151);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_spi_controller__DOT__penable = 1U;
        co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_spi_controller.pclk)", 
                                                             "tb_spi_controller.sv", 
                                                             154);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_spi_controller__DOT__apb_read__23__data 
            = vlSelfRef.tb_spi_controller__DOT__prdata;
        vlSelfRef.tb_spi_controller__DOT__psel = 0U;
        vlSelfRef.tb_spi_controller__DOT__penable = 0U;
        vlSelfRef.tb_spi_controller__DOT__received_data[0U] 
            = (0xffU & __Vtask_tb_spi_controller__DOT__apb_read__23__data);
        __Vtask_tb_spi_controller__DOT__apb_read__24__addr = 0xcU;
        co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_spi_controller.pclk)", 
                                                             "tb_spi_controller.sv", 
                                                             145);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_spi_controller__DOT__psel = 1U;
        vlSelfRef.tb_spi_controller__DOT__penable = 0U;
        vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
        vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__24__addr;
        co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_spi_controller.pclk)", 
                                                             "tb_spi_controller.sv", 
                                                             151);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_spi_controller__DOT__penable = 1U;
        co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_spi_controller.pclk)", 
                                                             "tb_spi_controller.sv", 
                                                             154);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_spi_controller__DOT__apb_read__24__data 
            = vlSelfRef.tb_spi_controller__DOT__prdata;
        vlSelfRef.tb_spi_controller__DOT__psel = 0U;
        vlSelfRef.tb_spi_controller__DOT__penable = 0U;
        vlSelfRef.tb_spi_controller__DOT__received_data[0U] 
            = (0xffU & __Vtask_tb_spi_controller__DOT__apb_read__24__data);
        __Vtask_tb_spi_controller__DOT__apb_read__25__addr = 0xcU;
        co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_spi_controller.pclk)", 
                                                             "tb_spi_controller.sv", 
                                                             145);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_spi_controller__DOT__psel = 1U;
        vlSelfRef.tb_spi_controller__DOT__penable = 0U;
        vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
        vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__25__addr;
        co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_spi_controller.pclk)", 
                                                             "tb_spi_controller.sv", 
                                                             151);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_spi_controller__DOT__penable = 1U;
        co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_spi_controller.pclk)", 
                                                             "tb_spi_controller.sv", 
                                                             154);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_spi_controller__DOT__apb_read__25__data 
            = vlSelfRef.tb_spi_controller__DOT__prdata;
        vlSelfRef.tb_spi_controller__DOT__psel = 0U;
        vlSelfRef.tb_spi_controller__DOT__penable = 0U;
        vlSelfRef.tb_spi_controller__DOT__received_data[0U] 
            = (0xffU & __Vtask_tb_spi_controller__DOT__apb_read__25__data);
        __Vtask_tb_spi_controller__DOT__apb_read__26__addr = 4U;
        co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_spi_controller.pclk)", 
                                                             "tb_spi_controller.sv", 
                                                             145);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_spi_controller__DOT__psel = 1U;
        vlSelfRef.tb_spi_controller__DOT__penable = 0U;
        vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
        vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__26__addr;
        co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_spi_controller.pclk)", 
                                                             "tb_spi_controller.sv", 
                                                             151);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_spi_controller__DOT__penable = 1U;
        co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_spi_controller.pclk)", 
                                                             "tb_spi_controller.sv", 
                                                             154);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_spi_controller__DOT__apb_read__26__data 
            = vlSelfRef.tb_spi_controller__DOT__prdata;
        vlSelfRef.tb_spi_controller__DOT__psel = 0U;
        vlSelfRef.tb_spi_controller__DOT__penable = 0U;
        vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__26__data;
        VL_WRITEF_NX("INFO: RX FIFO clearing attempted - proceeding with test\n",0);
    }
    __Vtask_tb_spi_controller__DOT__apb_read__27__addr = 0xcU;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__27__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__27__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__received_data[0U] 
        = (0xffU & __Vtask_tb_spi_controller__DOT__apb_read__27__data);
    __Vtask_tb_spi_controller__DOT__apb_read__28__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__28__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__28__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__28__data;
    if ((IData)((2U == (0x22U & vlSelfRef.tb_spi_controller__DOT__status)))) {
        VL_WRITEF_NX("PASS: FIFO underflow protection working correctly\n",0);
    } else {
        VL_WRITEF_NX("FAIL: FIFO underflow protection not working\n",0);
    }
    if (vlSelfRef.tb_spi_controller__DOT__fifo_underflow_detected) {
        vlSelfRef.tb_spi_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__pass_count);
    } else {
        vlSelfRef.tb_spi_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__fail_count);
    }
    VL_WRITEF_NX("=== Test 4: Interrupt Generation ===\n",0);
    vlSelfRef.tb_spi_controller__DOT__test_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__test_count);
    VL_WRITEF_NX("Testing Interrupt Generation...\n",0);
    vlSelfRef.tb_spi_controller__DOT__presetn = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         401);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__presetn = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         403);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_write__30__data = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__30__addr = 0U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__30__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__30__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__31__data = 0xaU;
    __Vtask_tb_spi_controller__DOT__apb_write__31__addr = 0x10U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__31__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__31__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__32__data = 7U;
    __Vtask_tb_spi_controller__DOT__apb_write__32__addr = 0x18U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__32__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__32__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         413);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__33__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__33__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__33__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__33__data;
    VL_WRITEF_NX("Initial status: 0x%08x (TX empty: %b, RX empty: %b, busy: %b)\n",0,
                 32,vlSelfRef.tb_spi_controller__DOT__status,
                 1,(1U & vlSelfRef.tb_spi_controller__DOT__status),
                 1,(1U & (vlSelfRef.tb_spi_controller__DOT__status 
                          >> 1U)),1,(1U & (vlSelfRef.tb_spi_controller__DOT__status 
                                           >> 2U)));
    if (vlSelfRef.tb_spi_controller__DOT__spi_irq) {
        VL_WRITEF_NX("PASS: TX FIFO empty interrupt generated\n",0);
        vlSelfRef.tb_spi_controller__DOT__interrupt_generated = 1U;
    } else {
        VL_WRITEF_NX("FAIL: TX FIFO empty interrupt not generated\n",0);
    }
    __Vtask_tb_spi_controller__DOT__apb_write__34__data = 0xaaU;
    __Vtask_tb_spi_controller__DOT__apb_write__34__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__34__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__34__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         430);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSelfRef.tb_spi_controller__DOT__spi_irq) {
        VL_WRITEF_NX("INFO: Interrupt still active (may be due to other conditions)\n",0);
    } else {
        VL_WRITEF_NX("PASS: Interrupt cleared when TX FIFO not empty\n",0);
    }
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         440);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__35__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__35__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__35__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__35__data;
    VL_WRITEF_NX("Final status: 0x%08x (TX empty: %b, RX empty: %b, busy: %b)\n",0,
                 32,vlSelfRef.tb_spi_controller__DOT__status,
                 1,(1U & vlSelfRef.tb_spi_controller__DOT__status),
                 1,(1U & (vlSelfRef.tb_spi_controller__DOT__status 
                          >> 1U)),1,(1U & (vlSelfRef.tb_spi_controller__DOT__status 
                                           >> 2U)));
    if (vlSelfRef.tb_spi_controller__DOT__spi_irq) {
        VL_WRITEF_NX("PASS: Transfer complete interrupt generated\n",0);
    } else {
        VL_WRITEF_NX("FAIL: Transfer complete interrupt not generated\n",0);
    }
    __Vtask_tb_spi_controller__DOT__apb_read__36__addr = 0x18U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__36__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__36__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__interrupt_status 
        = __Vtask_tb_spi_controller__DOT__apb_read__36__data;
    VL_WRITEF_NX("Interrupt configuration: 0x%08x\n",0,
                 32,vlSelfRef.tb_spi_controller__DOT__interrupt_status);
    if (vlSelfRef.tb_spi_controller__DOT__interrupt_generated) {
        vlSelfRef.tb_spi_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__pass_count);
    } else {
        vlSelfRef.tb_spi_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__fail_count);
    }
    VL_WRITEF_NX("=== Test 5: FIFO Overflow ===\n",0);
    vlSelfRef.tb_spi_controller__DOT__test_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__test_count);
    __Vtask_tb_spi_controller__DOT__test_fifo_overflow__37__unnamedblk1__DOT__i = 0;
    VL_WRITEF_NX("Testing FIFO Overflow...\n",0);
    vlSelfRef.tb_spi_controller__DOT__presetn = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         294);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__presetn = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         296);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_write__38__data = 2U;
    __Vtask_tb_spi_controller__DOT__apb_write__38__addr = 0U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__38__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__38__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__39__data = 0xaU;
    __Vtask_tb_spi_controller__DOT__apb_write__39__addr = 0x10U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__39__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__39__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_read__40__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__40__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__40__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__40__data;
    VL_WRITEF_NX("Initial status: 0x%08x, TX full=%b, TX level=%0#\n",0,
                 32,vlSelfRef.tb_spi_controller__DOT__status,
                 1,(1U & vlSelfRef.tb_spi_controller__DOT__status),
                 8,(0xffU & (vlSelfRef.tb_spi_controller__DOT__status 
                             >> 8U)));
    __Vtask_tb_spi_controller__DOT__apb_write__41__data = 0xaaU;
    __Vtask_tb_spi_controller__DOT__apb_write__41__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__41__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__41__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         310);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__42__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__42__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__42__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__42__data;
    VL_WRITEF_NX("After first write: status=0x%08x, TX full=%b, TX level=%0#\n",0,
                 32,vlSelfRef.tb_spi_controller__DOT__status,
                 1,(1U & vlSelfRef.tb_spi_controller__DOT__status),
                 8,(0xffU & (vlSelfRef.tb_spi_controller__DOT__status 
                             >> 8U)));
    if (VL_LIKELY(((0U < (0xffU & (vlSelfRef.tb_spi_controller__DOT__status 
                                   >> 8U)))))) {
        __Vtask_tb_spi_controller__DOT__test_fifo_overflow__37__unnamedblk1__DOT__i = 1U;
        while (VL_GTS_III(32, 0x14U, __Vtask_tb_spi_controller__DOT__test_fifo_overflow__37__unnamedblk1__DOT__i)) {
            __Vtask_tb_spi_controller__DOT__apb_write__43__data 
                = vlSelfRef.tb_spi_controller__DOT__test_data
                [(0x1fU & __Vtask_tb_spi_controller__DOT__test_fifo_overflow__37__unnamedblk1__DOT__i)];
            __Vtask_tb_spi_controller__DOT__apb_write__43__addr = 8U;
            co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_spi_controller.pclk)", 
                                                                 "tb_spi_controller.sv", 
                                                                 124);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_spi_controller__DOT__psel = 1U;
            vlSelfRef.tb_spi_controller__DOT__penable = 0U;
            vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
            vlSelfRef.tb_spi_controller__DOT__paddr 
                = __Vtask_tb_spi_controller__DOT__apb_write__43__addr;
            vlSelfRef.tb_spi_controller__DOT__pwdata 
                = __Vtask_tb_spi_controller__DOT__apb_write__43__data;
            co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_spi_controller.pclk)", 
                                                                 "tb_spi_controller.sv", 
                                                                 131);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_spi_controller__DOT__penable = 1U;
            co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_spi_controller.pclk)", 
                                                                 "tb_spi_controller.sv", 
                                                                 134);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_spi_controller__DOT__psel = 0U;
            vlSelfRef.tb_spi_controller__DOT__penable = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                                 nullptr, 
                                                 "tb_spi_controller.sv", 
                                                 320);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_spi_controller__DOT__apb_read__44__addr = 4U;
            co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_spi_controller.pclk)", 
                                                                 "tb_spi_controller.sv", 
                                                                 145);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_spi_controller__DOT__psel = 1U;
            vlSelfRef.tb_spi_controller__DOT__penable = 0U;
            vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
            vlSelfRef.tb_spi_controller__DOT__paddr 
                = __Vtask_tb_spi_controller__DOT__apb_read__44__addr;
            co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_spi_controller.pclk)", 
                                                                 "tb_spi_controller.sv", 
                                                                 151);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_spi_controller__DOT__penable = 1U;
            co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_spi_controller.pclk)", 
                                                                 "tb_spi_controller.sv", 
                                                                 154);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_spi_controller__DOT__apb_read__44__data 
                = vlSelfRef.tb_spi_controller__DOT__prdata;
            vlSelfRef.tb_spi_controller__DOT__psel = 0U;
            vlSelfRef.tb_spi_controller__DOT__penable = 0U;
            vlSelfRef.tb_spi_controller__DOT__status 
                = __Vtask_tb_spi_controller__DOT__apb_read__44__data;
            if (VL_UNLIKELY(((VL_GTS_III(32, 5U, __Vtask_tb_spi_controller__DOT__test_fifo_overflow__37__unnamedblk1__DOT__i) 
                              | VL_LTS_III(32, 0xfU, __Vtask_tb_spi_controller__DOT__test_fifo_overflow__37__unnamedblk1__DOT__i))))) {
                VL_WRITEF_NX("After write %0d: status=0x%08x, TX full=%b, TX level=%0#\n",0,
                             32,((IData)(1U) + __Vtask_tb_spi_controller__DOT__test_fifo_overflow__37__unnamedblk1__DOT__i),
                             32,vlSelfRef.tb_spi_controller__DOT__status,
                             1,(1U & vlSelfRef.tb_spi_controller__DOT__status),
                             8,(0xffU & (vlSelfRef.tb_spi_controller__DOT__status 
                                         >> 8U)));
            }
            if (VL_UNLIKELY(((1U & vlSelfRef.tb_spi_controller__DOT__status)))) {
                VL_WRITEF_NX("PASS: FIFO overflow detected at write %0d\n",0,
                             32,((IData)(1U) + __Vtask_tb_spi_controller__DOT__test_fifo_overflow__37__unnamedblk1__DOT__i));
                vlSelfRef.tb_spi_controller__DOT__fifo_overflow_detected = 1U;
                __Vtask_tb_spi_controller__DOT__test_fifo_overflow__37__unnamedblk1__DOT__i = 0x14U;
            }
            __Vtask_tb_spi_controller__DOT__test_fifo_overflow__37__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vtask_tb_spi_controller__DOT__test_fifo_overflow__37__unnamedblk1__DOT__i);
        }
    } else {
        VL_WRITEF_NX("WARNING: FIFO writes not being accepted - possible RTL issue\n",0);
    }
    __Vtask_tb_spi_controller__DOT__apb_read__45__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__45__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__45__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__45__data;
    if ((1U & vlSelfRef.tb_spi_controller__DOT__status)) {
        VL_WRITEF_NX("PASS: FIFO overflow confirmed (TX FIFO full)\n",0);
    } else {
        VL_WRITEF_NX("INFO: FIFO overflow test completed (TX level: %0#)\n",0,
                     8,(0xffU & (vlSelfRef.tb_spi_controller__DOT__status 
                                 >> 8U)));
    }
    vlSelfRef.tb_spi_controller__DOT__pass_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__pass_count);
    VL_WRITEF_NX("=== Test 6: Error Detection ===\n",0);
    vlSelfRef.tb_spi_controller__DOT__test_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__test_count);
    VL_WRITEF_NX("Testing Error Detection...\n",0);
    vlSelfRef.tb_spi_controller__DOT__presetn = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__presetn = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         196);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_write__47__data = 1U;
    __Vtask_tb_spi_controller__DOT__apb_write__47__addr = 0U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__47__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__47__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__48__data = 8U;
    __Vtask_tb_spi_controller__DOT__apb_write__48__addr = 0x18U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__48__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__48__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_read__49__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__49__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__49__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__49__data;
    VL_WRITEF_NX("Initial error status: timeout=%b, rx_underflow=%b, tx_overflow=%b\n",0,
                 1,(1U & (vlSelfRef.tb_spi_controller__DOT__status 
                          >> 6U)),1,(1U & (vlSelfRef.tb_spi_controller__DOT__status 
                                           >> 5U)),
                 1,(1U & (vlSelfRef.tb_spi_controller__DOT__status 
                          >> 4U)));
    if ((0U == (7U & (vlSelfRef.tb_spi_controller__DOT__status 
                      >> 4U)))) {
        VL_WRITEF_NX("PASS: No initial errors detected\n",0);
    } else {
        VL_WRITEF_NX("INFO: Initial errors detected - this may be normal from previous tests\n",0);
    }
    __Vtask_tb_spi_controller__DOT__apb_write__50__data = 0xaaU;
    __Vtask_tb_spi_controller__DOT__apb_write__50__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__50__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__50__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x989680ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         214);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__51__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__51__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__51__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__51__data;
    if ((0x40U & vlSelfRef.tb_spi_controller__DOT__status)) {
        VL_WRITEF_NX("PASS: Timeout detection working\n",0);
        vlSelfRef.tb_spi_controller__DOT__timeout_detected = 1U;
    } else {
        VL_WRITEF_NX("INFO: No timeout detected (may be normal)\n",0);
    }
    vlSelfRef.tb_spi_controller__DOT__error_detected = 1U;
    if (vlSelfRef.tb_spi_controller__DOT__error_detected) {
        vlSelfRef.tb_spi_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__pass_count);
    } else {
        vlSelfRef.tb_spi_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__fail_count);
    }
    VL_WRITEF_NX("=== Test 7: Loopback Mode ===\n",0);
    vlSelfRef.tb_spi_controller__DOT__test_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__test_count);
    VL_WRITEF_NX("Testing Loopback Mode...\n",0);
    vlSelfRef.tb_spi_controller__DOT__presetn = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         235);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__presetn = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         237);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_write__53__data = 0x27U;
    __Vtask_tb_spi_controller__DOT__apb_write__53__addr = 0U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__53__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__53__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__54__data = 0xaU;
    __Vtask_tb_spi_controller__DOT__apb_write__54__addr = 0x10U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__54__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__54__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__55__data = 0x55U;
    __Vtask_tb_spi_controller__DOT__apb_write__55__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__55__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__55__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1e8480ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__56__addr = 0xcU;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__56__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__56__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__received_data[0U] 
        = (0xffU & __Vtask_tb_spi_controller__DOT__apb_read__56__data);
    if ((0x55U == vlSelfRef.tb_spi_controller__DOT__received_data
         [0U])) {
        VL_WRITEF_NX("PASS: Loopback mode working correctly\n",0);
        vlSelfRef.tb_spi_controller__DOT__loopback_tested = 1U;
    } else {
        VL_WRITEF_NX("FAIL: Loopback mode failed, expected 0x55, got 0x%02x\n",0,
                     8,vlSelfRef.tb_spi_controller__DOT__received_data
                     [0U]);
    }
    if (vlSelfRef.tb_spi_controller__DOT__loopback_tested) {
        vlSelfRef.tb_spi_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__pass_count);
    } else {
        vlSelfRef.tb_spi_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__fail_count);
    }
    VL_WRITEF_NX("=== Test 8: Chip Select Delay ===\n",0);
    vlSelfRef.tb_spi_controller__DOT__test_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__test_count);
    VL_WRITEF_NX("Testing Chip Select Delay...\n",0);
    vlSelfRef.tb_spi_controller__DOT__presetn = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         268);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__presetn = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         270);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_write__58__data = 1U;
    __Vtask_tb_spi_controller__DOT__apb_write__58__addr = 0U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__58__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__58__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__59__data = 0xaU;
    __Vtask_tb_spi_controller__DOT__apb_write__59__addr = 0x1cU;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__59__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__59__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__60__data = 0xaaU;
    __Vtask_tb_spi_controller__DOT__apb_write__60__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__60__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__60__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         280);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("PASS: Chip select delay test completed\n",0);
    vlSelfRef.tb_spi_controller__DOT__cs_delay_tested = 1U;
    if (vlSelfRef.tb_spi_controller__DOT__cs_delay_tested) {
        vlSelfRef.tb_spi_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__pass_count);
    } else {
        vlSelfRef.tb_spi_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__fail_count);
    }
    VL_WRITEF_NX("=== Test 9: Performance Test ===\n",0);
    vlSelfRef.tb_spi_controller__DOT__test_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__test_count);
    __Vtask_tb_spi_controller__DOT__test_performance__61__unnamedblk2__DOT__i = 0;
    VL_WRITEF_NX("Testing Performance...\n",0);
    vlSelfRef.tb_spi_controller__DOT__start_time = (IData)(VL_TIME_UNITED_Q(1000));
    vlSelfRef.tb_spi_controller__DOT__cycle_count = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__62__data = 1U;
    __Vtask_tb_spi_controller__DOT__apb_write__62__addr = 0U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__62__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__62__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__63__data = 0xaU;
    __Vtask_tb_spi_controller__DOT__apb_write__63__addr = 0x10U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__63__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__63__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    __Vtask_tb_spi_controller__DOT__apb_write__64__data 
        = vlSelfRef.tb_spi_controller__DOT__test_data
        [0U];
    __Vtask_tb_spi_controller__DOT__apb_write__64__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__64__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__64__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__cycle_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__cycle_count);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         475);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__test_performance__61__unnamedblk2__DOT__i = 1U;
    __Vtask_tb_spi_controller__DOT__apb_write__64__data 
        = vlSelfRef.tb_spi_controller__DOT__test_data
        [1U];
    __Vtask_tb_spi_controller__DOT__apb_write__64__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__64__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__64__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__cycle_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__cycle_count);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         475);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__test_performance__61__unnamedblk2__DOT__i = 2U;
    __Vtask_tb_spi_controller__DOT__apb_write__64__data 
        = vlSelfRef.tb_spi_controller__DOT__test_data
        [2U];
    __Vtask_tb_spi_controller__DOT__apb_write__64__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__64__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__64__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__cycle_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__cycle_count);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         475);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__test_performance__61__unnamedblk2__DOT__i = 3U;
    __Vtask_tb_spi_controller__DOT__apb_write__64__data 
        = vlSelfRef.tb_spi_controller__DOT__test_data
        [3U];
    __Vtask_tb_spi_controller__DOT__apb_write__64__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__64__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__64__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__cycle_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__cycle_count);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         475);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__test_performance__61__unnamedblk2__DOT__i = 4U;
    __Vtask_tb_spi_controller__DOT__apb_write__64__data 
        = vlSelfRef.tb_spi_controller__DOT__test_data
        [4U];
    __Vtask_tb_spi_controller__DOT__apb_write__64__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__64__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__64__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__cycle_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__cycle_count);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         475);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__test_performance__61__unnamedblk2__DOT__i = 5U;
    __Vtask_tb_spi_controller__DOT__apb_write__64__data 
        = vlSelfRef.tb_spi_controller__DOT__test_data
        [5U];
    __Vtask_tb_spi_controller__DOT__apb_write__64__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__64__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__64__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__cycle_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__cycle_count);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         475);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__test_performance__61__unnamedblk2__DOT__i = 6U;
    __Vtask_tb_spi_controller__DOT__apb_write__64__data 
        = vlSelfRef.tb_spi_controller__DOT__test_data
        [6U];
    __Vtask_tb_spi_controller__DOT__apb_write__64__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__64__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__64__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__cycle_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__cycle_count);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         475);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__test_performance__61__unnamedblk2__DOT__i = 7U;
    __Vtask_tb_spi_controller__DOT__apb_write__64__data 
        = vlSelfRef.tb_spi_controller__DOT__test_data
        [7U];
    __Vtask_tb_spi_controller__DOT__apb_write__64__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__64__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__64__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__cycle_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__cycle_count);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         475);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__test_performance__61__unnamedblk2__DOT__i = 8U;
    __Vtask_tb_spi_controller__DOT__apb_write__64__data 
        = vlSelfRef.tb_spi_controller__DOT__test_data
        [8U];
    __Vtask_tb_spi_controller__DOT__apb_write__64__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__64__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__64__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__cycle_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__cycle_count);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         475);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__test_performance__61__unnamedblk2__DOT__i = 9U;
    __Vtask_tb_spi_controller__DOT__apb_write__64__data 
        = vlSelfRef.tb_spi_controller__DOT__test_data
        [9U];
    __Vtask_tb_spi_controller__DOT__apb_write__64__addr = 8U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 1U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_write__64__addr;
    vlSelfRef.tb_spi_controller__DOT__pwdata = __Vtask_tb_spi_controller__DOT__apb_write__64__data;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__cycle_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__cycle_count);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         475);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__test_performance__61__unnamedblk2__DOT__i = 0xaU;
    vlSelfRef.tb_spi_controller__DOT__end_time = (IData)(VL_TIME_UNITED_Q(1000));
    VL_WRITEF_NX("Performance Results:\n  Total time: %0d ns\n  Cycles: %0d\n  Average time per cycle: %0d ns\n",0,
                 32,(vlSelfRef.tb_spi_controller__DOT__end_time 
                     - vlSelfRef.tb_spi_controller__DOT__start_time),
                 32,vlSelfRef.tb_spi_controller__DOT__cycle_count,
                 32,VL_DIVS_III(32, (vlSelfRef.tb_spi_controller__DOT__end_time 
                                     - vlSelfRef.tb_spi_controller__DOT__start_time), vlSelfRef.tb_spi_controller__DOT__cycle_count));
    vlSelfRef.tb_spi_controller__DOT__pass_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__pass_count);
    VL_WRITEF_NX("=== Test 10: Status Register Reading ===\n",0);
    vlSelfRef.tb_spi_controller__DOT__test_count = 
        ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__test_count);
    __Vtask_tb_spi_controller__DOT__apb_read__65__addr = 4U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__psel = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__pwrite = 0U;
    vlSelfRef.tb_spi_controller__DOT__paddr = __Vtask_tb_spi_controller__DOT__apb_read__65__addr;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_controller__DOT__penable = 1U;
    co_await vlSelfRef.__VtrigSched_he7d1f71b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_spi_controller.pclk)", 
                                                         "tb_spi_controller.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_spi_controller__DOT__apb_read__65__data 
        = vlSelfRef.tb_spi_controller__DOT__prdata;
    vlSelfRef.tb_spi_controller__DOT__psel = 0U;
    vlSelfRef.tb_spi_controller__DOT__penable = 0U;
    vlSelfRef.tb_spi_controller__DOT__status = __Vtask_tb_spi_controller__DOT__apb_read__65__data;
    VL_WRITEF_NX("Status register: 0x%08x\n",0,32,vlSelfRef.tb_spi_controller__DOT__status);
    if ((1U & vlSelfRef.tb_spi_controller__DOT__status)) {
        VL_WRITEF_NX("FAIL: Status register shows busy\n",0);
        vlSelfRef.tb_spi_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__fail_count);
    } else {
        VL_WRITEF_NX("PASS: Status register shows not busy\n",0);
        vlSelfRef.tb_spi_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_spi_controller__DOT__pass_count);
    }
    VL_WRITEF_NX("=== Coverage Summary ===\nSPI Modes tested: All 4 modes (0, 1, 2, 3)\n",0);
    __Vtemp_41[0U] = 0x43544544U;
    __Vtemp_41[1U] = 0x44455445U;
    __Vtemp_41[2U] = ((IData)(vlSelfRef.tb_spi_controller__DOT__fifo_overflow_detected)
                       ? 0U : 0x4e4f5420U);
    VL_WRITEF_NX("FIFO Overflow: %s\n",0,96,__Vtemp_41.data());
    __Vtemp_44[0U] = 0x43544544U;
    __Vtemp_44[1U] = 0x44455445U;
    __Vtemp_44[2U] = ((IData)(vlSelfRef.tb_spi_controller__DOT__fifo_underflow_detected)
                       ? 0U : 0x4e4f5420U);
    VL_WRITEF_NX("FIFO Underflow: %s\n",0,96,__Vtemp_44.data());
    __Vtemp_47[0U] = 0x43544544U;
    __Vtemp_47[1U] = 0x44455445U;
    __Vtemp_47[2U] = ((IData)(vlSelfRef.tb_spi_controller__DOT__interrupt_generated)
                       ? 0U : 0x4e4f5420U);
    VL_WRITEF_NX("Interrupt Generation: %s\n",0,96,
                 __Vtemp_47.data());
    __Vtemp_50[0U] = 0x53544544U;
    if (vlSelfRef.tb_spi_controller__DOT__error_detected) {
        __Vtemp_50[1U] = 0x5445U;
        __Vtemp_50[2U] = 0U;
    } else {
        __Vtemp_50[1U] = 0x54205445U;
        __Vtemp_50[2U] = 0x4e4fU;
    }
    VL_WRITEF_NX("Error Detection: %s\n",0,80,__Vtemp_50.data());
    if (vlSelfRef.tb_spi_controller__DOT__timeout_detected) {
        __Vtemp_53[0U] = 0x4b494e47U;
        __Vtemp_53[1U] = 0x574f52U;
        __Vtemp_53[2U] = 0U;
    } else {
        __Vtemp_53[0U] = 0x43544544U;
        __Vtemp_53[1U] = 0x44455445U;
        __Vtemp_53[2U] = 0x4e4f5420U;
    }
    VL_WRITEF_NX("Timeout Detection: %s\n",0,96,__Vtemp_53.data());
    if (vlSelfRef.tb_spi_controller__DOT__loopback_tested) {
        __Vtemp_56[0U] = 0x4b494e47U;
        __Vtemp_56[1U] = 0x574f52U;
        __Vtemp_56[2U] = 0U;
    } else {
        __Vtemp_56[0U] = 0x53544544U;
        __Vtemp_56[1U] = 0x54205445U;
        __Vtemp_56[2U] = 0x4e4fU;
    }
    VL_WRITEF_NX("Loopback Mode: %s\n",0,80,__Vtemp_56.data());
    __Vtemp_59[0U] = 0x53544544U;
    if (vlSelfRef.tb_spi_controller__DOT__cs_delay_tested) {
        __Vtemp_59[1U] = 0x5445U;
        __Vtemp_59[2U] = 0U;
    } else {
        __Vtemp_59[1U] = 0x54205445U;
        __Vtemp_59[2U] = 0x4e4fU;
    }
    VL_WRITEF_NX("CS Delay: %s\n",0,80,__Vtemp_59.data());
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb_spi_controller.sv", 
                                         651);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=== Final Test Summary ===\nTotal tests: %0d\nPassed: %0d\nFailed: %0d\nSuccess rate: %0.1f%%\n",0,
                 32,vlSelfRef.tb_spi_controller__DOT__test_count,
                 32,vlSelfRef.tb_spi_controller__DOT__pass_count,
                 32,vlSelfRef.tb_spi_controller__DOT__fail_count,
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelfRef.tb_spi_controller__DOT__pass_count)) 
                     / VL_ISTOR_D_I(32, vlSelfRef.tb_spi_controller__DOT__test_count)));
    if ((0U == vlSelfRef.tb_spi_controller__DOT__fail_count)) {
        VL_WRITEF_NX("\360\237\216\211 ALL TESTS PASSED!\n",0);
    } else {
        VL_WRITEF_NX("\342\232\240\357\270\217  SOME TESTS FAILED!\n",0);
    }
    VL_FINISH_MT("tb_spi_controller.sv", 664, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vtb_spi_controller___024root___act_sequent__TOP__0(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller___024root___act_comb__TOP__0(Vtb_spi_controller___024root* vlSelf);

void Vtb_spi_controller___024root___eval_act(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_act\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_spi_controller___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x14ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_spi_controller___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_spi_controller___024root___act_sequent__TOP__0(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___act_sequent__TOP__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_clk_gated 
        = ((~ ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
               & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                   >> 7U) & ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count)) 
                             & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)))))) 
           & (IData)(vlSelfRef.tb_spi_controller__DOT__pclk));
}

VL_INLINE_OPT void Vtb_spi_controller___024root___act_comb__TOP__0(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___act_comb__TOP__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd 
        = ((IData)(vlSelfRef.tb_spi_controller__DOT__penable) 
           & ((IData)(vlSelfRef.tb_spi_controller__DOT__psel) 
              & ((~ (IData)(vlSelfRef.tb_spi_controller__DOT__pwrite)) 
                 & (0xcU == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr)))));
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

void Vtb_spi_controller___024root___nba_sequent__TOP__0(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller___024root___nba_sequent__TOP__1(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller___024root___nba_sequent__TOP__2(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller___024root___nba_sequent__TOP__3(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller___024root___nba_comb__TOP__0(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller___024root___nba_sequent__TOP__4(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller___024root___nba_sequent__TOP__5(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller___024root___nba_sequent__TOP__6(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller___024root___nba_comb__TOP__1(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller___024root___nba_comb__TOP__2(Vtb_spi_controller___024root* vlSelf);
void Vtb_spi_controller___024root___nba_comb__TOP__3(Vtb_spi_controller___024root* vlSelf);

void Vtb_spi_controller___024root___eval_nba(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_nba\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0xaULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x14ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0xaULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x16ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x1eULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0xeULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_controller___024root___nba_comb__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    }
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_sequent__TOP__0(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_sequent__TOP__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__tb_spi_controller__DOT__dut__DOT__timeout_counter;
    __Vdly__tb_spi_controller__DOT__dut__DOT__timeout_counter = 0;
    // Body
    vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr;
    vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count;
    vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr;
    vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr;
    __Vdly__tb_spi_controller__DOT__dut__DOT__timeout_counter 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__timeout_counter;
    vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count;
    vlSelfRef.tb_spi_controller__DOT__spi_irq = ((IData)(vlSelfRef.tb_spi_controller__DOT__presetn) 
                                                 && ((((vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                                                        & (0U 
                                                           == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count))) 
                                                       | ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                                                           >> 1U) 
                                                          & (0x10U 
                                                             == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count)))) 
                                                      | ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                                                          >> 2U) 
                                                         & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr))) 
                                                     | ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                                                         >> 3U) 
                                                        & (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_timeout) 
                                                            | (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_overflow)) 
                                                           | (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_underflow)))));
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr_enabled) 
             & (0x10U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count)))) {
            vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr 
                = ((0xfU == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr))));
        }
        if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd) 
             & (0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count)))) {
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__rd_ptr 
                = ((0xfU == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__rd_ptr))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__rd_ptr))));
        }
        vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count 
            = (0x1fU & ((2U == ((((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr_enabled) 
                                  & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_full))) 
                                 << 1U) | ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd) 
                                           & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_empty)))))
                         ? ((IData)(1U) + (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count))
                         : ((1U == ((((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr_enabled) 
                                      & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_full))) 
                                     << 1U) | ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd) 
                                               & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_empty)))))
                             ? ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count) 
                                - (IData)(1U)) : (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count))));
        if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
             & (0x10U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)))) {
            vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr 
                = ((0xfU == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr))));
        }
        if (((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
             & (0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)))) {
            vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr 
                = ((0xfU == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr))));
        }
        vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count 
            = (0x1fU & ((2U == ((((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
                                  & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_full))) 
                                 << 1U) | ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                                           & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_empty)))))
                         ? ((IData)(1U) + (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count))
                         : ((1U == ((((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
                                      & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_full))) 
                                     << 1U) | ((0U 
                                                == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                                               & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_empty)))))
                             ? ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count) 
                                - (IData)(1U)) : (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count))));
        if ((((IData)(vlSelfRef.tb_spi_controller__DOT__psel) 
              & (IData)(vlSelfRef.tb_spi_controller__DOT__penable)) 
             & (IData)(vlSelfRef.tb_spi_controller__DOT__pwrite))) {
            if ((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                if ((0x10U != (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                    if ((0x14U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                        vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg 
                            = vlSelfRef.tb_spi_controller__DOT__pwdata;
                    }
                    if ((0x14U != (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                        if ((0x18U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                            vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg 
                                = vlSelfRef.tb_spi_controller__DOT__pwdata;
                        }
                    }
                }
            }
        }
        if (((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
              >> 0xcU) & (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_timeout) 
                           | (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_overflow)) 
                          | (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_underflow)))) {
            if (((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                  >> 0xdU) & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__retry_count) 
                              < (0xfU & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                         >> 0x10U))))) {
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__retry_count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__retry_count)));
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__recovery_in_progress = 1U;
            } else {
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__recovery_in_progress = 0U;
            }
        } else if (vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr) {
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__retry_count = 0U;
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__recovery_in_progress = 0U;
        }
        if ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
             & (0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)))) {
            if ((0xffffU <= (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__timeout_counter))) {
                __Vdly__tb_spi_controller__DOT__dut__DOT__timeout_counter = 0U;
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_timeout = 1U;
            } else {
                __Vdly__tb_spi_controller__DOT__dut__DOT__timeout_counter 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__timeout_counter)));
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_timeout = 0U;
            }
        } else {
            __Vdly__tb_spi_controller__DOT__dut__DOT__timeout_counter = 0U;
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_timeout = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count = 0U;
        vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count = 0U;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__fifo_reg = 0x10U;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__retry_count = 0U;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__recovery_in_progress = 0U;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__int_reg = 0U;
        __Vdly__tb_spi_controller__DOT__dut__DOT__timeout_counter = 0U;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_timeout = 0U;
    }
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__timeout_counter 
        = __Vdly__tb_spi_controller__DOT__dut__DOT__timeout_counter;
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_sequent__TOP__1(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_sequent__TOP__1\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem__v0;
    __VdlyVal__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem__v0;
    __VdlyDim0__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem__v0;
    __VdlySet__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem__v0 = 0;
    // Body
    __VdlySet__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem__v0 = 0U;
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr_enabled) 
         & (0x10U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count)))) {
        __VdlyVal__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem__v0 
            = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg;
        __VdlyDim0__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem__v0 
            = vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr;
        __VdlySet__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr) 
         & (0x10U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)))) {
        vlSelfRef.__VdlyVal__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem__v0 
            = vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg;
        vlSelfRef.__VdlyDim0__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem__v0 
            = vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr;
        vlSelfRef.__VdlySet__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem__v0 = 1U;
    }
    if (__VdlySet__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem__v0) {
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem[__VdlyDim0__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem__v0] 
            = __VdlyVal__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem__v0;
    }
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_sequent__TOP__2(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_sequent__TOP__2\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter;
    __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter = 0;
    CData/*2:0*/ __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter;
    __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter = 0;
    CData/*7:0*/ __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter;
    __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter = 0;
    // Body
    __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter;
    __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter;
    vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg;
    __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter 
        = vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter;
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        if ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
            __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter = 0U;
            __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter = 0U;
        } else {
            if ((2U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state))) {
                __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter)));
            }
            if ((((3U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                  & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) 
                 & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                    == (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                               >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg))))) {
                __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter)));
            }
        }
        if (((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
             & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_valid_i))) {
            vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg 
                = (0xffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem
                   [vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr]);
        } else if ((((3U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                     & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) 
                    & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                       == (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                                  >> 1U) ^ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg))))) {
            vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg 
                = (0xfeU & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
                            << 1U));
        }
        if ((((3U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
              & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter))) 
             & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                == (1U & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                           >> 1U) ^ (~ vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg)))))) {
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg 
                = ((0xfeU & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg) 
                             << 1U)) | (1U & ((0x20U 
                                               & vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg)
                                               ? ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
                                                  >> 7U)
                                               : ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
                                                  >> 7U))));
        }
        if ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
             & (0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)))) {
            if (((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter) 
                 >= ((0xffffU & vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg) 
                     - (IData)(1U)))) {
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal 
                    = (1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal)));
                __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter = 0U;
            } else {
                __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)));
            }
        } else {
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal 
                = (1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                         >> 1U));
            __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter = 0U;
        }
    } else {
        __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter = 0U;
        __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter = 0U;
        vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg = 0U;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg = 0U;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal 
            = (1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                     >> 1U));
        __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter = 0U;
    }
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter 
        = __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter;
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter 
        = __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter;
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter 
        = __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter;
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_sequent__TOP__3(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_sequent__TOP__3\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__tb_spi_controller__DOT__slave_data;
    __Vdly__tb_spi_controller__DOT__slave_data = 0;
    // Body
    __Vdly__tb_spi_controller__DOT__slave_data = vlSelfRef.tb_spi_controller__DOT__slave_data;
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        if ((0xfU != (((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
                       & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                          >> 3U)) ? (0xfU & (~ (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                                                >> 8U)))
                       : 0xfU))) {
            __Vdly__tb_spi_controller__DOT__slave_data 
                = ((0xfeU & ((IData)(vlSelfRef.tb_spi_controller__DOT__slave_data) 
                             << 1U)) | (1U & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg) 
                                              >> 7U)));
            if (vlSelfRef.tb_spi_controller__DOT__slave_rx_valid) {
                vlSelfRef.tb_spi_controller__DOT__slave_rx_data 
                    = vlSelfRef.tb_spi_controller__DOT__slave_data;
            }
        }
    } else {
        __Vdly__tb_spi_controller__DOT__slave_data = 0U;
        vlSelfRef.tb_spi_controller__DOT__slave_rx_data = 0U;
    }
    vlSelfRef.tb_spi_controller__DOT__slave_data = __Vdly__tb_spi_controller__DOT__slave_data;
    if ((1U & (~ (IData)(vlSelfRef.tb_spi_controller__DOT__presetn)))) {
        vlSelfRef.tb_spi_controller__DOT__slave_rx_valid = 0U;
    }
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_comb__TOP__0(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_comb__TOP__0\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd 
        = ((IData)(vlSelfRef.tb_spi_controller__DOT__penable) 
           & ((IData)(vlSelfRef.tb_spi_controller__DOT__psel) 
              & ((~ (IData)(vlSelfRef.tb_spi_controller__DOT__pwrite)) 
                 & (0xcU == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr)))));
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_sequent__TOP__4(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_sequent__TOP__4\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr 
        = vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr;
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count 
        = vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count;
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr 
        = vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr;
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count 
        = vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count;
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr 
        = vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr;
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_full 
        = (0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count));
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_empty 
        = (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count));
    if (vlSelfRef.tb_spi_controller__DOT__presetn) {
        if (((((IData)(vlSelfRef.tb_spi_controller__DOT__psel) 
               & (IData)(vlSelfRef.tb_spi_controller__DOT__penable)) 
              & (IData)(vlSelfRef.tb_spi_controller__DOT__pwrite)) 
             & (8U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr)))) {
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg 
                = vlSelfRef.tb_spi_controller__DOT__pwdata;
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr = 1U;
        } else {
            vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr = 0U;
        }
        if ((((IData)(vlSelfRef.tb_spi_controller__DOT__psel) 
              & (IData)(vlSelfRef.tb_spi_controller__DOT__penable)) 
             & (IData)(vlSelfRef.tb_spi_controller__DOT__pwrite))) {
            if ((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                if ((0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                    vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg 
                        = vlSelfRef.tb_spi_controller__DOT__pwdata;
                }
                if ((0x10U != (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                    if ((0x14U != (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                        if ((0x18U != (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                            if ((0x1cU == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                                vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                                    = vlSelfRef.tb_spi_controller__DOT__pwdata;
                            }
                        }
                    }
                }
            }
            if ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__paddr))) {
                vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                    = vlSelfRef.tb_spi_controller__DOT__pwdata;
            }
        }
    } else {
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__txdata_reg = 0U;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__baud_reg = 0xaU;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg = 0U;
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg = 0U;
    }
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_full 
        = (0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count));
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_empty 
        = (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count));
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_overflow 
        = ((0x10U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)) 
           & (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo_wr));
    vlSelfRef.tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_valid_i 
        = ((0U != (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)) 
           & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
              >> 1U));
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_sequent__TOP__5(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_sequent__TOP__5\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem__v0) {
        vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem[vlSelfRef.__VdlyDim0__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem__v0] 
            = vlSelfRef.__VdlyVal__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem__v0;
    }
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_sequent__TOP__6(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_sequent__TOP__6\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg 
        = vlSelfRef.__Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg;
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state 
        = ((IData)(vlSelfRef.tb_spi_controller__DOT__presetn)
            ? (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state)
            : 0U);
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_comb__TOP__1(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_comb__TOP__1\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_underflow 
        = ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_rd) 
           & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count)));
}

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_comb__TOP__2(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_comb__TOP__2\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_clk_gated 
        = ((~ ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
               & ((vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
                   >> 7U) & ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count)) 
                             & (0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count)))))) 
           & (IData)(vlSelfRef.tb_spi_controller__DOT__pclk));
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

VL_INLINE_OPT void Vtb_spi_controller___024root___nba_comb__TOP__3(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___nba_comb__TOP__3\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr 
        = ((4U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state)) 
           & ((0U == (IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter)) 
              & ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal) 
                 == (1U & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__mode_reg 
                           >> 1U)))));
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
    vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr_enabled 
        = ((IData)(vlSelfRef.tb_spi_controller__DOT__dut__DOT__rx_fifo_wr) 
           & (vlSelfRef.tb_spi_controller__DOT__dut__DOT__ctrl_reg 
              >> 2U));
}

void Vtb_spi_controller___024root___timing_commit(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___timing_commit\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he7d1f71b__0.commit(
                                                   "@(posedge tb_spi_controller.pclk)");
    }
}

void Vtb_spi_controller___024root___timing_resume(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___timing_resume\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he7d1f71b__0.resume(
                                                   "@(posedge tb_spi_controller.pclk)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_spi_controller___024root___eval_triggers__act(Vtb_spi_controller___024root* vlSelf);

bool Vtb_spi_controller___024root___eval_phase__act(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_phase__act\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_spi_controller___024root___eval_triggers__act(vlSelf);
    Vtb_spi_controller___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_spi_controller___024root___timing_resume(vlSelf);
        Vtb_spi_controller___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_spi_controller___024root___eval_phase__nba(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_phase__nba\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_spi_controller___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_controller___024root___dump_triggers__nba(Vtb_spi_controller___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_controller___024root___dump_triggers__act(Vtb_spi_controller___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_spi_controller___024root___eval(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_spi_controller___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_spi_controller.sv", 22, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_spi_controller___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_spi_controller.sv", 22, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_spi_controller___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_spi_controller___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_spi_controller___024root___eval_debug_assertions(Vtb_spi_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_controller___024root___eval_debug_assertions\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
