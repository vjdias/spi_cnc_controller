// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_full_flow_led_20_tb.h for the primary calling header

#include "Vspi_full_flow_led_20_tb__pch.h"
#include "Vspi_full_flow_led_20_tb__Syms.h"
#include "Vspi_full_flow_led_20_tb___024root.h"

VlCoroutine Vspi_full_flow_led_20_tb___024root___eval_initial__TOP__Vtiming__0(Vspi_full_flow_led_20_tb___024root* vlSelf);
VlCoroutine Vspi_full_flow_led_20_tb___024root___eval_initial__TOP__Vtiming__1(Vspi_full_flow_led_20_tb___024root* vlSelf);
void Vspi_full_flow_led_20_tb_spi_fifo_if___eval_initial__TOP__spi_full_flow_led_20_tb__DOT__rx_fifo(Vspi_full_flow_led_20_tb_spi_fifo_if* vlSelf);
void Vspi_full_flow_led_20_tb_spi_fifo_if__Dc8_DB1___eval_initial__TOP__spi_full_flow_led_20_tb__DOT__tx_fifo(Vspi_full_flow_led_20_tb_spi_fifo_if__Dc8_DB1* vlSelf);

void Vspi_full_flow_led_20_tb___024root___eval_initial(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___eval_initial\n"); );
    // Body
    Vspi_full_flow_led_20_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vspi_full_flow_led_20_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vspi_full_flow_led_20_tb_spi_fifo_if___eval_initial__TOP__spi_full_flow_led_20_tb__DOT__rx_fifo((&vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo));
    Vspi_full_flow_led_20_tb_spi_fifo_if__Dc8_DB1___eval_initial__TOP__spi_full_flow_led_20_tb__DOT__tx_fifo((&vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo));
    vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_led_20_tb__DOT__clk__0 
        = vlSelf->spi_full_flow_led_20_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_led_20_tb__DOT__rst_n__0 
        = vlSelf->spi_full_flow_led_20_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vspi_full_flow_led_20_tb___024root___eval_initial__TOP__Vtiming__0(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__start_cycle;
    spi_full_flow_led_20_tb__DOT__start_cycle = 0;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__end_cycle;
    spi_full_flow_led_20_tb__DOT__end_cycle = 0;
    CData/*0:0*/ spi_full_flow_led_20_tb__DOT__started;
    spi_full_flow_led_20_tb__DOT__started = 0;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__messages_sent;
    spi_full_flow_led_20_tb__DOT__messages_sent = 0;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__cycles;
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__cycles = 0;
    CData/*5:0*/ spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds;
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds = 0;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 = 0;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__0 = 0;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__1;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__1 = 0;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__2;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__2 = 0;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__3;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__3 = 0;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__4;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__4 = 0;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 0;
    CData/*7:0*/ __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId = 0;
    CData/*7:0*/ __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask = 0;
    CData/*7:0*/ __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value = 0;
    QData/*55:0*/ __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req = 0;
    QData/*55:0*/ __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw = 0;
    QData/*55:0*/ __Vfunc_make_default__1__Vfuncout;
    __Vfunc_make_default__1__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_make_default__1__r;
    __Vfunc_make_default__1__r = 0;
    QData/*55:0*/ __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_set_parity__2__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_set_parity__2__in;
    __Vfunc_set_parity__2__in = 0;
    QData/*55:0*/ __Vfunc_set_parity__2__r;
    __Vfunc_set_parity__2__r = 0;
    CData/*7:0*/ __Vfunc_calc_parity__3__Vfuncout;
    __Vfunc_calc_parity__3__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_calc_parity__3__f;
    __Vfunc_calc_parity__3__f = 0;
    QData/*55:0*/ __Vfunc_encoder__4__Vfuncout;
    __Vfunc_encoder__4__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__r = 0;
    QData/*55:0*/ __Vfunc_encoder__4__v;
    __Vfunc_encoder__4__v = 0;
    IData/*31:0*/ __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0;
    CData/*7:0*/ __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId = 0;
    CData/*7:0*/ __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask = 0;
    CData/*7:0*/ __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0;
    QData/*55:0*/ __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw = 0;
    QData/*55:0*/ __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec = 0;
    QData/*55:0*/ __Vfunc_decoder__6__Vfuncout;
    __Vfunc_decoder__6__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__raw = 0;
    QData/*55:0*/ __Vfunc_decoder__6__r;
    __Vfunc_decoder__6__r = 0;
    CData/*0:0*/ __Vfunc_check_parity__7__Vfuncout;
    __Vfunc_check_parity__7__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_check_parity__7__f;
    __Vfunc_check_parity__7__f = 0;
    CData/*7:0*/ __Vfunc_calc_parity__8__Vfuncout;
    __Vfunc_calc_parity__8__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_calc_parity__8__f;
    __Vfunc_calc_parity__8__f = 0;
    // Body
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.clear();
    spi_full_flow_led_20_tb__DOT__started = 0U;
    spi_full_flow_led_20_tb__DOT__messages_sent = 0U;
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds = 0U;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       253);
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       253);
    vlSelf->spi_full_flow_led_20_tb__DOT__rst_n = 1U;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x10U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[0U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__0 = 1U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[0U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 1U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[0U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x11U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[1U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__1 = 3U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[1U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__1;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 0U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[1U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x12U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[2U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__2 = 0xcU;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[2U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__2;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 1U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[2U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x13U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[3U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__3 = 0x30U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[3U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__3;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 0U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[3U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x14U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[4U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__4 = 0x15U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[4U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__4;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 1U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[4U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x15U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[5U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__0 = 1U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[5U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 0U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[5U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x16U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[6U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__1 = 3U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[6U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__1;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 1U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[6U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x17U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[7U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__2 = 0xcU;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[7U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__2;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 0U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[7U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x18U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[8U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__3 = 0x30U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[8U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__3;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 1U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[8U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x19U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[9U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__4 = 0x15U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[9U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__4;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 0U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[9U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x1aU;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[0xaU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__0 = 1U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[0xaU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 1U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[0xaU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x1bU;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[0xbU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__1 = 3U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[0xbU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__1;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 0U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[0xbU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x1cU;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[0xcU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__2 = 0xcU;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[0xcU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__2;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 1U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[0xcU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x1dU;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[0xdU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__3 = 0x30U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[0xdU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__3;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 0U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[0xdU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x1eU;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[0xeU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__4 = 0x15U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[0xeU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__4;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 1U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[0xeU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x1fU;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[0xfU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__0 = 1U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[0xfU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 0U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[0xfU] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x20U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[0x10U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__1 = 3U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[0x10U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__1;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 1U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[0x10U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x21U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[0x11U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__2 = 0xcU;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[0x11U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__2;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 0U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[0x11U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x22U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[0x12U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__3 = 0x30U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[0x12U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__3;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 1U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[0x12U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0 = 0x23U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds[0x13U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h5d3dfe21__0;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__4 = 0x15U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks[0x13U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_h9e60ac34__4;
    spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0 = 0U;
    vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals[0x13U] 
        = spi_full_flow_led_20_tb__DOT____Vlvbound_hcf50b729__0;
    spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [0U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0U];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [0U]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                              | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                              [0U]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                       & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                          [0U]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [1U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [1U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [1U];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [1U]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                              | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                              [1U]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                       & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                          [1U]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [2U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [2U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [2U];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [2U]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                              | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                              [2U]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                       & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                          [2U]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [3U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [3U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [3U];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [3U]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                              | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                              [3U]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                       & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                          [3U]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [4U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [4U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [4U];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [4U]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                              | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                              [4U]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                       & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                          [4U]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [5U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [5U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [5U];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [5U]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                              | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                              [5U]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                       & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                          [5U]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [6U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [6U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [6U];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [6U]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                              | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                              [6U]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                       & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                          [6U]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [7U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [7U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [7U];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [7U]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                              | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                              [7U]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                       & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                          [7U]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [8U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [8U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [8U];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [8U]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                              | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                              [8U]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                       & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                          [8U]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [9U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [9U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [9U];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [9U]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                              | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                              [9U]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                       & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                          [9U]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [0xaU];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0xaU];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0xaU];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [0xaU]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                [0xaU]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                           & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                              [0xaU]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [0xbU];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0xbU];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0xbU];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [0xbU]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                [0xbU]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                           & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                              [0xbU]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [0xcU];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0xcU];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0xcU];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [0xcU]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                [0xcU]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                           & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                              [0xcU]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [0xdU];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0xdU];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0xdU];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [0xdU]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                [0xdU]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                           & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                              [0xdU]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [0xeU];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0xeU];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0xeU];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [0xeU]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                [0xeU]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                           & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                              [0xeU]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [0xfU];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0xfU];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0xfU];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [0xfU]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                [0xfU]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                           & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                              [0xfU]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [0x10U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0x10U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0x10U];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [0x10U]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                 | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                 [0x10U]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                             & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                                [0x10U]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [0x11U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0x11U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0x11U];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [0x11U]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                 | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                 [0x11U]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                             & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                                [0x11U]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [0x12U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0x12U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0x12U];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [0x12U]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                 | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                 [0x12U]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                             & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                                [0x12U]))));
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
        [0x13U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0x13U];
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0x13U];
    __Vfunc_make_default__1__r = 0xaa070000000055ULL;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = ((0xffff000000ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req) 
           | ((QData)((IData)((((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__frameId) 
                                << 0x10U) | (((IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__mask) 
                                              << 8U) 
                                             | (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__value))))) 
              << 0x10U));
    __Vfunc_set_parity__2__in = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_set_parity__2__r = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__f = __Vfunc_set_parity__2__in;
    __Vfunc_calc_parity__3__Vfuncout = (0xffU & ((((IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__3__f 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__3__f 
                                                             >> 0x18U))) 
                                                 ^ (IData)(
                                                           (__Vfunc_calc_parity__3__f 
                                                            >> 0x10U))));
    __Vfunc_set_parity__2__r = ((0xffffffffff00ffULL 
                                 & __Vfunc_set_parity__2__r) 
                                | ((QData)((IData)(__Vfunc_calc_parity__3__Vfuncout)) 
                                   << 8U));
    __Vfunc_set_parity__2__Vfuncout = __Vfunc_set_parity__2__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req 
        = __Vfunc_set_parity__2__Vfuncout;
    __Vfunc_encoder__4__r = __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__req;
    __Vfunc_encoder__4__v = __Vfunc_encoder__4__r;
    __Vfunc_encoder__4__Vfuncout = __Vfunc_encoder__4__v;
    __Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
        = __Vfunc_encoder__4__Vfuncout;
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x30U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x28U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x20U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x18U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 0x10U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw 
                                                                    >> 8U))));
    co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                       207);
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           207);
    }
    if ((1U & (~ (IData)(spi_full_flow_led_20_tb__DOT__started)))) {
        spi_full_flow_led_20_tb__DOT__start_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
        spi_full_flow_led_20_tb__DOT__started = 1U;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__inq.push_back(
                                                        (0xffU 
                                                         & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__send_led_ctrl_frame__0__raw)));
    spi_full_flow_led_20_tb__DOT__messages_sent = ((IData)(1U) 
                                                   + spi_full_flow_led_20_tb__DOT__messages_sent);
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds 
        = (0x3fU & ((1U & vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals
                     [0x13U]) ? ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                 | vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                 [0x13U]) : ((IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds) 
                                             & (~ vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
                                                [0x13U]))));
    spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__cycles = 0U;
    while (((0x8cU > vlSelf->spi_full_flow_led_20_tb__DOT__resp_byte_count) 
            & VL_GTS_III(32, 0x7d0U, spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__cycles))) {
        co_await vlSelf->__VtrigSched_h9b9f22fe__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_led_20_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 
                                                           286);
        spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__cycles 
            = ((IData)(1U) + spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__cycles);
    }
    if (VL_UNLIKELY((0x8cU > vlSelf->spi_full_flow_led_20_tb__DOT__resp_byte_count))) {
        VL_WRITEF("Falha: timeout_respostas\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 288, "");
    }
    spi_full_flow_led_20_tb__DOT__end_cycle = vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0U;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [1U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [1U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 7U;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [2U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [2U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0xeU;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [3U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [3U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x15U;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [4U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [4U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x1cU;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [5U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [5U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x23U;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [6U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [6U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x2aU;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [7U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [7U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x31U;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [8U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [8U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x38U;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [9U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [9U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x3fU;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0xaU];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0xaU];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x46U;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0xbU];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0xbU];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x4dU;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0xcU];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0xcU];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x54U;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0xdU];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0xdU];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x5bU;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0xeU];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0xeU];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x62U;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0xfU];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0xfU];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x69U;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0x10U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0x10U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x70U;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0x11U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0x11U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x77U;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0x12U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0x12U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x7eU;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status = 0U;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks
        [0x13U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId 
        = vlSelf->spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds
        [0x13U];
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx = 0x85U;
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x30U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(1U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xff00ffffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x28U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(2U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffff00ffffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x20U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(3U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffff00ffffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x18U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(4U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffff00ffffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 0x10U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(5U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffff00ffULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | ((QData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)) 
              << 8U));
    spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0 
        = ((0x8bU >= (0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx)))
            ? vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes
           [(0xffU & ((IData)(6U) + __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__start_idx))]
            : 0U);
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw 
        = ((0xffffffffffff00ULL & __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw) 
           | (IData)((IData)(spi_full_flow_led_20_tb__DOT____Vlvbound_h31a14855__0)));
    __Vfunc_decoder__6__raw = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__raw;
    __Vfunc_decoder__6__r = __Vfunc_decoder__6__raw;
    __Vfunc_decoder__6__Vfuncout = __Vfunc_decoder__6__r;
    __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
        = __Vfunc_decoder__6__Vfuncout;
    if (VL_UNLIKELY((0xabU != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                                >> 0x30U)))))) {
        VL_WRITEF("Falha: resp_header\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 230, "");
    }
    if (VL_UNLIKELY((0x54U != (0xffU & (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec))))) {
        VL_WRITEF("Falha: resp_tail\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 231, "");
    }
    if (VL_UNLIKELY((7U != (0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                             >> 0x28U)))))) {
        VL_WRITEF("Falha: resp_type\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 232, "");
    }
    if (VL_UNLIKELY((1U & (~ ([&]() {
                            __Vfunc_check_parity__7__f 
                                = __Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec;
                            __Vfunc_check_parity__7__Vfuncout 
                                = ((0xffU & (IData)(
                                                    (__Vfunc_check_parity__7__f 
                                                     >> 8U))) 
                                   == ([&]() {
                                        __Vfunc_calc_parity__8__f 
                                            = __Vfunc_check_parity__7__f;
                                        __Vfunc_calc_parity__8__Vfuncout 
                                            = (0xffU 
                                               & ((((IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x28U)) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__8__f 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (__Vfunc_calc_parity__8__f 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (__Vfunc_calc_parity__8__f 
                                                             >> 0x10U))));
                                    }(), (IData)(__Vfunc_calc_parity__8__Vfuncout)));
                        }(), (IData)(__Vfunc_check_parity__7__Vfuncout)))))) {
        VL_WRITEF("Falha: resp_parity\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 233, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x20U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__frameId)))) {
        VL_WRITEF("Falha: resp_frameid_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 234, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x18U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__mask)))) {
        VL_WRITEF("Falha: resp_ledmask_echo\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 235, "");
    }
    if (VL_UNLIKELY(((0xffU & (IData)((__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__dec 
                                       >> 0x10U))) 
                     != (IData)(__Vtask_spi_full_flow_led_20_tb__DOT__check_resp_at__5__exp_status)))) {
        VL_WRITEF("Falha: resp_status\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 236, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__leds_r) 
                     != (IData)(spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__expected_leds)))) {
        VL_WRITEF("Falha: estado_leds_final\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 298, "");
    }
    VL_WRITEF("=== SPI Flow Metrics ===\nbusy_rise_count        = %0d\nbusy_cycle_count       = %0d\nmax_rx_occupancy       = %0d / RX_DEPTH=210\nmax_tx_occupancy       = %0d / TX_DEPTH=200\ntx_pause_cycles        = %0d\nlatency_cycles         = %0d (from start send to last resp byte)\nmessages_sent          = %0d\nmessages_received      = %0d\n========================\nSucesso: spi_full_flow_led_20_tb\n",
              32,vlSelf->spi_full_flow_led_20_tb__DOT__busy_rise_count,
              32,vlSelf->spi_full_flow_led_20_tb__DOT__busy_cycle_count,
              32,vlSelf->spi_full_flow_led_20_tb__DOT__max_rx_occupancy,
              32,vlSelf->spi_full_flow_led_20_tb__DOT__max_tx_occupancy,
              32,vlSelf->spi_full_flow_led_20_tb__DOT__tx_pause_cycles,
              32,(spi_full_flow_led_20_tb__DOT__end_cycle 
                  - spi_full_flow_led_20_tb__DOT__start_cycle),
              32,spi_full_flow_led_20_tb__DOT__messages_sent,
              32,vlSelf->spi_full_flow_led_20_tb__DOT__messages_received);
    VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_led_20_tb.sv", 313, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_led_20_tb___024root___dump_triggers__act(Vspi_full_flow_led_20_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_full_flow_led_20_tb___024root___eval_triggers__act(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->spi_full_flow_led_20_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_led_20_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->spi_full_flow_led_20_tb__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_led_20_tb__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->spi_full_flow_led_20_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_led_20_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_led_20_tb__DOT__clk__0 
        = vlSelf->spi_full_flow_led_20_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_led_20_tb__DOT__rst_n__0 
        = vlSelf->spi_full_flow_led_20_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_full_flow_led_20_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlWide<11>/*351:0*/ Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0;
extern const VlWide<11>/*351:0*/ Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0;
extern const VlWide<11>/*351:0*/ Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0;
extern const VlWide<11>/*351:0*/ Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0;
extern const VlWide<18>/*575:0*/ Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0;

VL_INLINE_OPT void Vspi_full_flow_led_20_tb___024root___nba_sequent__TOP__0(Vspi_full_flow_led_20_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_led_20_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_led_20_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_write__9__data;
    __Vtask_write__9__data = 0;
    CData/*7:0*/ __Vtask_read__10__data;
    __Vtask_read__10__data = 0;
    VlWide<23>/*726:0*/ __Vfunc_feed__11__Vfuncout;
    VL_ZERO_W(727, __Vfunc_feed__11__Vfuncout);
    VlWide<23>/*726:0*/ __Vfunc_feed__11__in_ctx;
    VL_ZERO_W(727, __Vfunc_feed__11__in_ctx);
    CData/*7:0*/ __Vfunc_feed__11__data;
    __Vfunc_feed__11__data = 0;
    CData/*0:0*/ __Vfunc_feed__11__frame_valid;
    __Vfunc_feed__11__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__11__frame_error;
    __Vfunc_feed__11__frame_error = 0;
    CData/*7:0*/ __Vfunc_feed__11__out_msgType;
    __Vfunc_feed__11__out_msgType = 0;
    QData/*55:0*/ __Vfunc_feed__11__led_ctrl_frame;
    __Vfunc_feed__11__led_ctrl_frame = 0;
    VlWide<23>/*726:0*/ __Vfunc_feed__11__ctx;
    VL_ZERO_W(727, __Vfunc_feed__11__ctx);
    VlWide<3>/*83:0*/ __Vfunc_feed__22__Vfuncout;
    VL_ZERO_W(84, __Vfunc_feed__22__Vfuncout);
    VlWide<3>/*83:0*/ __Vfunc_feed__22__in_ctx;
    VL_ZERO_W(84, __Vfunc_feed__22__in_ctx);
    CData/*7:0*/ __Vfunc_feed__22__data;
    __Vfunc_feed__22__data = 0;
    VlWide<3>/*83:0*/ __Vfunc_feed__22__ctx;
    VL_ZERO_W(84, __Vfunc_feed__22__ctx);
    VlWide<3>/*83:0*/ __Vfunc_feed__23__Vfuncout;
    VL_ZERO_W(84, __Vfunc_feed__23__Vfuncout);
    VlWide<3>/*83:0*/ __Vfunc_feed__23__in_ctx;
    VL_ZERO_W(84, __Vfunc_feed__23__in_ctx);
    CData/*7:0*/ __Vfunc_feed__23__data;
    __Vfunc_feed__23__data = 0;
    VlWide<3>/*71:0*/ __Vfunc_feed__23__out_frame;
    VL_ZERO_W(72, __Vfunc_feed__23__out_frame);
    VlWide<3>/*83:0*/ __Vfunc_feed__23__ctx;
    VL_ZERO_W(84, __Vfunc_feed__23__ctx);
    QData/*33:0*/ __Vfunc_feed__26__Vfuncout;
    __Vfunc_feed__26__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__26__in_ctx;
    __Vfunc_feed__26__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__26__data;
    __Vfunc_feed__26__data = 0;
    QData/*33:0*/ __Vfunc_feed__26__ctx;
    __Vfunc_feed__26__ctx = 0;
    QData/*33:0*/ __Vfunc_feed__27__Vfuncout;
    __Vfunc_feed__27__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__27__in_ctx;
    __Vfunc_feed__27__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__27__data;
    __Vfunc_feed__27__data = 0;
    IData/*31:0*/ __Vfunc_feed__27__out_frame;
    __Vfunc_feed__27__out_frame = 0;
    QData/*33:0*/ __Vfunc_feed__27__ctx;
    __Vfunc_feed__27__ctx = 0;
    VlWide<3>/*74:0*/ __Vfunc_feed__30__Vfuncout;
    VL_ZERO_W(75, __Vfunc_feed__30__Vfuncout);
    VlWide<3>/*74:0*/ __Vfunc_feed__30__in_ctx;
    VL_ZERO_W(75, __Vfunc_feed__30__in_ctx);
    CData/*7:0*/ __Vfunc_feed__30__data;
    __Vfunc_feed__30__data = 0;
    VlWide<3>/*74:0*/ __Vfunc_feed__30__ctx;
    VL_ZERO_W(75, __Vfunc_feed__30__ctx);
    VlWide<3>/*74:0*/ __Vfunc_feed__31__Vfuncout;
    VL_ZERO_W(75, __Vfunc_feed__31__Vfuncout);
    VlWide<3>/*74:0*/ __Vfunc_feed__31__in_ctx;
    VL_ZERO_W(75, __Vfunc_feed__31__in_ctx);
    CData/*7:0*/ __Vfunc_feed__31__data;
    __Vfunc_feed__31__data = 0;
    QData/*63:0*/ __Vfunc_feed__31__out_frame;
    __Vfunc_feed__31__out_frame = 0;
    VlWide<3>/*74:0*/ __Vfunc_feed__31__ctx;
    VL_ZERO_W(75, __Vfunc_feed__31__ctx);
    VlWide<11>/*342:0*/ __Vfunc_feed__33__Vfuncout;
    VL_ZERO_W(343, __Vfunc_feed__33__Vfuncout);
    VlWide<11>/*342:0*/ __Vfunc_feed__33__in_ctx;
    VL_ZERO_W(343, __Vfunc_feed__33__in_ctx);
    CData/*7:0*/ __Vfunc_feed__33__data;
    __Vfunc_feed__33__data = 0;
    CData/*0:0*/ __Vfunc_feed__33__frame_error;
    __Vfunc_feed__33__frame_error = 0;
    VlWide<11>/*342:0*/ __Vfunc_feed__33__ctx;
    VL_ZERO_W(343, __Vfunc_feed__33__ctx);
    VlWide<11>/*335:0*/ __Vfunc_decoder__35__raw;
    VL_ZERO_W(336, __Vfunc_decoder__35__raw);
    VlWide<11>/*335:0*/ __Vfunc_decoder__35__r;
    VL_ZERO_W(336, __Vfunc_decoder__35__r);
    VlWide<11>/*342:0*/ __Vfunc_feed__36__Vfuncout;
    VL_ZERO_W(343, __Vfunc_feed__36__Vfuncout);
    VlWide<11>/*342:0*/ __Vfunc_feed__36__in_ctx;
    VL_ZERO_W(343, __Vfunc_feed__36__in_ctx);
    CData/*7:0*/ __Vfunc_feed__36__data;
    __Vfunc_feed__36__data = 0;
    CData/*0:0*/ __Vfunc_feed__36__frame_error;
    __Vfunc_feed__36__frame_error = 0;
    VlWide<11>/*335:0*/ __Vfunc_feed__36__out_frame;
    VL_ZERO_W(336, __Vfunc_feed__36__out_frame);
    VlWide<11>/*335:0*/ __Vfunc_feed__36__unnamedblk1__DOT__tmp;
    VL_ZERO_W(336, __Vfunc_feed__36__unnamedblk1__DOT__tmp);
    VlWide<11>/*342:0*/ __Vfunc_feed__36__ctx;
    VL_ZERO_W(343, __Vfunc_feed__36__ctx);
    VlWide<11>/*335:0*/ __Vfunc_make_default__37__Vfuncout;
    VL_ZERO_W(336, __Vfunc_make_default__37__Vfuncout);
    VlWide<11>/*335:0*/ __Vfunc_make_default__37__r;
    VL_ZERO_W(336, __Vfunc_make_default__37__r);
    VlWide<11>/*335:0*/ __Vfunc_decoder__38__Vfuncout;
    VL_ZERO_W(336, __Vfunc_decoder__38__Vfuncout);
    VlWide<11>/*335:0*/ __Vfunc_decoder__38__raw;
    VL_ZERO_W(336, __Vfunc_decoder__38__raw);
    VlWide<11>/*335:0*/ __Vfunc_decoder__38__r;
    VL_ZERO_W(336, __Vfunc_decoder__38__r);
    QData/*33:0*/ __Vfunc_feed__41__Vfuncout;
    __Vfunc_feed__41__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__41__in_ctx;
    __Vfunc_feed__41__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__41__data;
    __Vfunc_feed__41__data = 0;
    QData/*33:0*/ __Vfunc_feed__41__ctx;
    __Vfunc_feed__41__ctx = 0;
    QData/*33:0*/ __Vfunc_feed__42__Vfuncout;
    __Vfunc_feed__42__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__42__in_ctx;
    __Vfunc_feed__42__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__42__data;
    __Vfunc_feed__42__data = 0;
    IData/*31:0*/ __Vfunc_feed__42__out_frame;
    __Vfunc_feed__42__out_frame = 0;
    QData/*33:0*/ __Vfunc_feed__42__ctx;
    __Vfunc_feed__42__ctx = 0;
    QData/*33:0*/ __Vfunc_feed__45__Vfuncout;
    __Vfunc_feed__45__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__45__in_ctx;
    __Vfunc_feed__45__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__45__data;
    __Vfunc_feed__45__data = 0;
    QData/*33:0*/ __Vfunc_feed__45__ctx;
    __Vfunc_feed__45__ctx = 0;
    QData/*33:0*/ __Vfunc_feed__46__Vfuncout;
    __Vfunc_feed__46__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__46__in_ctx;
    __Vfunc_feed__46__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__46__data;
    __Vfunc_feed__46__data = 0;
    IData/*31:0*/ __Vfunc_feed__46__out_frame;
    __Vfunc_feed__46__out_frame = 0;
    QData/*33:0*/ __Vfunc_feed__46__ctx;
    __Vfunc_feed__46__ctx = 0;
    QData/*33:0*/ __Vfunc_feed__49__Vfuncout;
    __Vfunc_feed__49__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__49__in_ctx;
    __Vfunc_feed__49__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__49__data;
    __Vfunc_feed__49__data = 0;
    QData/*33:0*/ __Vfunc_feed__49__ctx;
    __Vfunc_feed__49__ctx = 0;
    QData/*33:0*/ __Vfunc_feed__50__Vfuncout;
    __Vfunc_feed__50__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__50__in_ctx;
    __Vfunc_feed__50__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__50__data;
    __Vfunc_feed__50__data = 0;
    IData/*31:0*/ __Vfunc_feed__50__out_frame;
    __Vfunc_feed__50__out_frame = 0;
    QData/*33:0*/ __Vfunc_feed__50__ctx;
    __Vfunc_feed__50__ctx = 0;
    VlWide<3>/*66:0*/ __Vfunc_feed__53__Vfuncout;
    VL_ZERO_W(67, __Vfunc_feed__53__Vfuncout);
    VlWide<3>/*66:0*/ __Vfunc_feed__53__in_ctx;
    VL_ZERO_W(67, __Vfunc_feed__53__in_ctx);
    CData/*7:0*/ __Vfunc_feed__53__data;
    __Vfunc_feed__53__data = 0;
    VlWide<3>/*66:0*/ __Vfunc_feed__53__ctx;
    VL_ZERO_W(67, __Vfunc_feed__53__ctx);
    VlWide<3>/*66:0*/ __Vfunc_feed__54__Vfuncout;
    VL_ZERO_W(67, __Vfunc_feed__54__Vfuncout);
    VlWide<3>/*66:0*/ __Vfunc_feed__54__in_ctx;
    VL_ZERO_W(67, __Vfunc_feed__54__in_ctx);
    CData/*7:0*/ __Vfunc_feed__54__data;
    __Vfunc_feed__54__data = 0;
    QData/*55:0*/ __Vfunc_feed__54__out_frame;
    __Vfunc_feed__54__out_frame = 0;
    VlWide<3>/*66:0*/ __Vfunc_feed__54__ctx;
    VL_ZERO_W(67, __Vfunc_feed__54__ctx);
    VlWide<3>/*66:0*/ __Vfunc_feed__55__Vfuncout;
    VL_ZERO_W(67, __Vfunc_feed__55__Vfuncout);
    VlWide<3>/*66:0*/ __Vfunc_feed__55__in_ctx;
    VL_ZERO_W(67, __Vfunc_feed__55__in_ctx);
    CData/*7:0*/ __Vfunc_feed__55__data;
    __Vfunc_feed__55__data = 0;
    CData/*0:0*/ __Vfunc_feed__55__frame_valid;
    __Vfunc_feed__55__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__55__frame_error;
    __Vfunc_feed__55__frame_error = 0;
    QData/*55:0*/ __Vfunc_feed__55__out_frame;
    __Vfunc_feed__55__out_frame = 0;
    VlWide<3>/*66:0*/ __Vfunc_feed__55__ctx;
    VL_ZERO_W(67, __Vfunc_feed__55__ctx);
    QData/*33:0*/ __Vfunc_feed__56__Vfuncout;
    __Vfunc_feed__56__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__56__in_ctx;
    __Vfunc_feed__56__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__56__data;
    __Vfunc_feed__56__data = 0;
    CData/*0:0*/ __Vfunc_feed__56__frame_valid;
    __Vfunc_feed__56__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__56__frame_error;
    __Vfunc_feed__56__frame_error = 0;
    IData/*31:0*/ __Vfunc_feed__56__out_frame;
    __Vfunc_feed__56__out_frame = 0;
    QData/*33:0*/ __Vfunc_feed__56__ctx;
    __Vfunc_feed__56__ctx = 0;
    QData/*33:0*/ __Vfunc_feed__57__Vfuncout;
    __Vfunc_feed__57__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__57__in_ctx;
    __Vfunc_feed__57__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__57__data;
    __Vfunc_feed__57__data = 0;
    CData/*0:0*/ __Vfunc_feed__57__frame_valid;
    __Vfunc_feed__57__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__57__frame_error;
    __Vfunc_feed__57__frame_error = 0;
    IData/*31:0*/ __Vfunc_feed__57__out_frame;
    __Vfunc_feed__57__out_frame = 0;
    QData/*33:0*/ __Vfunc_feed__57__ctx;
    __Vfunc_feed__57__ctx = 0;
    QData/*33:0*/ __Vfunc_feed__58__Vfuncout;
    __Vfunc_feed__58__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__58__in_ctx;
    __Vfunc_feed__58__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__58__data;
    __Vfunc_feed__58__data = 0;
    CData/*0:0*/ __Vfunc_feed__58__frame_valid;
    __Vfunc_feed__58__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__58__frame_error;
    __Vfunc_feed__58__frame_error = 0;
    IData/*31:0*/ __Vfunc_feed__58__out_frame;
    __Vfunc_feed__58__out_frame = 0;
    QData/*33:0*/ __Vfunc_feed__58__ctx;
    __Vfunc_feed__58__ctx = 0;
    VlWide<11>/*342:0*/ __Vfunc_feed__59__Vfuncout;
    VL_ZERO_W(343, __Vfunc_feed__59__Vfuncout);
    VlWide<11>/*342:0*/ __Vfunc_feed__59__in_ctx;
    VL_ZERO_W(343, __Vfunc_feed__59__in_ctx);
    CData/*7:0*/ __Vfunc_feed__59__data;
    __Vfunc_feed__59__data = 0;
    CData/*0:0*/ __Vfunc_feed__59__frame_valid;
    __Vfunc_feed__59__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__59__frame_error;
    __Vfunc_feed__59__frame_error = 0;
    VlWide<11>/*335:0*/ __Vfunc_feed__59__out_frame;
    VL_ZERO_W(336, __Vfunc_feed__59__out_frame);
    VlWide<11>/*335:0*/ __Vfunc_feed__59__unnamedblk1__DOT__tmp;
    VL_ZERO_W(336, __Vfunc_feed__59__unnamedblk1__DOT__tmp);
    VlWide<11>/*342:0*/ __Vfunc_feed__59__ctx;
    VL_ZERO_W(343, __Vfunc_feed__59__ctx);
    VlWide<11>/*335:0*/ __Vfunc_make_default__60__Vfuncout;
    VL_ZERO_W(336, __Vfunc_make_default__60__Vfuncout);
    VlWide<11>/*335:0*/ __Vfunc_make_default__60__r;
    VL_ZERO_W(336, __Vfunc_make_default__60__r);
    VlWide<11>/*335:0*/ __Vfunc_decoder__61__Vfuncout;
    VL_ZERO_W(336, __Vfunc_decoder__61__Vfuncout);
    VlWide<11>/*335:0*/ __Vfunc_decoder__61__raw;
    VL_ZERO_W(336, __Vfunc_decoder__61__raw);
    VlWide<11>/*335:0*/ __Vfunc_decoder__61__r;
    VL_ZERO_W(336, __Vfunc_decoder__61__r);
    VlWide<3>/*74:0*/ __Vfunc_feed__62__Vfuncout;
    VL_ZERO_W(75, __Vfunc_feed__62__Vfuncout);
    VlWide<3>/*74:0*/ __Vfunc_feed__62__in_ctx;
    VL_ZERO_W(75, __Vfunc_feed__62__in_ctx);
    CData/*7:0*/ __Vfunc_feed__62__data;
    __Vfunc_feed__62__data = 0;
    CData/*0:0*/ __Vfunc_feed__62__frame_valid;
    __Vfunc_feed__62__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__62__frame_error;
    __Vfunc_feed__62__frame_error = 0;
    QData/*63:0*/ __Vfunc_feed__62__out_frame;
    __Vfunc_feed__62__out_frame = 0;
    VlWide<3>/*74:0*/ __Vfunc_feed__62__ctx;
    VL_ZERO_W(75, __Vfunc_feed__62__ctx);
    QData/*33:0*/ __Vfunc_feed__63__Vfuncout;
    __Vfunc_feed__63__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__63__in_ctx;
    __Vfunc_feed__63__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__63__data;
    __Vfunc_feed__63__data = 0;
    CData/*0:0*/ __Vfunc_feed__63__frame_valid;
    __Vfunc_feed__63__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__63__frame_error;
    __Vfunc_feed__63__frame_error = 0;
    IData/*31:0*/ __Vfunc_feed__63__out_frame;
    __Vfunc_feed__63__out_frame = 0;
    QData/*33:0*/ __Vfunc_feed__63__ctx;
    __Vfunc_feed__63__ctx = 0;
    VlWide<3>/*83:0*/ __Vfunc_feed__64__Vfuncout;
    VL_ZERO_W(84, __Vfunc_feed__64__Vfuncout);
    VlWide<3>/*83:0*/ __Vfunc_feed__64__in_ctx;
    VL_ZERO_W(84, __Vfunc_feed__64__in_ctx);
    CData/*7:0*/ __Vfunc_feed__64__data;
    __Vfunc_feed__64__data = 0;
    CData/*0:0*/ __Vfunc_feed__64__frame_valid;
    __Vfunc_feed__64__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__64__frame_error;
    __Vfunc_feed__64__frame_error = 0;
    VlWide<3>/*71:0*/ __Vfunc_feed__64__out_frame;
    VL_ZERO_W(72, __Vfunc_feed__64__out_frame);
    VlWide<3>/*83:0*/ __Vfunc_feed__64__ctx;
    VL_ZERO_W(84, __Vfunc_feed__64__ctx);
    VlWide<23>/*726:0*/ __Vfunc_init__65__Vfuncout;
    VL_ZERO_W(727, __Vfunc_init__65__Vfuncout);
    VlWide<23>/*726:0*/ __Vfunc_init__65__ctx;
    VL_ZERO_W(727, __Vfunc_init__65__ctx);
    QData/*55:0*/ __Vfunc_set_parity__90__Vfuncout;
    __Vfunc_set_parity__90__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_set_parity__90__in;
    __Vfunc_set_parity__90__in = 0;
    QData/*55:0*/ __Vfunc_set_parity__90__r;
    __Vfunc_set_parity__90__r = 0;
    CData/*7:0*/ __Vfunc_calc_parity__91__Vfuncout;
    __Vfunc_calc_parity__91__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_calc_parity__91__f;
    __Vfunc_calc_parity__91__f = 0;
    QData/*55:0*/ __Vfunc_encoder__92__Vfuncout;
    __Vfunc_encoder__92__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_encoder__92__r;
    __Vfunc_encoder__92__r = 0;
    QData/*55:0*/ __Vfunc_encoder__92__v;
    __Vfunc_encoder__92__v = 0;
    CData/*7:0*/ __Vtask_write__94__data;
    __Vtask_write__94__data = 0;
    CData/*7:0*/ __Vtask_read__95__data;
    __Vtask_read__95__data = 0;
    CData/*7:0*/ __Vdlyvdim0__spi_full_flow_led_20_tb__DOT__resp_bytes__v0;
    __Vdlyvdim0__spi_full_flow_led_20_tb__DOT__resp_bytes__v0 = 0;
    CData/*7:0*/ __Vdlyvval__spi_full_flow_led_20_tb__DOT__resp_bytes__v0;
    __Vdlyvval__spi_full_flow_led_20_tb__DOT__resp_bytes__v0 = 0;
    CData/*0:0*/ __Vdlyvset__spi_full_flow_led_20_tb__DOT__resp_bytes__v0;
    __Vdlyvset__spi_full_flow_led_20_tb__DOT__resp_bytes__v0 = 0;
    CData/*0:0*/ __Vdly__spi_full_flow_led_20_tb__DOT__rd_en;
    __Vdly__spi_full_flow_led_20_tb__DOT__rd_en = 0;
    CData/*1:0*/ __Vdly__spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state;
    __Vdly__spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state = 0;
    VlWide<5>/*159:0*/ __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift;
    VL_ZERO_W(160, __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift);
    IData/*31:0*/ __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_bytes;
    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_bytes = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx;
    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx = 0;
    CData/*1:0*/ __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__state;
    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__state = 0;
    // Body
    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx;
    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_bytes 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_bytes;
    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[0U] 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[0U];
    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[1U] 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[1U];
    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[2U] 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[2U];
    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[3U] 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[3U];
    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[4U] 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[4U];
    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__state 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__state;
    __Vdly__spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state;
    __Vdly__spi_full_flow_led_20_tb__DOT__rd_en = vlSelf->spi_full_flow_led_20_tb__DOT__rd_en;
    __Vdlyvset__spi_full_flow_led_20_tb__DOT__resp_bytes__v0 = 0U;
    if (vlSelf->spi_full_flow_led_20_tb__DOT__rst_n) {
        if (vlSelf->spi_full_flow_led_20_tb__DOT__spi_byte_valid) {
            if ((1U & (~ (IData)(vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.full)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.full)))) {
                    vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count 
                        = ((IData)(1U) + vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count);
                }
            }
            if ((0xd2U != vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
                __Vtask_write__9__data = vlSelf->spi_full_flow_led_20_tb__DOT__spi_byte;
                if ((0xd2U != vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
                    vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.__Vlvbound_h7a17aa00__0 
                        = __Vtask_write__9__data;
                    if ((0xd1U >= (0xffU & vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.wr_ptr))) {
                        vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.mem[(0xffU 
                                                                                & vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.wr_ptr)] 
                            = vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.__Vlvbound_h7a17aa00__0;
                    }
                    vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.wr_ptr 
                        = VL_MODDIV_III(32, ((IData)(1U) 
                                             + vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.wr_ptr), (IData)(0xd2U));
                }
            }
        }
        vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr 
            = ((IData)(1U) + vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr);
        if ((vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.count 
             > vlSelf->spi_full_flow_led_20_tb__DOT__max_tx_occupancy)) {
            vlSelf->spi_full_flow_led_20_tb__DOT__max_tx_occupancy 
                = vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.count;
        }
        if ((vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count 
             > vlSelf->spi_full_flow_led_20_tb__DOT__max_rx_occupancy)) {
            vlSelf->spi_full_flow_led_20_tb__DOT__max_rx_occupancy 
                = vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count;
        }
        if ((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count)) {
            vlSelf->spi_full_flow_led_20_tb__DOT__busy_cycle_count 
                = ((IData)(1U) + vlSelf->spi_full_flow_led_20_tb__DOT__busy_cycle_count);
        }
        if (((IData)(vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pending) 
             & vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__ready_arr
             [0U])) {
            vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pending = 0U;
        }
        if (((IData)(vlSelf->spi_full_flow_led_20_tb__DOT__frame_valid) 
             & (7U == (IData)(vlSelf->spi_full_flow_led_20_tb__DOT__out_msgType)))) {
            if ((1U & (~ (IData)((0U != (3U & (IData)(
                                                      (vlSelf->spi_full_flow_led_20_tb__DOT__led_ctrl_frame 
                                                       >> 0x1eU)))))))) {
                vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__leds_r 
                    = (0x3fU & ((1U & (IData)((vlSelf->spi_full_flow_led_20_tb__DOT__led_ctrl_frame 
                                               >> 0x10U)))
                                 ? ((IData)(vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__leds_r) 
                                    | (IData)((vlSelf->spi_full_flow_led_20_tb__DOT__led_ctrl_frame 
                                               >> 0x18U)))
                                 : ((IData)(vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__leds_r) 
                                    & (~ (IData)((vlSelf->spi_full_flow_led_20_tb__DOT__led_ctrl_frame 
                                                  >> 0x18U))))));
            }
            vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pending = 1U;
        }
        if (vlSelf->spi_full_flow_led_20_tb__DOT__resp_valid) {
            vlSelf->spi_full_flow_led_20_tb__DOT__messages_received 
                = ((IData)(1U) + vlSelf->spi_full_flow_led_20_tb__DOT__messages_received);
        }
        if (((0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count) 
             & (~ (IData)(vlSelf->spi_full_flow_led_20_tb__DOT__prev_busy)))) {
            vlSelf->spi_full_flow_led_20_tb__DOT__busy_rise_count 
                = ((IData)(1U) + vlSelf->spi_full_flow_led_20_tb__DOT__busy_rise_count);
        }
        if (((IData)(vlSelf->spi_full_flow_led_20_tb__DOT__tx_busy) 
             & (0xc8U == vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.count))) {
            vlSelf->spi_full_flow_led_20_tb__DOT__tx_pause_cycles 
                = ((IData)(1U) + vlSelf->spi_full_flow_led_20_tb__DOT__tx_pause_cycles);
        }
        if (vlSelf->spi_full_flow_led_20_tb__DOT__wr_en) {
            if ((0x8cU > vlSelf->spi_full_flow_led_20_tb__DOT__resp_byte_count)) {
                vlSelf->spi_full_flow_led_20_tb__DOT____Vlvbound_h217a7026__0 
                    = vlSelf->spi_full_flow_led_20_tb__DOT__wdata;
                if ((0x8bU >= (0xffU & vlSelf->spi_full_flow_led_20_tb__DOT__resp_byte_count))) {
                    __Vdlyvval__spi_full_flow_led_20_tb__DOT__resp_bytes__v0 
                        = vlSelf->spi_full_flow_led_20_tb__DOT____Vlvbound_h217a7026__0;
                    __Vdlyvset__spi_full_flow_led_20_tb__DOT__resp_bytes__v0 = 1U;
                    __Vdlyvdim0__spi_full_flow_led_20_tb__DOT__resp_bytes__v0 
                        = (0xffU & vlSelf->spi_full_flow_led_20_tb__DOT__resp_byte_count);
                }
            }
            vlSelf->spi_full_flow_led_20_tb__DOT__resp_byte_count 
                = ((IData)(1U) + vlSelf->spi_full_flow_led_20_tb__DOT__resp_byte_count);
        }
    } else {
        vlSelf->spi_full_flow_led_20_tb__DOT__cycle_ctr = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__max_tx_occupancy = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__max_rx_occupancy = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__busy_cycle_count = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__leds_r = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pending = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__messages_received = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__busy_rise_count = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__tx_pause_cycles = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__resp_byte_count = 0U;
    }
    if (__Vdlyvset__spi_full_flow_led_20_tb__DOT__resp_bytes__v0) {
        vlSelf->spi_full_flow_led_20_tb__DOT__resp_bytes[__Vdlyvdim0__spi_full_flow_led_20_tb__DOT__resp_bytes__v0] 
            = __Vdlyvval__spi_full_flow_led_20_tb__DOT__resp_bytes__v0;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__valid_arr[0U] 
        = vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pending;
    if (vlSelf->spi_full_flow_led_20_tb__DOT__rst_n) {
        vlSelf->spi_full_flow_led_20_tb__DOT__frame_valid = 0U;
        if ((1U & (~ (IData)(vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.empty)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.empty)))) {
                __Vtask_read__10__data = ((0xd1U >= 
                                           (0xffU & vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.rd_ptr))
                                           ? vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.mem
                                          [(0xffU & vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.rd_ptr)]
                                           : 0U);
                vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count 
                    = (vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count 
                       - (IData)(1U));
                vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.rd_ptr 
                    = VL_MODDIV_III(32, ((IData)(1U) 
                                         + vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.rd_ptr), (IData)(0xd2U));
            }
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__unnamedblk1__DOT__data 
                = __Vtask_read__10__data;
            __Vfunc_feed__11__data = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__unnamedblk1__DOT__data;
            __Vfunc_feed__11__in_ctx[0U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0U];
            __Vfunc_feed__11__in_ctx[1U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[1U];
            __Vfunc_feed__11__in_ctx[2U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[2U];
            __Vfunc_feed__11__in_ctx[3U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[3U];
            __Vfunc_feed__11__in_ctx[4U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[4U];
            __Vfunc_feed__11__in_ctx[5U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[5U];
            __Vfunc_feed__11__in_ctx[6U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[6U];
            __Vfunc_feed__11__in_ctx[7U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[7U];
            __Vfunc_feed__11__in_ctx[8U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[8U];
            __Vfunc_feed__11__in_ctx[9U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[9U];
            __Vfunc_feed__11__in_ctx[0xaU] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xaU];
            __Vfunc_feed__11__in_ctx[0xbU] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xbU];
            __Vfunc_feed__11__in_ctx[0xcU] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xcU];
            __Vfunc_feed__11__in_ctx[0xdU] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xdU];
            __Vfunc_feed__11__in_ctx[0xeU] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xeU];
            __Vfunc_feed__11__in_ctx[0xfU] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xfU];
            __Vfunc_feed__11__in_ctx[0x10U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x10U];
            __Vfunc_feed__11__in_ctx[0x11U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x11U];
            __Vfunc_feed__11__in_ctx[0x12U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x12U];
            __Vfunc_feed__11__in_ctx[0x13U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x13U];
            __Vfunc_feed__11__in_ctx[0x14U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x14U];
            __Vfunc_feed__11__in_ctx[0x15U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x15U];
            __Vfunc_feed__11__in_ctx[0x16U] = vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x16U];
            __Vfunc_feed__11__ctx[0U] = __Vfunc_feed__11__in_ctx[0U];
            __Vfunc_feed__11__ctx[1U] = __Vfunc_feed__11__in_ctx[1U];
            __Vfunc_feed__11__ctx[2U] = __Vfunc_feed__11__in_ctx[2U];
            __Vfunc_feed__11__ctx[3U] = __Vfunc_feed__11__in_ctx[3U];
            __Vfunc_feed__11__ctx[4U] = __Vfunc_feed__11__in_ctx[4U];
            __Vfunc_feed__11__ctx[5U] = __Vfunc_feed__11__in_ctx[5U];
            __Vfunc_feed__11__ctx[6U] = __Vfunc_feed__11__in_ctx[6U];
            __Vfunc_feed__11__ctx[7U] = __Vfunc_feed__11__in_ctx[7U];
            __Vfunc_feed__11__ctx[8U] = __Vfunc_feed__11__in_ctx[8U];
            __Vfunc_feed__11__ctx[9U] = __Vfunc_feed__11__in_ctx[9U];
            __Vfunc_feed__11__ctx[0xaU] = __Vfunc_feed__11__in_ctx[0xaU];
            __Vfunc_feed__11__ctx[0xbU] = __Vfunc_feed__11__in_ctx[0xbU];
            __Vfunc_feed__11__ctx[0xcU] = __Vfunc_feed__11__in_ctx[0xcU];
            __Vfunc_feed__11__ctx[0xdU] = __Vfunc_feed__11__in_ctx[0xdU];
            __Vfunc_feed__11__ctx[0xeU] = __Vfunc_feed__11__in_ctx[0xeU];
            __Vfunc_feed__11__ctx[0xfU] = __Vfunc_feed__11__in_ctx[0xfU];
            __Vfunc_feed__11__ctx[0x10U] = __Vfunc_feed__11__in_ctx[0x10U];
            __Vfunc_feed__11__ctx[0x11U] = __Vfunc_feed__11__in_ctx[0x11U];
            __Vfunc_feed__11__ctx[0x12U] = __Vfunc_feed__11__in_ctx[0x12U];
            __Vfunc_feed__11__ctx[0x13U] = __Vfunc_feed__11__in_ctx[0x13U];
            __Vfunc_feed__11__ctx[0x14U] = __Vfunc_feed__11__in_ctx[0x14U];
            __Vfunc_feed__11__ctx[0x15U] = __Vfunc_feed__11__in_ctx[0x15U];
            __Vfunc_feed__11__ctx[0x16U] = __Vfunc_feed__11__in_ctx[0x16U];
            __Vfunc_feed__11__frame_valid = 0U;
            __Vfunc_feed__11__frame_error = 0U;
            __Vfunc_feed__11__out_msgType = (0xffU 
                                             & (__Vfunc_feed__11__ctx[0x16U] 
                                                >> 1U));
            __Vfunc_feed__11__led_ctrl_frame = 0xaa070000000055ULL;
            if ((0U == (3U & (__Vfunc_feed__11__ctx[0x16U] 
                              >> 0x15U)))) {
                if ((0xaaU == (IData)(__Vfunc_feed__11__data))) {
                    __Vfunc_feed__11__ctx[0x16U] = 
                        ((0x7e01ffU & __Vfunc_feed__11__ctx[0x16U]) 
                         | (0x7fffffU & ((IData)(__Vfunc_feed__11__data) 
                                         << 9U)));
                    __Vfunc_feed__11__ctx[0x16U] = 
                        (0x200000U | (0x1fffffU & __Vfunc_feed__11__ctx[0x16U]));
                } else {
                    __Vfunc_feed__11__frame_error = 1U;
                }
            } else if ((1U == (3U & (__Vfunc_feed__11__ctx[0x16U] 
                                     >> 0x15U)))) {
                __Vfunc_feed__11__ctx[0x16U] = ((0x7ffe01U 
                                                 & __Vfunc_feed__11__ctx[0x16U]) 
                                                | (0x7fffffU 
                                                   & ((IData)(__Vfunc_feed__11__data) 
                                                      << 1U)));
                if (((((((((4U == (IData)(__Vfunc_feed__11__data)) 
                           | (3U == (IData)(__Vfunc_feed__11__data))) 
                          | (5U == (IData)(__Vfunc_feed__11__data))) 
                         | (1U == (IData)(__Vfunc_feed__11__data))) 
                        | (6U == (IData)(__Vfunc_feed__11__data))) 
                       | (2U == (IData)(__Vfunc_feed__11__data))) 
                      | (0x20U == (IData)(__Vfunc_feed__11__data))) 
                     | (7U == (IData)(__Vfunc_feed__11__data)))) {
                    if ((4U == (IData)(__Vfunc_feed__11__data))) {
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0x20000U | (0x61ffffU 
                                           & __Vfunc_feed__11__ctx[0x16U]));
                        __Vfunc_feed__11__ctx[0x13U] 
                            = (0xaa00000U | (0x1fffU 
                                             & __Vfunc_feed__11__ctx[0x13U]));
                        __Vfunc_feed__11__ctx[0x14U] = 0U;
                        __Vfunc_feed__11__ctx[0x15U] = 0x15408000U;
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0x7ffffeU & __Vfunc_feed__11__ctx[0x16U]);
                        __Vfunc_feed__22__data = (0xffU 
                                                  & (__Vfunc_feed__11__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__22__in_ctx[0U] 
                            = ((__Vfunc_feed__11__ctx[0x14U] 
                                << 0x13U) | (__Vfunc_feed__11__ctx[0x13U] 
                                             >> 0xdU));
                        __Vfunc_feed__22__in_ctx[1U] 
                            = ((__Vfunc_feed__11__ctx[0x15U] 
                                << 0x13U) | (__Vfunc_feed__11__ctx[0x14U] 
                                             >> 0xdU));
                        __Vfunc_feed__22__in_ctx[2U] 
                            = (0xfffffU & ((__Vfunc_feed__11__ctx[0x16U] 
                                            << 0x13U) 
                                           | (__Vfunc_feed__11__ctx[0x15U] 
                                              >> 0xdU)));
                        __Vfunc_feed__22__ctx[0U] = 
                            __Vfunc_feed__22__in_ctx[0U];
                        __Vfunc_feed__22__ctx[1U] = 
                            __Vfunc_feed__22__in_ctx[1U];
                        __Vfunc_feed__22__ctx[2U] = 
                            __Vfunc_feed__22__in_ctx[2U];
                        if ((0x80000U & __Vfunc_feed__22__ctx[2U])) {
                            if ((0x40000U & __Vfunc_feed__22__ctx[2U])) {
                                __Vfunc_feed__22__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__22__ctx[2U]);
                            } else if ((0x20000U & 
                                        __Vfunc_feed__22__ctx[2U])) {
                                __Vfunc_feed__22__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__22__ctx[2U]);
                            } else if ((0x10000U & 
                                        __Vfunc_feed__22__ctx[2U])) {
                                __Vfunc_feed__22__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__22__ctx[2U]);
                            } else {
                                if ((0x55U == (IData)(__Vfunc_feed__22__data))) {
                                    __Vfunc_feed__22__ctx[0U] 
                                        = ((0xffff00ffU 
                                            & __Vfunc_feed__22__ctx[0U]) 
                                           | ((IData)(__Vfunc_feed__22__data) 
                                              << 8U));
                                }
                                __Vfunc_feed__22__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__22__ctx[2U]);
                            }
                        } else if ((0x40000U & __Vfunc_feed__22__ctx[2U])) {
                            if ((0x20000U & __Vfunc_feed__22__ctx[2U])) {
                                if ((0x10000U & __Vfunc_feed__22__ctx[2U])) {
                                    __Vfunc_feed__22__ctx[0U] 
                                        = ((0xff00ffffU 
                                            & __Vfunc_feed__22__ctx[0U]) 
                                           | ((IData)(__Vfunc_feed__22__data) 
                                              << 0x10U));
                                    __Vfunc_feed__22__ctx[2U] 
                                        = ((0xffffU 
                                            & __Vfunc_feed__22__ctx[2U]) 
                                           | (0xfffffU 
                                              & ((((IData)(__Vfunc_feed__22__data) 
                                                   == 
                                                   (0xffU 
                                                    & __Vfunc_feed__22__ctx[0U]))
                                                   ? 8U
                                                   : 0U) 
                                                 << 0x10U)));
                                } else {
                                    __Vfunc_feed__22__ctx[0U] 
                                        = ((0xffffffU 
                                            & __Vfunc_feed__22__ctx[0U]) 
                                           | ((IData)(__Vfunc_feed__22__data) 
                                              << 0x18U));
                                    __Vfunc_feed__22__ctx[0U] 
                                        = ((0xffffff00U 
                                            & __Vfunc_feed__22__ctx[0U]) 
                                           | (0xffU 
                                              & (__Vfunc_feed__22__ctx[0U] 
                                                 ^ (IData)(__Vfunc_feed__22__data))));
                                    __Vfunc_feed__22__ctx[2U] 
                                        = (0x70000U 
                                           | (0xffffU 
                                              & __Vfunc_feed__22__ctx[2U]));
                                }
                            } else if ((0x10000U & 
                                        __Vfunc_feed__22__ctx[2U])) {
                                __Vfunc_feed__22__ctx[1U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__22__ctx[1U]) 
                                       | (IData)(__Vfunc_feed__22__data));
                                __Vfunc_feed__22__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__22__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__22__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__22__data))));
                                __Vfunc_feed__22__ctx[2U] 
                                    = (0x60000U | (0xffffU 
                                                   & __Vfunc_feed__22__ctx[2U]));
                            } else {
                                __Vfunc_feed__22__ctx[1U] 
                                    = ((0xffff00ffU 
                                        & __Vfunc_feed__22__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__22__data) 
                                          << 8U));
                                __Vfunc_feed__22__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__22__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__22__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__22__data))));
                                __Vfunc_feed__22__ctx[2U] 
                                    = (0x50000U | (0xffffU 
                                                   & __Vfunc_feed__22__ctx[2U]));
                            }
                        } else if ((0x20000U & __Vfunc_feed__22__ctx[2U])) {
                            if ((0x10000U & __Vfunc_feed__22__ctx[2U])) {
                                __Vfunc_feed__22__ctx[1U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__22__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__22__data) 
                                          << 0x10U));
                                __Vfunc_feed__22__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__22__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__22__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__22__data))));
                                __Vfunc_feed__22__ctx[2U] 
                                    = (0x40000U | (0xffffU 
                                                   & __Vfunc_feed__22__ctx[2U]));
                            } else {
                                __Vfunc_feed__22__ctx[1U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__22__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__22__data) 
                                          << 0x18U));
                                __Vfunc_feed__22__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__22__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__22__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__22__data))));
                                __Vfunc_feed__22__ctx[2U] 
                                    = (0x30000U | (0xffffU 
                                                   & __Vfunc_feed__22__ctx[2U]));
                            }
                        } else if ((0x10000U & __Vfunc_feed__22__ctx[2U])) {
                            if ((4U == (IData)(__Vfunc_feed__22__data))) {
                                __Vfunc_feed__22__ctx[2U] 
                                    = ((0xfff00U & 
                                        __Vfunc_feed__22__ctx[2U]) 
                                       | (0xfffffU 
                                          & (IData)(__Vfunc_feed__22__data)));
                                __Vfunc_feed__22__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__22__ctx[0U]) 
                                       | (IData)(__Vfunc_feed__22__data));
                                __Vfunc_feed__22__ctx[2U] 
                                    = (0x20000U | (0xffffU 
                                                   & __Vfunc_feed__22__ctx[2U]));
                            } else {
                                __Vfunc_feed__22__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__22__ctx[2U]);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__22__data))) {
                            __Vfunc_feed__22__ctx[2U] 
                                = ((0xffU & __Vfunc_feed__22__ctx[2U]) 
                                   | (0xfff00U & (0x10000U 
                                                  | ((IData)(__Vfunc_feed__22__data) 
                                                     << 8U))));
                            __Vfunc_feed__22__ctx[0U] 
                                = (0xffffff00U & __Vfunc_feed__22__ctx[0U]);
                        }
                        __Vfunc_feed__22__Vfuncout[0U] 
                            = __Vfunc_feed__22__ctx[0U];
                        __Vfunc_feed__22__Vfuncout[1U] 
                            = __Vfunc_feed__22__ctx[1U];
                        __Vfunc_feed__22__Vfuncout[2U] 
                            = __Vfunc_feed__22__ctx[2U];
                        __Vfunc_feed__11__ctx[0x13U] 
                            = ((0x1fffU & __Vfunc_feed__11__ctx[0x13U]) 
                               | (__Vfunc_feed__22__Vfuncout[0U] 
                                  << 0xdU));
                        __Vfunc_feed__11__ctx[0x14U] 
                            = ((__Vfunc_feed__22__Vfuncout[0U] 
                                >> 0x13U) | (__Vfunc_feed__22__Vfuncout[1U] 
                                             << 0xdU));
                        __Vfunc_feed__11__ctx[0x15U] 
                            = ((__Vfunc_feed__22__Vfuncout[1U] 
                                >> 0x13U) | (__Vfunc_feed__22__Vfuncout[2U] 
                                             << 0xdU));
                        __Vfunc_feed__11__ctx[0x16U] 
                            = ((0x7ffffeU & __Vfunc_feed__11__ctx[0x16U]) 
                               | (0x7fffffU & (__Vfunc_feed__22__Vfuncout[2U] 
                                               >> 0x13U)));
                        __Vfunc_feed__23__data = __Vfunc_feed__11__data;
                        __Vfunc_feed__23__in_ctx[0U] 
                            = ((__Vfunc_feed__11__ctx[0x14U] 
                                << 0x13U) | (__Vfunc_feed__11__ctx[0x13U] 
                                             >> 0xdU));
                        __Vfunc_feed__23__in_ctx[1U] 
                            = ((__Vfunc_feed__11__ctx[0x15U] 
                                << 0x13U) | (__Vfunc_feed__11__ctx[0x14U] 
                                             >> 0xdU));
                        __Vfunc_feed__23__in_ctx[2U] 
                            = (0xfffffU & ((__Vfunc_feed__11__ctx[0x16U] 
                                            << 0x13U) 
                                           | (__Vfunc_feed__11__ctx[0x15U] 
                                              >> 0xdU)));
                        __Vfunc_feed__23__ctx[0U] = 
                            __Vfunc_feed__23__in_ctx[0U];
                        __Vfunc_feed__23__ctx[1U] = 
                            __Vfunc_feed__23__in_ctx[1U];
                        __Vfunc_feed__23__ctx[2U] = 
                            __Vfunc_feed__23__in_ctx[2U];
                        __Vfunc_feed__23__out_frame[0U] 
                            = ((__Vfunc_feed__23__ctx[1U] 
                                << 0x18U) | (__Vfunc_feed__23__ctx[0U] 
                                             >> 8U));
                        __Vfunc_feed__23__out_frame[1U] 
                            = ((__Vfunc_feed__23__ctx[2U] 
                                << 0x18U) | (__Vfunc_feed__23__ctx[1U] 
                                             >> 8U));
                        __Vfunc_feed__23__out_frame[2U] 
                            = (0xffU & (__Vfunc_feed__23__ctx[2U] 
                                        >> 8U));
                        if ((0x80000U & __Vfunc_feed__23__ctx[2U])) {
                            if ((0x40000U & __Vfunc_feed__23__ctx[2U])) {
                                __Vfunc_feed__23__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__23__ctx[2U]);
                            } else if ((0x20000U & 
                                        __Vfunc_feed__23__ctx[2U])) {
                                __Vfunc_feed__23__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__23__ctx[2U]);
                            } else if ((0x10000U & 
                                        __Vfunc_feed__23__ctx[2U])) {
                                __Vfunc_feed__23__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__23__ctx[2U]);
                            } else {
                                if ((0x55U == (IData)(__Vfunc_feed__23__data))) {
                                    __Vfunc_feed__23__ctx[0U] 
                                        = ((0xffff00ffU 
                                            & __Vfunc_feed__23__ctx[0U]) 
                                           | ((IData)(__Vfunc_feed__23__data) 
                                              << 8U));
                                    __Vfunc_feed__23__out_frame[0U] 
                                        = ((__Vfunc_feed__23__ctx[1U] 
                                            << 0x18U) 
                                           | (__Vfunc_feed__23__ctx[0U] 
                                              >> 8U));
                                    __Vfunc_feed__23__out_frame[1U] 
                                        = ((__Vfunc_feed__23__ctx[2U] 
                                            << 0x18U) 
                                           | (__Vfunc_feed__23__ctx[1U] 
                                              >> 8U));
                                    __Vfunc_feed__23__out_frame[2U] 
                                        = (0xffU & 
                                           (__Vfunc_feed__23__ctx[2U] 
                                            >> 8U));
                                }
                                __Vfunc_feed__23__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__23__ctx[2U]);
                            }
                        } else if ((0x40000U & __Vfunc_feed__23__ctx[2U])) {
                            if ((0x20000U & __Vfunc_feed__23__ctx[2U])) {
                                if ((0x10000U & __Vfunc_feed__23__ctx[2U])) {
                                    __Vfunc_feed__23__ctx[0U] 
                                        = ((0xff00ffffU 
                                            & __Vfunc_feed__23__ctx[0U]) 
                                           | ((IData)(__Vfunc_feed__23__data) 
                                              << 0x10U));
                                    __Vfunc_feed__23__ctx[2U] 
                                        = ((0xffffU 
                                            & __Vfunc_feed__23__ctx[2U]) 
                                           | (0xfffffU 
                                              & ((((IData)(__Vfunc_feed__23__data) 
                                                   == 
                                                   (0xffU 
                                                    & __Vfunc_feed__23__ctx[0U]))
                                                   ? 8U
                                                   : 0U) 
                                                 << 0x10U)));
                                } else {
                                    __Vfunc_feed__23__ctx[0U] 
                                        = ((0xffffffU 
                                            & __Vfunc_feed__23__ctx[0U]) 
                                           | ((IData)(__Vfunc_feed__23__data) 
                                              << 0x18U));
                                    __Vfunc_feed__23__ctx[0U] 
                                        = ((0xffffff00U 
                                            & __Vfunc_feed__23__ctx[0U]) 
                                           | (0xffU 
                                              & (__Vfunc_feed__23__ctx[0U] 
                                                 ^ (IData)(__Vfunc_feed__23__data))));
                                    __Vfunc_feed__23__ctx[2U] 
                                        = (0x70000U 
                                           | (0xffffU 
                                              & __Vfunc_feed__23__ctx[2U]));
                                }
                            } else if ((0x10000U & 
                                        __Vfunc_feed__23__ctx[2U])) {
                                __Vfunc_feed__23__ctx[1U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__23__ctx[1U]) 
                                       | (IData)(__Vfunc_feed__23__data));
                                __Vfunc_feed__23__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__23__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__23__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__23__data))));
                                __Vfunc_feed__23__ctx[2U] 
                                    = (0x60000U | (0xffffU 
                                                   & __Vfunc_feed__23__ctx[2U]));
                            } else {
                                __Vfunc_feed__23__ctx[1U] 
                                    = ((0xffff00ffU 
                                        & __Vfunc_feed__23__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__23__data) 
                                          << 8U));
                                __Vfunc_feed__23__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__23__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__23__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__23__data))));
                                __Vfunc_feed__23__ctx[2U] 
                                    = (0x50000U | (0xffffU 
                                                   & __Vfunc_feed__23__ctx[2U]));
                            }
                        } else if ((0x20000U & __Vfunc_feed__23__ctx[2U])) {
                            if ((0x10000U & __Vfunc_feed__23__ctx[2U])) {
                                __Vfunc_feed__23__ctx[1U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__23__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__23__data) 
                                          << 0x10U));
                                __Vfunc_feed__23__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__23__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__23__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__23__data))));
                                __Vfunc_feed__23__ctx[2U] 
                                    = (0x40000U | (0xffffU 
                                                   & __Vfunc_feed__23__ctx[2U]));
                            } else {
                                __Vfunc_feed__23__ctx[1U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__23__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__23__data) 
                                          << 0x18U));
                                __Vfunc_feed__23__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__23__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__23__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__23__data))));
                                __Vfunc_feed__23__ctx[2U] 
                                    = (0x30000U | (0xffffU 
                                                   & __Vfunc_feed__23__ctx[2U]));
                            }
                        } else if ((0x10000U & __Vfunc_feed__23__ctx[2U])) {
                            if ((4U == (IData)(__Vfunc_feed__23__data))) {
                                __Vfunc_feed__23__ctx[2U] 
                                    = ((0xfff00U & 
                                        __Vfunc_feed__23__ctx[2U]) 
                                       | (0xfffffU 
                                          & (IData)(__Vfunc_feed__23__data)));
                                __Vfunc_feed__23__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__23__ctx[0U]) 
                                       | (IData)(__Vfunc_feed__23__data));
                                __Vfunc_feed__23__ctx[2U] 
                                    = (0x20000U | (0xffffU 
                                                   & __Vfunc_feed__23__ctx[2U]));
                            } else {
                                __Vfunc_feed__23__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__23__ctx[2U]);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__23__data))) {
                            __Vfunc_feed__23__ctx[2U] 
                                = ((0xffU & __Vfunc_feed__23__ctx[2U]) 
                                   | (0xfff00U & (0x10000U 
                                                  | ((IData)(__Vfunc_feed__23__data) 
                                                     << 8U))));
                            __Vfunc_feed__23__ctx[0U] 
                                = (0xffffff00U & __Vfunc_feed__23__ctx[0U]);
                        }
                        __Vfunc_feed__23__Vfuncout[0U] 
                            = __Vfunc_feed__23__ctx[0U];
                        __Vfunc_feed__23__Vfuncout[1U] 
                            = __Vfunc_feed__23__ctx[1U];
                        __Vfunc_feed__23__Vfuncout[2U] 
                            = __Vfunc_feed__23__ctx[2U];
                        __Vfunc_feed__11__ctx[0x13U] 
                            = ((0x1fffU & __Vfunc_feed__11__ctx[0x13U]) 
                               | (__Vfunc_feed__23__Vfuncout[0U] 
                                  << 0xdU));
                        __Vfunc_feed__11__ctx[0x14U] 
                            = ((__Vfunc_feed__23__Vfuncout[0U] 
                                >> 0x13U) | (__Vfunc_feed__23__Vfuncout[1U] 
                                             << 0xdU));
                        __Vfunc_feed__11__ctx[0x15U] 
                            = ((__Vfunc_feed__23__Vfuncout[1U] 
                                >> 0x13U) | (__Vfunc_feed__23__Vfuncout[2U] 
                                             << 0xdU));
                        __Vfunc_feed__11__ctx[0x16U] 
                            = ((0x7ffffeU & __Vfunc_feed__11__ctx[0x16U]) 
                               | (0x7fffffU & (__Vfunc_feed__23__Vfuncout[2U] 
                                               >> 0x13U)));
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__11__ctx[0x16U]));
                    } else if ((3U == (IData)(__Vfunc_feed__11__data))) {
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0x40000U | (0x61ffffU 
                                           & __Vfunc_feed__11__ctx[0x16U]));
                        __Vfunc_feed__11__ctx[0x12U] 
                            = (0x1802a800U | (0x7ffU 
                                              & __Vfunc_feed__11__ctx[0x12U]));
                        __Vfunc_feed__11__ctx[0x13U] 
                            = (0x550U | (0xffffe000U 
                                         & __Vfunc_feed__11__ctx[0x13U]));
                        __Vfunc_feed__26__data = (0xffU 
                                                  & (__Vfunc_feed__11__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__26__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__11__ctx[0x13U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__11__ctx[0x12U])) 
                                                  >> 0xbU)));
                        __Vfunc_feed__26__ctx = __Vfunc_feed__26__in_ctx;
                        if ((1U & (IData)((__Vfunc_feed__26__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__26__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__26__data))) {
                                    __Vfunc_feed__26__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__26__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__26__data)));
                                }
                                __Vfunc_feed__26__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__26__ctx);
                            } else {
                                __Vfunc_feed__26__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__26__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__26__data)) 
                                          << 8U));
                                __Vfunc_feed__26__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__26__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__26__ctx 
                                                  >> 0x20U)))) {
                            if ((3U == (IData)(__Vfunc_feed__26__data))) {
                                __Vfunc_feed__26__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__26__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__26__data)) 
                                          << 0x10U));
                                __Vfunc_feed__26__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__26__ctx));
                            } else {
                                __Vfunc_feed__26__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__26__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__26__data))) {
                            __Vfunc_feed__26__ctx = 
                                ((0xffffffULL & __Vfunc_feed__26__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__26__data)))) 
                                    << 0x18U));
                        }
                        __Vfunc_feed__26__Vfuncout 
                            = __Vfunc_feed__26__ctx;
                        __Vfunc_feed__11__ctx[0x12U] 
                            = ((0x7ffU & __Vfunc_feed__11__ctx[0x12U]) 
                               | ((IData)(__Vfunc_feed__26__Vfuncout) 
                                  << 0xbU));
                        __Vfunc_feed__11__ctx[0x13U] 
                            = ((0xffffe000U & __Vfunc_feed__11__ctx[0x13U]) 
                               | (((IData)(__Vfunc_feed__26__Vfuncout) 
                                   >> 0x15U) | ((IData)(
                                                        (__Vfunc_feed__26__Vfuncout 
                                                         >> 0x20U)) 
                                                << 0xbU)));
                        __Vfunc_feed__27__data = __Vfunc_feed__11__data;
                        __Vfunc_feed__27__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__11__ctx[0x13U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__11__ctx[0x12U])) 
                                                  >> 0xbU)));
                        __Vfunc_feed__27__ctx = __Vfunc_feed__27__in_ctx;
                        __Vfunc_feed__27__out_frame 
                            = (IData)(__Vfunc_feed__27__ctx);
                        if ((1U & (IData)((__Vfunc_feed__27__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__27__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__27__data))) {
                                    __Vfunc_feed__27__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__27__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__27__data)));
                                    __Vfunc_feed__27__out_frame 
                                        = (IData)(__Vfunc_feed__27__ctx);
                                }
                                __Vfunc_feed__27__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__27__ctx);
                            } else {
                                __Vfunc_feed__27__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__27__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__27__data)) 
                                          << 8U));
                                __Vfunc_feed__27__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__27__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__27__ctx 
                                                  >> 0x20U)))) {
                            if ((3U == (IData)(__Vfunc_feed__27__data))) {
                                __Vfunc_feed__27__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__27__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__27__data)) 
                                          << 0x10U));
                                __Vfunc_feed__27__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__27__ctx));
                            } else {
                                __Vfunc_feed__27__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__27__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__27__data))) {
                            __Vfunc_feed__27__ctx = 
                                ((0xffffffULL & __Vfunc_feed__27__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__27__data)))) 
                                    << 0x18U));
                        }
                        __Vfunc_feed__27__Vfuncout 
                            = __Vfunc_feed__27__ctx;
                        __Vfunc_feed__11__ctx[0x12U] 
                            = ((0x7ffU & __Vfunc_feed__11__ctx[0x12U]) 
                               | ((IData)(__Vfunc_feed__27__Vfuncout) 
                                  << 0xbU));
                        __Vfunc_feed__11__ctx[0x13U] 
                            = ((0xffffe000U & __Vfunc_feed__11__ctx[0x13U]) 
                               | (((IData)(__Vfunc_feed__27__Vfuncout) 
                                   >> 0x15U) | ((IData)(
                                                        (__Vfunc_feed__27__Vfuncout 
                                                         >> 0x20U)) 
                                                << 0xbU)));
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__11__ctx[0x16U]));
                    } else if ((5U == (IData)(__Vfunc_feed__11__data))) {
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0x60000U | (0x61ffffU 
                                           & __Vfunc_feed__11__ctx[0x16U]));
                        __Vfunc_feed__11__ctx[0x10U] = 0x5500U;
                        __Vfunc_feed__11__ctx[0x11U] = 0x5000000U;
                        __Vfunc_feed__11__ctx[0x12U] 
                            = (0xaaU | (0xfffff800U 
                                        & __Vfunc_feed__11__ctx[0x12U]));
                        __Vfunc_feed__30__data = (0xffU 
                                                  & (__Vfunc_feed__11__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__30__in_ctx[0U] 
                            = __Vfunc_feed__11__ctx[0x10U];
                        __Vfunc_feed__30__in_ctx[1U] 
                            = __Vfunc_feed__11__ctx[0x11U];
                        __Vfunc_feed__30__in_ctx[2U] 
                            = (0x7ffU & __Vfunc_feed__11__ctx[0x12U]);
                        __Vfunc_feed__30__ctx[0U] = 
                            __Vfunc_feed__30__in_ctx[0U];
                        __Vfunc_feed__30__ctx[1U] = 
                            __Vfunc_feed__30__in_ctx[1U];
                        __Vfunc_feed__30__ctx[2U] = 
                            __Vfunc_feed__30__in_ctx[2U];
                        if ((0x400U & __Vfunc_feed__30__ctx[2U])) {
                            if ((0x200U & __Vfunc_feed__30__ctx[2U])) {
                                if ((0x100U & __Vfunc_feed__30__ctx[2U])) {
                                    if ((0x55U == (IData)(__Vfunc_feed__30__data))) {
                                        __Vfunc_feed__30__ctx[0U] 
                                            = ((0xffff00ffU 
                                                & __Vfunc_feed__30__ctx[0U]) 
                                               | ((IData)(__Vfunc_feed__30__data) 
                                                  << 8U));
                                    }
                                    __Vfunc_feed__30__ctx[2U] 
                                        = (0xffU & 
                                           __Vfunc_feed__30__ctx[2U]);
                                } else {
                                    __Vfunc_feed__30__ctx[0U] 
                                        = ((0xff00ffffU 
                                            & __Vfunc_feed__30__ctx[0U]) 
                                           | ((IData)(__Vfunc_feed__30__data) 
                                              << 0x10U));
                                    __Vfunc_feed__30__ctx[2U] 
                                        = ((0xffU & 
                                            __Vfunc_feed__30__ctx[2U]) 
                                           | (0x7ffU 
                                              & ((((IData)(__Vfunc_feed__30__data) 
                                                   == 
                                                   (0xffU 
                                                    & __Vfunc_feed__30__ctx[0U]))
                                                   ? 7U
                                                   : 0U) 
                                                 << 8U)));
                                }
                            } else if ((0x100U & __Vfunc_feed__30__ctx[2U])) {
                                __Vfunc_feed__30__ctx[0U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__30__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__30__data) 
                                          << 0x18U));
                                __Vfunc_feed__30__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__30__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__30__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__30__data))));
                                __Vfunc_feed__30__ctx[2U] 
                                    = (0x600U | (0xffU 
                                                 & __Vfunc_feed__30__ctx[2U]));
                            } else {
                                __Vfunc_feed__30__ctx[1U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__30__ctx[1U]) 
                                       | (IData)(__Vfunc_feed__30__data));
                                __Vfunc_feed__30__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__30__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__30__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__30__data))));
                                __Vfunc_feed__30__ctx[2U] 
                                    = (0x500U | (0xffU 
                                                 & __Vfunc_feed__30__ctx[2U]));
                            }
                        } else if ((0x200U & __Vfunc_feed__30__ctx[2U])) {
                            if ((0x100U & __Vfunc_feed__30__ctx[2U])) {
                                __Vfunc_feed__30__ctx[1U] 
                                    = ((0xffff00ffU 
                                        & __Vfunc_feed__30__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__30__data) 
                                          << 8U));
                                __Vfunc_feed__30__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__30__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__30__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__30__data))));
                                __Vfunc_feed__30__ctx[2U] 
                                    = (0x400U | (0xffU 
                                                 & __Vfunc_feed__30__ctx[2U]));
                            } else {
                                __Vfunc_feed__30__ctx[1U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__30__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__30__data) 
                                          << 0x10U));
                                __Vfunc_feed__30__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__30__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__30__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__30__data))));
                                __Vfunc_feed__30__ctx[2U] 
                                    = (0x300U | (0xffU 
                                                 & __Vfunc_feed__30__ctx[2U]));
                            }
                        } else if ((0x100U & __Vfunc_feed__30__ctx[2U])) {
                            if ((5U == (IData)(__Vfunc_feed__30__data))) {
                                __Vfunc_feed__30__ctx[1U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__30__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__30__data) 
                                          << 0x18U));
                                __Vfunc_feed__30__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__30__ctx[0U]) 
                                       | (IData)(__Vfunc_feed__30__data));
                                __Vfunc_feed__30__ctx[2U] 
                                    = (0x200U | (0xffU 
                                                 & __Vfunc_feed__30__ctx[2U]));
                            } else {
                                __Vfunc_feed__30__ctx[2U] 
                                    = (0xffU & __Vfunc_feed__30__ctx[2U]);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__30__data))) {
                            __Vfunc_feed__30__ctx[2U] 
                                = (0x7ffU & (0x100U 
                                             | (IData)(__Vfunc_feed__30__data)));
                            __Vfunc_feed__30__ctx[0U] 
                                = (0xffffff00U & __Vfunc_feed__30__ctx[0U]);
                        }
                        __Vfunc_feed__30__Vfuncout[0U] 
                            = __Vfunc_feed__30__ctx[0U];
                        __Vfunc_feed__30__Vfuncout[1U] 
                            = __Vfunc_feed__30__ctx[1U];
                        __Vfunc_feed__30__Vfuncout[2U] 
                            = __Vfunc_feed__30__ctx[2U];
                        __Vfunc_feed__11__ctx[0x10U] 
                            = __Vfunc_feed__30__Vfuncout[0U];
                        __Vfunc_feed__11__ctx[0x11U] 
                            = __Vfunc_feed__30__Vfuncout[1U];
                        __Vfunc_feed__11__ctx[0x12U] 
                            = ((0xfffff800U & __Vfunc_feed__11__ctx[0x12U]) 
                               | __Vfunc_feed__30__Vfuncout[2U]);
                        __Vfunc_feed__31__data = __Vfunc_feed__11__data;
                        __Vfunc_feed__31__in_ctx[0U] 
                            = __Vfunc_feed__11__ctx[0x10U];
                        __Vfunc_feed__31__in_ctx[1U] 
                            = __Vfunc_feed__11__ctx[0x11U];
                        __Vfunc_feed__31__in_ctx[2U] 
                            = (0x7ffU & __Vfunc_feed__11__ctx[0x12U]);
                        __Vfunc_feed__31__ctx[0U] = 
                            __Vfunc_feed__31__in_ctx[0U];
                        __Vfunc_feed__31__ctx[1U] = 
                            __Vfunc_feed__31__in_ctx[1U];
                        __Vfunc_feed__31__ctx[2U] = 
                            __Vfunc_feed__31__in_ctx[2U];
                        __Vfunc_feed__31__out_frame 
                            = (((QData)((IData)(__Vfunc_feed__31__ctx[2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              __Vfunc_feed__31__ctx[1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                __Vfunc_feed__31__ctx[0U])) 
                                                >> 8U)));
                        if ((0x400U & __Vfunc_feed__31__ctx[2U])) {
                            if ((0x200U & __Vfunc_feed__31__ctx[2U])) {
                                if ((0x100U & __Vfunc_feed__31__ctx[2U])) {
                                    if ((0x55U == (IData)(__Vfunc_feed__31__data))) {
                                        __Vfunc_feed__31__ctx[0U] 
                                            = ((0xffff00ffU 
                                                & __Vfunc_feed__31__ctx[0U]) 
                                               | ((IData)(__Vfunc_feed__31__data) 
                                                  << 8U));
                                        __Vfunc_feed__31__out_frame 
                                            = (((QData)((IData)(
                                                                __Vfunc_feed__31__ctx[2U])) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   __Vfunc_feed__31__ctx[1U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     __Vfunc_feed__31__ctx[0U])) 
                                                     >> 8U)));
                                    }
                                    __Vfunc_feed__31__ctx[2U] 
                                        = (0xffU & 
                                           __Vfunc_feed__31__ctx[2U]);
                                } else {
                                    __Vfunc_feed__31__ctx[0U] 
                                        = ((0xff00ffffU 
                                            & __Vfunc_feed__31__ctx[0U]) 
                                           | ((IData)(__Vfunc_feed__31__data) 
                                              << 0x10U));
                                    __Vfunc_feed__31__ctx[2U] 
                                        = ((0xffU & 
                                            __Vfunc_feed__31__ctx[2U]) 
                                           | (0x7ffU 
                                              & ((((IData)(__Vfunc_feed__31__data) 
                                                   == 
                                                   (0xffU 
                                                    & __Vfunc_feed__31__ctx[0U]))
                                                   ? 7U
                                                   : 0U) 
                                                 << 8U)));
                                }
                            } else if ((0x100U & __Vfunc_feed__31__ctx[2U])) {
                                __Vfunc_feed__31__ctx[0U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__31__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__31__data) 
                                          << 0x18U));
                                __Vfunc_feed__31__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__31__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__31__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__31__data))));
                                __Vfunc_feed__31__ctx[2U] 
                                    = (0x600U | (0xffU 
                                                 & __Vfunc_feed__31__ctx[2U]));
                            } else {
                                __Vfunc_feed__31__ctx[1U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__31__ctx[1U]) 
                                       | (IData)(__Vfunc_feed__31__data));
                                __Vfunc_feed__31__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__31__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__31__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__31__data))));
                                __Vfunc_feed__31__ctx[2U] 
                                    = (0x500U | (0xffU 
                                                 & __Vfunc_feed__31__ctx[2U]));
                            }
                        } else if ((0x200U & __Vfunc_feed__31__ctx[2U])) {
                            if ((0x100U & __Vfunc_feed__31__ctx[2U])) {
                                __Vfunc_feed__31__ctx[1U] 
                                    = ((0xffff00ffU 
                                        & __Vfunc_feed__31__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__31__data) 
                                          << 8U));
                                __Vfunc_feed__31__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__31__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__31__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__31__data))));
                                __Vfunc_feed__31__ctx[2U] 
                                    = (0x400U | (0xffU 
                                                 & __Vfunc_feed__31__ctx[2U]));
                            } else {
                                __Vfunc_feed__31__ctx[1U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__31__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__31__data) 
                                          << 0x10U));
                                __Vfunc_feed__31__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__31__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__31__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__31__data))));
                                __Vfunc_feed__31__ctx[2U] 
                                    = (0x300U | (0xffU 
                                                 & __Vfunc_feed__31__ctx[2U]));
                            }
                        } else if ((0x100U & __Vfunc_feed__31__ctx[2U])) {
                            if ((5U == (IData)(__Vfunc_feed__31__data))) {
                                __Vfunc_feed__31__ctx[1U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__31__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__31__data) 
                                          << 0x18U));
                                __Vfunc_feed__31__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__31__ctx[0U]) 
                                       | (IData)(__Vfunc_feed__31__data));
                                __Vfunc_feed__31__ctx[2U] 
                                    = (0x200U | (0xffU 
                                                 & __Vfunc_feed__31__ctx[2U]));
                            } else {
                                __Vfunc_feed__31__ctx[2U] 
                                    = (0xffU & __Vfunc_feed__31__ctx[2U]);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__31__data))) {
                            __Vfunc_feed__31__ctx[2U] 
                                = (0x7ffU & (0x100U 
                                             | (IData)(__Vfunc_feed__31__data)));
                            __Vfunc_feed__31__ctx[0U] 
                                = (0xffffff00U & __Vfunc_feed__31__ctx[0U]);
                        }
                        __Vfunc_feed__31__Vfuncout[0U] 
                            = __Vfunc_feed__31__ctx[0U];
                        __Vfunc_feed__31__Vfuncout[1U] 
                            = __Vfunc_feed__31__ctx[1U];
                        __Vfunc_feed__31__Vfuncout[2U] 
                            = __Vfunc_feed__31__ctx[2U];
                        __Vfunc_feed__11__ctx[0x10U] 
                            = __Vfunc_feed__31__Vfuncout[0U];
                        __Vfunc_feed__11__ctx[0x11U] 
                            = __Vfunc_feed__31__Vfuncout[1U];
                        __Vfunc_feed__11__ctx[0x12U] 
                            = ((0xfffff800U & __Vfunc_feed__11__ctx[0x12U]) 
                               | __Vfunc_feed__31__Vfuncout[2U]);
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__11__ctx[0x16U]));
                    } else if ((1U == (IData)(__Vfunc_feed__11__data))) {
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0x80000U | (0x61ffffU 
                                           & __Vfunc_feed__11__ctx[0x16U]));
                        __Vfunc_feed__11__ctx[5U] = 
                            ((0x1ffU & __Vfunc_feed__11__ctx[5U]) 
                             | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[0U] 
                                << 9U));
                        __Vfunc_feed__11__ctx[6U] = 
                            ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[0U] 
                              >> 0x17U) | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[1U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[7U] = 
                            ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[1U] 
                              >> 0x17U) | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[2U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[8U] = 
                            ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[2U] 
                              >> 0x17U) | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[3U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[9U] = 
                            ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[3U] 
                              >> 0x17U) | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[4U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[0xaU] 
                            = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[4U] 
                                >> 0x17U) | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[5U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xbU] 
                            = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[5U] 
                                >> 0x17U) | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[6U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xcU] 
                            = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[6U] 
                                >> 0x17U) | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[7U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xdU] 
                            = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[7U] 
                                >> 0x17U) | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[8U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xeU] 
                            = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[8U] 
                                >> 0x17U) | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[9U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xfU] 
                            = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[9U] 
                                >> 0x17U) | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9cb4abb4_0[0xaU] 
                                             << 9U));
                        __Vfunc_feed__33__data = (0xffU 
                                                  & (__Vfunc_feed__11__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__33__in_ctx[0U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[0U] 
                               & ((__Vfunc_feed__11__ctx[6U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[5U] 
                                                >> 9U)));
                        __Vfunc_feed__33__in_ctx[1U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[1U] 
                               & ((__Vfunc_feed__11__ctx[7U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[6U] 
                                                >> 9U)));
                        __Vfunc_feed__33__in_ctx[2U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[2U] 
                               & ((__Vfunc_feed__11__ctx[8U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[7U] 
                                                >> 9U)));
                        __Vfunc_feed__33__in_ctx[3U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[3U] 
                               & ((__Vfunc_feed__11__ctx[9U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[8U] 
                                                >> 9U)));
                        __Vfunc_feed__33__in_ctx[4U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[4U] 
                               & ((__Vfunc_feed__11__ctx[0xaU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[9U] 
                                                >> 9U)));
                        __Vfunc_feed__33__in_ctx[5U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[5U] 
                               & ((__Vfunc_feed__11__ctx[0xbU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xaU] 
                                                >> 9U)));
                        __Vfunc_feed__33__in_ctx[6U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[6U] 
                               & ((__Vfunc_feed__11__ctx[0xcU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xbU] 
                                                >> 9U)));
                        __Vfunc_feed__33__in_ctx[7U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[7U] 
                               & ((__Vfunc_feed__11__ctx[0xdU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xcU] 
                                                >> 9U)));
                        __Vfunc_feed__33__in_ctx[8U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[8U] 
                               & ((__Vfunc_feed__11__ctx[0xeU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xdU] 
                                                >> 9U)));
                        __Vfunc_feed__33__in_ctx[9U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[9U] 
                               & ((__Vfunc_feed__11__ctx[0xfU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xeU] 
                                                >> 9U)));
                        __Vfunc_feed__33__in_ctx[0xaU] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[0xaU] 
                               & ((__Vfunc_feed__11__ctx[0x10U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xfU] 
                                                >> 9U)));
                        {
                            __Vfunc_feed__33__ctx[0U] 
                                = __Vfunc_feed__33__in_ctx[0U];
                            __Vfunc_feed__33__ctx[1U] 
                                = __Vfunc_feed__33__in_ctx[1U];
                            __Vfunc_feed__33__ctx[2U] 
                                = __Vfunc_feed__33__in_ctx[2U];
                            __Vfunc_feed__33__ctx[3U] 
                                = __Vfunc_feed__33__in_ctx[3U];
                            __Vfunc_feed__33__ctx[4U] 
                                = __Vfunc_feed__33__in_ctx[4U];
                            __Vfunc_feed__33__ctx[5U] 
                                = __Vfunc_feed__33__in_ctx[5U];
                            __Vfunc_feed__33__ctx[6U] 
                                = __Vfunc_feed__33__in_ctx[6U];
                            __Vfunc_feed__33__ctx[7U] 
                                = __Vfunc_feed__33__in_ctx[7U];
                            __Vfunc_feed__33__ctx[8U] 
                                = __Vfunc_feed__33__in_ctx[8U];
                            __Vfunc_feed__33__ctx[9U] 
                                = __Vfunc_feed__33__in_ctx[9U];
                            __Vfunc_feed__33__ctx[0xaU] 
                                = __Vfunc_feed__33__in_ctx[0xaU];
                            __Vfunc_feed__33__frame_error = 0U;
                            vlSymsp->TOP__move_queue_add_req_parser_pkg.__Vlvbound_heeac623e__0 
                                = __Vfunc_feed__33__data;
                            if (VL_LIKELY((0x156U >= 
                                           ((IData)(1U) 
                                            + (0x1ffU 
                                               & (((IData)(0x14fU) 
                                                   - 
                                                   VL_SHIFTL_III(9,32,32, 
                                                                 (0x3fU 
                                                                  & (__Vfunc_feed__33__ctx[0xaU] 
                                                                     >> 0x11U)), 3U)) 
                                                  - (IData)(7U))))))) {
                                VL_ASSIGNSEL_WI(343,8,
                                                ((IData)(1U) 
                                                 + 
                                                 (0x1ffU 
                                                  & (((IData)(0x14fU) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, 
                                                                    (0x3fU 
                                                                     & (__Vfunc_feed__33__ctx[0xaU] 
                                                                        >> 0x11U)), 3U)) 
                                                     - (IData)(7U)))), __Vfunc_feed__33__ctx, vlSymsp->TOP__move_queue_add_req_parser_pkg.__Vlvbound_heeac623e__0);
                            }
                            if ((0U == (0x3fU & (__Vfunc_feed__33__ctx[0xaU] 
                                                 >> 0x11U)))) {
                                if ((0xaaU != (IData)(__Vfunc_feed__33__data))) {
                                    __Vfunc_feed__33__frame_error = 1U;
                                }
                            } else if ((1U == (0x3fU 
                                               & (__Vfunc_feed__33__ctx[0xaU] 
                                                  >> 0x11U)))) {
                                if ((1U == (IData)(__Vfunc_feed__33__data))) {
                                    __Vfunc_feed__33__ctx[0U] 
                                        = ((0xfffffffeU 
                                            & __Vfunc_feed__33__ctx[0U]) 
                                           | (1U & 
                                              VL_REDXOR_8(__Vfunc_feed__33__data)));
                                } else {
                                    __Vfunc_feed__33__frame_error = 1U;
                                    __Vfunc_feed__33__ctx[0xaU] 
                                        = (0x1ffffU 
                                           & __Vfunc_feed__33__ctx[0xaU]);
                                    __Vfunc_feed__33__Vfuncout[0U] 
                                        = __Vfunc_feed__33__ctx[0U];
                                    __Vfunc_feed__33__Vfuncout[1U] 
                                        = __Vfunc_feed__33__ctx[1U];
                                    __Vfunc_feed__33__Vfuncout[2U] 
                                        = __Vfunc_feed__33__ctx[2U];
                                    __Vfunc_feed__33__Vfuncout[3U] 
                                        = __Vfunc_feed__33__ctx[3U];
                                    __Vfunc_feed__33__Vfuncout[4U] 
                                        = __Vfunc_feed__33__ctx[4U];
                                    __Vfunc_feed__33__Vfuncout[5U] 
                                        = __Vfunc_feed__33__ctx[5U];
                                    __Vfunc_feed__33__Vfuncout[6U] 
                                        = __Vfunc_feed__33__ctx[6U];
                                    __Vfunc_feed__33__Vfuncout[7U] 
                                        = __Vfunc_feed__33__ctx[7U];
                                    __Vfunc_feed__33__Vfuncout[8U] 
                                        = __Vfunc_feed__33__ctx[8U];
                                    __Vfunc_feed__33__Vfuncout[9U] 
                                        = __Vfunc_feed__33__ctx[9U];
                                    __Vfunc_feed__33__Vfuncout[0xaU] 
                                        = __Vfunc_feed__33__ctx[0xaU];
                                    goto __Vlabel1;
                                }
                            } else if ((0x28U == (0x3fU 
                                                  & (__Vfunc_feed__33__ctx[0xaU] 
                                                     >> 0x11U)))) {
                                if (((1U & (IData)(__Vfunc_feed__33__data)) 
                                     != (1U & __Vfunc_feed__33__ctx[0U]))) {
                                    __Vfunc_feed__33__frame_error = 1U;
                                    __Vfunc_feed__33__ctx[0xaU] 
                                        = (0x1ffffU 
                                           & __Vfunc_feed__33__ctx[0xaU]);
                                    __Vfunc_feed__33__ctx[0U] 
                                        = (0xfffffffeU 
                                           & __Vfunc_feed__33__ctx[0U]);
                                    __Vfunc_feed__33__Vfuncout[0U] 
                                        = __Vfunc_feed__33__ctx[0U];
                                    __Vfunc_feed__33__Vfuncout[1U] 
                                        = __Vfunc_feed__33__ctx[1U];
                                    __Vfunc_feed__33__Vfuncout[2U] 
                                        = __Vfunc_feed__33__ctx[2U];
                                    __Vfunc_feed__33__Vfuncout[3U] 
                                        = __Vfunc_feed__33__ctx[3U];
                                    __Vfunc_feed__33__Vfuncout[4U] 
                                        = __Vfunc_feed__33__ctx[4U];
                                    __Vfunc_feed__33__Vfuncout[5U] 
                                        = __Vfunc_feed__33__ctx[5U];
                                    __Vfunc_feed__33__Vfuncout[6U] 
                                        = __Vfunc_feed__33__ctx[6U];
                                    __Vfunc_feed__33__Vfuncout[7U] 
                                        = __Vfunc_feed__33__ctx[7U];
                                    __Vfunc_feed__33__Vfuncout[8U] 
                                        = __Vfunc_feed__33__ctx[8U];
                                    __Vfunc_feed__33__Vfuncout[9U] 
                                        = __Vfunc_feed__33__ctx[9U];
                                    __Vfunc_feed__33__Vfuncout[0xaU] 
                                        = __Vfunc_feed__33__ctx[0xaU];
                                    goto __Vlabel1;
                                }
                            } else if ((0x29U == (0x3fU 
                                                  & (__Vfunc_feed__33__ctx[0xaU] 
                                                     >> 0x11U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__33__data))) {
                                    __Vfunc_decoder__35__raw[0U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[0U] 
                                           & ((__Vfunc_feed__33__ctx[1U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__33__ctx[0U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__35__raw[1U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[1U] 
                                           & ((__Vfunc_feed__33__ctx[2U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__33__ctx[1U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__35__raw[2U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[2U] 
                                           & ((__Vfunc_feed__33__ctx[3U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__33__ctx[2U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__35__raw[3U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[3U] 
                                           & ((__Vfunc_feed__33__ctx[4U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__33__ctx[3U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__35__raw[4U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[4U] 
                                           & ((__Vfunc_feed__33__ctx[5U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__33__ctx[4U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__35__raw[5U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[5U] 
                                           & ((__Vfunc_feed__33__ctx[6U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__33__ctx[5U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__35__raw[6U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[6U] 
                                           & ((__Vfunc_feed__33__ctx[7U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__33__ctx[6U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__35__raw[7U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[7U] 
                                           & ((__Vfunc_feed__33__ctx[8U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__33__ctx[7U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__35__raw[8U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[8U] 
                                           & ((__Vfunc_feed__33__ctx[9U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__33__ctx[8U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__35__raw[9U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[9U] 
                                           & ((__Vfunc_feed__33__ctx[0xaU] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__33__ctx[9U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__35__raw[0xaU] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[0xaU] 
                                           & (__Vfunc_feed__33__ctx[0xaU] 
                                              >> 1U));
                                    __Vfunc_decoder__35__r[0U] 
                                        = __Vfunc_decoder__35__raw[0U];
                                    __Vfunc_decoder__35__r[1U] 
                                        = __Vfunc_decoder__35__raw[1U];
                                    __Vfunc_decoder__35__r[2U] 
                                        = __Vfunc_decoder__35__raw[2U];
                                    __Vfunc_decoder__35__r[3U] 
                                        = __Vfunc_decoder__35__raw[3U];
                                    __Vfunc_decoder__35__r[4U] 
                                        = __Vfunc_decoder__35__raw[4U];
                                    __Vfunc_decoder__35__r[5U] 
                                        = __Vfunc_decoder__35__raw[5U];
                                    __Vfunc_decoder__35__r[6U] 
                                        = __Vfunc_decoder__35__raw[6U];
                                    __Vfunc_decoder__35__r[7U] 
                                        = __Vfunc_decoder__35__raw[7U];
                                    __Vfunc_decoder__35__r[8U] 
                                        = __Vfunc_decoder__35__raw[8U];
                                    __Vfunc_decoder__35__r[9U] 
                                        = __Vfunc_decoder__35__raw[9U];
                                    __Vfunc_decoder__35__r[0xaU] 
                                        = __Vfunc_decoder__35__raw[0xaU];
                                } else {
                                    __Vfunc_feed__33__frame_error = 1U;
                                }
                                __Vfunc_feed__33__ctx[0xaU] 
                                    = (0x1ffffU & __Vfunc_feed__33__ctx[0xaU]);
                                __Vfunc_feed__33__ctx[0U] 
                                    = (0xfffffffeU 
                                       & __Vfunc_feed__33__ctx[0U]);
                                __Vfunc_feed__33__Vfuncout[0U] 
                                    = __Vfunc_feed__33__ctx[0U];
                                __Vfunc_feed__33__Vfuncout[1U] 
                                    = __Vfunc_feed__33__ctx[1U];
                                __Vfunc_feed__33__Vfuncout[2U] 
                                    = __Vfunc_feed__33__ctx[2U];
                                __Vfunc_feed__33__Vfuncout[3U] 
                                    = __Vfunc_feed__33__ctx[3U];
                                __Vfunc_feed__33__Vfuncout[4U] 
                                    = __Vfunc_feed__33__ctx[4U];
                                __Vfunc_feed__33__Vfuncout[5U] 
                                    = __Vfunc_feed__33__ctx[5U];
                                __Vfunc_feed__33__Vfuncout[6U] 
                                    = __Vfunc_feed__33__ctx[6U];
                                __Vfunc_feed__33__Vfuncout[7U] 
                                    = __Vfunc_feed__33__ctx[7U];
                                __Vfunc_feed__33__Vfuncout[8U] 
                                    = __Vfunc_feed__33__ctx[8U];
                                __Vfunc_feed__33__Vfuncout[9U] 
                                    = __Vfunc_feed__33__ctx[9U];
                                __Vfunc_feed__33__Vfuncout[0xaU] 
                                    = __Vfunc_feed__33__ctx[0xaU];
                                goto __Vlabel1;
                            } else if (((2U <= (0x3fU 
                                                & (__Vfunc_feed__33__ctx[0xaU] 
                                                   >> 0x11U))) 
                                        & (0x27U >= 
                                           (0x3fU & 
                                            (__Vfunc_feed__33__ctx[0xaU] 
                                             >> 0x11U))))) {
                                __Vfunc_feed__33__ctx[0U] 
                                    = ((0xfffffffeU 
                                        & __Vfunc_feed__33__ctx[0U]) 
                                       | (1U & (__Vfunc_feed__33__ctx[0U] 
                                                ^ VL_REDXOR_8(__Vfunc_feed__33__data))));
                            }
                            if (__Vfunc_feed__33__frame_error) {
                                __Vfunc_feed__33__ctx[0xaU] 
                                    = (0x1ffffU & __Vfunc_feed__33__ctx[0xaU]);
                                __Vfunc_feed__33__ctx[0U] 
                                    = (0xfffffffeU 
                                       & __Vfunc_feed__33__ctx[0U]);
                            } else if ((0x29U > (0x3fU 
                                                 & (__Vfunc_feed__33__ctx[0xaU] 
                                                    >> 0x11U)))) {
                                __Vfunc_feed__33__ctx[0xaU] 
                                    = ((0x1ffffU & 
                                        __Vfunc_feed__33__ctx[0xaU]) 
                                       | (0x7e0000U 
                                          & (((IData)(1U) 
                                              + ((__Vfunc_feed__33__ctx[0xaU] 
                                                  << 0xfU) 
                                                 | (__Vfunc_feed__33__ctx[0xaU] 
                                                    >> 0x11U))) 
                                             << 0x11U)));
                            }
                            __Vfunc_feed__33__Vfuncout[0U] 
                                = __Vfunc_feed__33__ctx[0U];
                            __Vfunc_feed__33__Vfuncout[1U] 
                                = __Vfunc_feed__33__ctx[1U];
                            __Vfunc_feed__33__Vfuncout[2U] 
                                = __Vfunc_feed__33__ctx[2U];
                            __Vfunc_feed__33__Vfuncout[3U] 
                                = __Vfunc_feed__33__ctx[3U];
                            __Vfunc_feed__33__Vfuncout[4U] 
                                = __Vfunc_feed__33__ctx[4U];
                            __Vfunc_feed__33__Vfuncout[5U] 
                                = __Vfunc_feed__33__ctx[5U];
                            __Vfunc_feed__33__Vfuncout[6U] 
                                = __Vfunc_feed__33__ctx[6U];
                            __Vfunc_feed__33__Vfuncout[7U] 
                                = __Vfunc_feed__33__ctx[7U];
                            __Vfunc_feed__33__Vfuncout[8U] 
                                = __Vfunc_feed__33__ctx[8U];
                            __Vfunc_feed__33__Vfuncout[9U] 
                                = __Vfunc_feed__33__ctx[9U];
                            __Vfunc_feed__33__Vfuncout[0xaU] 
                                = __Vfunc_feed__33__ctx[0xaU];
                            __Vlabel1: ;
                        }
                        __Vfunc_feed__11__ctx[5U] = 
                            ((0x1ffU & __Vfunc_feed__11__ctx[5U]) 
                             | (__Vfunc_feed__33__Vfuncout[0U] 
                                << 9U));
                        __Vfunc_feed__11__ctx[6U] = 
                            ((__Vfunc_feed__33__Vfuncout[0U] 
                              >> 0x17U) | (__Vfunc_feed__33__Vfuncout[1U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[7U] = 
                            ((__Vfunc_feed__33__Vfuncout[1U] 
                              >> 0x17U) | (__Vfunc_feed__33__Vfuncout[2U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[8U] = 
                            ((__Vfunc_feed__33__Vfuncout[2U] 
                              >> 0x17U) | (__Vfunc_feed__33__Vfuncout[3U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[9U] = 
                            ((__Vfunc_feed__33__Vfuncout[3U] 
                              >> 0x17U) | (__Vfunc_feed__33__Vfuncout[4U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[0xaU] 
                            = ((__Vfunc_feed__33__Vfuncout[4U] 
                                >> 0x17U) | (__Vfunc_feed__33__Vfuncout[5U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xbU] 
                            = ((__Vfunc_feed__33__Vfuncout[5U] 
                                >> 0x17U) | (__Vfunc_feed__33__Vfuncout[6U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xcU] 
                            = ((__Vfunc_feed__33__Vfuncout[6U] 
                                >> 0x17U) | (__Vfunc_feed__33__Vfuncout[7U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xdU] 
                            = ((__Vfunc_feed__33__Vfuncout[7U] 
                                >> 0x17U) | (__Vfunc_feed__33__Vfuncout[8U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xeU] 
                            = ((__Vfunc_feed__33__Vfuncout[8U] 
                                >> 0x17U) | (__Vfunc_feed__33__Vfuncout[9U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xfU] 
                            = ((__Vfunc_feed__33__Vfuncout[9U] 
                                >> 0x17U) | (__Vfunc_feed__33__Vfuncout[0xaU] 
                                             << 9U));
                        __Vfunc_feed__36__data = __Vfunc_feed__11__data;
                        __Vfunc_feed__36__in_ctx[0U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[0U] 
                               & ((__Vfunc_feed__11__ctx[6U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[5U] 
                                                >> 9U)));
                        __Vfunc_feed__36__in_ctx[1U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[1U] 
                               & ((__Vfunc_feed__11__ctx[7U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[6U] 
                                                >> 9U)));
                        __Vfunc_feed__36__in_ctx[2U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[2U] 
                               & ((__Vfunc_feed__11__ctx[8U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[7U] 
                                                >> 9U)));
                        __Vfunc_feed__36__in_ctx[3U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[3U] 
                               & ((__Vfunc_feed__11__ctx[9U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[8U] 
                                                >> 9U)));
                        __Vfunc_feed__36__in_ctx[4U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[4U] 
                               & ((__Vfunc_feed__11__ctx[0xaU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[9U] 
                                                >> 9U)));
                        __Vfunc_feed__36__in_ctx[5U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[5U] 
                               & ((__Vfunc_feed__11__ctx[0xbU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xaU] 
                                                >> 9U)));
                        __Vfunc_feed__36__in_ctx[6U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[6U] 
                               & ((__Vfunc_feed__11__ctx[0xcU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xbU] 
                                                >> 9U)));
                        __Vfunc_feed__36__in_ctx[7U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[7U] 
                               & ((__Vfunc_feed__11__ctx[0xdU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xcU] 
                                                >> 9U)));
                        __Vfunc_feed__36__in_ctx[8U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[8U] 
                               & ((__Vfunc_feed__11__ctx[0xeU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xdU] 
                                                >> 9U)));
                        __Vfunc_feed__36__in_ctx[9U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[9U] 
                               & ((__Vfunc_feed__11__ctx[0xfU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xeU] 
                                                >> 9U)));
                        __Vfunc_feed__36__in_ctx[0xaU] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[0xaU] 
                               & ((__Vfunc_feed__11__ctx[0x10U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xfU] 
                                                >> 9U)));
                        {
                            __Vfunc_feed__36__ctx[0U] 
                                = __Vfunc_feed__36__in_ctx[0U];
                            __Vfunc_feed__36__ctx[1U] 
                                = __Vfunc_feed__36__in_ctx[1U];
                            __Vfunc_feed__36__ctx[2U] 
                                = __Vfunc_feed__36__in_ctx[2U];
                            __Vfunc_feed__36__ctx[3U] 
                                = __Vfunc_feed__36__in_ctx[3U];
                            __Vfunc_feed__36__ctx[4U] 
                                = __Vfunc_feed__36__in_ctx[4U];
                            __Vfunc_feed__36__ctx[5U] 
                                = __Vfunc_feed__36__in_ctx[5U];
                            __Vfunc_feed__36__ctx[6U] 
                                = __Vfunc_feed__36__in_ctx[6U];
                            __Vfunc_feed__36__ctx[7U] 
                                = __Vfunc_feed__36__in_ctx[7U];
                            __Vfunc_feed__36__ctx[8U] 
                                = __Vfunc_feed__36__in_ctx[8U];
                            __Vfunc_feed__36__ctx[9U] 
                                = __Vfunc_feed__36__in_ctx[9U];
                            __Vfunc_feed__36__ctx[0xaU] 
                                = __Vfunc_feed__36__in_ctx[0xaU];
                            __Vfunc_feed__36__frame_error = 0U;
                            __Vfunc_make_default__37__r[0U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[0U];
                            __Vfunc_make_default__37__r[1U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[1U];
                            __Vfunc_make_default__37__r[2U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[2U];
                            __Vfunc_make_default__37__r[3U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[3U];
                            __Vfunc_make_default__37__r[4U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[4U];
                            __Vfunc_make_default__37__r[5U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[5U];
                            __Vfunc_make_default__37__r[6U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[6U];
                            __Vfunc_make_default__37__r[7U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[7U];
                            __Vfunc_make_default__37__r[8U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[8U];
                            __Vfunc_make_default__37__r[9U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[9U];
                            __Vfunc_make_default__37__r[0xaU] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[0xaU];
                            __Vfunc_make_default__37__Vfuncout[0U] 
                                = __Vfunc_make_default__37__r[0U];
                            __Vfunc_make_default__37__Vfuncout[1U] 
                                = __Vfunc_make_default__37__r[1U];
                            __Vfunc_make_default__37__Vfuncout[2U] 
                                = __Vfunc_make_default__37__r[2U];
                            __Vfunc_make_default__37__Vfuncout[3U] 
                                = __Vfunc_make_default__37__r[3U];
                            __Vfunc_make_default__37__Vfuncout[4U] 
                                = __Vfunc_make_default__37__r[4U];
                            __Vfunc_make_default__37__Vfuncout[5U] 
                                = __Vfunc_make_default__37__r[5U];
                            __Vfunc_make_default__37__Vfuncout[6U] 
                                = __Vfunc_make_default__37__r[6U];
                            __Vfunc_make_default__37__Vfuncout[7U] 
                                = __Vfunc_make_default__37__r[7U];
                            __Vfunc_make_default__37__Vfuncout[8U] 
                                = __Vfunc_make_default__37__r[8U];
                            __Vfunc_make_default__37__Vfuncout[9U] 
                                = __Vfunc_make_default__37__r[9U];
                            __Vfunc_make_default__37__Vfuncout[0xaU] 
                                = __Vfunc_make_default__37__r[0xaU];
                            __Vfunc_feed__36__out_frame[0U] 
                                = __Vfunc_make_default__37__Vfuncout[0U];
                            __Vfunc_feed__36__out_frame[1U] 
                                = __Vfunc_make_default__37__Vfuncout[1U];
                            __Vfunc_feed__36__out_frame[2U] 
                                = __Vfunc_make_default__37__Vfuncout[2U];
                            __Vfunc_feed__36__out_frame[3U] 
                                = __Vfunc_make_default__37__Vfuncout[3U];
                            __Vfunc_feed__36__out_frame[4U] 
                                = __Vfunc_make_default__37__Vfuncout[4U];
                            __Vfunc_feed__36__out_frame[5U] 
                                = __Vfunc_make_default__37__Vfuncout[5U];
                            __Vfunc_feed__36__out_frame[6U] 
                                = __Vfunc_make_default__37__Vfuncout[6U];
                            __Vfunc_feed__36__out_frame[7U] 
                                = __Vfunc_make_default__37__Vfuncout[7U];
                            __Vfunc_feed__36__out_frame[8U] 
                                = __Vfunc_make_default__37__Vfuncout[8U];
                            __Vfunc_feed__36__out_frame[9U] 
                                = __Vfunc_make_default__37__Vfuncout[9U];
                            __Vfunc_feed__36__out_frame[0xaU] 
                                = __Vfunc_make_default__37__Vfuncout[0xaU];
                            vlSymsp->TOP__move_queue_add_req_parser_pkg.__Vlvbound_heeac623e__0 
                                = __Vfunc_feed__36__data;
                            if (VL_LIKELY((0x156U >= 
                                           ((IData)(1U) 
                                            + (0x1ffU 
                                               & (((IData)(0x14fU) 
                                                   - 
                                                   VL_SHIFTL_III(9,32,32, 
                                                                 (0x3fU 
                                                                  & (__Vfunc_feed__36__ctx[0xaU] 
                                                                     >> 0x11U)), 3U)) 
                                                  - (IData)(7U))))))) {
                                VL_ASSIGNSEL_WI(343,8,
                                                ((IData)(1U) 
                                                 + 
                                                 (0x1ffU 
                                                  & (((IData)(0x14fU) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, 
                                                                    (0x3fU 
                                                                     & (__Vfunc_feed__36__ctx[0xaU] 
                                                                        >> 0x11U)), 3U)) 
                                                     - (IData)(7U)))), __Vfunc_feed__36__ctx, vlSymsp->TOP__move_queue_add_req_parser_pkg.__Vlvbound_heeac623e__0);
                            }
                            if ((0U == (0x3fU & (__Vfunc_feed__36__ctx[0xaU] 
                                                 >> 0x11U)))) {
                                if ((0xaaU != (IData)(__Vfunc_feed__36__data))) {
                                    __Vfunc_feed__36__frame_error = 1U;
                                }
                            } else if ((1U == (0x3fU 
                                               & (__Vfunc_feed__36__ctx[0xaU] 
                                                  >> 0x11U)))) {
                                if ((1U == (IData)(__Vfunc_feed__36__data))) {
                                    __Vfunc_feed__36__ctx[0U] 
                                        = ((0xfffffffeU 
                                            & __Vfunc_feed__36__ctx[0U]) 
                                           | (1U & 
                                              VL_REDXOR_8(__Vfunc_feed__36__data)));
                                } else {
                                    __Vfunc_feed__36__frame_error = 1U;
                                    __Vfunc_feed__36__ctx[0xaU] 
                                        = (0x1ffffU 
                                           & __Vfunc_feed__36__ctx[0xaU]);
                                    __Vfunc_feed__36__Vfuncout[0U] 
                                        = __Vfunc_feed__36__ctx[0U];
                                    __Vfunc_feed__36__Vfuncout[1U] 
                                        = __Vfunc_feed__36__ctx[1U];
                                    __Vfunc_feed__36__Vfuncout[2U] 
                                        = __Vfunc_feed__36__ctx[2U];
                                    __Vfunc_feed__36__Vfuncout[3U] 
                                        = __Vfunc_feed__36__ctx[3U];
                                    __Vfunc_feed__36__Vfuncout[4U] 
                                        = __Vfunc_feed__36__ctx[4U];
                                    __Vfunc_feed__36__Vfuncout[5U] 
                                        = __Vfunc_feed__36__ctx[5U];
                                    __Vfunc_feed__36__Vfuncout[6U] 
                                        = __Vfunc_feed__36__ctx[6U];
                                    __Vfunc_feed__36__Vfuncout[7U] 
                                        = __Vfunc_feed__36__ctx[7U];
                                    __Vfunc_feed__36__Vfuncout[8U] 
                                        = __Vfunc_feed__36__ctx[8U];
                                    __Vfunc_feed__36__Vfuncout[9U] 
                                        = __Vfunc_feed__36__ctx[9U];
                                    __Vfunc_feed__36__Vfuncout[0xaU] 
                                        = __Vfunc_feed__36__ctx[0xaU];
                                    goto __Vlabel2;
                                }
                            } else if ((0x28U == (0x3fU 
                                                  & (__Vfunc_feed__36__ctx[0xaU] 
                                                     >> 0x11U)))) {
                                if (((1U & (IData)(__Vfunc_feed__36__data)) 
                                     != (1U & __Vfunc_feed__36__ctx[0U]))) {
                                    __Vfunc_feed__36__frame_error = 1U;
                                    __Vfunc_feed__36__ctx[0xaU] 
                                        = (0x1ffffU 
                                           & __Vfunc_feed__36__ctx[0xaU]);
                                    __Vfunc_feed__36__ctx[0U] 
                                        = (0xfffffffeU 
                                           & __Vfunc_feed__36__ctx[0U]);
                                    __Vfunc_feed__36__Vfuncout[0U] 
                                        = __Vfunc_feed__36__ctx[0U];
                                    __Vfunc_feed__36__Vfuncout[1U] 
                                        = __Vfunc_feed__36__ctx[1U];
                                    __Vfunc_feed__36__Vfuncout[2U] 
                                        = __Vfunc_feed__36__ctx[2U];
                                    __Vfunc_feed__36__Vfuncout[3U] 
                                        = __Vfunc_feed__36__ctx[3U];
                                    __Vfunc_feed__36__Vfuncout[4U] 
                                        = __Vfunc_feed__36__ctx[4U];
                                    __Vfunc_feed__36__Vfuncout[5U] 
                                        = __Vfunc_feed__36__ctx[5U];
                                    __Vfunc_feed__36__Vfuncout[6U] 
                                        = __Vfunc_feed__36__ctx[6U];
                                    __Vfunc_feed__36__Vfuncout[7U] 
                                        = __Vfunc_feed__36__ctx[7U];
                                    __Vfunc_feed__36__Vfuncout[8U] 
                                        = __Vfunc_feed__36__ctx[8U];
                                    __Vfunc_feed__36__Vfuncout[9U] 
                                        = __Vfunc_feed__36__ctx[9U];
                                    __Vfunc_feed__36__Vfuncout[0xaU] 
                                        = __Vfunc_feed__36__ctx[0xaU];
                                    goto __Vlabel2;
                                }
                            } else if ((0x29U == (0x3fU 
                                                  & (__Vfunc_feed__36__ctx[0xaU] 
                                                     >> 0x11U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__36__data))) {
                                    __Vfunc_decoder__38__raw[0U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[0U] 
                                           & ((__Vfunc_feed__36__ctx[1U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__36__ctx[0U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__38__raw[1U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[1U] 
                                           & ((__Vfunc_feed__36__ctx[2U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__36__ctx[1U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__38__raw[2U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[2U] 
                                           & ((__Vfunc_feed__36__ctx[3U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__36__ctx[2U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__38__raw[3U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[3U] 
                                           & ((__Vfunc_feed__36__ctx[4U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__36__ctx[3U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__38__raw[4U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[4U] 
                                           & ((__Vfunc_feed__36__ctx[5U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__36__ctx[4U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__38__raw[5U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[5U] 
                                           & ((__Vfunc_feed__36__ctx[6U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__36__ctx[5U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__38__raw[6U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[6U] 
                                           & ((__Vfunc_feed__36__ctx[7U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__36__ctx[6U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__38__raw[7U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[7U] 
                                           & ((__Vfunc_feed__36__ctx[8U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__36__ctx[7U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__38__raw[8U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[8U] 
                                           & ((__Vfunc_feed__36__ctx[9U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__36__ctx[8U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__38__raw[9U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[9U] 
                                           & ((__Vfunc_feed__36__ctx[0xaU] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__36__ctx[9U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__38__raw[0xaU] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[0xaU] 
                                           & (__Vfunc_feed__36__ctx[0xaU] 
                                              >> 1U));
                                    __Vfunc_decoder__38__r[0U] 
                                        = __Vfunc_decoder__38__raw[0U];
                                    __Vfunc_decoder__38__r[1U] 
                                        = __Vfunc_decoder__38__raw[1U];
                                    __Vfunc_decoder__38__r[2U] 
                                        = __Vfunc_decoder__38__raw[2U];
                                    __Vfunc_decoder__38__r[3U] 
                                        = __Vfunc_decoder__38__raw[3U];
                                    __Vfunc_decoder__38__r[4U] 
                                        = __Vfunc_decoder__38__raw[4U];
                                    __Vfunc_decoder__38__r[5U] 
                                        = __Vfunc_decoder__38__raw[5U];
                                    __Vfunc_decoder__38__r[6U] 
                                        = __Vfunc_decoder__38__raw[6U];
                                    __Vfunc_decoder__38__r[7U] 
                                        = __Vfunc_decoder__38__raw[7U];
                                    __Vfunc_decoder__38__r[8U] 
                                        = __Vfunc_decoder__38__raw[8U];
                                    __Vfunc_decoder__38__r[9U] 
                                        = __Vfunc_decoder__38__raw[9U];
                                    __Vfunc_decoder__38__r[0xaU] 
                                        = __Vfunc_decoder__38__raw[0xaU];
                                    __Vfunc_decoder__38__Vfuncout[0U] 
                                        = __Vfunc_decoder__38__r[0U];
                                    __Vfunc_decoder__38__Vfuncout[1U] 
                                        = __Vfunc_decoder__38__r[1U];
                                    __Vfunc_decoder__38__Vfuncout[2U] 
                                        = __Vfunc_decoder__38__r[2U];
                                    __Vfunc_decoder__38__Vfuncout[3U] 
                                        = __Vfunc_decoder__38__r[3U];
                                    __Vfunc_decoder__38__Vfuncout[4U] 
                                        = __Vfunc_decoder__38__r[4U];
                                    __Vfunc_decoder__38__Vfuncout[5U] 
                                        = __Vfunc_decoder__38__r[5U];
                                    __Vfunc_decoder__38__Vfuncout[6U] 
                                        = __Vfunc_decoder__38__r[6U];
                                    __Vfunc_decoder__38__Vfuncout[7U] 
                                        = __Vfunc_decoder__38__r[7U];
                                    __Vfunc_decoder__38__Vfuncout[8U] 
                                        = __Vfunc_decoder__38__r[8U];
                                    __Vfunc_decoder__38__Vfuncout[9U] 
                                        = __Vfunc_decoder__38__r[9U];
                                    __Vfunc_decoder__38__Vfuncout[0xaU] 
                                        = __Vfunc_decoder__38__r[0xaU];
                                    __Vfunc_feed__36__unnamedblk1__DOT__tmp[0U] 
                                        = __Vfunc_decoder__38__Vfuncout[0U];
                                    __Vfunc_feed__36__unnamedblk1__DOT__tmp[1U] 
                                        = __Vfunc_decoder__38__Vfuncout[1U];
                                    __Vfunc_feed__36__unnamedblk1__DOT__tmp[2U] 
                                        = __Vfunc_decoder__38__Vfuncout[2U];
                                    __Vfunc_feed__36__unnamedblk1__DOT__tmp[3U] 
                                        = __Vfunc_decoder__38__Vfuncout[3U];
                                    __Vfunc_feed__36__unnamedblk1__DOT__tmp[4U] 
                                        = __Vfunc_decoder__38__Vfuncout[4U];
                                    __Vfunc_feed__36__unnamedblk1__DOT__tmp[5U] 
                                        = __Vfunc_decoder__38__Vfuncout[5U];
                                    __Vfunc_feed__36__unnamedblk1__DOT__tmp[6U] 
                                        = __Vfunc_decoder__38__Vfuncout[6U];
                                    __Vfunc_feed__36__unnamedblk1__DOT__tmp[7U] 
                                        = __Vfunc_decoder__38__Vfuncout[7U];
                                    __Vfunc_feed__36__unnamedblk1__DOT__tmp[8U] 
                                        = __Vfunc_decoder__38__Vfuncout[8U];
                                    __Vfunc_feed__36__unnamedblk1__DOT__tmp[9U] 
                                        = __Vfunc_decoder__38__Vfuncout[9U];
                                    __Vfunc_feed__36__unnamedblk1__DOT__tmp[0xaU] 
                                        = __Vfunc_decoder__38__Vfuncout[0xaU];
                                    __Vfunc_feed__36__out_frame[0U] 
                                        = __Vfunc_feed__36__unnamedblk1__DOT__tmp[0U];
                                    __Vfunc_feed__36__out_frame[1U] 
                                        = __Vfunc_feed__36__unnamedblk1__DOT__tmp[1U];
                                    __Vfunc_feed__36__out_frame[2U] 
                                        = __Vfunc_feed__36__unnamedblk1__DOT__tmp[2U];
                                    __Vfunc_feed__36__out_frame[3U] 
                                        = __Vfunc_feed__36__unnamedblk1__DOT__tmp[3U];
                                    __Vfunc_feed__36__out_frame[4U] 
                                        = __Vfunc_feed__36__unnamedblk1__DOT__tmp[4U];
                                    __Vfunc_feed__36__out_frame[5U] 
                                        = __Vfunc_feed__36__unnamedblk1__DOT__tmp[5U];
                                    __Vfunc_feed__36__out_frame[6U] 
                                        = __Vfunc_feed__36__unnamedblk1__DOT__tmp[6U];
                                    __Vfunc_feed__36__out_frame[7U] 
                                        = __Vfunc_feed__36__unnamedblk1__DOT__tmp[7U];
                                    __Vfunc_feed__36__out_frame[8U] 
                                        = __Vfunc_feed__36__unnamedblk1__DOT__tmp[8U];
                                    __Vfunc_feed__36__out_frame[9U] 
                                        = __Vfunc_feed__36__unnamedblk1__DOT__tmp[9U];
                                    __Vfunc_feed__36__out_frame[0xaU] 
                                        = __Vfunc_feed__36__unnamedblk1__DOT__tmp[0xaU];
                                } else {
                                    __Vfunc_feed__36__frame_error = 1U;
                                }
                                __Vfunc_feed__36__ctx[0xaU] 
                                    = (0x1ffffU & __Vfunc_feed__36__ctx[0xaU]);
                                __Vfunc_feed__36__ctx[0U] 
                                    = (0xfffffffeU 
                                       & __Vfunc_feed__36__ctx[0U]);
                                __Vfunc_feed__36__Vfuncout[0U] 
                                    = __Vfunc_feed__36__ctx[0U];
                                __Vfunc_feed__36__Vfuncout[1U] 
                                    = __Vfunc_feed__36__ctx[1U];
                                __Vfunc_feed__36__Vfuncout[2U] 
                                    = __Vfunc_feed__36__ctx[2U];
                                __Vfunc_feed__36__Vfuncout[3U] 
                                    = __Vfunc_feed__36__ctx[3U];
                                __Vfunc_feed__36__Vfuncout[4U] 
                                    = __Vfunc_feed__36__ctx[4U];
                                __Vfunc_feed__36__Vfuncout[5U] 
                                    = __Vfunc_feed__36__ctx[5U];
                                __Vfunc_feed__36__Vfuncout[6U] 
                                    = __Vfunc_feed__36__ctx[6U];
                                __Vfunc_feed__36__Vfuncout[7U] 
                                    = __Vfunc_feed__36__ctx[7U];
                                __Vfunc_feed__36__Vfuncout[8U] 
                                    = __Vfunc_feed__36__ctx[8U];
                                __Vfunc_feed__36__Vfuncout[9U] 
                                    = __Vfunc_feed__36__ctx[9U];
                                __Vfunc_feed__36__Vfuncout[0xaU] 
                                    = __Vfunc_feed__36__ctx[0xaU];
                                goto __Vlabel2;
                            } else if (((2U <= (0x3fU 
                                                & (__Vfunc_feed__36__ctx[0xaU] 
                                                   >> 0x11U))) 
                                        & (0x27U >= 
                                           (0x3fU & 
                                            (__Vfunc_feed__36__ctx[0xaU] 
                                             >> 0x11U))))) {
                                __Vfunc_feed__36__ctx[0U] 
                                    = ((0xfffffffeU 
                                        & __Vfunc_feed__36__ctx[0U]) 
                                       | (1U & (__Vfunc_feed__36__ctx[0U] 
                                                ^ VL_REDXOR_8(__Vfunc_feed__36__data))));
                            }
                            if (__Vfunc_feed__36__frame_error) {
                                __Vfunc_feed__36__ctx[0xaU] 
                                    = (0x1ffffU & __Vfunc_feed__36__ctx[0xaU]);
                                __Vfunc_feed__36__ctx[0U] 
                                    = (0xfffffffeU 
                                       & __Vfunc_feed__36__ctx[0U]);
                            } else if ((0x29U > (0x3fU 
                                                 & (__Vfunc_feed__36__ctx[0xaU] 
                                                    >> 0x11U)))) {
                                __Vfunc_feed__36__ctx[0xaU] 
                                    = ((0x1ffffU & 
                                        __Vfunc_feed__36__ctx[0xaU]) 
                                       | (0x7e0000U 
                                          & (((IData)(1U) 
                                              + ((__Vfunc_feed__36__ctx[0xaU] 
                                                  << 0xfU) 
                                                 | (__Vfunc_feed__36__ctx[0xaU] 
                                                    >> 0x11U))) 
                                             << 0x11U)));
                            }
                            __Vfunc_feed__36__Vfuncout[0U] 
                                = __Vfunc_feed__36__ctx[0U];
                            __Vfunc_feed__36__Vfuncout[1U] 
                                = __Vfunc_feed__36__ctx[1U];
                            __Vfunc_feed__36__Vfuncout[2U] 
                                = __Vfunc_feed__36__ctx[2U];
                            __Vfunc_feed__36__Vfuncout[3U] 
                                = __Vfunc_feed__36__ctx[3U];
                            __Vfunc_feed__36__Vfuncout[4U] 
                                = __Vfunc_feed__36__ctx[4U];
                            __Vfunc_feed__36__Vfuncout[5U] 
                                = __Vfunc_feed__36__ctx[5U];
                            __Vfunc_feed__36__Vfuncout[6U] 
                                = __Vfunc_feed__36__ctx[6U];
                            __Vfunc_feed__36__Vfuncout[7U] 
                                = __Vfunc_feed__36__ctx[7U];
                            __Vfunc_feed__36__Vfuncout[8U] 
                                = __Vfunc_feed__36__ctx[8U];
                            __Vfunc_feed__36__Vfuncout[9U] 
                                = __Vfunc_feed__36__ctx[9U];
                            __Vfunc_feed__36__Vfuncout[0xaU] 
                                = __Vfunc_feed__36__ctx[0xaU];
                            __Vlabel2: ;
                        }
                        __Vfunc_feed__11__ctx[5U] = 
                            ((0x1ffU & __Vfunc_feed__11__ctx[5U]) 
                             | (__Vfunc_feed__36__Vfuncout[0U] 
                                << 9U));
                        __Vfunc_feed__11__ctx[6U] = 
                            ((__Vfunc_feed__36__Vfuncout[0U] 
                              >> 0x17U) | (__Vfunc_feed__36__Vfuncout[1U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[7U] = 
                            ((__Vfunc_feed__36__Vfuncout[1U] 
                              >> 0x17U) | (__Vfunc_feed__36__Vfuncout[2U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[8U] = 
                            ((__Vfunc_feed__36__Vfuncout[2U] 
                              >> 0x17U) | (__Vfunc_feed__36__Vfuncout[3U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[9U] = 
                            ((__Vfunc_feed__36__Vfuncout[3U] 
                              >> 0x17U) | (__Vfunc_feed__36__Vfuncout[4U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[0xaU] 
                            = ((__Vfunc_feed__36__Vfuncout[4U] 
                                >> 0x17U) | (__Vfunc_feed__36__Vfuncout[5U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xbU] 
                            = ((__Vfunc_feed__36__Vfuncout[5U] 
                                >> 0x17U) | (__Vfunc_feed__36__Vfuncout[6U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xcU] 
                            = ((__Vfunc_feed__36__Vfuncout[6U] 
                                >> 0x17U) | (__Vfunc_feed__36__Vfuncout[7U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xdU] 
                            = ((__Vfunc_feed__36__Vfuncout[7U] 
                                >> 0x17U) | (__Vfunc_feed__36__Vfuncout[8U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xeU] 
                            = ((__Vfunc_feed__36__Vfuncout[8U] 
                                >> 0x17U) | (__Vfunc_feed__36__Vfuncout[9U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xfU] 
                            = ((__Vfunc_feed__36__Vfuncout[9U] 
                                >> 0x17U) | (__Vfunc_feed__36__Vfuncout[0xaU] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__11__ctx[0x16U]));
                    } else if ((6U == (IData)(__Vfunc_feed__11__data))) {
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0xa0000U | (0x61ffffU 
                                           & __Vfunc_feed__11__ctx[0x16U]));
                        __Vfunc_feed__11__ctx[4U] = 
                            (0x3002a80U | (0x7fU & 
                                           __Vfunc_feed__11__ctx[4U]));
                        __Vfunc_feed__11__ctx[5U] = 
                            (0x55U | (0xfffffe00U & 
                                      __Vfunc_feed__11__ctx[5U]));
                        __Vfunc_feed__41__data = (0xffU 
                                                  & (__Vfunc_feed__11__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__41__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__11__ctx[5U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__11__ctx[4U])) 
                                                  >> 7U)));
                        __Vfunc_feed__41__ctx = __Vfunc_feed__41__in_ctx;
                        if ((1U & (IData)((__Vfunc_feed__41__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__41__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__41__data))) {
                                    __Vfunc_feed__41__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__41__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__41__data)));
                                }
                                __Vfunc_feed__41__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__41__ctx);
                            } else {
                                __Vfunc_feed__41__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__41__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__41__data)) 
                                          << 8U));
                                __Vfunc_feed__41__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__41__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__41__ctx 
                                                  >> 0x20U)))) {
                            if ((6U == (IData)(__Vfunc_feed__41__data))) {
                                __Vfunc_feed__41__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__41__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__41__data)) 
                                          << 0x10U));
                                __Vfunc_feed__41__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__41__ctx));
                            } else {
                                __Vfunc_feed__41__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__41__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__41__data))) {
                            __Vfunc_feed__41__ctx = 
                                ((0xffffffULL & __Vfunc_feed__41__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__41__data)))) 
                                    << 0x18U));
                        }
                        __Vfunc_feed__41__Vfuncout 
                            = __Vfunc_feed__41__ctx;
                        __Vfunc_feed__11__ctx[4U] = 
                            ((0x7fU & __Vfunc_feed__11__ctx[4U]) 
                             | ((IData)(__Vfunc_feed__41__Vfuncout) 
                                << 7U));
                        __Vfunc_feed__11__ctx[5U] = 
                            ((0xfffffe00U & __Vfunc_feed__11__ctx[5U]) 
                             | (((IData)(__Vfunc_feed__41__Vfuncout) 
                                 >> 0x19U) | ((IData)(
                                                      (__Vfunc_feed__41__Vfuncout 
                                                       >> 0x20U)) 
                                              << 7U)));
                        __Vfunc_feed__42__data = __Vfunc_feed__11__data;
                        __Vfunc_feed__42__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__11__ctx[5U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__11__ctx[4U])) 
                                                  >> 7U)));
                        __Vfunc_feed__42__ctx = __Vfunc_feed__42__in_ctx;
                        __Vfunc_feed__42__out_frame 
                            = (IData)(__Vfunc_feed__42__ctx);
                        if ((1U & (IData)((__Vfunc_feed__42__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__42__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__42__data))) {
                                    __Vfunc_feed__42__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__42__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__42__data)));
                                    __Vfunc_feed__42__out_frame 
                                        = (IData)(__Vfunc_feed__42__ctx);
                                }
                                __Vfunc_feed__42__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__42__ctx);
                            } else {
                                __Vfunc_feed__42__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__42__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__42__data)) 
                                          << 8U));
                                __Vfunc_feed__42__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__42__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__42__ctx 
                                                  >> 0x20U)))) {
                            if ((6U == (IData)(__Vfunc_feed__42__data))) {
                                __Vfunc_feed__42__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__42__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__42__data)) 
                                          << 0x10U));
                                __Vfunc_feed__42__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__42__ctx));
                            } else {
                                __Vfunc_feed__42__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__42__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__42__data))) {
                            __Vfunc_feed__42__ctx = 
                                ((0xffffffULL & __Vfunc_feed__42__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__42__data)))) 
                                    << 0x18U));
                        }
                        __Vfunc_feed__42__Vfuncout 
                            = __Vfunc_feed__42__ctx;
                        __Vfunc_feed__11__ctx[4U] = 
                            ((0x7fU & __Vfunc_feed__11__ctx[4U]) 
                             | ((IData)(__Vfunc_feed__42__Vfuncout) 
                                << 7U));
                        __Vfunc_feed__11__ctx[5U] = 
                            ((0xfffffe00U & __Vfunc_feed__11__ctx[5U]) 
                             | (((IData)(__Vfunc_feed__42__Vfuncout) 
                                 >> 0x19U) | ((IData)(
                                                      (__Vfunc_feed__42__Vfuncout 
                                                       >> 0x20U)) 
                                              << 7U)));
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__11__ctx[0x16U]));
                    } else if ((2U == (IData)(__Vfunc_feed__11__data))) {
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0xc0000U | (0x61ffffU 
                                           & __Vfunc_feed__11__ctx[0x16U]));
                        __Vfunc_feed__11__ctx[3U] = 
                            (0x40400aa0U | (0x1fU & 
                                            __Vfunc_feed__11__ctx[3U]));
                        __Vfunc_feed__11__ctx[4U] = 
                            (0x15U | (0xffffff80U & 
                                      __Vfunc_feed__11__ctx[4U]));
                        __Vfunc_feed__45__data = (0xffU 
                                                  & (__Vfunc_feed__11__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__45__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__11__ctx[4U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__11__ctx[3U])) 
                                                  >> 5U)));
                        __Vfunc_feed__45__ctx = __Vfunc_feed__45__in_ctx;
                        if ((1U & (IData)((__Vfunc_feed__45__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__45__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__45__data))) {
                                    __Vfunc_feed__45__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__45__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__45__data)));
                                }
                                __Vfunc_feed__45__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__45__ctx);
                            } else {
                                __Vfunc_feed__45__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__45__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__45__data)) 
                                          << 8U));
                                __Vfunc_feed__45__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__45__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__45__ctx 
                                                  >> 0x20U)))) {
                            if ((2U == (IData)(__Vfunc_feed__45__data))) {
                                __Vfunc_feed__45__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__45__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__45__data)) 
                                          << 0x10U));
                                __Vfunc_feed__45__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__45__ctx));
                            } else {
                                __Vfunc_feed__45__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__45__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__45__data))) {
                            __Vfunc_feed__45__ctx = 
                                ((0xffffffULL & __Vfunc_feed__45__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__45__data)))) 
                                    << 0x18U));
                        }
                        __Vfunc_feed__45__Vfuncout 
                            = __Vfunc_feed__45__ctx;
                        __Vfunc_feed__11__ctx[3U] = 
                            ((0x1fU & __Vfunc_feed__11__ctx[3U]) 
                             | ((IData)(__Vfunc_feed__45__Vfuncout) 
                                << 5U));
                        __Vfunc_feed__11__ctx[4U] = 
                            ((0xffffff80U & __Vfunc_feed__11__ctx[4U]) 
                             | (((IData)(__Vfunc_feed__45__Vfuncout) 
                                 >> 0x1bU) | ((IData)(
                                                      (__Vfunc_feed__45__Vfuncout 
                                                       >> 0x20U)) 
                                              << 5U)));
                        __Vfunc_feed__46__data = __Vfunc_feed__11__data;
                        __Vfunc_feed__46__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__11__ctx[4U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__11__ctx[3U])) 
                                                  >> 5U)));
                        __Vfunc_feed__46__ctx = __Vfunc_feed__46__in_ctx;
                        __Vfunc_feed__46__out_frame 
                            = (IData)(__Vfunc_feed__46__ctx);
                        if ((1U & (IData)((__Vfunc_feed__46__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__46__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__46__data))) {
                                    __Vfunc_feed__46__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__46__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__46__data)));
                                    __Vfunc_feed__46__out_frame 
                                        = (IData)(__Vfunc_feed__46__ctx);
                                }
                                __Vfunc_feed__46__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__46__ctx);
                            } else {
                                __Vfunc_feed__46__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__46__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__46__data)) 
                                          << 8U));
                                __Vfunc_feed__46__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__46__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__46__ctx 
                                                  >> 0x20U)))) {
                            if ((2U == (IData)(__Vfunc_feed__46__data))) {
                                __Vfunc_feed__46__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__46__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__46__data)) 
                                          << 0x10U));
                                __Vfunc_feed__46__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__46__ctx));
                            } else {
                                __Vfunc_feed__46__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__46__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__46__data))) {
                            __Vfunc_feed__46__ctx = 
                                ((0xffffffULL & __Vfunc_feed__46__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__46__data)))) 
                                    << 0x18U));
                        }
                        __Vfunc_feed__46__Vfuncout 
                            = __Vfunc_feed__46__ctx;
                        __Vfunc_feed__11__ctx[3U] = 
                            ((0x1fU & __Vfunc_feed__11__ctx[3U]) 
                             | ((IData)(__Vfunc_feed__46__Vfuncout) 
                                << 5U));
                        __Vfunc_feed__11__ctx[4U] = 
                            ((0xffffff80U & __Vfunc_feed__11__ctx[4U]) 
                             | (((IData)(__Vfunc_feed__46__Vfuncout) 
                                 >> 0x1bU) | ((IData)(
                                                      (__Vfunc_feed__46__Vfuncout 
                                                       >> 0x20U)) 
                                              << 5U)));
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__11__ctx[0x16U]));
                    } else if ((0x20U == (IData)(__Vfunc_feed__11__data))) {
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0xe0000U | (0x61ffffU 
                                           & __Vfunc_feed__11__ctx[0x16U]));
                        __Vfunc_feed__11__ctx[2U] = 
                            (0x510002a8U | (7U & __Vfunc_feed__11__ctx[2U]));
                        __Vfunc_feed__11__ctx[3U] = 
                            (5U | (0xffffffe0U & __Vfunc_feed__11__ctx[3U]));
                        __Vfunc_feed__49__data = (0xffU 
                                                  & (__Vfunc_feed__11__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__49__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__11__ctx[3U])) 
                                                << 0x1dU) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__11__ctx[2U])) 
                                                  >> 3U)));
                        __Vfunc_feed__49__ctx = __Vfunc_feed__49__in_ctx;
                        if ((1U & (IData)((__Vfunc_feed__49__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__49__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__49__data))) {
                                    __Vfunc_feed__49__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__49__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__49__data)));
                                }
                                __Vfunc_feed__49__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__49__ctx);
                            } else {
                                __Vfunc_feed__49__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__49__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__49__data)) 
                                          << 8U));
                                __Vfunc_feed__49__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__49__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__49__ctx 
                                                  >> 0x20U)))) {
                            if ((0x20U == (IData)(__Vfunc_feed__49__data))) {
                                __Vfunc_feed__49__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__49__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__49__data)) 
                                          << 0x10U));
                                __Vfunc_feed__49__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__49__ctx));
                            } else {
                                __Vfunc_feed__49__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__49__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__49__data))) {
                            __Vfunc_feed__49__ctx = 
                                ((0xffffffULL & __Vfunc_feed__49__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__49__data)))) 
                                    << 0x18U));
                        }
                        __Vfunc_feed__49__Vfuncout 
                            = __Vfunc_feed__49__ctx;
                        __Vfunc_feed__11__ctx[2U] = 
                            ((7U & __Vfunc_feed__11__ctx[2U]) 
                             | ((IData)(__Vfunc_feed__49__Vfuncout) 
                                << 3U));
                        __Vfunc_feed__11__ctx[3U] = 
                            ((0xffffffe0U & __Vfunc_feed__11__ctx[3U]) 
                             | (((IData)(__Vfunc_feed__49__Vfuncout) 
                                 >> 0x1dU) | ((IData)(
                                                      (__Vfunc_feed__49__Vfuncout 
                                                       >> 0x20U)) 
                                              << 3U)));
                        __Vfunc_feed__50__data = __Vfunc_feed__11__data;
                        __Vfunc_feed__50__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__11__ctx[3U])) 
                                                << 0x1dU) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__11__ctx[2U])) 
                                                  >> 3U)));
                        __Vfunc_feed__50__ctx = __Vfunc_feed__50__in_ctx;
                        __Vfunc_feed__50__out_frame 
                            = (IData)(__Vfunc_feed__50__ctx);
                        if ((1U & (IData)((__Vfunc_feed__50__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__50__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__50__data))) {
                                    __Vfunc_feed__50__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__50__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__50__data)));
                                    __Vfunc_feed__50__out_frame 
                                        = (IData)(__Vfunc_feed__50__ctx);
                                }
                                __Vfunc_feed__50__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__50__ctx);
                            } else {
                                __Vfunc_feed__50__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__50__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__50__data)) 
                                          << 8U));
                                __Vfunc_feed__50__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__50__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__50__ctx 
                                                  >> 0x20U)))) {
                            if ((0x20U == (IData)(__Vfunc_feed__50__data))) {
                                __Vfunc_feed__50__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__50__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__50__data)) 
                                          << 0x10U));
                                __Vfunc_feed__50__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__50__ctx));
                            } else {
                                __Vfunc_feed__50__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__50__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__50__data))) {
                            __Vfunc_feed__50__ctx = 
                                ((0xffffffULL & __Vfunc_feed__50__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__50__data)))) 
                                    << 0x18U));
                        }
                        __Vfunc_feed__50__Vfuncout 
                            = __Vfunc_feed__50__ctx;
                        __Vfunc_feed__11__ctx[2U] = 
                            ((7U & __Vfunc_feed__11__ctx[2U]) 
                             | ((IData)(__Vfunc_feed__50__Vfuncout) 
                                << 3U));
                        __Vfunc_feed__11__ctx[3U] = 
                            ((0xffffffe0U & __Vfunc_feed__11__ctx[3U]) 
                             | (((IData)(__Vfunc_feed__50__Vfuncout) 
                                 >> 0x1dU) | ((IData)(
                                                      (__Vfunc_feed__50__Vfuncout 
                                                       >> 0x20U)) 
                                              << 3U)));
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__11__ctx[0x16U]));
                    } else {
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0x100000U | (0x61ffffU 
                                            & __Vfunc_feed__11__ctx[0x16U]));
                        __Vfunc_feed__11__ctx[0U] = 0x5500U;
                        __Vfunc_feed__11__ctx[1U] = 0xaa070000U;
                        __Vfunc_feed__11__ctx[2U] = 
                            (0xfffffff8U & __Vfunc_feed__11__ctx[2U]);
                        __Vfunc_feed__53__data = (0xffU 
                                                  & (__Vfunc_feed__11__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__53__in_ctx[0U] 
                            = __Vfunc_feed__11__ctx[0U];
                        __Vfunc_feed__53__in_ctx[1U] 
                            = __Vfunc_feed__11__ctx[1U];
                        __Vfunc_feed__53__in_ctx[2U] 
                            = (7U & __Vfunc_feed__11__ctx[2U]);
                        __Vfunc_feed__53__ctx[0U] = 
                            __Vfunc_feed__53__in_ctx[0U];
                        __Vfunc_feed__53__ctx[1U] = 
                            __Vfunc_feed__53__in_ctx[1U];
                        __Vfunc_feed__53__ctx[2U] = 
                            __Vfunc_feed__53__in_ctx[2U];
                        if ((4U & __Vfunc_feed__53__ctx[2U])) {
                            if ((2U & __Vfunc_feed__53__ctx[2U])) {
                                if ((1U & __Vfunc_feed__53__ctx[2U])) {
                                    __Vfunc_feed__53__ctx[2U] = 0U;
                                } else {
                                    if ((0x55U == (IData)(__Vfunc_feed__53__data))) {
                                        __Vfunc_feed__53__ctx[0U] 
                                            = ((0xffff00ffU 
                                                & __Vfunc_feed__53__ctx[0U]) 
                                               | ((IData)(__Vfunc_feed__53__data) 
                                                  << 8U));
                                    }
                                    __Vfunc_feed__53__ctx[2U] = 0U;
                                }
                            } else if ((1U & __Vfunc_feed__53__ctx[2U])) {
                                __Vfunc_feed__53__ctx[0U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__53__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__53__data) 
                                          << 0x10U));
                                __Vfunc_feed__53__ctx[2U] 
                                    = (((IData)(__Vfunc_feed__53__data) 
                                        == (0xffU & 
                                            __Vfunc_feed__53__ctx[0U]))
                                        ? 6U : 0U);
                            } else {
                                __Vfunc_feed__53__ctx[0U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__53__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__53__data) 
                                          << 0x18U));
                                __Vfunc_feed__53__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__53__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__53__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__53__data))));
                                __Vfunc_feed__53__ctx[2U] = 5U;
                            }
                        } else if ((2U & __Vfunc_feed__53__ctx[2U])) {
                            if ((1U & __Vfunc_feed__53__ctx[2U])) {
                                __Vfunc_feed__53__ctx[1U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__53__ctx[1U]) 
                                       | (IData)(__Vfunc_feed__53__data));
                                __Vfunc_feed__53__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__53__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__53__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__53__data))));
                                __Vfunc_feed__53__ctx[2U] = 4U;
                            } else {
                                __Vfunc_feed__53__ctx[1U] 
                                    = ((0xffff00ffU 
                                        & __Vfunc_feed__53__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__53__data) 
                                          << 8U));
                                __Vfunc_feed__53__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__53__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__53__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__53__data))));
                                __Vfunc_feed__53__ctx[2U] = 3U;
                            }
                        } else if ((1U & __Vfunc_feed__53__ctx[2U])) {
                            if ((7U == (IData)(__Vfunc_feed__53__data))) {
                                __Vfunc_feed__53__ctx[1U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__53__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__53__data) 
                                          << 0x10U));
                                __Vfunc_feed__53__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__53__ctx[0U]) 
                                       | (IData)(__Vfunc_feed__53__data));
                                __Vfunc_feed__53__ctx[2U] = 2U;
                            } else {
                                __Vfunc_feed__53__ctx[2U] = 0U;
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__53__data))) {
                            __Vfunc_feed__53__ctx[1U] 
                                = ((0xffffffU & __Vfunc_feed__53__ctx[1U]) 
                                   | ((IData)(__Vfunc_feed__53__data) 
                                      << 0x18U));
                            __Vfunc_feed__53__ctx[2U] 
                                = (7U & (1U | ((IData)(__Vfunc_feed__53__data) 
                                               >> 8U)));
                            __Vfunc_feed__53__ctx[0U] 
                                = (0xffffff00U & __Vfunc_feed__53__ctx[0U]);
                        }
                        __Vfunc_feed__53__Vfuncout[0U] 
                            = __Vfunc_feed__53__ctx[0U];
                        __Vfunc_feed__53__Vfuncout[1U] 
                            = __Vfunc_feed__53__ctx[1U];
                        __Vfunc_feed__53__Vfuncout[2U] 
                            = __Vfunc_feed__53__ctx[2U];
                        __Vfunc_feed__11__ctx[0U] = 
                            __Vfunc_feed__53__Vfuncout[0U];
                        __Vfunc_feed__11__ctx[1U] = 
                            __Vfunc_feed__53__Vfuncout[1U];
                        __Vfunc_feed__11__ctx[2U] = 
                            ((0xfffffff8U & __Vfunc_feed__11__ctx[2U]) 
                             | __Vfunc_feed__53__Vfuncout[2U]);
                        __Vfunc_feed__54__data = __Vfunc_feed__11__data;
                        __Vfunc_feed__54__in_ctx[0U] 
                            = __Vfunc_feed__11__ctx[0U];
                        __Vfunc_feed__54__in_ctx[1U] 
                            = __Vfunc_feed__11__ctx[1U];
                        __Vfunc_feed__54__in_ctx[2U] 
                            = (7U & __Vfunc_feed__11__ctx[2U]);
                        __Vfunc_feed__54__ctx[0U] = 
                            __Vfunc_feed__54__in_ctx[0U];
                        __Vfunc_feed__54__ctx[1U] = 
                            __Vfunc_feed__54__in_ctx[1U];
                        __Vfunc_feed__54__ctx[2U] = 
                            __Vfunc_feed__54__in_ctx[2U];
                        __Vfunc_feed__54__out_frame 
                            = (0xffffffffffffffULL 
                               & (((QData)((IData)(
                                                   __Vfunc_feed__54__ctx[1U])) 
                                   << 0x18U) | ((QData)((IData)(
                                                                __Vfunc_feed__54__ctx[0U])) 
                                                >> 8U)));
                        if ((4U & __Vfunc_feed__54__ctx[2U])) {
                            if ((2U & __Vfunc_feed__54__ctx[2U])) {
                                if ((1U & __Vfunc_feed__54__ctx[2U])) {
                                    __Vfunc_feed__54__ctx[2U] = 0U;
                                } else {
                                    if ((0x55U == (IData)(__Vfunc_feed__54__data))) {
                                        __Vfunc_feed__54__ctx[0U] 
                                            = ((0xffff00ffU 
                                                & __Vfunc_feed__54__ctx[0U]) 
                                               | ((IData)(__Vfunc_feed__54__data) 
                                                  << 8U));
                                        __Vfunc_feed__54__out_frame 
                                            = (0xffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   __Vfunc_feed__54__ctx[1U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     __Vfunc_feed__54__ctx[0U])) 
                                                     >> 8U)));
                                    }
                                    __Vfunc_feed__54__ctx[2U] = 0U;
                                }
                            } else if ((1U & __Vfunc_feed__54__ctx[2U])) {
                                __Vfunc_feed__54__ctx[0U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__54__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__54__data) 
                                          << 0x10U));
                                __Vfunc_feed__54__ctx[2U] 
                                    = (((IData)(__Vfunc_feed__54__data) 
                                        == (0xffU & 
                                            __Vfunc_feed__54__ctx[0U]))
                                        ? 6U : 0U);
                            } else {
                                __Vfunc_feed__54__ctx[0U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__54__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__54__data) 
                                          << 0x18U));
                                __Vfunc_feed__54__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__54__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__54__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__54__data))));
                                __Vfunc_feed__54__ctx[2U] = 5U;
                            }
                        } else if ((2U & __Vfunc_feed__54__ctx[2U])) {
                            if ((1U & __Vfunc_feed__54__ctx[2U])) {
                                __Vfunc_feed__54__ctx[1U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__54__ctx[1U]) 
                                       | (IData)(__Vfunc_feed__54__data));
                                __Vfunc_feed__54__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__54__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__54__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__54__data))));
                                __Vfunc_feed__54__ctx[2U] = 4U;
                            } else {
                                __Vfunc_feed__54__ctx[1U] 
                                    = ((0xffff00ffU 
                                        & __Vfunc_feed__54__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__54__data) 
                                          << 8U));
                                __Vfunc_feed__54__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__54__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__54__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__54__data))));
                                __Vfunc_feed__54__ctx[2U] = 3U;
                            }
                        } else if ((1U & __Vfunc_feed__54__ctx[2U])) {
                            if ((7U == (IData)(__Vfunc_feed__54__data))) {
                                __Vfunc_feed__54__ctx[1U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__54__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__54__data) 
                                          << 0x10U));
                                __Vfunc_feed__54__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__54__ctx[0U]) 
                                       | (IData)(__Vfunc_feed__54__data));
                                __Vfunc_feed__54__ctx[2U] = 2U;
                            } else {
                                __Vfunc_feed__54__ctx[2U] = 0U;
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__54__data))) {
                            __Vfunc_feed__54__ctx[1U] 
                                = ((0xffffffU & __Vfunc_feed__54__ctx[1U]) 
                                   | ((IData)(__Vfunc_feed__54__data) 
                                      << 0x18U));
                            __Vfunc_feed__54__ctx[2U] 
                                = (7U & (1U | ((IData)(__Vfunc_feed__54__data) 
                                               >> 8U)));
                            __Vfunc_feed__54__ctx[0U] 
                                = (0xffffff00U & __Vfunc_feed__54__ctx[0U]);
                        }
                        __Vfunc_feed__54__Vfuncout[0U] 
                            = __Vfunc_feed__54__ctx[0U];
                        __Vfunc_feed__54__Vfuncout[1U] 
                            = __Vfunc_feed__54__ctx[1U];
                        __Vfunc_feed__54__Vfuncout[2U] 
                            = __Vfunc_feed__54__ctx[2U];
                        __Vfunc_feed__11__led_ctrl_frame 
                            = __Vfunc_feed__54__out_frame;
                        __Vfunc_feed__11__ctx[0U] = 
                            __Vfunc_feed__54__Vfuncout[0U];
                        __Vfunc_feed__11__ctx[1U] = 
                            __Vfunc_feed__54__Vfuncout[1U];
                        __Vfunc_feed__11__ctx[2U] = 
                            ((0xfffffff8U & __Vfunc_feed__11__ctx[2U]) 
                             | __Vfunc_feed__54__Vfuncout[2U]);
                        __Vfunc_feed__11__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__11__ctx[0x16U]));
                    }
                } else {
                    __Vfunc_feed__11__frame_error = 1U;
                    __Vfunc_feed__11__ctx[0x16U] = 
                        (0x1ffffU & __Vfunc_feed__11__ctx[0x16U]);
                }
            } else if ((2U == (3U & (__Vfunc_feed__11__ctx[0x16U] 
                                     >> 0x15U)))) {
                if ((0x100000U & __Vfunc_feed__11__ctx[0x16U])) {
                    if ((0x80000U & __Vfunc_feed__11__ctx[0x16U])) {
                        __Vfunc_feed__11__frame_error = 1U;
                    } else if ((0x40000U & __Vfunc_feed__11__ctx[0x16U])) {
                        __Vfunc_feed__11__frame_error = 1U;
                    } else if ((0x20000U & __Vfunc_feed__11__ctx[0x16U])) {
                        __Vfunc_feed__11__frame_error = 1U;
                    } else {
                        __Vfunc_feed__55__data = __Vfunc_feed__11__data;
                        __Vfunc_feed__55__in_ctx[0U] 
                            = __Vfunc_feed__11__ctx[0U];
                        __Vfunc_feed__55__in_ctx[1U] 
                            = __Vfunc_feed__11__ctx[1U];
                        __Vfunc_feed__55__in_ctx[2U] 
                            = (7U & __Vfunc_feed__11__ctx[2U]);
                        __Vfunc_feed__55__ctx[0U] = 
                            __Vfunc_feed__55__in_ctx[0U];
                        __Vfunc_feed__55__ctx[1U] = 
                            __Vfunc_feed__55__in_ctx[1U];
                        __Vfunc_feed__55__ctx[2U] = 
                            __Vfunc_feed__55__in_ctx[2U];
                        __Vfunc_feed__55__frame_valid = 0U;
                        __Vfunc_feed__55__frame_error = 0U;
                        __Vfunc_feed__55__out_frame 
                            = (0xffffffffffffffULL 
                               & (((QData)((IData)(
                                                   __Vfunc_feed__55__ctx[1U])) 
                                   << 0x18U) | ((QData)((IData)(
                                                                __Vfunc_feed__55__ctx[0U])) 
                                                >> 8U)));
                        if ((4U & __Vfunc_feed__55__ctx[2U])) {
                            if ((2U & __Vfunc_feed__55__ctx[2U])) {
                                if ((1U & __Vfunc_feed__55__ctx[2U])) {
                                    __Vfunc_feed__55__frame_error = 1U;
                                    __Vfunc_feed__55__ctx[2U] = 0U;
                                } else {
                                    if ((0x55U == (IData)(__Vfunc_feed__55__data))) {
                                        __Vfunc_feed__55__ctx[0U] 
                                            = ((0xffff00ffU 
                                                & __Vfunc_feed__55__ctx[0U]) 
                                               | ((IData)(__Vfunc_feed__55__data) 
                                                  << 8U));
                                        __Vfunc_feed__55__frame_valid = 1U;
                                        __Vfunc_feed__55__out_frame 
                                            = (0xffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   __Vfunc_feed__55__ctx[1U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     __Vfunc_feed__55__ctx[0U])) 
                                                     >> 8U)));
                                    } else {
                                        __Vfunc_feed__55__frame_error = 1U;
                                    }
                                    __Vfunc_feed__55__ctx[2U] = 0U;
                                }
                            } else if ((1U & __Vfunc_feed__55__ctx[2U])) {
                                __Vfunc_feed__55__ctx[0U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__55__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__55__data) 
                                          << 0x10U));
                                if (((IData)(__Vfunc_feed__55__data) 
                                     == (0xffU & __Vfunc_feed__55__ctx[0U]))) {
                                    __Vfunc_feed__55__ctx[2U] = 6U;
                                } else {
                                    __Vfunc_feed__55__frame_error = 1U;
                                    __Vfunc_feed__55__ctx[2U] = 0U;
                                }
                            } else {
                                __Vfunc_feed__55__ctx[0U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__55__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__55__data) 
                                          << 0x18U));
                                __Vfunc_feed__55__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__55__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__55__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__55__data))));
                                __Vfunc_feed__55__ctx[2U] = 5U;
                            }
                        } else if ((2U & __Vfunc_feed__55__ctx[2U])) {
                            if ((1U & __Vfunc_feed__55__ctx[2U])) {
                                __Vfunc_feed__55__ctx[1U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__55__ctx[1U]) 
                                       | (IData)(__Vfunc_feed__55__data));
                                __Vfunc_feed__55__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__55__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__55__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__55__data))));
                                __Vfunc_feed__55__ctx[2U] = 4U;
                            } else {
                                __Vfunc_feed__55__ctx[1U] 
                                    = ((0xffff00ffU 
                                        & __Vfunc_feed__55__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__55__data) 
                                          << 8U));
                                __Vfunc_feed__55__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__55__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__55__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__55__data))));
                                __Vfunc_feed__55__ctx[2U] = 3U;
                            }
                        } else if ((1U & __Vfunc_feed__55__ctx[2U])) {
                            if ((7U == (IData)(__Vfunc_feed__55__data))) {
                                __Vfunc_feed__55__ctx[1U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__55__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__55__data) 
                                          << 0x10U));
                                __Vfunc_feed__55__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__55__ctx[0U]) 
                                       | (IData)(__Vfunc_feed__55__data));
                                __Vfunc_feed__55__ctx[2U] = 2U;
                            } else {
                                __Vfunc_feed__55__frame_error = 1U;
                                __Vfunc_feed__55__ctx[2U] = 0U;
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__55__data))) {
                            __Vfunc_feed__55__ctx[1U] 
                                = ((0xffffffU & __Vfunc_feed__55__ctx[1U]) 
                                   | ((IData)(__Vfunc_feed__55__data) 
                                      << 0x18U));
                            __Vfunc_feed__55__ctx[2U] 
                                = (7U & (1U | ((IData)(__Vfunc_feed__55__data) 
                                               >> 8U)));
                            __Vfunc_feed__55__ctx[0U] 
                                = (0xffffff00U & __Vfunc_feed__55__ctx[0U]);
                        } else {
                            __Vfunc_feed__55__frame_error = 1U;
                        }
                        __Vfunc_feed__55__Vfuncout[0U] 
                            = __Vfunc_feed__55__ctx[0U];
                        __Vfunc_feed__55__Vfuncout[1U] 
                            = __Vfunc_feed__55__ctx[1U];
                        __Vfunc_feed__55__Vfuncout[2U] 
                            = __Vfunc_feed__55__ctx[2U];
                        __Vfunc_feed__11__frame_valid 
                            = __Vfunc_feed__55__frame_valid;
                        __Vfunc_feed__11__frame_error 
                            = __Vfunc_feed__55__frame_error;
                        __Vfunc_feed__11__led_ctrl_frame 
                            = __Vfunc_feed__55__out_frame;
                        __Vfunc_feed__11__ctx[0U] = 
                            __Vfunc_feed__55__Vfuncout[0U];
                        __Vfunc_feed__11__ctx[1U] = 
                            __Vfunc_feed__55__Vfuncout[1U];
                        __Vfunc_feed__11__ctx[2U] = 
                            ((0xfffffff8U & __Vfunc_feed__11__ctx[2U]) 
                             | __Vfunc_feed__55__Vfuncout[2U]);
                        __Vfunc_feed__11__out_msgType = 7U;
                    }
                } else if ((0x80000U & __Vfunc_feed__11__ctx[0x16U])) {
                    if ((0x40000U & __Vfunc_feed__11__ctx[0x16U])) {
                        if ((0x20000U & __Vfunc_feed__11__ctx[0x16U])) {
                            __Vfunc_feed__56__data 
                                = __Vfunc_feed__11__data;
                            __Vfunc_feed__56__in_ctx 
                                = (0x3ffffffffULL & 
                                   (((QData)((IData)(
                                                     __Vfunc_feed__11__ctx[3U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  __Vfunc_feed__11__ctx[2U])) 
                                                  >> 3U)));
                            __Vfunc_feed__56__ctx = __Vfunc_feed__56__in_ctx;
                            __Vfunc_feed__56__frame_valid = 0U;
                            __Vfunc_feed__56__frame_error = 0U;
                            __Vfunc_feed__56__out_frame 
                                = (IData)(__Vfunc_feed__56__ctx);
                            if ((1U & (IData)((__Vfunc_feed__56__ctx 
                                               >> 0x21U)))) {
                                if ((1U & (IData)((__Vfunc_feed__56__ctx 
                                                   >> 0x20U)))) {
                                    if ((0x55U == (IData)(__Vfunc_feed__56__data))) {
                                        __Vfunc_feed__56__ctx 
                                            = ((0x3ffffff00ULL 
                                                & __Vfunc_feed__56__ctx) 
                                               | (IData)((IData)(__Vfunc_feed__56__data)));
                                        __Vfunc_feed__56__frame_valid = 1U;
                                        __Vfunc_feed__56__out_frame 
                                            = (IData)(__Vfunc_feed__56__ctx);
                                    } else {
                                        __Vfunc_feed__56__frame_error = 1U;
                                    }
                                    __Vfunc_feed__56__ctx 
                                        = (0xffffffffULL 
                                           & __Vfunc_feed__56__ctx);
                                } else {
                                    __Vfunc_feed__56__ctx 
                                        = ((0x3ffff00ffULL 
                                            & __Vfunc_feed__56__ctx) 
                                           | ((QData)((IData)(__Vfunc_feed__56__data)) 
                                              << 8U));
                                    __Vfunc_feed__56__ctx 
                                        = (0x300000000ULL 
                                           | __Vfunc_feed__56__ctx);
                                }
                            } else if ((1U & (IData)(
                                                     (__Vfunc_feed__56__ctx 
                                                      >> 0x20U)))) {
                                if ((0x20U == (IData)(__Vfunc_feed__56__data))) {
                                    __Vfunc_feed__56__ctx 
                                        = ((0x3ff00ffffULL 
                                            & __Vfunc_feed__56__ctx) 
                                           | ((QData)((IData)(__Vfunc_feed__56__data)) 
                                              << 0x10U));
                                    __Vfunc_feed__56__ctx 
                                        = (0x200000000ULL 
                                           | (0xffffffffULL 
                                              & __Vfunc_feed__56__ctx));
                                } else {
                                    __Vfunc_feed__56__frame_error = 1U;
                                    __Vfunc_feed__56__ctx 
                                        = (0xffffffffULL 
                                           & __Vfunc_feed__56__ctx);
                                }
                            } else if ((0xaaU == (IData)(__Vfunc_feed__56__data))) {
                                __Vfunc_feed__56__ctx 
                                    = ((0xffffffULL 
                                        & __Vfunc_feed__56__ctx) 
                                       | ((QData)((IData)(
                                                          (0x100U 
                                                           | (IData)(__Vfunc_feed__56__data)))) 
                                          << 0x18U));
                            } else {
                                __Vfunc_feed__56__frame_error = 1U;
                            }
                            __Vfunc_feed__56__Vfuncout 
                                = __Vfunc_feed__56__ctx;
                            __Vfunc_feed__11__frame_valid 
                                = __Vfunc_feed__56__frame_valid;
                            __Vfunc_feed__11__frame_error 
                                = __Vfunc_feed__56__frame_error;
                            __Vfunc_feed__11__ctx[2U] 
                                = ((7U & __Vfunc_feed__11__ctx[2U]) 
                                   | ((IData)(__Vfunc_feed__56__Vfuncout) 
                                      << 3U));
                            __Vfunc_feed__11__ctx[3U] 
                                = ((0xffffffe0U & __Vfunc_feed__11__ctx[3U]) 
                                   | (((IData)(__Vfunc_feed__56__Vfuncout) 
                                       >> 0x1dU) | 
                                      ((IData)((__Vfunc_feed__56__Vfuncout 
                                                >> 0x20U)) 
                                       << 3U)));
                            __Vfunc_feed__11__out_msgType = 0x20U;
                        } else {
                            __Vfunc_feed__57__data 
                                = __Vfunc_feed__11__data;
                            __Vfunc_feed__57__in_ctx 
                                = (0x3ffffffffULL & 
                                   (((QData)((IData)(
                                                     __Vfunc_feed__11__ctx[4U])) 
                                     << 0x1bU) | ((QData)((IData)(
                                                                  __Vfunc_feed__11__ctx[3U])) 
                                                  >> 5U)));
                            __Vfunc_feed__57__ctx = __Vfunc_feed__57__in_ctx;
                            __Vfunc_feed__57__frame_valid = 0U;
                            __Vfunc_feed__57__frame_error = 0U;
                            __Vfunc_feed__57__out_frame 
                                = (IData)(__Vfunc_feed__57__ctx);
                            if ((1U & (IData)((__Vfunc_feed__57__ctx 
                                               >> 0x21U)))) {
                                if ((1U & (IData)((__Vfunc_feed__57__ctx 
                                                   >> 0x20U)))) {
                                    if ((0x55U == (IData)(__Vfunc_feed__57__data))) {
                                        __Vfunc_feed__57__ctx 
                                            = ((0x3ffffff00ULL 
                                                & __Vfunc_feed__57__ctx) 
                                               | (IData)((IData)(__Vfunc_feed__57__data)));
                                        __Vfunc_feed__57__frame_valid = 1U;
                                        __Vfunc_feed__57__out_frame 
                                            = (IData)(__Vfunc_feed__57__ctx);
                                    } else {
                                        __Vfunc_feed__57__frame_error = 1U;
                                    }
                                    __Vfunc_feed__57__ctx 
                                        = (0xffffffffULL 
                                           & __Vfunc_feed__57__ctx);
                                } else {
                                    __Vfunc_feed__57__ctx 
                                        = ((0x3ffff00ffULL 
                                            & __Vfunc_feed__57__ctx) 
                                           | ((QData)((IData)(__Vfunc_feed__57__data)) 
                                              << 8U));
                                    __Vfunc_feed__57__ctx 
                                        = (0x300000000ULL 
                                           | __Vfunc_feed__57__ctx);
                                }
                            } else if ((1U & (IData)(
                                                     (__Vfunc_feed__57__ctx 
                                                      >> 0x20U)))) {
                                if ((2U == (IData)(__Vfunc_feed__57__data))) {
                                    __Vfunc_feed__57__ctx 
                                        = ((0x3ff00ffffULL 
                                            & __Vfunc_feed__57__ctx) 
                                           | ((QData)((IData)(__Vfunc_feed__57__data)) 
                                              << 0x10U));
                                    __Vfunc_feed__57__ctx 
                                        = (0x200000000ULL 
                                           | (0xffffffffULL 
                                              & __Vfunc_feed__57__ctx));
                                } else {
                                    __Vfunc_feed__57__frame_error = 1U;
                                    __Vfunc_feed__57__ctx 
                                        = (0xffffffffULL 
                                           & __Vfunc_feed__57__ctx);
                                }
                            } else if ((0xaaU == (IData)(__Vfunc_feed__57__data))) {
                                __Vfunc_feed__57__ctx 
                                    = ((0xffffffULL 
                                        & __Vfunc_feed__57__ctx) 
                                       | ((QData)((IData)(
                                                          (0x100U 
                                                           | (IData)(__Vfunc_feed__57__data)))) 
                                          << 0x18U));
                            } else {
                                __Vfunc_feed__57__frame_error = 1U;
                            }
                            __Vfunc_feed__57__Vfuncout 
                                = __Vfunc_feed__57__ctx;
                            __Vfunc_feed__11__frame_valid 
                                = __Vfunc_feed__57__frame_valid;
                            __Vfunc_feed__11__frame_error 
                                = __Vfunc_feed__57__frame_error;
                            __Vfunc_feed__11__ctx[3U] 
                                = ((0x1fU & __Vfunc_feed__11__ctx[3U]) 
                                   | ((IData)(__Vfunc_feed__57__Vfuncout) 
                                      << 5U));
                            __Vfunc_feed__11__ctx[4U] 
                                = ((0xffffff80U & __Vfunc_feed__11__ctx[4U]) 
                                   | (((IData)(__Vfunc_feed__57__Vfuncout) 
                                       >> 0x1bU) | 
                                      ((IData)((__Vfunc_feed__57__Vfuncout 
                                                >> 0x20U)) 
                                       << 5U)));
                            __Vfunc_feed__11__out_msgType = 2U;
                        }
                    } else if ((0x20000U & __Vfunc_feed__11__ctx[0x16U])) {
                        __Vfunc_feed__58__data = __Vfunc_feed__11__data;
                        __Vfunc_feed__58__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__11__ctx[5U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__11__ctx[4U])) 
                                                  >> 7U)));
                        __Vfunc_feed__58__ctx = __Vfunc_feed__58__in_ctx;
                        __Vfunc_feed__58__frame_valid = 0U;
                        __Vfunc_feed__58__frame_error = 0U;
                        __Vfunc_feed__58__out_frame 
                            = (IData)(__Vfunc_feed__58__ctx);
                        if ((1U & (IData)((__Vfunc_feed__58__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__58__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__58__data))) {
                                    __Vfunc_feed__58__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__58__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__58__data)));
                                    __Vfunc_feed__58__frame_valid = 1U;
                                    __Vfunc_feed__58__out_frame 
                                        = (IData)(__Vfunc_feed__58__ctx);
                                } else {
                                    __Vfunc_feed__58__frame_error = 1U;
                                }
                                __Vfunc_feed__58__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__58__ctx);
                            } else {
                                __Vfunc_feed__58__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__58__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__58__data)) 
                                          << 8U));
                                __Vfunc_feed__58__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__58__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__58__ctx 
                                                  >> 0x20U)))) {
                            if ((6U == (IData)(__Vfunc_feed__58__data))) {
                                __Vfunc_feed__58__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__58__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__58__data)) 
                                          << 0x10U));
                                __Vfunc_feed__58__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__58__ctx));
                            } else {
                                __Vfunc_feed__58__frame_error = 1U;
                                __Vfunc_feed__58__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__58__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__58__data))) {
                            __Vfunc_feed__58__ctx = 
                                ((0xffffffULL & __Vfunc_feed__58__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__58__data)))) 
                                    << 0x18U));
                        } else {
                            __Vfunc_feed__58__frame_error = 1U;
                        }
                        __Vfunc_feed__58__Vfuncout 
                            = __Vfunc_feed__58__ctx;
                        __Vfunc_feed__11__frame_valid 
                            = __Vfunc_feed__58__frame_valid;
                        __Vfunc_feed__11__frame_error 
                            = __Vfunc_feed__58__frame_error;
                        __Vfunc_feed__11__ctx[4U] = 
                            ((0x7fU & __Vfunc_feed__11__ctx[4U]) 
                             | ((IData)(__Vfunc_feed__58__Vfuncout) 
                                << 7U));
                        __Vfunc_feed__11__ctx[5U] = 
                            ((0xfffffe00U & __Vfunc_feed__11__ctx[5U]) 
                             | (((IData)(__Vfunc_feed__58__Vfuncout) 
                                 >> 0x19U) | ((IData)(
                                                      (__Vfunc_feed__58__Vfuncout 
                                                       >> 0x20U)) 
                                              << 7U)));
                        __Vfunc_feed__11__out_msgType = 6U;
                    } else {
                        __Vfunc_feed__59__data = __Vfunc_feed__11__data;
                        __Vfunc_feed__59__in_ctx[0U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[0U] 
                               & ((__Vfunc_feed__11__ctx[6U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[5U] 
                                                >> 9U)));
                        __Vfunc_feed__59__in_ctx[1U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[1U] 
                               & ((__Vfunc_feed__11__ctx[7U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[6U] 
                                                >> 9U)));
                        __Vfunc_feed__59__in_ctx[2U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[2U] 
                               & ((__Vfunc_feed__11__ctx[8U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[7U] 
                                                >> 9U)));
                        __Vfunc_feed__59__in_ctx[3U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[3U] 
                               & ((__Vfunc_feed__11__ctx[9U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[8U] 
                                                >> 9U)));
                        __Vfunc_feed__59__in_ctx[4U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[4U] 
                               & ((__Vfunc_feed__11__ctx[0xaU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[9U] 
                                                >> 9U)));
                        __Vfunc_feed__59__in_ctx[5U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[5U] 
                               & ((__Vfunc_feed__11__ctx[0xbU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xaU] 
                                                >> 9U)));
                        __Vfunc_feed__59__in_ctx[6U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[6U] 
                               & ((__Vfunc_feed__11__ctx[0xcU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xbU] 
                                                >> 9U)));
                        __Vfunc_feed__59__in_ctx[7U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[7U] 
                               & ((__Vfunc_feed__11__ctx[0xdU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xcU] 
                                                >> 9U)));
                        __Vfunc_feed__59__in_ctx[8U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[8U] 
                               & ((__Vfunc_feed__11__ctx[0xeU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xdU] 
                                                >> 9U)));
                        __Vfunc_feed__59__in_ctx[9U] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[9U] 
                               & ((__Vfunc_feed__11__ctx[0xfU] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xeU] 
                                                >> 9U)));
                        __Vfunc_feed__59__in_ctx[0xaU] 
                            = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcbcede4_0[0xaU] 
                               & ((__Vfunc_feed__11__ctx[0x10U] 
                                   << 0x17U) | (__Vfunc_feed__11__ctx[0xfU] 
                                                >> 9U)));
                        {
                            __Vfunc_feed__59__ctx[0U] 
                                = __Vfunc_feed__59__in_ctx[0U];
                            __Vfunc_feed__59__ctx[1U] 
                                = __Vfunc_feed__59__in_ctx[1U];
                            __Vfunc_feed__59__ctx[2U] 
                                = __Vfunc_feed__59__in_ctx[2U];
                            __Vfunc_feed__59__ctx[3U] 
                                = __Vfunc_feed__59__in_ctx[3U];
                            __Vfunc_feed__59__ctx[4U] 
                                = __Vfunc_feed__59__in_ctx[4U];
                            __Vfunc_feed__59__ctx[5U] 
                                = __Vfunc_feed__59__in_ctx[5U];
                            __Vfunc_feed__59__ctx[6U] 
                                = __Vfunc_feed__59__in_ctx[6U];
                            __Vfunc_feed__59__ctx[7U] 
                                = __Vfunc_feed__59__in_ctx[7U];
                            __Vfunc_feed__59__ctx[8U] 
                                = __Vfunc_feed__59__in_ctx[8U];
                            __Vfunc_feed__59__ctx[9U] 
                                = __Vfunc_feed__59__in_ctx[9U];
                            __Vfunc_feed__59__ctx[0xaU] 
                                = __Vfunc_feed__59__in_ctx[0xaU];
                            __Vfunc_feed__59__frame_valid = 0U;
                            __Vfunc_feed__59__frame_error = 0U;
                            __Vfunc_make_default__60__r[0U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[0U];
                            __Vfunc_make_default__60__r[1U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[1U];
                            __Vfunc_make_default__60__r[2U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[2U];
                            __Vfunc_make_default__60__r[3U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[3U];
                            __Vfunc_make_default__60__r[4U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[4U];
                            __Vfunc_make_default__60__r[5U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[5U];
                            __Vfunc_make_default__60__r[6U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[6U];
                            __Vfunc_make_default__60__r[7U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[7U];
                            __Vfunc_make_default__60__r[8U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[8U];
                            __Vfunc_make_default__60__r[9U] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[9U];
                            __Vfunc_make_default__60__r[0xaU] 
                                = Vspi_full_flow_led_20_tb__ConstPool__CONST_h43f068a5_0[0xaU];
                            __Vfunc_make_default__60__Vfuncout[0U] 
                                = __Vfunc_make_default__60__r[0U];
                            __Vfunc_make_default__60__Vfuncout[1U] 
                                = __Vfunc_make_default__60__r[1U];
                            __Vfunc_make_default__60__Vfuncout[2U] 
                                = __Vfunc_make_default__60__r[2U];
                            __Vfunc_make_default__60__Vfuncout[3U] 
                                = __Vfunc_make_default__60__r[3U];
                            __Vfunc_make_default__60__Vfuncout[4U] 
                                = __Vfunc_make_default__60__r[4U];
                            __Vfunc_make_default__60__Vfuncout[5U] 
                                = __Vfunc_make_default__60__r[5U];
                            __Vfunc_make_default__60__Vfuncout[6U] 
                                = __Vfunc_make_default__60__r[6U];
                            __Vfunc_make_default__60__Vfuncout[7U] 
                                = __Vfunc_make_default__60__r[7U];
                            __Vfunc_make_default__60__Vfuncout[8U] 
                                = __Vfunc_make_default__60__r[8U];
                            __Vfunc_make_default__60__Vfuncout[9U] 
                                = __Vfunc_make_default__60__r[9U];
                            __Vfunc_make_default__60__Vfuncout[0xaU] 
                                = __Vfunc_make_default__60__r[0xaU];
                            __Vfunc_feed__59__out_frame[0U] 
                                = __Vfunc_make_default__60__Vfuncout[0U];
                            __Vfunc_feed__59__out_frame[1U] 
                                = __Vfunc_make_default__60__Vfuncout[1U];
                            __Vfunc_feed__59__out_frame[2U] 
                                = __Vfunc_make_default__60__Vfuncout[2U];
                            __Vfunc_feed__59__out_frame[3U] 
                                = __Vfunc_make_default__60__Vfuncout[3U];
                            __Vfunc_feed__59__out_frame[4U] 
                                = __Vfunc_make_default__60__Vfuncout[4U];
                            __Vfunc_feed__59__out_frame[5U] 
                                = __Vfunc_make_default__60__Vfuncout[5U];
                            __Vfunc_feed__59__out_frame[6U] 
                                = __Vfunc_make_default__60__Vfuncout[6U];
                            __Vfunc_feed__59__out_frame[7U] 
                                = __Vfunc_make_default__60__Vfuncout[7U];
                            __Vfunc_feed__59__out_frame[8U] 
                                = __Vfunc_make_default__60__Vfuncout[8U];
                            __Vfunc_feed__59__out_frame[9U] 
                                = __Vfunc_make_default__60__Vfuncout[9U];
                            __Vfunc_feed__59__out_frame[0xaU] 
                                = __Vfunc_make_default__60__Vfuncout[0xaU];
                            vlSymsp->TOP__move_queue_add_req_parser_pkg.__Vlvbound_heeac623e__0 
                                = __Vfunc_feed__59__data;
                            if (VL_LIKELY((0x156U >= 
                                           ((IData)(1U) 
                                            + (0x1ffU 
                                               & (((IData)(0x14fU) 
                                                   - 
                                                   VL_SHIFTL_III(9,32,32, 
                                                                 (0x3fU 
                                                                  & (__Vfunc_feed__59__ctx[0xaU] 
                                                                     >> 0x11U)), 3U)) 
                                                  - (IData)(7U))))))) {
                                VL_ASSIGNSEL_WI(343,8,
                                                ((IData)(1U) 
                                                 + 
                                                 (0x1ffU 
                                                  & (((IData)(0x14fU) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, 
                                                                    (0x3fU 
                                                                     & (__Vfunc_feed__59__ctx[0xaU] 
                                                                        >> 0x11U)), 3U)) 
                                                     - (IData)(7U)))), __Vfunc_feed__59__ctx, vlSymsp->TOP__move_queue_add_req_parser_pkg.__Vlvbound_heeac623e__0);
                            }
                            if ((0U == (0x3fU & (__Vfunc_feed__59__ctx[0xaU] 
                                                 >> 0x11U)))) {
                                if ((0xaaU != (IData)(__Vfunc_feed__59__data))) {
                                    __Vfunc_feed__59__frame_error = 1U;
                                }
                            } else if ((1U == (0x3fU 
                                               & (__Vfunc_feed__59__ctx[0xaU] 
                                                  >> 0x11U)))) {
                                if ((1U == (IData)(__Vfunc_feed__59__data))) {
                                    __Vfunc_feed__59__ctx[0U] 
                                        = ((0xfffffffeU 
                                            & __Vfunc_feed__59__ctx[0U]) 
                                           | (1U & 
                                              VL_REDXOR_8(__Vfunc_feed__59__data)));
                                } else {
                                    __Vfunc_feed__59__frame_error = 1U;
                                    __Vfunc_feed__59__ctx[0xaU] 
                                        = (0x1ffffU 
                                           & __Vfunc_feed__59__ctx[0xaU]);
                                    __Vfunc_feed__59__Vfuncout[0U] 
                                        = __Vfunc_feed__59__ctx[0U];
                                    __Vfunc_feed__59__Vfuncout[1U] 
                                        = __Vfunc_feed__59__ctx[1U];
                                    __Vfunc_feed__59__Vfuncout[2U] 
                                        = __Vfunc_feed__59__ctx[2U];
                                    __Vfunc_feed__59__Vfuncout[3U] 
                                        = __Vfunc_feed__59__ctx[3U];
                                    __Vfunc_feed__59__Vfuncout[4U] 
                                        = __Vfunc_feed__59__ctx[4U];
                                    __Vfunc_feed__59__Vfuncout[5U] 
                                        = __Vfunc_feed__59__ctx[5U];
                                    __Vfunc_feed__59__Vfuncout[6U] 
                                        = __Vfunc_feed__59__ctx[6U];
                                    __Vfunc_feed__59__Vfuncout[7U] 
                                        = __Vfunc_feed__59__ctx[7U];
                                    __Vfunc_feed__59__Vfuncout[8U] 
                                        = __Vfunc_feed__59__ctx[8U];
                                    __Vfunc_feed__59__Vfuncout[9U] 
                                        = __Vfunc_feed__59__ctx[9U];
                                    __Vfunc_feed__59__Vfuncout[0xaU] 
                                        = __Vfunc_feed__59__ctx[0xaU];
                                    goto __Vlabel3;
                                }
                            } else if ((0x28U == (0x3fU 
                                                  & (__Vfunc_feed__59__ctx[0xaU] 
                                                     >> 0x11U)))) {
                                if (((1U & (IData)(__Vfunc_feed__59__data)) 
                                     != (1U & __Vfunc_feed__59__ctx[0U]))) {
                                    __Vfunc_feed__59__frame_error = 1U;
                                    __Vfunc_feed__59__ctx[0xaU] 
                                        = (0x1ffffU 
                                           & __Vfunc_feed__59__ctx[0xaU]);
                                    __Vfunc_feed__59__ctx[0U] 
                                        = (0xfffffffeU 
                                           & __Vfunc_feed__59__ctx[0U]);
                                    __Vfunc_feed__59__Vfuncout[0U] 
                                        = __Vfunc_feed__59__ctx[0U];
                                    __Vfunc_feed__59__Vfuncout[1U] 
                                        = __Vfunc_feed__59__ctx[1U];
                                    __Vfunc_feed__59__Vfuncout[2U] 
                                        = __Vfunc_feed__59__ctx[2U];
                                    __Vfunc_feed__59__Vfuncout[3U] 
                                        = __Vfunc_feed__59__ctx[3U];
                                    __Vfunc_feed__59__Vfuncout[4U] 
                                        = __Vfunc_feed__59__ctx[4U];
                                    __Vfunc_feed__59__Vfuncout[5U] 
                                        = __Vfunc_feed__59__ctx[5U];
                                    __Vfunc_feed__59__Vfuncout[6U] 
                                        = __Vfunc_feed__59__ctx[6U];
                                    __Vfunc_feed__59__Vfuncout[7U] 
                                        = __Vfunc_feed__59__ctx[7U];
                                    __Vfunc_feed__59__Vfuncout[8U] 
                                        = __Vfunc_feed__59__ctx[8U];
                                    __Vfunc_feed__59__Vfuncout[9U] 
                                        = __Vfunc_feed__59__ctx[9U];
                                    __Vfunc_feed__59__Vfuncout[0xaU] 
                                        = __Vfunc_feed__59__ctx[0xaU];
                                    goto __Vlabel3;
                                }
                            } else if ((0x29U == (0x3fU 
                                                  & (__Vfunc_feed__59__ctx[0xaU] 
                                                     >> 0x11U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__59__data))) {
                                    __Vfunc_decoder__61__raw[0U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[0U] 
                                           & ((__Vfunc_feed__59__ctx[1U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__59__ctx[0U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__61__raw[1U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[1U] 
                                           & ((__Vfunc_feed__59__ctx[2U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__59__ctx[1U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__61__raw[2U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[2U] 
                                           & ((__Vfunc_feed__59__ctx[3U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__59__ctx[2U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__61__raw[3U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[3U] 
                                           & ((__Vfunc_feed__59__ctx[4U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__59__ctx[3U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__61__raw[4U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[4U] 
                                           & ((__Vfunc_feed__59__ctx[5U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__59__ctx[4U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__61__raw[5U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[5U] 
                                           & ((__Vfunc_feed__59__ctx[6U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__59__ctx[5U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__61__raw[6U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[6U] 
                                           & ((__Vfunc_feed__59__ctx[7U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__59__ctx[6U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__61__raw[7U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[7U] 
                                           & ((__Vfunc_feed__59__ctx[8U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__59__ctx[7U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__61__raw[8U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[8U] 
                                           & ((__Vfunc_feed__59__ctx[9U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__59__ctx[8U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__61__raw[9U] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[9U] 
                                           & ((__Vfunc_feed__59__ctx[0xaU] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__59__ctx[9U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__61__raw[0xaU] 
                                        = (Vspi_full_flow_led_20_tb__ConstPool__CONST_hfcc3ede4_0[0xaU] 
                                           & (__Vfunc_feed__59__ctx[0xaU] 
                                              >> 1U));
                                    __Vfunc_decoder__61__r[0U] 
                                        = __Vfunc_decoder__61__raw[0U];
                                    __Vfunc_decoder__61__r[1U] 
                                        = __Vfunc_decoder__61__raw[1U];
                                    __Vfunc_decoder__61__r[2U] 
                                        = __Vfunc_decoder__61__raw[2U];
                                    __Vfunc_decoder__61__r[3U] 
                                        = __Vfunc_decoder__61__raw[3U];
                                    __Vfunc_decoder__61__r[4U] 
                                        = __Vfunc_decoder__61__raw[4U];
                                    __Vfunc_decoder__61__r[5U] 
                                        = __Vfunc_decoder__61__raw[5U];
                                    __Vfunc_decoder__61__r[6U] 
                                        = __Vfunc_decoder__61__raw[6U];
                                    __Vfunc_decoder__61__r[7U] 
                                        = __Vfunc_decoder__61__raw[7U];
                                    __Vfunc_decoder__61__r[8U] 
                                        = __Vfunc_decoder__61__raw[8U];
                                    __Vfunc_decoder__61__r[9U] 
                                        = __Vfunc_decoder__61__raw[9U];
                                    __Vfunc_decoder__61__r[0xaU] 
                                        = __Vfunc_decoder__61__raw[0xaU];
                                    __Vfunc_decoder__61__Vfuncout[0U] 
                                        = __Vfunc_decoder__61__r[0U];
                                    __Vfunc_decoder__61__Vfuncout[1U] 
                                        = __Vfunc_decoder__61__r[1U];
                                    __Vfunc_decoder__61__Vfuncout[2U] 
                                        = __Vfunc_decoder__61__r[2U];
                                    __Vfunc_decoder__61__Vfuncout[3U] 
                                        = __Vfunc_decoder__61__r[3U];
                                    __Vfunc_decoder__61__Vfuncout[4U] 
                                        = __Vfunc_decoder__61__r[4U];
                                    __Vfunc_decoder__61__Vfuncout[5U] 
                                        = __Vfunc_decoder__61__r[5U];
                                    __Vfunc_decoder__61__Vfuncout[6U] 
                                        = __Vfunc_decoder__61__r[6U];
                                    __Vfunc_decoder__61__Vfuncout[7U] 
                                        = __Vfunc_decoder__61__r[7U];
                                    __Vfunc_decoder__61__Vfuncout[8U] 
                                        = __Vfunc_decoder__61__r[8U];
                                    __Vfunc_decoder__61__Vfuncout[9U] 
                                        = __Vfunc_decoder__61__r[9U];
                                    __Vfunc_decoder__61__Vfuncout[0xaU] 
                                        = __Vfunc_decoder__61__r[0xaU];
                                    __Vfunc_feed__59__unnamedblk1__DOT__tmp[0U] 
                                        = __Vfunc_decoder__61__Vfuncout[0U];
                                    __Vfunc_feed__59__unnamedblk1__DOT__tmp[1U] 
                                        = __Vfunc_decoder__61__Vfuncout[1U];
                                    __Vfunc_feed__59__unnamedblk1__DOT__tmp[2U] 
                                        = __Vfunc_decoder__61__Vfuncout[2U];
                                    __Vfunc_feed__59__unnamedblk1__DOT__tmp[3U] 
                                        = __Vfunc_decoder__61__Vfuncout[3U];
                                    __Vfunc_feed__59__unnamedblk1__DOT__tmp[4U] 
                                        = __Vfunc_decoder__61__Vfuncout[4U];
                                    __Vfunc_feed__59__unnamedblk1__DOT__tmp[5U] 
                                        = __Vfunc_decoder__61__Vfuncout[5U];
                                    __Vfunc_feed__59__unnamedblk1__DOT__tmp[6U] 
                                        = __Vfunc_decoder__61__Vfuncout[6U];
                                    __Vfunc_feed__59__unnamedblk1__DOT__tmp[7U] 
                                        = __Vfunc_decoder__61__Vfuncout[7U];
                                    __Vfunc_feed__59__unnamedblk1__DOT__tmp[8U] 
                                        = __Vfunc_decoder__61__Vfuncout[8U];
                                    __Vfunc_feed__59__unnamedblk1__DOT__tmp[9U] 
                                        = __Vfunc_decoder__61__Vfuncout[9U];
                                    __Vfunc_feed__59__unnamedblk1__DOT__tmp[0xaU] 
                                        = __Vfunc_decoder__61__Vfuncout[0xaU];
                                    __Vfunc_feed__59__out_frame[0U] 
                                        = __Vfunc_feed__59__unnamedblk1__DOT__tmp[0U];
                                    __Vfunc_feed__59__out_frame[1U] 
                                        = __Vfunc_feed__59__unnamedblk1__DOT__tmp[1U];
                                    __Vfunc_feed__59__out_frame[2U] 
                                        = __Vfunc_feed__59__unnamedblk1__DOT__tmp[2U];
                                    __Vfunc_feed__59__out_frame[3U] 
                                        = __Vfunc_feed__59__unnamedblk1__DOT__tmp[3U];
                                    __Vfunc_feed__59__out_frame[4U] 
                                        = __Vfunc_feed__59__unnamedblk1__DOT__tmp[4U];
                                    __Vfunc_feed__59__out_frame[5U] 
                                        = __Vfunc_feed__59__unnamedblk1__DOT__tmp[5U];
                                    __Vfunc_feed__59__out_frame[6U] 
                                        = __Vfunc_feed__59__unnamedblk1__DOT__tmp[6U];
                                    __Vfunc_feed__59__out_frame[7U] 
                                        = __Vfunc_feed__59__unnamedblk1__DOT__tmp[7U];
                                    __Vfunc_feed__59__out_frame[8U] 
                                        = __Vfunc_feed__59__unnamedblk1__DOT__tmp[8U];
                                    __Vfunc_feed__59__out_frame[9U] 
                                        = __Vfunc_feed__59__unnamedblk1__DOT__tmp[9U];
                                    __Vfunc_feed__59__out_frame[0xaU] 
                                        = __Vfunc_feed__59__unnamedblk1__DOT__tmp[0xaU];
                                    __Vfunc_feed__59__frame_valid = 1U;
                                } else {
                                    __Vfunc_feed__59__frame_error = 1U;
                                }
                                __Vfunc_feed__59__ctx[0xaU] 
                                    = (0x1ffffU & __Vfunc_feed__59__ctx[0xaU]);
                                __Vfunc_feed__59__ctx[0U] 
                                    = (0xfffffffeU 
                                       & __Vfunc_feed__59__ctx[0U]);
                                __Vfunc_feed__59__Vfuncout[0U] 
                                    = __Vfunc_feed__59__ctx[0U];
                                __Vfunc_feed__59__Vfuncout[1U] 
                                    = __Vfunc_feed__59__ctx[1U];
                                __Vfunc_feed__59__Vfuncout[2U] 
                                    = __Vfunc_feed__59__ctx[2U];
                                __Vfunc_feed__59__Vfuncout[3U] 
                                    = __Vfunc_feed__59__ctx[3U];
                                __Vfunc_feed__59__Vfuncout[4U] 
                                    = __Vfunc_feed__59__ctx[4U];
                                __Vfunc_feed__59__Vfuncout[5U] 
                                    = __Vfunc_feed__59__ctx[5U];
                                __Vfunc_feed__59__Vfuncout[6U] 
                                    = __Vfunc_feed__59__ctx[6U];
                                __Vfunc_feed__59__Vfuncout[7U] 
                                    = __Vfunc_feed__59__ctx[7U];
                                __Vfunc_feed__59__Vfuncout[8U] 
                                    = __Vfunc_feed__59__ctx[8U];
                                __Vfunc_feed__59__Vfuncout[9U] 
                                    = __Vfunc_feed__59__ctx[9U];
                                __Vfunc_feed__59__Vfuncout[0xaU] 
                                    = __Vfunc_feed__59__ctx[0xaU];
                                goto __Vlabel3;
                            } else if (((2U <= (0x3fU 
                                                & (__Vfunc_feed__59__ctx[0xaU] 
                                                   >> 0x11U))) 
                                        & (0x27U >= 
                                           (0x3fU & 
                                            (__Vfunc_feed__59__ctx[0xaU] 
                                             >> 0x11U))))) {
                                __Vfunc_feed__59__ctx[0U] 
                                    = ((0xfffffffeU 
                                        & __Vfunc_feed__59__ctx[0U]) 
                                       | (1U & (__Vfunc_feed__59__ctx[0U] 
                                                ^ VL_REDXOR_8(__Vfunc_feed__59__data))));
                            }
                            if (__Vfunc_feed__59__frame_error) {
                                __Vfunc_feed__59__ctx[0xaU] 
                                    = (0x1ffffU & __Vfunc_feed__59__ctx[0xaU]);
                                __Vfunc_feed__59__ctx[0U] 
                                    = (0xfffffffeU 
                                       & __Vfunc_feed__59__ctx[0U]);
                            } else if ((0x29U > (0x3fU 
                                                 & (__Vfunc_feed__59__ctx[0xaU] 
                                                    >> 0x11U)))) {
                                __Vfunc_feed__59__ctx[0xaU] 
                                    = ((0x1ffffU & 
                                        __Vfunc_feed__59__ctx[0xaU]) 
                                       | (0x7e0000U 
                                          & (((IData)(1U) 
                                              + ((__Vfunc_feed__59__ctx[0xaU] 
                                                  << 0xfU) 
                                                 | (__Vfunc_feed__59__ctx[0xaU] 
                                                    >> 0x11U))) 
                                             << 0x11U)));
                            }
                            __Vfunc_feed__59__Vfuncout[0U] 
                                = __Vfunc_feed__59__ctx[0U];
                            __Vfunc_feed__59__Vfuncout[1U] 
                                = __Vfunc_feed__59__ctx[1U];
                            __Vfunc_feed__59__Vfuncout[2U] 
                                = __Vfunc_feed__59__ctx[2U];
                            __Vfunc_feed__59__Vfuncout[3U] 
                                = __Vfunc_feed__59__ctx[3U];
                            __Vfunc_feed__59__Vfuncout[4U] 
                                = __Vfunc_feed__59__ctx[4U];
                            __Vfunc_feed__59__Vfuncout[5U] 
                                = __Vfunc_feed__59__ctx[5U];
                            __Vfunc_feed__59__Vfuncout[6U] 
                                = __Vfunc_feed__59__ctx[6U];
                            __Vfunc_feed__59__Vfuncout[7U] 
                                = __Vfunc_feed__59__ctx[7U];
                            __Vfunc_feed__59__Vfuncout[8U] 
                                = __Vfunc_feed__59__ctx[8U];
                            __Vfunc_feed__59__Vfuncout[9U] 
                                = __Vfunc_feed__59__ctx[9U];
                            __Vfunc_feed__59__Vfuncout[0xaU] 
                                = __Vfunc_feed__59__ctx[0xaU];
                            __Vlabel3: ;
                        }
                        __Vfunc_feed__11__frame_valid 
                            = __Vfunc_feed__59__frame_valid;
                        __Vfunc_feed__11__frame_error 
                            = __Vfunc_feed__59__frame_error;
                        __Vfunc_feed__11__ctx[5U] = 
                            ((0x1ffU & __Vfunc_feed__11__ctx[5U]) 
                             | (__Vfunc_feed__59__Vfuncout[0U] 
                                << 9U));
                        __Vfunc_feed__11__ctx[6U] = 
                            ((__Vfunc_feed__59__Vfuncout[0U] 
                              >> 0x17U) | (__Vfunc_feed__59__Vfuncout[1U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[7U] = 
                            ((__Vfunc_feed__59__Vfuncout[1U] 
                              >> 0x17U) | (__Vfunc_feed__59__Vfuncout[2U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[8U] = 
                            ((__Vfunc_feed__59__Vfuncout[2U] 
                              >> 0x17U) | (__Vfunc_feed__59__Vfuncout[3U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[9U] = 
                            ((__Vfunc_feed__59__Vfuncout[3U] 
                              >> 0x17U) | (__Vfunc_feed__59__Vfuncout[4U] 
                                           << 9U));
                        __Vfunc_feed__11__ctx[0xaU] 
                            = ((__Vfunc_feed__59__Vfuncout[4U] 
                                >> 0x17U) | (__Vfunc_feed__59__Vfuncout[5U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xbU] 
                            = ((__Vfunc_feed__59__Vfuncout[5U] 
                                >> 0x17U) | (__Vfunc_feed__59__Vfuncout[6U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xcU] 
                            = ((__Vfunc_feed__59__Vfuncout[6U] 
                                >> 0x17U) | (__Vfunc_feed__59__Vfuncout[7U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xdU] 
                            = ((__Vfunc_feed__59__Vfuncout[7U] 
                                >> 0x17U) | (__Vfunc_feed__59__Vfuncout[8U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xeU] 
                            = ((__Vfunc_feed__59__Vfuncout[8U] 
                                >> 0x17U) | (__Vfunc_feed__59__Vfuncout[9U] 
                                             << 9U));
                        __Vfunc_feed__11__ctx[0xfU] 
                            = ((__Vfunc_feed__59__Vfuncout[9U] 
                                >> 0x17U) | (__Vfunc_feed__59__Vfuncout[0xaU] 
                                             << 9U));
                        __Vfunc_feed__11__out_msgType = 1U;
                    }
                } else if ((0x40000U & __Vfunc_feed__11__ctx[0x16U])) {
                    if ((0x20000U & __Vfunc_feed__11__ctx[0x16U])) {
                        __Vfunc_feed__62__data = __Vfunc_feed__11__data;
                        __Vfunc_feed__62__in_ctx[0U] 
                            = __Vfunc_feed__11__ctx[0x10U];
                        __Vfunc_feed__62__in_ctx[1U] 
                            = __Vfunc_feed__11__ctx[0x11U];
                        __Vfunc_feed__62__in_ctx[2U] 
                            = (0x7ffU & __Vfunc_feed__11__ctx[0x12U]);
                        __Vfunc_feed__62__ctx[0U] = 
                            __Vfunc_feed__62__in_ctx[0U];
                        __Vfunc_feed__62__ctx[1U] = 
                            __Vfunc_feed__62__in_ctx[1U];
                        __Vfunc_feed__62__ctx[2U] = 
                            __Vfunc_feed__62__in_ctx[2U];
                        __Vfunc_feed__62__frame_valid = 0U;
                        __Vfunc_feed__62__frame_error = 0U;
                        __Vfunc_feed__62__out_frame 
                            = (((QData)((IData)(__Vfunc_feed__62__ctx[2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              __Vfunc_feed__62__ctx[1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                __Vfunc_feed__62__ctx[0U])) 
                                                >> 8U)));
                        if ((0x400U & __Vfunc_feed__62__ctx[2U])) {
                            if ((0x200U & __Vfunc_feed__62__ctx[2U])) {
                                if ((0x100U & __Vfunc_feed__62__ctx[2U])) {
                                    if ((0x55U == (IData)(__Vfunc_feed__62__data))) {
                                        __Vfunc_feed__62__ctx[0U] 
                                            = ((0xffff00ffU 
                                                & __Vfunc_feed__62__ctx[0U]) 
                                               | ((IData)(__Vfunc_feed__62__data) 
                                                  << 8U));
                                        __Vfunc_feed__62__frame_valid = 1U;
                                        __Vfunc_feed__62__out_frame 
                                            = (((QData)((IData)(
                                                                __Vfunc_feed__62__ctx[2U])) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   __Vfunc_feed__62__ctx[1U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     __Vfunc_feed__62__ctx[0U])) 
                                                     >> 8U)));
                                    } else {
                                        __Vfunc_feed__62__frame_error = 1U;
                                    }
                                    __Vfunc_feed__62__ctx[2U] 
                                        = (0xffU & 
                                           __Vfunc_feed__62__ctx[2U]);
                                } else {
                                    __Vfunc_feed__62__ctx[0U] 
                                        = ((0xff00ffffU 
                                            & __Vfunc_feed__62__ctx[0U]) 
                                           | ((IData)(__Vfunc_feed__62__data) 
                                              << 0x10U));
                                    if (((IData)(__Vfunc_feed__62__data) 
                                         == (0xffU 
                                             & __Vfunc_feed__62__ctx[0U]))) {
                                        __Vfunc_feed__62__ctx[2U] 
                                            = (0x700U 
                                               | __Vfunc_feed__62__ctx[2U]);
                                    } else {
                                        __Vfunc_feed__62__frame_error = 1U;
                                        __Vfunc_feed__62__ctx[2U] 
                                            = (0xffU 
                                               & __Vfunc_feed__62__ctx[2U]);
                                    }
                                }
                            } else if ((0x100U & __Vfunc_feed__62__ctx[2U])) {
                                __Vfunc_feed__62__ctx[0U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__62__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__62__data) 
                                          << 0x18U));
                                __Vfunc_feed__62__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__62__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__62__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__62__data))));
                                __Vfunc_feed__62__ctx[2U] 
                                    = (0x600U | (0xffU 
                                                 & __Vfunc_feed__62__ctx[2U]));
                            } else {
                                __Vfunc_feed__62__ctx[1U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__62__ctx[1U]) 
                                       | (IData)(__Vfunc_feed__62__data));
                                __Vfunc_feed__62__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__62__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__62__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__62__data))));
                                __Vfunc_feed__62__ctx[2U] 
                                    = (0x500U | (0xffU 
                                                 & __Vfunc_feed__62__ctx[2U]));
                            }
                        } else if ((0x200U & __Vfunc_feed__62__ctx[2U])) {
                            if ((0x100U & __Vfunc_feed__62__ctx[2U])) {
                                __Vfunc_feed__62__ctx[1U] 
                                    = ((0xffff00ffU 
                                        & __Vfunc_feed__62__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__62__data) 
                                          << 8U));
                                __Vfunc_feed__62__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__62__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__62__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__62__data))));
                                __Vfunc_feed__62__ctx[2U] 
                                    = (0x400U | (0xffU 
                                                 & __Vfunc_feed__62__ctx[2U]));
                            } else {
                                __Vfunc_feed__62__ctx[1U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__62__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__62__data) 
                                          << 0x10U));
                                __Vfunc_feed__62__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__62__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__62__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__62__data))));
                                __Vfunc_feed__62__ctx[2U] 
                                    = (0x300U | (0xffU 
                                                 & __Vfunc_feed__62__ctx[2U]));
                            }
                        } else if ((0x100U & __Vfunc_feed__62__ctx[2U])) {
                            if ((5U == (IData)(__Vfunc_feed__62__data))) {
                                __Vfunc_feed__62__ctx[1U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__62__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__62__data) 
                                          << 0x18U));
                                __Vfunc_feed__62__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__62__ctx[0U]) 
                                       | (IData)(__Vfunc_feed__62__data));
                                __Vfunc_feed__62__ctx[2U] 
                                    = (0x200U | (0xffU 
                                                 & __Vfunc_feed__62__ctx[2U]));
                            } else {
                                __Vfunc_feed__62__frame_error = 1U;
                                __Vfunc_feed__62__ctx[2U] 
                                    = (0xffU & __Vfunc_feed__62__ctx[2U]);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__62__data))) {
                            __Vfunc_feed__62__ctx[2U] 
                                = (0x7ffU & (0x100U 
                                             | (IData)(__Vfunc_feed__62__data)));
                            __Vfunc_feed__62__ctx[0U] 
                                = (0xffffff00U & __Vfunc_feed__62__ctx[0U]);
                        } else {
                            __Vfunc_feed__62__frame_error = 1U;
                        }
                        __Vfunc_feed__62__Vfuncout[0U] 
                            = __Vfunc_feed__62__ctx[0U];
                        __Vfunc_feed__62__Vfuncout[1U] 
                            = __Vfunc_feed__62__ctx[1U];
                        __Vfunc_feed__62__Vfuncout[2U] 
                            = __Vfunc_feed__62__ctx[2U];
                        __Vfunc_feed__11__frame_valid 
                            = __Vfunc_feed__62__frame_valid;
                        __Vfunc_feed__11__frame_error 
                            = __Vfunc_feed__62__frame_error;
                        __Vfunc_feed__11__ctx[0x10U] 
                            = __Vfunc_feed__62__Vfuncout[0U];
                        __Vfunc_feed__11__ctx[0x11U] 
                            = __Vfunc_feed__62__Vfuncout[1U];
                        __Vfunc_feed__11__ctx[0x12U] 
                            = ((0xfffff800U & __Vfunc_feed__11__ctx[0x12U]) 
                               | __Vfunc_feed__62__Vfuncout[2U]);
                        __Vfunc_feed__11__out_msgType = 5U;
                    } else {
                        __Vfunc_feed__63__data = __Vfunc_feed__11__data;
                        __Vfunc_feed__63__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__11__ctx[0x13U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__11__ctx[0x12U])) 
                                                  >> 0xbU)));
                        __Vfunc_feed__63__ctx = __Vfunc_feed__63__in_ctx;
                        __Vfunc_feed__63__frame_valid = 0U;
                        __Vfunc_feed__63__frame_error = 0U;
                        __Vfunc_feed__63__out_frame 
                            = (IData)(__Vfunc_feed__63__ctx);
                        if ((1U & (IData)((__Vfunc_feed__63__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__63__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__63__data))) {
                                    __Vfunc_feed__63__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__63__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__63__data)));
                                    __Vfunc_feed__63__frame_valid = 1U;
                                    __Vfunc_feed__63__out_frame 
                                        = (IData)(__Vfunc_feed__63__ctx);
                                } else {
                                    __Vfunc_feed__63__frame_error = 1U;
                                }
                                __Vfunc_feed__63__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__63__ctx);
                            } else {
                                __Vfunc_feed__63__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__63__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__63__data)) 
                                          << 8U));
                                __Vfunc_feed__63__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__63__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__63__ctx 
                                                  >> 0x20U)))) {
                            if ((3U == (IData)(__Vfunc_feed__63__data))) {
                                __Vfunc_feed__63__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__63__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__63__data)) 
                                          << 0x10U));
                                __Vfunc_feed__63__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__63__ctx));
                            } else {
                                __Vfunc_feed__63__frame_error = 1U;
                                __Vfunc_feed__63__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__63__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__63__data))) {
                            __Vfunc_feed__63__ctx = 
                                ((0xffffffULL & __Vfunc_feed__63__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__63__data)))) 
                                    << 0x18U));
                        } else {
                            __Vfunc_feed__63__frame_error = 1U;
                        }
                        __Vfunc_feed__63__Vfuncout 
                            = __Vfunc_feed__63__ctx;
                        __Vfunc_feed__11__frame_valid 
                            = __Vfunc_feed__63__frame_valid;
                        __Vfunc_feed__11__frame_error 
                            = __Vfunc_feed__63__frame_error;
                        __Vfunc_feed__11__ctx[0x12U] 
                            = ((0x7ffU & __Vfunc_feed__11__ctx[0x12U]) 
                               | ((IData)(__Vfunc_feed__63__Vfuncout) 
                                  << 0xbU));
                        __Vfunc_feed__11__ctx[0x13U] 
                            = ((0xffffe000U & __Vfunc_feed__11__ctx[0x13U]) 
                               | (((IData)(__Vfunc_feed__63__Vfuncout) 
                                   >> 0x15U) | ((IData)(
                                                        (__Vfunc_feed__63__Vfuncout 
                                                         >> 0x20U)) 
                                                << 0xbU)));
                        __Vfunc_feed__11__out_msgType = 3U;
                    }
                } else if ((0x20000U & __Vfunc_feed__11__ctx[0x16U])) {
                    __Vfunc_feed__64__data = __Vfunc_feed__11__data;
                    __Vfunc_feed__64__in_ctx[0U] = 
                        ((__Vfunc_feed__11__ctx[0x14U] 
                          << 0x13U) | (__Vfunc_feed__11__ctx[0x13U] 
                                       >> 0xdU));
                    __Vfunc_feed__64__in_ctx[1U] = 
                        ((__Vfunc_feed__11__ctx[0x15U] 
                          << 0x13U) | (__Vfunc_feed__11__ctx[0x14U] 
                                       >> 0xdU));
                    __Vfunc_feed__64__in_ctx[2U] = 
                        (0xfffffU & ((__Vfunc_feed__11__ctx[0x16U] 
                                      << 0x13U) | (
                                                   __Vfunc_feed__11__ctx[0x15U] 
                                                   >> 0xdU)));
                    __Vfunc_feed__64__ctx[0U] = __Vfunc_feed__64__in_ctx[0U];
                    __Vfunc_feed__64__ctx[1U] = __Vfunc_feed__64__in_ctx[1U];
                    __Vfunc_feed__64__ctx[2U] = __Vfunc_feed__64__in_ctx[2U];
                    __Vfunc_feed__64__frame_valid = 0U;
                    __Vfunc_feed__64__frame_error = 0U;
                    __Vfunc_feed__64__out_frame[0U] 
                        = ((__Vfunc_feed__64__ctx[1U] 
                            << 0x18U) | (__Vfunc_feed__64__ctx[0U] 
                                         >> 8U));
                    __Vfunc_feed__64__out_frame[1U] 
                        = ((__Vfunc_feed__64__ctx[2U] 
                            << 0x18U) | (__Vfunc_feed__64__ctx[1U] 
                                         >> 8U));
                    __Vfunc_feed__64__out_frame[2U] 
                        = (0xffU & (__Vfunc_feed__64__ctx[2U] 
                                    >> 8U));
                    if ((0x80000U & __Vfunc_feed__64__ctx[2U])) {
                        if ((0x40000U & __Vfunc_feed__64__ctx[2U])) {
                            __Vfunc_feed__64__frame_error = 1U;
                            __Vfunc_feed__64__ctx[2U] 
                                = (0xffffU & __Vfunc_feed__64__ctx[2U]);
                        } else if ((0x20000U & __Vfunc_feed__64__ctx[2U])) {
                            __Vfunc_feed__64__frame_error = 1U;
                            __Vfunc_feed__64__ctx[2U] 
                                = (0xffffU & __Vfunc_feed__64__ctx[2U]);
                        } else if ((0x10000U & __Vfunc_feed__64__ctx[2U])) {
                            __Vfunc_feed__64__frame_error = 1U;
                            __Vfunc_feed__64__ctx[2U] 
                                = (0xffffU & __Vfunc_feed__64__ctx[2U]);
                        } else {
                            if ((0x55U == (IData)(__Vfunc_feed__64__data))) {
                                __Vfunc_feed__64__ctx[0U] 
                                    = ((0xffff00ffU 
                                        & __Vfunc_feed__64__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__64__data) 
                                          << 8U));
                                __Vfunc_feed__64__frame_valid = 1U;
                                __Vfunc_feed__64__out_frame[0U] 
                                    = ((__Vfunc_feed__64__ctx[1U] 
                                        << 0x18U) | 
                                       (__Vfunc_feed__64__ctx[0U] 
                                        >> 8U));
                                __Vfunc_feed__64__out_frame[1U] 
                                    = ((__Vfunc_feed__64__ctx[2U] 
                                        << 0x18U) | 
                                       (__Vfunc_feed__64__ctx[1U] 
                                        >> 8U));
                                __Vfunc_feed__64__out_frame[2U] 
                                    = (0xffU & (__Vfunc_feed__64__ctx[2U] 
                                                >> 8U));
                            } else {
                                __Vfunc_feed__64__frame_error = 1U;
                            }
                            __Vfunc_feed__64__ctx[2U] 
                                = (0xffffU & __Vfunc_feed__64__ctx[2U]);
                        }
                    } else if ((0x40000U & __Vfunc_feed__64__ctx[2U])) {
                        if ((0x20000U & __Vfunc_feed__64__ctx[2U])) {
                            if ((0x10000U & __Vfunc_feed__64__ctx[2U])) {
                                __Vfunc_feed__64__ctx[0U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__64__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__64__data) 
                                          << 0x10U));
                                if (((IData)(__Vfunc_feed__64__data) 
                                     == (0xffU & __Vfunc_feed__64__ctx[0U]))) {
                                    __Vfunc_feed__64__ctx[2U] 
                                        = (0x80000U 
                                           | (0xffffU 
                                              & __Vfunc_feed__64__ctx[2U]));
                                } else {
                                    __Vfunc_feed__64__frame_error = 1U;
                                    __Vfunc_feed__64__ctx[2U] 
                                        = (0xffffU 
                                           & __Vfunc_feed__64__ctx[2U]);
                                }
                            } else {
                                __Vfunc_feed__64__ctx[0U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__64__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__64__data) 
                                          << 0x18U));
                                __Vfunc_feed__64__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__64__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__64__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__64__data))));
                                __Vfunc_feed__64__ctx[2U] 
                                    = (0x70000U | (0xffffU 
                                                   & __Vfunc_feed__64__ctx[2U]));
                            }
                        } else if ((0x10000U & __Vfunc_feed__64__ctx[2U])) {
                            __Vfunc_feed__64__ctx[1U] 
                                = ((0xffffff00U & __Vfunc_feed__64__ctx[1U]) 
                                   | (IData)(__Vfunc_feed__64__data));
                            __Vfunc_feed__64__ctx[0U] 
                                = ((0xffffff00U & __Vfunc_feed__64__ctx[0U]) 
                                   | (0xffU & (__Vfunc_feed__64__ctx[0U] 
                                               ^ (IData)(__Vfunc_feed__64__data))));
                            __Vfunc_feed__64__ctx[2U] 
                                = (0x60000U | (0xffffU 
                                               & __Vfunc_feed__64__ctx[2U]));
                        } else {
                            __Vfunc_feed__64__ctx[1U] 
                                = ((0xffff00ffU & __Vfunc_feed__64__ctx[1U]) 
                                   | ((IData)(__Vfunc_feed__64__data) 
                                      << 8U));
                            __Vfunc_feed__64__ctx[0U] 
                                = ((0xffffff00U & __Vfunc_feed__64__ctx[0U]) 
                                   | (0xffU & (__Vfunc_feed__64__ctx[0U] 
                                               ^ (IData)(__Vfunc_feed__64__data))));
                            __Vfunc_feed__64__ctx[2U] 
                                = (0x50000U | (0xffffU 
                                               & __Vfunc_feed__64__ctx[2U]));
                        }
                    } else if ((0x20000U & __Vfunc_feed__64__ctx[2U])) {
                        if ((0x10000U & __Vfunc_feed__64__ctx[2U])) {
                            __Vfunc_feed__64__ctx[1U] 
                                = ((0xff00ffffU & __Vfunc_feed__64__ctx[1U]) 
                                   | ((IData)(__Vfunc_feed__64__data) 
                                      << 0x10U));
                            __Vfunc_feed__64__ctx[0U] 
                                = ((0xffffff00U & __Vfunc_feed__64__ctx[0U]) 
                                   | (0xffU & (__Vfunc_feed__64__ctx[0U] 
                                               ^ (IData)(__Vfunc_feed__64__data))));
                            __Vfunc_feed__64__ctx[2U] 
                                = (0x40000U | (0xffffU 
                                               & __Vfunc_feed__64__ctx[2U]));
                        } else {
                            __Vfunc_feed__64__ctx[1U] 
                                = ((0xffffffU & __Vfunc_feed__64__ctx[1U]) 
                                   | ((IData)(__Vfunc_feed__64__data) 
                                      << 0x18U));
                            __Vfunc_feed__64__ctx[0U] 
                                = ((0xffffff00U & __Vfunc_feed__64__ctx[0U]) 
                                   | (0xffU & (__Vfunc_feed__64__ctx[0U] 
                                               ^ (IData)(__Vfunc_feed__64__data))));
                            __Vfunc_feed__64__ctx[2U] 
                                = (0x30000U | (0xffffU 
                                               & __Vfunc_feed__64__ctx[2U]));
                        }
                    } else if ((0x10000U & __Vfunc_feed__64__ctx[2U])) {
                        if ((4U == (IData)(__Vfunc_feed__64__data))) {
                            __Vfunc_feed__64__ctx[2U] 
                                = ((0xfff00U & __Vfunc_feed__64__ctx[2U]) 
                                   | (0xfffffU & (IData)(__Vfunc_feed__64__data)));
                            __Vfunc_feed__64__ctx[0U] 
                                = ((0xffffff00U & __Vfunc_feed__64__ctx[0U]) 
                                   | (IData)(__Vfunc_feed__64__data));
                            __Vfunc_feed__64__ctx[2U] 
                                = (0x20000U | (0xffffU 
                                               & __Vfunc_feed__64__ctx[2U]));
                        } else {
                            __Vfunc_feed__64__frame_error = 1U;
                            __Vfunc_feed__64__ctx[2U] 
                                = (0xffffU & __Vfunc_feed__64__ctx[2U]);
                        }
                    } else if ((0xaaU == (IData)(__Vfunc_feed__64__data))) {
                        __Vfunc_feed__64__ctx[2U] = 
                            ((0xffU & __Vfunc_feed__64__ctx[2U]) 
                             | (0xfff00U & (0x10000U 
                                            | ((IData)(__Vfunc_feed__64__data) 
                                               << 8U))));
                        __Vfunc_feed__64__ctx[0U] = 
                            (0xffffff00U & __Vfunc_feed__64__ctx[0U]);
                    } else {
                        __Vfunc_feed__64__frame_error = 1U;
                    }
                    __Vfunc_feed__64__Vfuncout[0U] 
                        = __Vfunc_feed__64__ctx[0U];
                    __Vfunc_feed__64__Vfuncout[1U] 
                        = __Vfunc_feed__64__ctx[1U];
                    __Vfunc_feed__64__Vfuncout[2U] 
                        = __Vfunc_feed__64__ctx[2U];
                    __Vfunc_feed__11__frame_valid = __Vfunc_feed__64__frame_valid;
                    __Vfunc_feed__11__frame_error = __Vfunc_feed__64__frame_error;
                    __Vfunc_feed__11__ctx[0x13U] = 
                        ((0x1fffU & __Vfunc_feed__11__ctx[0x13U]) 
                         | (__Vfunc_feed__64__Vfuncout[0U] 
                            << 0xdU));
                    __Vfunc_feed__11__ctx[0x14U] = 
                        ((__Vfunc_feed__64__Vfuncout[0U] 
                          >> 0x13U) | (__Vfunc_feed__64__Vfuncout[1U] 
                                       << 0xdU));
                    __Vfunc_feed__11__ctx[0x15U] = 
                        ((__Vfunc_feed__64__Vfuncout[1U] 
                          >> 0x13U) | (__Vfunc_feed__64__Vfuncout[2U] 
                                       << 0xdU));
                    __Vfunc_feed__11__ctx[0x16U] = 
                        ((0x7ffffeU & __Vfunc_feed__11__ctx[0x16U]) 
                         | (0x7fffffU & (__Vfunc_feed__64__Vfuncout[2U] 
                                         >> 0x13U)));
                    __Vfunc_feed__11__out_msgType = 4U;
                } else {
                    __Vfunc_feed__11__frame_error = 1U;
                }
                if (((IData)(__Vfunc_feed__11__frame_valid) 
                     | (IData)(__Vfunc_feed__11__frame_error))) {
                    __Vfunc_feed__11__ctx[0x16U] = 
                        (0x1ffffU & __Vfunc_feed__11__ctx[0x16U]);
                }
            } else {
                __Vfunc_feed__11__frame_error = 1U;
                __Vfunc_feed__11__ctx[0x16U] = (0x1ffffU 
                                                & __Vfunc_feed__11__ctx[0x16U]);
            }
            __Vfunc_feed__11__Vfuncout[0U] = __Vfunc_feed__11__ctx[0U];
            __Vfunc_feed__11__Vfuncout[1U] = __Vfunc_feed__11__ctx[1U];
            __Vfunc_feed__11__Vfuncout[2U] = __Vfunc_feed__11__ctx[2U];
            __Vfunc_feed__11__Vfuncout[3U] = __Vfunc_feed__11__ctx[3U];
            __Vfunc_feed__11__Vfuncout[4U] = __Vfunc_feed__11__ctx[4U];
            __Vfunc_feed__11__Vfuncout[5U] = __Vfunc_feed__11__ctx[5U];
            __Vfunc_feed__11__Vfuncout[6U] = __Vfunc_feed__11__ctx[6U];
            __Vfunc_feed__11__Vfuncout[7U] = __Vfunc_feed__11__ctx[7U];
            __Vfunc_feed__11__Vfuncout[8U] = __Vfunc_feed__11__ctx[8U];
            __Vfunc_feed__11__Vfuncout[9U] = __Vfunc_feed__11__ctx[9U];
            __Vfunc_feed__11__Vfuncout[0xaU] = __Vfunc_feed__11__ctx[0xaU];
            __Vfunc_feed__11__Vfuncout[0xbU] = __Vfunc_feed__11__ctx[0xbU];
            __Vfunc_feed__11__Vfuncout[0xcU] = __Vfunc_feed__11__ctx[0xcU];
            __Vfunc_feed__11__Vfuncout[0xdU] = __Vfunc_feed__11__ctx[0xdU];
            __Vfunc_feed__11__Vfuncout[0xeU] = __Vfunc_feed__11__ctx[0xeU];
            __Vfunc_feed__11__Vfuncout[0xfU] = __Vfunc_feed__11__ctx[0xfU];
            __Vfunc_feed__11__Vfuncout[0x10U] = __Vfunc_feed__11__ctx[0x10U];
            __Vfunc_feed__11__Vfuncout[0x11U] = __Vfunc_feed__11__ctx[0x11U];
            __Vfunc_feed__11__Vfuncout[0x12U] = __Vfunc_feed__11__ctx[0x12U];
            __Vfunc_feed__11__Vfuncout[0x13U] = __Vfunc_feed__11__ctx[0x13U];
            __Vfunc_feed__11__Vfuncout[0x14U] = __Vfunc_feed__11__ctx[0x14U];
            __Vfunc_feed__11__Vfuncout[0x15U] = __Vfunc_feed__11__ctx[0x15U];
            __Vfunc_feed__11__Vfuncout[0x16U] = __Vfunc_feed__11__ctx[0x16U];
            vlSelf->spi_full_flow_led_20_tb__DOT__frame_valid 
                = __Vfunc_feed__11__frame_valid;
            vlSelf->spi_full_flow_led_20_tb__DOT__out_msgType 
                = __Vfunc_feed__11__out_msgType;
            vlSelf->spi_full_flow_led_20_tb__DOT__led_ctrl_frame 
                = __Vfunc_feed__11__led_ctrl_frame;
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0U] 
                = __Vfunc_feed__11__Vfuncout[0U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[1U] 
                = __Vfunc_feed__11__Vfuncout[1U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[2U] 
                = __Vfunc_feed__11__Vfuncout[2U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[3U] 
                = __Vfunc_feed__11__Vfuncout[3U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[4U] 
                = __Vfunc_feed__11__Vfuncout[4U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[5U] 
                = __Vfunc_feed__11__Vfuncout[5U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[6U] 
                = __Vfunc_feed__11__Vfuncout[6U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[7U] 
                = __Vfunc_feed__11__Vfuncout[7U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[8U] 
                = __Vfunc_feed__11__Vfuncout[8U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[9U] 
                = __Vfunc_feed__11__Vfuncout[9U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xaU] 
                = __Vfunc_feed__11__Vfuncout[0xaU];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xbU] 
                = __Vfunc_feed__11__Vfuncout[0xbU];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xcU] 
                = __Vfunc_feed__11__Vfuncout[0xcU];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xdU] 
                = __Vfunc_feed__11__Vfuncout[0xdU];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xeU] 
                = __Vfunc_feed__11__Vfuncout[0xeU];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xfU] 
                = __Vfunc_feed__11__Vfuncout[0xfU];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x10U] 
                = __Vfunc_feed__11__Vfuncout[0x10U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x11U] 
                = __Vfunc_feed__11__Vfuncout[0x11U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x12U] 
                = __Vfunc_feed__11__Vfuncout[0x12U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x13U] 
                = __Vfunc_feed__11__Vfuncout[0x13U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x14U] 
                = __Vfunc_feed__11__Vfuncout[0x14U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x15U] 
                = __Vfunc_feed__11__Vfuncout[0x15U];
            vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x16U] 
                = __Vfunc_feed__11__Vfuncout[0x16U];
        }
    } else {
        __Vfunc_init__65__ctx[5U] = ((0x1ffU & __Vfunc_init__65__ctx[5U]) 
                                     | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0U] 
                                        << 9U));
        __Vfunc_init__65__ctx[6U] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0U] 
                                      >> 0x17U) | (
                                                   Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[1U] 
                                                   << 9U));
        __Vfunc_init__65__ctx[7U] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[1U] 
                                      >> 0x17U) | (
                                                   Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[2U] 
                                                   << 9U));
        __Vfunc_init__65__ctx[8U] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[2U] 
                                      >> 0x17U) | (
                                                   Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[3U] 
                                                   << 9U));
        __Vfunc_init__65__ctx[9U] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[3U] 
                                      >> 0x17U) | (
                                                   Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[4U] 
                                                   << 9U));
        __Vfunc_init__65__ctx[0xaU] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[4U] 
                                        >> 0x17U) | 
                                       (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[5U] 
                                        << 9U));
        __Vfunc_init__65__ctx[0xbU] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[5U] 
                                        >> 0x17U) | 
                                       (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[6U] 
                                        << 9U));
        __Vfunc_init__65__ctx[0xcU] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[6U] 
                                        >> 0x17U) | 
                                       (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[7U] 
                                        << 9U));
        __Vfunc_init__65__ctx[0xdU] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[7U] 
                                        >> 0x17U) | 
                                       (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[8U] 
                                        << 9U));
        __Vfunc_init__65__ctx[0xeU] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[8U] 
                                        >> 0x17U) | 
                                       (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[9U] 
                                        << 9U));
        __Vfunc_init__65__ctx[0xfU] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[9U] 
                                        >> 0x17U) | 
                                       (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0xaU] 
                                        << 9U));
        __Vfunc_init__65__ctx[0x10U] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0xaU] 
                                         >> 0x17U) 
                                        | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0xbU] 
                                           << 9U));
        __Vfunc_init__65__ctx[0x11U] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0xbU] 
                                         >> 0x17U) 
                                        | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0xcU] 
                                           << 9U));
        __Vfunc_init__65__ctx[0x12U] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0xcU] 
                                         >> 0x17U) 
                                        | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0xdU] 
                                           << 9U));
        __Vfunc_init__65__ctx[0x13U] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0xdU] 
                                         >> 0x17U) 
                                        | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0xeU] 
                                           << 9U));
        __Vfunc_init__65__ctx[0x14U] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0xeU] 
                                         >> 0x17U) 
                                        | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0xfU] 
                                           << 9U));
        __Vfunc_init__65__ctx[0x15U] = ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0xfU] 
                                         >> 0x17U) 
                                        | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0x10U] 
                                           << 9U));
        __Vfunc_init__65__ctx[0x16U] = (0x7fffffU & 
                                        ((Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0x10U] 
                                          >> 0x17U) 
                                         | (Vspi_full_flow_led_20_tb__ConstPool__CONST_h9394af27_0[0x11U] 
                                            << 9U)));
        __Vfunc_init__65__ctx[0U] = 0x5500U;
        __Vfunc_init__65__ctx[1U] = 0xaa070000U;
        __Vfunc_init__65__ctx[2U] = 0x510002a8U;
        __Vfunc_init__65__ctx[3U] = 0x40400aa5U;
        __Vfunc_init__65__ctx[4U] = 0x3002a95U;
        __Vfunc_init__65__ctx[5U] = (0x55U | (0xfffffe00U 
                                              & __Vfunc_init__65__ctx[5U]));
        __Vfunc_init__65__Vfuncout[0U] = __Vfunc_init__65__ctx[0U];
        __Vfunc_init__65__Vfuncout[1U] = __Vfunc_init__65__ctx[1U];
        __Vfunc_init__65__Vfuncout[2U] = __Vfunc_init__65__ctx[2U];
        __Vfunc_init__65__Vfuncout[3U] = __Vfunc_init__65__ctx[3U];
        __Vfunc_init__65__Vfuncout[4U] = __Vfunc_init__65__ctx[4U];
        __Vfunc_init__65__Vfuncout[5U] = __Vfunc_init__65__ctx[5U];
        __Vfunc_init__65__Vfuncout[6U] = __Vfunc_init__65__ctx[6U];
        __Vfunc_init__65__Vfuncout[7U] = __Vfunc_init__65__ctx[7U];
        __Vfunc_init__65__Vfuncout[8U] = __Vfunc_init__65__ctx[8U];
        __Vfunc_init__65__Vfuncout[9U] = __Vfunc_init__65__ctx[9U];
        __Vfunc_init__65__Vfuncout[0xaU] = __Vfunc_init__65__ctx[0xaU];
        __Vfunc_init__65__Vfuncout[0xbU] = __Vfunc_init__65__ctx[0xbU];
        __Vfunc_init__65__Vfuncout[0xcU] = __Vfunc_init__65__ctx[0xcU];
        __Vfunc_init__65__Vfuncout[0xdU] = __Vfunc_init__65__ctx[0xdU];
        __Vfunc_init__65__Vfuncout[0xeU] = __Vfunc_init__65__ctx[0xeU];
        __Vfunc_init__65__Vfuncout[0xfU] = __Vfunc_init__65__ctx[0xfU];
        __Vfunc_init__65__Vfuncout[0x10U] = __Vfunc_init__65__ctx[0x10U];
        __Vfunc_init__65__Vfuncout[0x11U] = __Vfunc_init__65__ctx[0x11U];
        __Vfunc_init__65__Vfuncout[0x12U] = __Vfunc_init__65__ctx[0x12U];
        __Vfunc_init__65__Vfuncout[0x13U] = __Vfunc_init__65__ctx[0x13U];
        __Vfunc_init__65__Vfuncout[0x14U] = __Vfunc_init__65__ctx[0x14U];
        __Vfunc_init__65__Vfuncout[0x15U] = __Vfunc_init__65__ctx[0x15U];
        __Vfunc_init__65__Vfuncout[0x16U] = __Vfunc_init__65__ctx[0x16U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0U] 
            = __Vfunc_init__65__Vfuncout[0U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[1U] 
            = __Vfunc_init__65__Vfuncout[1U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[2U] 
            = __Vfunc_init__65__Vfuncout[2U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[3U] 
            = __Vfunc_init__65__Vfuncout[3U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[4U] 
            = __Vfunc_init__65__Vfuncout[4U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[5U] 
            = __Vfunc_init__65__Vfuncout[5U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[6U] 
            = __Vfunc_init__65__Vfuncout[6U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[7U] 
            = __Vfunc_init__65__Vfuncout[7U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[8U] 
            = __Vfunc_init__65__Vfuncout[8U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[9U] 
            = __Vfunc_init__65__Vfuncout[9U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xaU] 
            = __Vfunc_init__65__Vfuncout[0xaU];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xbU] 
            = __Vfunc_init__65__Vfuncout[0xbU];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xcU] 
            = __Vfunc_init__65__Vfuncout[0xcU];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xdU] 
            = __Vfunc_init__65__Vfuncout[0xdU];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xeU] 
            = __Vfunc_init__65__Vfuncout[0xeU];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0xfU] 
            = __Vfunc_init__65__Vfuncout[0xfU];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x10U] 
            = __Vfunc_init__65__Vfuncout[0x10U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x11U] 
            = __Vfunc_init__65__Vfuncout[0x11U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x12U] 
            = __Vfunc_init__65__Vfuncout[0x12U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x13U] 
            = __Vfunc_init__65__Vfuncout[0x13U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x14U] 
            = __Vfunc_init__65__Vfuncout[0x14U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x15U] 
            = __Vfunc_init__65__Vfuncout[0x15U];
        vlSelf->spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx[0x16U] 
            = __Vfunc_init__65__Vfuncout[0x16U];
        vlSelf->spi_full_flow_led_20_tb__DOT__frame_valid = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__out_msgType = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__led_ctrl_frame = 0xaa070000000055ULL;
    }
    vlSelf->spi_full_flow_led_20_tb__DOT__prev_busy 
        = ((IData)(vlSelf->spi_full_flow_led_20_tb__DOT__rst_n) 
           && (0xa8U < vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__rx_fifo.count));
    if (vlSelf->spi_full_flow_led_20_tb__DOT__rst_n) {
        __Vdly__spi_full_flow_led_20_tb__DOT__rd_en = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__spi_byte_valid = 0U;
        if ((0U == (IData)(vlSelf->spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state))) {
            if (vlSelf->spi_full_flow_led_20_tb__DOT__irq) {
                __Vdly__spi_full_flow_led_20_tb__DOT__rd_en = 1U;
                __Vdly__spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state))) {
            __Vdly__spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelf->spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state))) {
            vlSelf->spi_full_flow_led_20_tb__DOT__spi_byte 
                = vlSelf->spi_full_flow_led_20_tb__DOT__rdata;
            vlSelf->spi_full_flow_led_20_tb__DOT__spi_byte_valid = 1U;
            if (vlSelf->spi_full_flow_led_20_tb__DOT__irq) {
                __Vdly__spi_full_flow_led_20_tb__DOT__rd_en = 1U;
                __Vdly__spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state = 1U;
            } else {
                __Vdly__spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state = 0U;
            }
        } else {
            __Vdly__spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state = 0U;
        }
        vlSelf->spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state 
            = __Vdly__spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state;
        vlSelf->spi_full_flow_led_20_tb__DOT__resp_valid = 0U;
        if (((IData)(vlSelf->spi_full_flow_led_20_tb__DOT__frame_valid) 
             & (7U == (IData)(vlSelf->spi_full_flow_led_20_tb__DOT__out_msgType)))) {
            vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_len = 7U;
            vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__unnamedblk1__DOT__r = 0xab070000000054ULL;
            vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__unnamedblk1__DOT__r 
                = ((0xffff0000ffffffULL & vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__unnamedblk1__DOT__r) 
                   | ((QData)((IData)((0xffffU & (IData)(
                                                         (vlSelf->spi_full_flow_led_20_tb__DOT__led_ctrl_frame 
                                                          >> 0x18U))))) 
                      << 0x18U));
            vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__unnamedblk1__DOT__r 
                = ((0xffffffff00ffffULL & vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__unnamedblk1__DOT__r) 
                   | ((QData)((IData)(((0U != (3U & (IData)(
                                                            (vlSelf->spi_full_flow_led_20_tb__DOT__led_ctrl_frame 
                                                             >> 0x1eU))))
                                        ? 1U : 0U))) 
                      << 0x10U));
            __Vfunc_set_parity__90__in = vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__unnamedblk1__DOT__r;
            __Vfunc_set_parity__90__r = __Vfunc_set_parity__90__in;
            __Vfunc_calc_parity__91__f = __Vfunc_set_parity__90__in;
            __Vfunc_calc_parity__91__Vfuncout = (0xffU 
                                                 & ((((IData)(
                                                              (__Vfunc_calc_parity__91__f 
                                                               >> 0x28U)) 
                                                      ^ (IData)(
                                                                (__Vfunc_calc_parity__91__f 
                                                                 >> 0x20U))) 
                                                     ^ (IData)(
                                                               (__Vfunc_calc_parity__91__f 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__91__f 
                                                               >> 0x10U))));
            __Vfunc_set_parity__90__r = ((0xffffffffff00ffULL 
                                          & __Vfunc_set_parity__90__r) 
                                         | ((QData)((IData)(__Vfunc_calc_parity__91__Vfuncout)) 
                                            << 8U));
            __Vfunc_set_parity__90__Vfuncout = __Vfunc_set_parity__90__r;
            vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__unnamedblk1__DOT__r 
                = __Vfunc_set_parity__90__Vfuncout;
            vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[0U] = 0U;
            vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[1U] = 0U;
            vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[2U] = 0U;
            vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[3U] = 0U;
            vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[4U] = 0U;
            __Vfunc_encoder__92__r = vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__unnamedblk1__DOT__r;
            __Vfunc_encoder__92__v = __Vfunc_encoder__92__r;
            __Vfunc_encoder__92__Vfuncout = __Vfunc_encoder__92__v;
            vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[3U] 
                = ((0xffU & vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[3U]) 
                   | ((IData)(__Vfunc_encoder__92__Vfuncout) 
                      << 8U));
            vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[4U] 
                = (((IData)(__Vfunc_encoder__92__Vfuncout) 
                    >> 0x18U) | ((IData)((__Vfunc_encoder__92__Vfuncout 
                                          >> 0x20U)) 
                                 << 8U));
            vlSelf->spi_full_flow_led_20_tb__DOT__resp_valid = 1U;
        }
        if ((0U == (IData)(vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__state))) {
            vlSelf->spi_full_flow_led_20_tb__DOT__tx_busy = 0U;
            if (vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick) {
                if ((0U >= (1U & vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick_idx))) {
                    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[0U] 
                        = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__bits_arr
                        [(1U & vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick_idx)][0U];
                    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[1U] 
                        = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__bits_arr
                        [(1U & vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick_idx)][1U];
                    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[2U] 
                        = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__bits_arr
                        [(1U & vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick_idx)][2U];
                    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[3U] 
                        = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__bits_arr
                        [(1U & vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick_idx)][3U];
                    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[4U] 
                        = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__bits_arr
                        [(1U & vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick_idx)][4U];
                    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_bytes 
                        = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_arr
                        [(1U & vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick_idx)];
                } else {
                    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[0U] = 0U;
                    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[1U] = 0U;
                    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[2U] = 0U;
                    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[3U] = 0U;
                    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[4U] = 0U;
                    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_bytes = 0U;
                }
                __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx = 0U;
                __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__state = 1U;
                vlSelf->spi_full_flow_led_20_tb__DOT__tx_busy = 1U;
            }
        } else if ((1U == (IData)(vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__state))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.full)))) {
                vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__unnamedblk4__DOT__b 
                    = ((0x9fU >= (0xffU & (((IData)(0x9fU) 
                                            - VL_SHIFTL_III(8,32,32, vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx, 3U)) 
                                           - (IData)(7U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & (((IData)(0x9fU) 
                                                 - 
                                                 VL_SHIFTL_III(8,32,32, vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx, 3U)) 
                                                - (IData)(7U))))
                                      ? 0U : (vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[
                                              (((IData)(7U) 
                                                + (0xffU 
                                                   & (((IData)(0x9fU) 
                                                       - 
                                                       VL_SHIFTL_III(8,32,32, vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx, 3U)) 
                                                      - (IData)(7U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(0x9fU) 
                                                       - 
                                                       VL_SHIFTL_III(8,32,32, vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx, 3U)) 
                                                      - (IData)(7U)))))) 
                                    | (vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[
                                       (7U & ((((IData)(0x9fU) 
                                                - VL_SHIFTL_III(8,32,32, vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx, 3U)) 
                                               - (IData)(7U)) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           (((IData)(0x9fU) 
                                             - VL_SHIFTL_III(8,32,32, vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx, 3U)) 
                                            - (IData)(7U))))))
                        : 0U);
                __Vtask_write__94__data = vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__unnamedblk4__DOT__b;
                if (vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.full) {
                    vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.__Vlvbound_h564755a9__0 
                        = __Vtask_write__94__data;
                    if ((0xc7U >= (0xffU & vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.wr_ptr))) {
                        vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.mem[(0xffU 
                                                                                & vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.wr_ptr)] 
                            = vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.__Vlvbound_h564755a9__0;
                    }
                    vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.rd_ptr 
                        = VL_MODDIV_III(32, ((IData)(1U) 
                                             + vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.rd_ptr), (IData)(0xc8U));
                    vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.wr_ptr 
                        = VL_MODDIV_III(32, ((IData)(1U) 
                                             + vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.wr_ptr), (IData)(0xc8U));
                } else {
                    vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.__Vlvbound_h564755a9__1 
                        = __Vtask_write__94__data;
                    if ((0xc7U >= (0xffU & vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.wr_ptr))) {
                        vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.mem[(0xffU 
                                                                                & vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.wr_ptr)] 
                            = vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.__Vlvbound_h564755a9__1;
                    }
                    vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.count 
                        = ((IData)(1U) + vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.count);
                    vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.wr_ptr 
                        = VL_MODDIV_III(32, ((IData)(1U) 
                                             + vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.wr_ptr), (IData)(0xc8U));
                }
                if ((((IData)(1U) + vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx) 
                     >= vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_bytes)) {
                    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__state = 0U;
                    vlSelf->spi_full_flow_led_20_tb__DOT__tx_busy = 0U;
                } else {
                    __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx 
                        = ((IData)(1U) + vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx);
                }
            }
        } else {
            __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__state = 0U;
        }
    } else {
        vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_len = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[0U] = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[1U] = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[2U] = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[3U] = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits[4U] = 0U;
        __Vdly__spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state = 0U;
        __Vdly__spi_full_flow_led_20_tb__DOT__rd_en = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__spi_byte_valid = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__spi_byte = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state 
            = __Vdly__spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state;
        vlSelf->spi_full_flow_led_20_tb__DOT__resp_valid = 0U;
        __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__state = 0U;
        __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[0U] = 0U;
        __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[1U] = 0U;
        __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[2U] = 0U;
        __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[3U] = 0U;
        __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[4U] = 0U;
        __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_bytes = 0U;
        __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__tx_busy = 0U;
    }
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
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[0U] 
        = __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[0U];
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[1U] 
        = __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[1U];
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[2U] 
        = __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[2U];
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[3U] 
        = __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[3U];
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[4U] 
        = __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift[4U];
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_bytes 
        = __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_bytes;
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx 
        = __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx;
    vlSelf->spi_full_flow_led_20_tb__DOT__u_tx__DOT__state 
        = __Vdly__spi_full_flow_led_20_tb__DOT__u_tx__DOT__state;
    if (vlSelf->spi_full_flow_led_20_tb__DOT__rst_n) {
        vlSelf->spi_full_flow_led_20_tb__DOT__wr_en = 0U;
        if ((0U != (IData)(vlSelf->spi_full_flow_led_20_tb__DOT__u_miso__DOT__gap))) {
            vlSelf->spi_full_flow_led_20_tb__DOT__u_miso__DOT__gap 
                = (3U & ((IData)(vlSelf->spi_full_flow_led_20_tb__DOT__u_miso__DOT__gap) 
                         - (IData)(1U)));
        } else if ((1U & (~ (IData)(vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.empty)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.empty)))) {
                __Vtask_read__95__data = ((0xc7U >= 
                                           (0xffU & vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.rd_ptr))
                                           ? vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.mem
                                          [(0xffU & vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.rd_ptr)]
                                           : 0U);
                vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.count 
                    = (vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.count 
                       - (IData)(1U));
                vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.rd_ptr 
                    = VL_MODDIV_III(32, ((IData)(1U) 
                                         + vlSymsp->TOP__spi_full_flow_led_20_tb__DOT__tx_fifo.rd_ptr), (IData)(0xc8U));
            }
            vlSelf->spi_full_flow_led_20_tb__DOT__u_miso__DOT__unnamedblk1__DOT__b 
                = __Vtask_read__95__data;
            vlSelf->spi_full_flow_led_20_tb__DOT__wdata 
                = vlSelf->spi_full_flow_led_20_tb__DOT__u_miso__DOT__unnamedblk1__DOT__b;
            vlSelf->spi_full_flow_led_20_tb__DOT__wr_en = 1U;
            vlSelf->spi_full_flow_led_20_tb__DOT__u_miso__DOT__gap = 2U;
        }
    } else {
        vlSelf->spi_full_flow_led_20_tb__DOT__wr_en = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__wdata = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__u_miso__DOT__gap = 0U;
    }
    if (vlSelf->spi_full_flow_led_20_tb__DOT__rst_n) {
        vlSelf->spi_full_flow_led_20_tb__DOT__irq = 
            (0U != vlSelf->spi_full_flow_led_20_tb__DOT__inq.size());
        if (((IData)(vlSelf->spi_full_flow_led_20_tb__DOT__rd_en) 
             & (0U != vlSelf->spi_full_flow_led_20_tb__DOT__inq.size()))) {
            vlSelf->spi_full_flow_led_20_tb__DOT__rdata 
                = vlSelf->spi_full_flow_led_20_tb__DOT__inq.pop_front();
        }
    } else {
        vlSelf->spi_full_flow_led_20_tb__DOT__irq = 0U;
        vlSelf->spi_full_flow_led_20_tb__DOT__rdata = 0U;
    }
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
    vlSelf->spi_full_flow_led_20_tb__DOT__rd_en = __Vdly__spi_full_flow_led_20_tb__DOT__rd_en;
}
