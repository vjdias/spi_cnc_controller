// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_full_flow_led_20_tb.h for the primary calling header

#include "Vspi_full_flow_led_20_tb__pch.h"
#include "Vspi_full_flow_led_20_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vspi_full_flow_led_20_tb___024root___eval_initial__TOP__Vtiming__1(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                           16);
        vlSelf->spi_full_flow_led_20_tb__DOT__clk = 
            (1U & (~ (IData)(vlSelf->spi_full_flow_led_20_tb__DOT__clk)));
    }
}

void Vspi_full_flow_led_20_tb___024root___eval_act(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___eval_act\n"); );
}

void Vspi_full_flow_led_20_tb___024root___timing_resume(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9b9f22fe__0.resume("@(posedge spi_full_flow_led_20_tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vspi_full_flow_led_20_tb___024root___timing_commit(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9b9f22fe__0.commit("@(posedge spi_full_flow_led_20_tb.clk)");
    }
}

void Vspi_full_flow_led_20_tb___024root___eval_triggers__act(Vspi_full_flow_led_20_tb___024root* vlSelf);

bool Vspi_full_flow_led_20_tb___024root___eval_phase__act(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vspi_full_flow_led_20_tb___024root___eval_triggers__act(vlSelf);
    Vspi_full_flow_led_20_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vspi_full_flow_led_20_tb___024root___timing_resume(vlSelf);
        Vspi_full_flow_led_20_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vspi_full_flow_led_20_tb___024root___eval_nba(Vspi_full_flow_led_20_tb___024root* vlSelf);

bool Vspi_full_flow_led_20_tb___024root___eval_phase__nba(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vspi_full_flow_led_20_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___dump_triggers__nba(Vspi_full_flow_led_20_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___dump_triggers__act(Vspi_full_flow_led_20_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_full_flow_led_20_tb___024root___eval(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vspi_full_flow_led_20_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vspi_full_flow_led_20_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vspi_full_flow_led_20_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vspi_full_flow_led_20_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vspi_full_flow_led_20_tb___024root___eval_debug_assertions(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
