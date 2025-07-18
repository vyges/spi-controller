// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_controller.h for the primary calling header

#include "Vtb_spi_controller__pch.h"
#include "Vtb_spi_controller_spi_fifo.h"

VL_ATTR_COLD void Vtb_spi_controller_spi_fifo___ctor_var_reset(Vtb_spi_controller_spi_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_spi_controller_spi_fifo___ctor_var_reset\n"); );
    Vtb_spi_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->reset_n_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14125757890478022980ull);
    vlSelf->wr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17674650526832231937ull);
    vlSelf->data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9877081704222771714ull);
    vlSelf->full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6064445919729732869ull);
    vlSelf->rd_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5100356933441386244ull);
    vlSelf->data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14180446042470581157ull);
    vlSelf->empty_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 123340495795469900ull);
    vlSelf->level_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9426794543493121298ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12309198555648714198ull);
    }
    vlSelf->__PVT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12436053222651956031ull);
    vlSelf->__PVT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8582113012353463185ull);
    vlSelf->__PVT__count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10730142128712957955ull);
    vlSelf->__Vtogcov__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16380731746827681192ull);
    vlSelf->__Vtogcov__reset_n_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10834296396975618923ull);
    vlSelf->__Vtogcov__wr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9111607770064987644ull);
    vlSelf->__Vtogcov__data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17066368994852504677ull);
    vlSelf->__Vtogcov__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10185044264174211866ull);
    vlSelf->__Vtogcov__rd_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 711335138411571363ull);
    vlSelf->__Vtogcov__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9672776691121041991ull);
    vlSelf->__Vtogcov__empty_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5322624694444102708ull);
    vlSelf->__Vtogcov__level_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13707984727711317800ull);
    vlSelf->__Vtogcov__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1955578754212839723ull);
    vlSelf->__Vtogcov__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2887813546719930724ull);
    vlSelf->__Vdly__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6265375712968675170ull);
    vlSelf->__Vdly__count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3590515406560727288ull);
}
