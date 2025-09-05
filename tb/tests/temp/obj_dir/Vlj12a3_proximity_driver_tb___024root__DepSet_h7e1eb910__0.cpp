// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlj12a3_proximity_driver_tb.h for the primary calling header

#include "Vlj12a3_proximity_driver_tb__pch.h"
#include "Vlj12a3_proximity_driver_tb___024root.h"

VlCoroutine Vlj12a3_proximity_driver_tb___024root___eval_initial__TOP__Vtiming__0(Vlj12a3_proximity_driver_tb___024root* vlSelf);
VlCoroutine Vlj12a3_proximity_driver_tb___024root___eval_initial__TOP__Vtiming__1(Vlj12a3_proximity_driver_tb___024root* vlSelf);

void Vlj12a3_proximity_driver_tb___024root___eval_initial(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vlj12a3_proximity_driver_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vlj12a3_proximity_driver_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__lj12a3_proximity_driver_tb__DOT__clk__0 
        = vlSelf->lj12a3_proximity_driver_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__lj12a3_proximity_driver_tb__DOT__rst_n__0 
        = vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vlj12a3_proximity_driver_tb___024root___eval_initial__TOP__Vtiming__0(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__expect_active;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__expect_active = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__max_cycles;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__max_cycles = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__c;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__c = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__pulse_seen;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__pulse_seen = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__expect_active;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__expect_active = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__max_cycles;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__max_cycles = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__c;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__c = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__pulse_seen;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__pulse_seen = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__expect_active;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__expect_active = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__max_cycles;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__max_cycles = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__c;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__c = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__pulse_seen;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__pulse_seen = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__expect_active;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__expect_active = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__max_cycles;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__max_cycles = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__c;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__c = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__pulse_seen;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__pulse_seen = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__expect_active;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__expect_active = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__max_cycles;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__max_cycles = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__c;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__c = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__pulse_seen;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__pulse_seen = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__expect_active;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__expect_active = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__max_cycles;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__max_cycles = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__c;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__c = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__pulse_seen;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__pulse_seen = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__expect_active;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__expect_active = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__max_cycles;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__max_cycles = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__c;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__c = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__pulse_seen;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__pulse_seen = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__expect_active;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__expect_active = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__max_cycles;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__max_cycles = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__c;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__c = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__pulse_seen;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__pulse_seen = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__expect_active;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__expect_active = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__max_cycles;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__max_cycles = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__c;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__c = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__pulse_seen;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__pulse_seen = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__expect_active;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__expect_active = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__max_cycles;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__max_cycles = 0;
    IData/*31:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__c;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__c = 0;
    CData/*0:0*/ __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__pulse_seen;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__pulse_seen = 0;
    // Body
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_pnp_no = 0U;
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_npn_no = 0U;
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_npn_nc = 0U;
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_pnp_nc = 0U;
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_db = 0U;
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n = 1U;
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_pnp_no = 1U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__max_cycles = 0x10U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__expect_active = 1U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__pulse_seen = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__c = 0U;
    {
        while (VL_LTS_III(32, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__c, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__max_cycles)) {
            co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                               66);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            co_await vlSelf->__VdlySched.delay(0U, 
                                               nullptr, 
                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                               68);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_no) 
                 | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_no))) {
                __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__pulse_seen = 1U;
            }
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_no) 
                 == (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__expect_active))) {
                if ((1U & (~ (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__pulse_seen)))) {
                    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    co_await vlSelf->__VdlySched.delay(0U, 
                                                       nullptr, 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_no) 
                         | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_no))) {
                        __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__pulse_seen = 1U;
                    }
                }
                goto __Vlabel1;
            }
            __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__c 
                = ((IData)(1U) + __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__c);
        }
        __Vlabel1: ;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_no) 
                     != (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__0__expect_active)))) {
        VL_WRITEF("Falha: wait_active_target\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 79, "");
    }
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0U, nullptr, 
                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_no)) 
                              & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_no))))))) {
        VL_WRITEF("Falha: pnp_no_pulses_clear\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 93, "");
    }
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_pnp_no = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__max_cycles = 0x10U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__expect_active = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__pulse_seen = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__c = 0U;
    {
        while (VL_LTS_III(32, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__c, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__max_cycles)) {
            co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                               66);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            co_await vlSelf->__VdlySched.delay(0U, 
                                               nullptr, 
                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                               68);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_no) 
                 | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_no))) {
                __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__pulse_seen = 1U;
            }
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_no) 
                 == (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__expect_active))) {
                if ((1U & (~ (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__pulse_seen)))) {
                    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    co_await vlSelf->__VdlySched.delay(0U, 
                                                       nullptr, 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_no) 
                         | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_no))) {
                        __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__pulse_seen = 1U;
                    }
                }
                goto __Vlabel2;
            }
            __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__c 
                = ((IData)(1U) + __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__c);
        }
        __Vlabel2: ;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_no) 
                     != (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__1__expect_active)))) {
        VL_WRITEF("Falha: wait_active_target\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 79, "");
    }
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       96);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0U, nullptr, 
                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                       96);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_no)) 
                              & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_no))))))) {
        VL_WRITEF("Falha: pnp_no_pulses_clear2\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 96, "");
    }
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_npn_no = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__max_cycles = 0x10U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__expect_active = 1U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__pulse_seen = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__c = 0U;
    {
        while (VL_LTS_III(32, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__c, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__max_cycles)) {
            co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                               66);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            co_await vlSelf->__VdlySched.delay(0U, 
                                               nullptr, 
                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                               68);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_no) 
                 | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_no))) {
                __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__pulse_seen = 1U;
            }
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_no) 
                 == (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__expect_active))) {
                if ((1U & (~ (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__pulse_seen)))) {
                    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    co_await vlSelf->__VdlySched.delay(0U, 
                                                       nullptr, 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_no) 
                         | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_no))) {
                        __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__pulse_seen = 1U;
                    }
                }
                goto __Vlabel3;
            }
            __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__c 
                = ((IData)(1U) + __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__c);
        }
        __Vlabel3: ;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_no) 
                     != (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__2__expect_active)))) {
        VL_WRITEF("Falha: wait_active_target\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 79, "");
    }
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0U, nullptr, 
                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_no)) 
                              & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_no))))))) {
        VL_WRITEF("Falha: npn_no_pulses_clear\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 101, "");
    }
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_npn_no = 1U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__max_cycles = 0x10U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__expect_active = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__pulse_seen = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__c = 0U;
    {
        while (VL_LTS_III(32, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__c, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__max_cycles)) {
            co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                               66);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            co_await vlSelf->__VdlySched.delay(0U, 
                                               nullptr, 
                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                               68);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_no) 
                 | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_no))) {
                __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__pulse_seen = 1U;
            }
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_no) 
                 == (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__expect_active))) {
                if ((1U & (~ (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__pulse_seen)))) {
                    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    co_await vlSelf->__VdlySched.delay(0U, 
                                                       nullptr, 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_no) 
                         | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_no))) {
                        __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__pulse_seen = 1U;
                    }
                }
                goto __Vlabel4;
            }
            __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__c 
                = ((IData)(1U) + __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__c);
        }
        __Vlabel4: ;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_no) 
                     != (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__3__expect_active)))) {
        VL_WRITEF("Falha: wait_active_target\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 79, "");
    }
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_npn_nc = 1U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__max_cycles = 0x10U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__expect_active = 1U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__pulse_seen = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__c = 0U;
    {
        while (VL_LTS_III(32, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__c, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__max_cycles)) {
            co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                               66);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            co_await vlSelf->__VdlySched.delay(0U, 
                                               nullptr, 
                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                               68);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_nc) 
                 | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_nc))) {
                __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__pulse_seen = 1U;
            }
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_nc) 
                 == (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__expect_active))) {
                if ((1U & (~ (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__pulse_seen)))) {
                    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    co_await vlSelf->__VdlySched.delay(0U, 
                                                       nullptr, 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_nc) 
                         | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_nc))) {
                        __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__pulse_seen = 1U;
                    }
                }
                goto __Vlabel5;
            }
            __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__c 
                = ((IData)(1U) + __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__c);
        }
        __Vlabel5: ;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_nc) 
                     != (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__4__expect_active)))) {
        VL_WRITEF("Falha: wait_active_target\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 79, "");
    }
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       109);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_npn_nc = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__max_cycles = 0x10U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__expect_active = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__pulse_seen = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__c = 0U;
    {
        while (VL_LTS_III(32, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__c, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__max_cycles)) {
            co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                               66);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            co_await vlSelf->__VdlySched.delay(0U, 
                                               nullptr, 
                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                               68);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_nc) 
                 | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_nc))) {
                __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__pulse_seen = 1U;
            }
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_nc) 
                 == (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__expect_active))) {
                if ((1U & (~ (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__pulse_seen)))) {
                    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    co_await vlSelf->__VdlySched.delay(0U, 
                                                       nullptr, 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_nc) 
                         | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_nc))) {
                        __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__pulse_seen = 1U;
                    }
                }
                goto __Vlabel6;
            }
            __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__c 
                = ((IData)(1U) + __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__c);
        }
        __Vlabel6: ;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_nc) 
                     != (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__5__expect_active)))) {
        VL_WRITEF("Falha: wait_active_target\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 79, "");
    }
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_pnp_nc = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__max_cycles = 0x10U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__expect_active = 1U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__pulse_seen = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__c = 0U;
    {
        while (VL_LTS_III(32, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__c, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__max_cycles)) {
            co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                               66);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            co_await vlSelf->__VdlySched.delay(0U, 
                                               nullptr, 
                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                               68);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_nc) 
                 | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_nc))) {
                __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__pulse_seen = 1U;
            }
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_nc) 
                 == (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__expect_active))) {
                if ((1U & (~ (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__pulse_seen)))) {
                    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    co_await vlSelf->__VdlySched.delay(0U, 
                                                       nullptr, 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_nc) 
                         | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_nc))) {
                        __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__pulse_seen = 1U;
                    }
                }
                goto __Vlabel7;
            }
            __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__c 
                = ((IData)(1U) + __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__c);
        }
        __Vlabel7: ;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_nc) 
                     != (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__6__expect_active)))) {
        VL_WRITEF("Falha: wait_active_target\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 79, "");
    }
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       117);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_pnp_nc = 1U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__max_cycles = 0x10U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__expect_active = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__pulse_seen = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__c = 0U;
    {
        while (VL_LTS_III(32, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__c, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__max_cycles)) {
            co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                               66);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            co_await vlSelf->__VdlySched.delay(0U, 
                                               nullptr, 
                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                               68);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_nc) 
                 | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_nc))) {
                __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__pulse_seen = 1U;
            }
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_nc) 
                 == (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__expect_active))) {
                if ((1U & (~ (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__pulse_seen)))) {
                    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    co_await vlSelf->__VdlySched.delay(0U, 
                                                       nullptr, 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_nc) 
                         | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_nc))) {
                        __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__pulse_seen = 1U;
                    }
                }
                goto __Vlabel8;
            }
            __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__c 
                = ((IData)(1U) + __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__c);
        }
        __Vlabel8: ;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_nc) 
                     != (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__7__expect_active)))) {
        VL_WRITEF("Falha: wait_active_target\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 79, "");
    }
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       120);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_db = 1U;
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       124);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_db = 0U;
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_db)) 
                               & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_db))) 
                              & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_db))))))) {
        VL_WRITEF("Falha: debounce_glitch_ignored\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 127, "");
    }
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_db = 1U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__max_cycles = 0x32U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__expect_active = 1U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__pulse_seen = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__c = 0U;
    {
        while (VL_LTS_III(32, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__c, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__max_cycles)) {
            co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                               66);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            co_await vlSelf->__VdlySched.delay(0U, 
                                               nullptr, 
                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                               68);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_db) 
                 | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_db))) {
                __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__pulse_seen = 1U;
            }
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_db) 
                 == (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__expect_active))) {
                if ((1U & (~ (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__pulse_seen)))) {
                    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    co_await vlSelf->__VdlySched.delay(0U, 
                                                       nullptr, 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_db) 
                         | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_db))) {
                        __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__pulse_seen = 1U;
                    }
                }
                goto __Vlabel9;
            }
            __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__c 
                = ((IData)(1U) + __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__c);
        }
        __Vlabel9: ;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_db) 
                     != (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__8__expect_active)))) {
        VL_WRITEF("Falha: wait_active_target\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 79, "");
    }
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0U, nullptr, 
                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_db)) 
                              & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_db))))))) {
        VL_WRITEF("Falha: debounce_pulses_clear\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 132, "");
    }
    vlSelf->lj12a3_proximity_driver_tb__DOT__s_db = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__max_cycles = 0x32U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__expect_active = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__pulse_seen = 0U;
    __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__c = 0U;
    {
        while (VL_LTS_III(32, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__c, __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__max_cycles)) {
            co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                               66);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            co_await vlSelf->__VdlySched.delay(0U, 
                                               nullptr, 
                                               "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                               68);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_db) 
                 | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_db))) {
                __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__pulse_seen = 1U;
            }
            if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_db) 
                 == (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__expect_active))) {
                if ((1U & (~ (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__pulse_seen)))) {
                    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    co_await vlSelf->__VdlySched.delay(0U, 
                                                       nullptr, 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       73);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_db) 
                         | (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_db))) {
                        __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__pulse_seen = 1U;
                    }
                }
                goto __Vlabel10;
            }
            __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__c 
                = ((IData)(1U) + __Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__c);
        }
        __Vlabel10: ;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__act_db) 
                     != (IData)(__Vtask_lj12a3_proximity_driver_tb__DOT__wait_active_with_pulse__9__expect_active)))) {
        VL_WRITEF("Falha: wait_active_target\n");
        VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 79, "");
    }
    co_await vlSelf->__VtrigSched_h7e5b5a5e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lj12a3_proximity_driver_tb.clk)", 
                                                       "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                                       137);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Sucesso: lj12a3_proximity_driver_tb\n");
    VL_FINISH_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 140, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vlj12a3_proximity_driver_tb___024root___eval_initial__TOP__Vtiming__1(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tests/lj12a3_proximity_driver_tb.sv", 
                                           16);
        vlSelf->lj12a3_proximity_driver_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__clk)));
    }
}

