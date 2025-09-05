// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_full_flow_tick_count_tb.h for the primary calling header

#include "Vspi_full_flow_tick_count_tb__pch.h"
#include "Vspi_full_flow_tick_count_tb_spi_fifo_if.h"

VL_INLINE_OPT void Vspi_full_flow_tick_count_tb_spi_fifo_if___eval_initial__TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo(Vspi_full_flow_tick_count_tb_spi_fifo_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vspi_full_flow_tick_count_tb_spi_fifo_if___eval_initial__TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo\n"); );
    // Body
    vlSelf->wr_ptr = 0U;
    vlSelf->rd_ptr = 0U;
    vlSelf->count = 0U;
}

VL_INLINE_OPT void Vspi_full_flow_tick_count_tb_spi_fifo_if___nba_sequent__TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo__0(Vspi_full_flow_tick_count_tb_spi_fifo_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vspi_full_flow_tick_count_tb_spi_fifo_if___nba_sequent__TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo__0\n"); );
    // Body
    vlSelf->full = (0xd2U == vlSelf->count);
    vlSelf->empty = (0U == vlSelf->count);
}

std::string VL_TO_STRING(const Vspi_full_flow_tick_count_tb_spi_fifo_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vspi_full_flow_tick_count_tb_spi_fifo_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
