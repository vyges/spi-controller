// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_controller.h for the primary calling header

#include "Vtb_spi_controller__pch.h"
#include "Vtb_spi_controller__Syms.h"
#include "Vtb_spi_controller___024root.h"

void Vtb_spi_controller___024root___ctor_var_reset(Vtb_spi_controller___024root* vlSelf);

Vtb_spi_controller___024root::Vtb_spi_controller___024root(Vtb_spi_controller__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_spi_controller___024root___ctor_var_reset(this);
}

void Vtb_spi_controller___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_spi_controller___024root::~Vtb_spi_controller___024root() {
}