void Vlj12a3_proximity_driver_tb___024root___eval_act(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vlj12a3_proximity_driver_tb___024root___nba_sequent__TOP__0(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt;
    __Vdly__lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state;
    __Vdly__lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state = 0;
    // Body
    __Vdly__lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state 
        = vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state;
    __Vdly__lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt 
        = vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt;
    if (vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) {
        if (((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__in_sync) 
             == (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state))) {
            __Vdly__lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt = 0U;
        } else if ((3U == (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt))) {
            __Vdly__lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state 
                = vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__in_sync;
            __Vdly__lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt = 0U;
        } else {
            __Vdly__lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt)));
        }
        vlSelf->lj12a3_proximity_driver_tb__DOT__ap_db 
            = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state) 
               & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__debounced_active)));
        vlSelf->lj12a3_proximity_driver_tb__DOT__ip_db 
            = ((~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state)) 
               & (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__debounced_active));
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__debounced_q 
            = vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__debounced_active;
        vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_nc 
            = (1U & ((~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_sync)) 
                     & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__debounced_active))));
        vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_nc 
            = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_sync) 
               & (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__debounced_active));
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__debounced_q 
            = vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__debounced_active;
        vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_nc 
            = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_sync) 
               & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__debounced_active)));
        vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_nc 
            = ((~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_sync)) 
               & (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__debounced_active));
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__debounced_q 
            = vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__debounced_active;
        vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_no 
            = (1U & ((~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_sync)) 
                     & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__debounced_active))));
        vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_no 
            = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_sync) 
               & (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__debounced_active));
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__debounced_q 
            = vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__debounced_active;
        vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_no 
            = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_sync) 
               & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__debounced_active)));
        vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_no 
            = ((~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_sync)) 
               & (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__debounced_active));
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__debounced_q 
            = vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__debounced_active;
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__debounced_active 
            = vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state;
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__debounced_active 
            = (1U & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_sync)));
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__debounced_active 
            = vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_sync;
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__debounced_active 
            = (1U & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_sync)));
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__debounced_active 
            = vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_sync;
    } else {
        __Vdly__lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt = 0U;
        __Vdly__lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__debounced_q = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__ap_db = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__ip_db = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__debounced_q = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_nc = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_nc = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__debounced_q = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_nc = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_nc = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__debounced_q = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_no = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_no = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__debounced_q = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_no = 0U;
        vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_no = 0U;
    }
    vlSelf->lj12a3_proximity_driver_tb__DOT__act_db 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state));
    vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_nc 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (1U & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_sync))));
    vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_nc 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_sync));
    vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_no 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (1U & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_sync))));
    vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_no 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_sync));
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt 
        = __Vdly__lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt;
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__in_sync 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__in_meta));
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state 
        = __Vdly__lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state;
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__in_meta 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__s_db));
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_sync 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_meta));
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_sync 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_meta));
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_sync 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_meta));
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_sync 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_meta));
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_meta 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__s_pnp_nc));
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_meta 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__s_npn_nc));
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_meta 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__s_npn_no));
    vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_meta 
        = ((IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n) 
           && (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__s_pnp_no));
}

