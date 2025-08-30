// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_full_flow_led_20_tb.h for the primary calling header

#include "Vspi_full_flow_led_20_tb__pch.h"
#include "Vspi_full_flow_led_20_tb___024root.h"

VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___eval_static__TOP(Vspi_full_flow_led_20_tb___024root* vlSelf);

VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___eval_static(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___eval_static\n"); );
    // Body
    Vspi_full_flow_led_20_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___eval_static__TOP(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->spi_full_flow_led_20_tb__DOT__clk = 0U;
    vlSelf->spi_full_flow_led_20_tb__DOT__rst_n = 0U;
}

VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___eval_final(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___dump_triggers__stl(Vspi_full_flow_led_20_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vspi_full_flow_led_20_tb___024root___eval_phase__stl(Vspi_full_flow_led_20_tb___024root* vlSelf);

VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___eval_settle(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vspi_full_flow_led_20_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vspi_full_flow_led_20_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___dump_triggers__stl(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___stl_sequent__TOP__0(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__bits_arr[0U][0U] 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[0U];
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__bits_arr[0U][1U] 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[1U];
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__bits_arr[0U][2U] 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[2U];
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__bits_arr[0U][3U] 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[3U];
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__bits_arr[0U][4U] 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[4U];
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_arr[0U] 
        = (0x1fU & vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_len);
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__valid_arr[0U] 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pending;
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick = 0U;
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick_idx = 0U;
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__ready_arr[0U] = 0U;
    if ((0U == (IData)(vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__state))) {
        vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__unnamedblk2__DOT__unnamedblk3__DOT__cand = 0U;
        if (((~ (IData)(vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick)) 
             & vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__valid_arr
             [0U])) {
            vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick = 1U;
            vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick_idx 
                = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__unnamedblk2__DOT__unnamedblk3__DOT__cand;
        }
        if (vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick) {
            vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT____Vlvbound_h40571ae2__0 = 1U;
            if ((0U >= (1U & vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick_idx))) {
                vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__ready_arr[(1U 
                                                                            & vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick_idx)] 
                    = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT____Vlvbound_h40571ae2__0;
            }
        }
    }
}

VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___eval_triggers__stl(Vspi_full_flow_led_20_tb___024root* vlSelf);
VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___eval_stl(Vspi_full_flow_led_20_tb___024root* vlSelf);

VL_ATTR_COLD bool Vspi_full_flow_led_20_tb___024root___eval_phase__stl(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vspi_full_flow_led_20_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vspi_full_flow_led_20_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___dump_triggers__act(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge spi_full_flow_led_20_tb.clk or negedge spi_full_flow_led_20_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge spi_full_flow_led_20_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___dump_triggers__nba(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge spi_full_flow_led_20_tb.clk or negedge spi_full_flow_led_20_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge spi_full_flow_led_20_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___ctor_var_reset(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->spi_full_flow_led_20_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_led_20_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_led_20_tb__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_led_20_tb__DOT__rdata = VL_RAND_RESET_I(8);
    vlSelf->spi_full_flow_led_20_tb__DOT__irq = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_led_20_tb__DOT__spi_byte_valid = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_led_20_tb__DOT__spi_byte = VL_RAND_RESET_I(8);
    vlSelf->spi_full_flow_led_20_tb__DOT__frame_valid = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_led_20_tb__DOT__out_msgType = VL_RAND_RESET_I(8);
    vlSelf->spi_full_flow_led_20_tb__DOT__led_ctrl_frame = VL_RAND_RESET_Q(56);
    vlSelf->spi_full_flow_led_20_tb__DOT__resp_valid = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_led_20_tb__DOT__tx_busy = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_led_20_tb__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_led_20_tb__DOT__wdata = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 140; ++__Vi0) {
        vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__resp_byte_count = 0;
    vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr = 0;
    vlSelf->spi_full_flow_led_20_tb__DOT__busy_rise_count = 0;
    vlSelf->spi_full_flow_led_20_tb__DOT__busy_cycle_count = 0;
    vlSelf->spi_full_flow_led_20_tb__DOT__max_rx_occupancy = 0;
    vlSelf->spi_full_flow_led_20_tb__DOT__max_tx_occupancy = 0;
    vlSelf->spi_full_flow_led_20_tb__DOT__tx_pause_cycles = 0;
    vlSelf->spi_full_flow_led_20_tb__DOT__messages_received = 0;
    vlSelf->spi_full_flow_led_20_tb__DOT__prev_busy = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.atDefault() = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 20; ++__Vi0) {
        vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 20; ++__Vi0) {
        vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 20; ++__Vi0) {
        vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->spi_full_flow_led_20_tb__DOT____Vlvbound_h217a7026__0 = VL_RAND_RESET_I(8);
    vlSelf->spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(727, vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx);
    vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__unnamedblk1__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__leds_r = VL_RAND_RESET_I(6);
    vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pending = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(160, vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits);
    vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_len = 0;
    vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__unnamedblk1__DOT__r = VL_RAND_RESET_Q(56);
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(160, vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift);
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_bytes = 0;
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__valid_arr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(160, vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__bits_arr[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_arr[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__ready_arr[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick_idx = 0;
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__unnamedblk2__DOT__unnamedblk3__DOT__cand = 0;
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__unnamedblk4__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT____Vlvbound_h40571ae2__0 = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_led_20_tb__DOT__u_miso__DOT__gap = VL_RAND_RESET_I(2);
    vlSelf->spi_full_flow_led_20_tb__DOT__u_miso__DOT__unnamedblk1__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_led_20_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_led_20_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
}
