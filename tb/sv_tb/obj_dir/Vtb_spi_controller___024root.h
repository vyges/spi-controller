// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_spi_controller.h for the primary calling header

#ifndef VERILATED_VTB_SPI_CONTROLLER___024ROOT_H_
#define VERILATED_VTB_SPI_CONTROLLER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_spi_controller__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_spi_controller___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_spi_controller__DOT__pclk;
        CData/*0:0*/ tb_spi_controller__DOT__presetn;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__spi_clk_gated;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal;
        CData/*0:0*/ tb_spi_controller__DOT__psel;
        CData/*0:0*/ tb_spi_controller__DOT__penable;
        CData/*0:0*/ tb_spi_controller__DOT__pwrite;
        CData/*7:0*/ tb_spi_controller__DOT__paddr;
        CData/*0:0*/ tb_spi_controller__DOT__spi_irq;
        CData/*1:0*/ tb_spi_controller__DOT__spi_mode_test;
        CData/*0:0*/ tb_spi_controller__DOT__fifo_overflow_detected;
        CData/*0:0*/ tb_spi_controller__DOT__fifo_underflow_detected;
        CData/*0:0*/ tb_spi_controller__DOT__interrupt_generated;
        CData/*0:0*/ tb_spi_controller__DOT__error_detected;
        CData/*0:0*/ tb_spi_controller__DOT__timeout_detected;
        CData/*0:0*/ tb_spi_controller__DOT__loopback_tested;
        CData/*0:0*/ tb_spi_controller__DOT__cs_delay_tested;
        CData/*7:0*/ tb_spi_controller__DOT__slave_data;
        CData/*7:0*/ tb_spi_controller__DOT__slave_rx_data;
        CData/*0:0*/ tb_spi_controller__DOT__slave_rx_valid;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__tx_fifo_wr;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__tx_fifo_full;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__tx_fifo_empty;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__rx_fifo_wr;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__rx_fifo_rd;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__rx_fifo_full;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__rx_fifo_empty;
        CData/*7:0*/ tb_spi_controller__DOT__dut__DOT__spi_tx_data;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__spi_data_valid;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__spi_data_ready;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__tx_fifo_overflow;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__rx_fifo_underflow;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__spi_timeout;
        CData/*3:0*/ tb_spi_controller__DOT__dut__DOT__retry_count;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__recovery_in_progress;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT____Vcellinp__spi_engine__tx_valid_i;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__rx_fifo_wr_enabled;
        CData/*3:0*/ tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr;
        CData/*3:0*/ tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr;
        CData/*4:0*/ tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count;
        CData/*3:0*/ tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr;
        CData/*3:0*/ tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__rd_ptr;
        CData/*4:0*/ tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count;
        CData/*2:0*/ tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__bit_counter;
        CData/*7:0*/ tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg;
        CData/*7:0*/ tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__rx_shift_reg;
        CData/*7:0*/ tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_counter;
        CData/*0:0*/ tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__cs_delay_active;
        CData/*2:0*/ tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__current_state;
        CData/*2:0*/ tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__next_state;
        CData/*3:0*/ __Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__wr_ptr;
        CData/*3:0*/ __Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__rd_ptr;
        CData/*4:0*/ __Vdly__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__count;
        CData/*3:0*/ __Vdly__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__wr_ptr;
        CData/*4:0*/ __Vdly__tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__count;
        CData/*7:0*/ __Vdly__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__tx_shift_reg;
        CData/*3:0*/ __VdlyDim0__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem__v0;
        CData/*0:0*/ __VdlySet__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__spi_clk_internal__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_controller__DOT__presetn__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_controller__DOT__pclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_controller__DOT__dut__DOT__spi_clk_gated__0;
        CData/*0:0*/ __VactContinue;
    };
    struct {
        SData/*15:0*/ tb_spi_controller__DOT__dut__DOT__timeout_counter;
        SData/*15:0*/ tb_spi_controller__DOT__dut__DOT__spi_engine__DOT__clk_counter;
        IData/*31:0*/ tb_spi_controller__DOT__pwdata;
        IData/*31:0*/ tb_spi_controller__DOT__prdata;
        IData/*31:0*/ tb_spi_controller__DOT__test_count;
        IData/*31:0*/ tb_spi_controller__DOT__pass_count;
        IData/*31:0*/ tb_spi_controller__DOT__fail_count;
        IData/*31:0*/ tb_spi_controller__DOT__status;
        IData/*31:0*/ tb_spi_controller__DOT__interrupt_status;
        IData/*31:0*/ tb_spi_controller__DOT__start_time;
        IData/*31:0*/ tb_spi_controller__DOT__end_time;
        IData/*31:0*/ tb_spi_controller__DOT__cycle_count;
        IData/*31:0*/ tb_spi_controller__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ tb_spi_controller__DOT__dut__DOT__ctrl_reg;
        IData/*31:0*/ tb_spi_controller__DOT__dut__DOT__txdata_reg;
        IData/*31:0*/ tb_spi_controller__DOT__dut__DOT__rxdata_reg;
        IData/*31:0*/ tb_spi_controller__DOT__dut__DOT__baud_reg;
        IData/*31:0*/ tb_spi_controller__DOT__dut__DOT__fifo_reg;
        IData/*31:0*/ tb_spi_controller__DOT__dut__DOT__int_reg;
        IData/*31:0*/ tb_spi_controller__DOT__dut__DOT__mode_reg;
        IData/*31:0*/ __VdlyVal__tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem__v0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 32> tb_spi_controller__DOT__test_data;
        VlUnpacked<CData/*7:0*/, 32> tb_spi_controller__DOT__received_data;
        VlUnpacked<IData/*31:0*/, 16> tb_spi_controller__DOT__dut__DOT__tx_fifo__DOT__fifo_mem;
        VlUnpacked<IData/*31:0*/, 16> tb_spi_controller__DOT__dut__DOT__rx_fifo__DOT__fifo_mem;
        VlUnpacked<CData/*0:0*/, 11> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he7d1f71b__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_spi_controller__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_spi_controller___024root(Vtb_spi_controller__Syms* symsp, const char* v__name);
    ~Vtb_spi_controller___024root();
    VL_UNCOPYABLE(Vtb_spi_controller___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
