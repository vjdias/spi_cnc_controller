// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_full_flow_tick_count_tb.h for the primary calling header

#include "Vspi_full_flow_tick_count_tb__pch.h"
#include "Vspi_full_flow_tick_count_tb_spi_fifo_if__Dc8_DB1.h"

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb_spi_fifo_if__Dc8_DB1___ctor_var_reset(Vspi_full_flow_tick_count_tb_spi_fifo_if__Dc8_DB1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vspi_full_flow_tick_count_tb_spi_fifo_if__Dc8_DB1___ctor_var_reset\n"); );
    // Body
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->wr_ptr = 0;
    vlSelf->rd_ptr = 0;
    vlSelf->count = 0;
    vlSelf->full = VL_RAND_RESET_I(1);
    vlSelf->empty = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_h564755a9__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_h564755a9__1 = VL_RAND_RESET_I(8);
}
