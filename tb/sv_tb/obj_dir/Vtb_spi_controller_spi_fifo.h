// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_spi_controller.h for the primary calling header

#ifndef VERILATED_VTB_SPI_CONTROLLER_SPI_FIFO_H_
#define VERILATED_VTB_SPI_CONTROLLER_SPI_FIFO_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtb_spi_controller__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_spi_controller_spi_fifo final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(reset_n_i,0,0);
    VL_IN8(wr_i,0,0);
    VL_OUT8(full_o,0,0);
    VL_IN8(rd_i,0,0);
    VL_OUT8(empty_o,0,0);
    VL_OUT8(level_o,4,0);
    CData/*3:0*/ __PVT__wr_ptr;
    CData/*3:0*/ __PVT__rd_ptr;
    CData/*4:0*/ __PVT__count;
    CData/*0:0*/ __Vtogcov__clk_i;
    CData/*0:0*/ __Vtogcov__reset_n_i;
    CData/*0:0*/ __Vtogcov__wr_i;
    CData/*0:0*/ __Vtogcov__full_o;
    CData/*0:0*/ __Vtogcov__rd_i;
    CData/*0:0*/ __Vtogcov__empty_o;
    CData/*4:0*/ __Vtogcov__level_o;
    CData/*3:0*/ __Vtogcov__wr_ptr;
    CData/*3:0*/ __Vtogcov__rd_ptr;
    CData/*3:0*/ __Vdly__wr_ptr;
    CData/*4:0*/ __Vdly__count;
    VL_IN(data_i,31,0);
    VL_OUT(data_o,31,0);
    IData/*31:0*/ __Vtogcov__data_i;
    IData/*31:0*/ __Vtogcov__data_o;
    VlUnpacked<IData/*31:0*/, 16> __PVT__fifo_mem;

    // INTERNAL VARIABLES
    Vtb_spi_controller__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_spi_controller_spi_fifo(Vtb_spi_controller__Syms* symsp, const char* v__name);
    ~Vtb_spi_controller_spi_fifo();
    VL_UNCOPYABLE(Vtb_spi_controller_spi_fifo);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
