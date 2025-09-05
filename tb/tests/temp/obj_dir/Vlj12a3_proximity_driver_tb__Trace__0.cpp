// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlj12a3_proximity_driver_tb__Syms.h"


void Vlj12a3_proximity_driver_tb___024root__trace_chg_0_sub_0(Vlj12a3_proximity_driver_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vlj12a3_proximity_driver_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root__trace_chg_0\n"); );
    // Init
    Vlj12a3_proximity_driver_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlj12a3_proximity_driver_tb___024root*>(voidSelf);
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vlj12a3_proximity_driver_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vlj12a3_proximity_driver_tb___024root__trace_chg_0_sub_0(Vlj12a3_proximity_driver_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->lj12a3_proximity_driver_tb__DOT__s_pnp_no));
        bufp->chgBit(oldp+2,(vlSelf->lj12a3_proximity_driver_tb__DOT__s_npn_no));
        bufp->chgBit(oldp+3,(vlSelf->lj12a3_proximity_driver_tb__DOT__s_npn_nc));
        bufp->chgBit(oldp+4,(vlSelf->lj12a3_proximity_driver_tb__DOT__s_pnp_nc));
        bufp->chgBit(oldp+5,(vlSelf->lj12a3_proximity_driver_tb__DOT__s_db));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+6,(vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_no));
        bufp->chgBit(oldp+7,(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_no));
        bufp->chgBit(oldp+8,(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_no));
        bufp->chgBit(oldp+9,(vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_no));
        bufp->chgBit(oldp+10,(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_no));
        bufp->chgBit(oldp+11,(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_no));
        bufp->chgBit(oldp+12,(vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_nc));
        bufp->chgBit(oldp+13,(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_nc));
        bufp->chgBit(oldp+14,(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_nc));
        bufp->chgBit(oldp+15,(vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_nc));
        bufp->chgBit(oldp+16,(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_nc));
        bufp->chgBit(oldp+17,(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_nc));
        bufp->chgBit(oldp+18,(vlSelf->lj12a3_proximity_driver_tb__DOT__act_db));
        bufp->chgBit(oldp+19,(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_db));
        bufp->chgBit(oldp+20,(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_db));
        bufp->chgBit(oldp+21,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__in_meta));
        bufp->chgBit(oldp+22,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__in_sync));
        bufp->chgBit(oldp+23,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__debounced_active));
        bufp->chgBit(oldp+24,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state));
        bufp->chgCData(oldp+25,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt),2);
        bufp->chgBit(oldp+26,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_meta));
        bufp->chgBit(oldp+27,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_sync));
        bufp->chgBit(oldp+28,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__debounced_active));
        bufp->chgBit(oldp+29,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_meta));
        bufp->chgBit(oldp+30,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_sync));
        bufp->chgBit(oldp+31,((1U & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_sync)))));
        bufp->chgBit(oldp+32,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__debounced_active));
        bufp->chgBit(oldp+33,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_meta));
        bufp->chgBit(oldp+34,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_sync));
        bufp->chgBit(oldp+35,((1U & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_sync)))));
        bufp->chgBit(oldp+36,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__debounced_active));
        bufp->chgBit(oldp+37,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_meta));
        bufp->chgBit(oldp+38,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_sync));
        bufp->chgBit(oldp+39,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__debounced_active));
    }
    bufp->chgBit(oldp+40,(vlSelf->lj12a3_proximity_driver_tb__DOT__clk));
}

void Vlj12a3_proximity_driver_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root__trace_cleanup\n"); );
    // Init
    Vlj12a3_proximity_driver_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlj12a3_proximity_driver_tb___024root*>(voidSelf);
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
