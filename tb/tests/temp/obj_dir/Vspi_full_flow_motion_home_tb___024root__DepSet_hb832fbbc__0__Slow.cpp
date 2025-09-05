// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_full_flow_motion_home_tb.h for the primary calling header

#include "Vspi_full_flow_motion_home_tb__pch.h"
#include "Vspi_full_flow_motion_home_tb__Syms.h"
#include "Vspi_full_flow_motion_home_tb___024root.h"

extern const VlWide<12>/*383:0*/ Vspi_full_flow_motion_home_tb__ConstPool__CONST_hf46be4f5_0;

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___eval_initial__TOP(Vspi_full_flow_motion_home_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(12, Vspi_full_flow_motion_home_tb__ConstPool__CONST_hf46be4f5_0));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___dump_triggers__stl(Vspi_full_flow_motion_home_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___eval_triggers__stl(Vspi_full_flow_motion_home_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_full_flow_motion_home_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___stl_sequent__TOP__0(Vspi_full_flow_motion_home_tb___024root* vlSelf);
void Vspi_full_flow_motion_home_tb_spi_fifo_if___nba_sequent__TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo__0(Vspi_full_flow_motion_home_tb_spi_fifo_if* vlSelf);
void Vspi_full_flow_motion_home_tb_spi_fifo_if__Dc8_DB1___nba_sequent__TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo__0(Vspi_full_flow_motion_home_tb_spi_fifo_if__Dc8_DB1* vlSelf);

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___eval_stl(Vspi_full_flow_motion_home_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vspi_full_flow_motion_home_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vspi_full_flow_motion_home_tb_spi_fifo_if___nba_sequent__TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo__0((&vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo));
        Vspi_full_flow_motion_home_tb_spi_fifo_if__Dc8_DB1___nba_sequent__TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo__0((&vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo));
    }
}
