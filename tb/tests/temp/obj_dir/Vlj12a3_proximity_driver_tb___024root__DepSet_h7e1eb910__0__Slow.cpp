// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlj12a3_proximity_driver_tb.h for the primary calling header

#include "Vlj12a3_proximity_driver_tb__pch.h"
#include "Vlj12a3_proximity_driver_tb___024root.h"

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root___eval_static__TOP(Vlj12a3_proximity_driver_tb___024root* vlSelf);

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root___eval_static(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___eval_static\n"); );
    // Body
    Vlj12a3_proximity_driver_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root___eval_static__TOP(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->lj12a3_proximity_driver_tb__DOT__clk = 0U;
    vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n = 0U;
}

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root___eval_final(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root___eval_settle(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root___dump_triggers__act(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge lj12a3_proximity_driver_tb.clk or negedge lj12a3_proximity_driver_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge lj12a3_proximity_driver_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root___dump_triggers__nba(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge lj12a3_proximity_driver_tb.clk or negedge lj12a3_proximity_driver_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge lj12a3_proximity_driver_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root___ctor_var_reset(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->lj12a3_proximity_driver_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_pnp_no = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_no = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_no = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_no = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_npn_no = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_no = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_no = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_no = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_npn_nc = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_nc = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_nc = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_nc = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_pnp_nc = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_nc = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_nc = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_nc = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_db = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__act_db = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__ap_db = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__ip_db = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_meta = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_sync = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__debounced_active = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_meta = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_sync = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__debounced_active = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_meta = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_sync = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__debounced_active = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_meta = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_sync = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__debounced_active = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__in_meta = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__in_sync = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__debounced_active = VL_RAND_RESET_I(1);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt = VL_RAND_RESET_I(2);
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__lj12a3_proximity_driver_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__lj12a3_proximity_driver_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
