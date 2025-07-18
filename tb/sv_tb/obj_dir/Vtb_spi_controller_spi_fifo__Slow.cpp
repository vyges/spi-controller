// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_controller.h for the primary calling header

#include "Vtb_spi_controller__pch.h"
#include "Vtb_spi_controller__Syms.h"
#include "Vtb_spi_controller_spi_fifo.h"

void Vtb_spi_controller_spi_fifo___ctor_var_reset(Vtb_spi_controller_spi_fifo* vlSelf);

Vtb_spi_controller_spi_fifo::Vtb_spi_controller_spi_fifo(Vtb_spi_controller__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_spi_controller_spi_fifo___ctor_var_reset(this);
}

void Vtb_spi_controller_spi_fifo___configure_coverage(Vtb_spi_controller_spi_fifo* vlSelf, bool first);

void Vtb_spi_controller_spi_fifo::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vtb_spi_controller_spi_fifo___configure_coverage(this, first);
}

Vtb_spi_controller_spi_fifo::~Vtb_spi_controller_spi_fifo() {
}

// Coverage
void Vtb_spi_controller_spi_fifo::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{VerilatedModule::name()} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