void Vlj12a3_proximity_driver_tb___024root___eval_nba(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlj12a3_proximity_driver_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vlj12a3_proximity_driver_tb___024root___timing_resume(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h7e5b5a5e__0.resume("@(posedge lj12a3_proximity_driver_tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vlj12a3_proximity_driver_tb___024root___timing_commit(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h7e5b5a5e__0.commit("@(posedge lj12a3_proximity_driver_tb.clk)");
    }
}

void Vlj12a3_proximity_driver_tb___024root___eval_triggers__act(Vlj12a3_proximity_driver_tb___024root* vlSelf);

bool Vlj12a3_proximity_driver_tb___024root___eval_phase__act(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vlj12a3_proximity_driver_tb___024root___eval_triggers__act(vlSelf);
    Vlj12a3_proximity_driver_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vlj12a3_proximity_driver_tb___024root___timing_resume(vlSelf);
        Vlj12a3_proximity_driver_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vlj12a3_proximity_driver_tb___024root___eval_phase__nba(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vlj12a3_proximity_driver_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root___dump_triggers__nba(Vlj12a3_proximity_driver_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root___dump_triggers__act(Vlj12a3_proximity_driver_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vlj12a3_proximity_driver_tb___024root___eval(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vlj12a3_proximity_driver_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vlj12a3_proximity_driver_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tests/lj12a3_proximity_driver_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vlj12a3_proximity_driver_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vlj12a3_proximity_driver_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vlj12a3_proximity_driver_tb___024root___eval_debug_assertions(Vlj12a3_proximity_driver_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
