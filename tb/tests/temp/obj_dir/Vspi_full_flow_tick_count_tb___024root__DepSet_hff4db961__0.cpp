// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_full_flow_tick_count_tb.h for the primary calling header

#include "Vspi_full_flow_tick_count_tb__pch.h"
#include "Vspi_full_flow_tick_count_tb__Syms.h"
#include "Vspi_full_flow_tick_count_tb___024root.h"

VlCoroutine Vspi_full_flow_tick_count_tb___024root___eval_initial__TOP__Vtiming__0(Vspi_full_flow_tick_count_tb___024root* vlSelf);
VlCoroutine Vspi_full_flow_tick_count_tb___024root___eval_initial__TOP__Vtiming__1(Vspi_full_flow_tick_count_tb___024root* vlSelf);
void Vspi_full_flow_tick_count_tb_spi_fifo_if___eval_initial__TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo(Vspi_full_flow_tick_count_tb_spi_fifo_if* vlSelf);
void Vspi_full_flow_tick_count_tb_spi_fifo_if__Dc8_DB1___eval_initial__TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo(Vspi_full_flow_tick_count_tb_spi_fifo_if__Dc8_DB1* vlSelf);

void Vspi_full_flow_tick_count_tb___024root___eval_initial(Vspi_full_flow_tick_count_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vspi_full_flow_tick_count_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vspi_full_flow_tick_count_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vspi_full_flow_tick_count_tb_spi_fifo_if___eval_initial__TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo((&vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo));
    Vspi_full_flow_tick_count_tb_spi_fifo_if__Dc8_DB1___eval_initial__TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo((&vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo));
    vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_tick_count_tb__DOT__clk__0 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_tick_count_tb__DOT__rst_n__0 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n;
}

extern const VlWide<11>/*351:0*/ Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0;
extern const VlWide<10>/*319:0*/ Vspi_full_flow_tick_count_tb__ConstPool__CONST_h3b9d891d_0;

VL_INLINE_OPT VlCoroutine Vspi_full_flow_tick_count_tb___024root___eval_initial__TOP__Vtiming__0(Vspi_full_flow_tick_count_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ spi_full_flow_tick_count_tb__DOT____Vrepeat1;
    spi_full_flow_tick_count_tb__DOT____Vrepeat1 = 0;
    CData/*7:0*/ __Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__frameId;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__frameId = 0;
    IData/*31:0*/ __Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__req;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__req = 0;
    IData/*31:0*/ __Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__raw;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__raw = 0;
    IData/*31:0*/ __Vfunc_make_default__1__Vfuncout;
    __Vfunc_make_default__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_make_default__1__r;
    __Vfunc_make_default__1__r = 0;
    IData/*31:0*/ __Vfunc_encoder__2__Vfuncout;
    __Vfunc_encoder__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_encoder__2__r;
    __Vfunc_encoder__2__r = 0;
    CData/*7:0*/ __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__frameId;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__frameId = 0;
    IData/*31:0*/ __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__sx;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__sx = 0;
    CData/*7:0*/ __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__v;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__v = 0;
    VlWide<11>/*335:0*/ __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req;
    VL_ZERO_W(336, __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req);
    VlWide<11>/*335:0*/ __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw;
    VL_ZERO_W(336, __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw);
    VlWide<11>/*335:0*/ __Vfunc_make_default__4__Vfuncout;
    VL_ZERO_W(336, __Vfunc_make_default__4__Vfuncout);
    VlWide<11>/*335:0*/ __Vfunc_make_default__4__r;
    VL_ZERO_W(336, __Vfunc_make_default__4__r);
    VlWide<11>/*335:0*/ __Vfunc_set_parity__5__Vfuncout;
    VL_ZERO_W(336, __Vfunc_set_parity__5__Vfuncout);
    VlWide<11>/*335:0*/ __Vfunc_set_parity__5__in;
    VL_ZERO_W(336, __Vfunc_set_parity__5__in);
    VlWide<11>/*335:0*/ __Vfunc_set_parity__5__r;
    VL_ZERO_W(336, __Vfunc_set_parity__5__r);
    CData/*0:0*/ __Vfunc_calc_parity_bit__6__Vfuncout;
    __Vfunc_calc_parity_bit__6__Vfuncout = 0;
    VlWide<11>/*335:0*/ __Vfunc_calc_parity_bit__6__f;
    VL_ZERO_W(336, __Vfunc_calc_parity_bit__6__f);
    VlWide<11>/*335:0*/ __Vfunc_encoder__7__Vfuncout;
    VL_ZERO_W(336, __Vfunc_encoder__7__Vfuncout);
    VlWide<11>/*335:0*/ __Vfunc_encoder__7__r;
    VL_ZERO_W(336, __Vfunc_encoder__7__r);
    VlWide<11>/*335:0*/ __Vfunc_encoder__7__v;
    VL_ZERO_W(336, __Vfunc_encoder__7__v);
    // Body
    vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__N = 0xcU;
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.clear();
    vlSelf->spi_full_flow_tick_count_tb__DOT__enc_pos = 0U;
    vlSelf->spi_full_flow_tick_count_tb__DOT__enc_vel = 0U;
    vlSelf->spi_full_flow_tick_count_tb__DOT__prox_in = 1U;
    vlSelf->spi_full_flow_tick_count_tb__DOT__estop_in = 1U;
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n = 1U;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__frameId = 0x50U;
    __Vfunc_make_default__1__r = 0xaa030055U;
    __Vfunc_make_default__1__Vfuncout = __Vfunc_make_default__1__r;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__req 
        = __Vfunc_make_default__1__Vfuncout;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__req 
        = ((0xffff00ffU & __Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__req) 
           | ((IData)(__Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__frameId) 
              << 8U));
    __Vfunc_encoder__2__r = __Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__req;
    __Vfunc_encoder__2__Vfuncout = __Vfunc_encoder__2__r;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__raw 
        = __Vfunc_encoder__2__Vfuncout;
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           91);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (__Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__raw 
                                                             >> 0x18U));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           91);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__raw 
                                                                >> 0x10U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           91);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__raw 
                                                                >> 8U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           91);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & __Vtask_spi_full_flow_tick_count_tb__DOT__send_start_move__0__raw));
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__v = 1U;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__sx 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__N;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__frameId = 0x51U;
    __Vfunc_make_default__4__r[0U] = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[0U];
    __Vfunc_make_default__4__r[1U] = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[1U];
    __Vfunc_make_default__4__r[2U] = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[2U];
    __Vfunc_make_default__4__r[3U] = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[3U];
    __Vfunc_make_default__4__r[4U] = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[4U];
    __Vfunc_make_default__4__r[5U] = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[5U];
    __Vfunc_make_default__4__r[6U] = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[6U];
    __Vfunc_make_default__4__r[7U] = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[7U];
    __Vfunc_make_default__4__r[8U] = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[8U];
    __Vfunc_make_default__4__r[9U] = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[9U];
    __Vfunc_make_default__4__r[0xaU] = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[0xaU];
    __Vfunc_make_default__4__Vfuncout[0U] = __Vfunc_make_default__4__r[0U];
    __Vfunc_make_default__4__Vfuncout[1U] = __Vfunc_make_default__4__r[1U];
    __Vfunc_make_default__4__Vfuncout[2U] = __Vfunc_make_default__4__r[2U];
    __Vfunc_make_default__4__Vfuncout[3U] = __Vfunc_make_default__4__r[3U];
    __Vfunc_make_default__4__Vfuncout[4U] = __Vfunc_make_default__4__r[4U];
    __Vfunc_make_default__4__Vfuncout[5U] = __Vfunc_make_default__4__r[5U];
    __Vfunc_make_default__4__Vfuncout[6U] = __Vfunc_make_default__4__r[6U];
    __Vfunc_make_default__4__Vfuncout[7U] = __Vfunc_make_default__4__r[7U];
    __Vfunc_make_default__4__Vfuncout[8U] = __Vfunc_make_default__4__r[8U];
    __Vfunc_make_default__4__Vfuncout[9U] = __Vfunc_make_default__4__r[9U];
    __Vfunc_make_default__4__Vfuncout[0xaU] = __Vfunc_make_default__4__r[0xaU];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[0U] 
        = __Vfunc_make_default__4__Vfuncout[0U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[1U] 
        = __Vfunc_make_default__4__Vfuncout[1U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[2U] 
        = __Vfunc_make_default__4__Vfuncout[2U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[3U] 
        = __Vfunc_make_default__4__Vfuncout[3U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[4U] 
        = __Vfunc_make_default__4__Vfuncout[4U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[5U] 
        = __Vfunc_make_default__4__Vfuncout[5U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[6U] 
        = __Vfunc_make_default__4__Vfuncout[6U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[7U] 
        = __Vfunc_make_default__4__Vfuncout[7U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[8U] 
        = __Vfunc_make_default__4__Vfuncout[8U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[9U] 
        = __Vfunc_make_default__4__Vfuncout[9U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[0xaU] 
        = __Vfunc_make_default__4__Vfuncout[0xaU];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[9U] 
        = ((0xffffU & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[9U]) 
           | (0xffff0000U & (0x10000U | ((IData)(__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__frameId) 
                                         << 0x18U))));
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[8U] 
        = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__sx;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[6U] 
        = (0xffffU & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[6U]);
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[7U] 
        = (0xffff0000U & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[7U]);
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[5U] = 0U;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[9U] 
        = ((0xffff0000U & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[9U]) 
           | (IData)(__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__v));
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[7U] 
        = (0xffffU & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[7U]);
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[6U] 
        = (0xffff0000U & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[6U]);
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[0U] 
        = (0xffffU & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[0U]);
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[1U] = 0U;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[2U] = 0U;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[3U] = 0U;
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[4U] = 0U;
    __Vfunc_set_parity__5__in[0U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[0U];
    __Vfunc_set_parity__5__in[1U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[1U];
    __Vfunc_set_parity__5__in[2U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[2U];
    __Vfunc_set_parity__5__in[3U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[3U];
    __Vfunc_set_parity__5__in[4U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[4U];
    __Vfunc_set_parity__5__in[5U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[5U];
    __Vfunc_set_parity__5__in[6U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[6U];
    __Vfunc_set_parity__5__in[7U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[7U];
    __Vfunc_set_parity__5__in[8U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[8U];
    __Vfunc_set_parity__5__in[9U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[9U];
    __Vfunc_set_parity__5__in[0xaU] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[0xaU];
    __Vfunc_set_parity__5__r[0U] = __Vfunc_set_parity__5__in[0U];
    __Vfunc_set_parity__5__r[1U] = __Vfunc_set_parity__5__in[1U];
    __Vfunc_set_parity__5__r[2U] = __Vfunc_set_parity__5__in[2U];
    __Vfunc_set_parity__5__r[3U] = __Vfunc_set_parity__5__in[3U];
    __Vfunc_set_parity__5__r[4U] = __Vfunc_set_parity__5__in[4U];
    __Vfunc_set_parity__5__r[5U] = __Vfunc_set_parity__5__in[5U];
    __Vfunc_set_parity__5__r[6U] = __Vfunc_set_parity__5__in[6U];
    __Vfunc_set_parity__5__r[7U] = __Vfunc_set_parity__5__in[7U];
    __Vfunc_set_parity__5__r[8U] = __Vfunc_set_parity__5__in[8U];
    __Vfunc_set_parity__5__r[9U] = __Vfunc_set_parity__5__in[9U];
    __Vfunc_set_parity__5__r[0xaU] = __Vfunc_set_parity__5__in[0xaU];
    VL_ASSIGNSEL_WI(336,8,8U, __Vfunc_set_parity__5__r, 
                    VL_EXTEND_II(8,1, ([&]() {
                    __Vfunc_calc_parity_bit__6__f[0U] 
                        = __Vfunc_set_parity__5__in[0U];
                    __Vfunc_calc_parity_bit__6__f[1U] 
                        = __Vfunc_set_parity__5__in[1U];
                    __Vfunc_calc_parity_bit__6__f[2U] 
                        = __Vfunc_set_parity__5__in[2U];
                    __Vfunc_calc_parity_bit__6__f[3U] 
                        = __Vfunc_set_parity__5__in[3U];
                    __Vfunc_calc_parity_bit__6__f[4U] 
                        = __Vfunc_set_parity__5__in[4U];
                    __Vfunc_calc_parity_bit__6__f[5U] 
                        = __Vfunc_set_parity__5__in[5U];
                    __Vfunc_calc_parity_bit__6__f[6U] 
                        = __Vfunc_set_parity__5__in[6U];
                    __Vfunc_calc_parity_bit__6__f[7U] 
                        = __Vfunc_set_parity__5__in[7U];
                    __Vfunc_calc_parity_bit__6__f[8U] 
                        = __Vfunc_set_parity__5__in[8U];
                    __Vfunc_calc_parity_bit__6__f[9U] 
                        = __Vfunc_set_parity__5__in[9U];
                    __Vfunc_calc_parity_bit__6__f[0xaU] 
                        = __Vfunc_set_parity__5__in[0xaU];
                    __Vfunc_calc_parity_bit__6__Vfuncout 
                        = (1U & VL_REDXOR_32(((((((
                                                   ((((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h3b9d891d_0[0U] 
                                                       & ((__Vfunc_calc_parity_bit__6__f[1U] 
                                                           << 0x10U) 
                                                          | (__Vfunc_calc_parity_bit__6__f[0U] 
                                                             >> 0x10U))) 
                                                      ^ 
                                                      (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h3b9d891d_0[1U] 
                                                       & ((__Vfunc_calc_parity_bit__6__f[2U] 
                                                           << 0x10U) 
                                                          | (__Vfunc_calc_parity_bit__6__f[1U] 
                                                             >> 0x10U)))) 
                                                     ^ 
                                                     (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h3b9d891d_0[2U] 
                                                      & ((__Vfunc_calc_parity_bit__6__f[3U] 
                                                          << 0x10U) 
                                                         | (__Vfunc_calc_parity_bit__6__f[2U] 
                                                            >> 0x10U)))) 
                                                    ^ 
                                                    (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h3b9d891d_0[3U] 
                                                     & ((__Vfunc_calc_parity_bit__6__f[4U] 
                                                         << 0x10U) 
                                                        | (__Vfunc_calc_parity_bit__6__f[3U] 
                                                           >> 0x10U)))) 
                                                   ^ 
                                                   (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h3b9d891d_0[4U] 
                                                    & ((__Vfunc_calc_parity_bit__6__f[5U] 
                                                        << 0x10U) 
                                                       | (__Vfunc_calc_parity_bit__6__f[4U] 
                                                          >> 0x10U)))) 
                                                  ^ 
                                                  (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h3b9d891d_0[5U] 
                                                   & ((__Vfunc_calc_parity_bit__6__f[6U] 
                                                       << 0x10U) 
                                                      | (__Vfunc_calc_parity_bit__6__f[5U] 
                                                         >> 0x10U)))) 
                                                 ^ 
                                                 (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h3b9d891d_0[6U] 
                                                  & ((__Vfunc_calc_parity_bit__6__f[7U] 
                                                      << 0x10U) 
                                                     | (__Vfunc_calc_parity_bit__6__f[6U] 
                                                        >> 0x10U)))) 
                                                ^ (
                                                   Vspi_full_flow_tick_count_tb__ConstPool__CONST_h3b9d891d_0[7U] 
                                                   & ((__Vfunc_calc_parity_bit__6__f[8U] 
                                                       << 0x10U) 
                                                      | (__Vfunc_calc_parity_bit__6__f[7U] 
                                                         >> 0x10U)))) 
                                               ^ (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h3b9d891d_0[8U] 
                                                  & ((__Vfunc_calc_parity_bit__6__f[9U] 
                                                      << 0x10U) 
                                                     | (__Vfunc_calc_parity_bit__6__f[8U] 
                                                        >> 0x10U)))) 
                                              ^ (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h3b9d891d_0[9U] 
                                                 & ((__Vfunc_calc_parity_bit__6__f[0xaU] 
                                                     << 0x10U) 
                                                    | (__Vfunc_calc_parity_bit__6__f[9U] 
                                                       >> 0x10U))))));
                }(), (IData)(__Vfunc_calc_parity_bit__6__Vfuncout))));
    __Vfunc_set_parity__5__Vfuncout[0U] = __Vfunc_set_parity__5__r[0U];
    __Vfunc_set_parity__5__Vfuncout[1U] = __Vfunc_set_parity__5__r[1U];
    __Vfunc_set_parity__5__Vfuncout[2U] = __Vfunc_set_parity__5__r[2U];
    __Vfunc_set_parity__5__Vfuncout[3U] = __Vfunc_set_parity__5__r[3U];
    __Vfunc_set_parity__5__Vfuncout[4U] = __Vfunc_set_parity__5__r[4U];
    __Vfunc_set_parity__5__Vfuncout[5U] = __Vfunc_set_parity__5__r[5U];
    __Vfunc_set_parity__5__Vfuncout[6U] = __Vfunc_set_parity__5__r[6U];
    __Vfunc_set_parity__5__Vfuncout[7U] = __Vfunc_set_parity__5__r[7U];
    __Vfunc_set_parity__5__Vfuncout[8U] = __Vfunc_set_parity__5__r[8U];
    __Vfunc_set_parity__5__Vfuncout[9U] = __Vfunc_set_parity__5__r[9U];
    __Vfunc_set_parity__5__Vfuncout[0xaU] = __Vfunc_set_parity__5__r[0xaU];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[0U] 
        = __Vfunc_set_parity__5__Vfuncout[0U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[1U] 
        = __Vfunc_set_parity__5__Vfuncout[1U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[2U] 
        = __Vfunc_set_parity__5__Vfuncout[2U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[3U] 
        = __Vfunc_set_parity__5__Vfuncout[3U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[4U] 
        = __Vfunc_set_parity__5__Vfuncout[4U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[5U] 
        = __Vfunc_set_parity__5__Vfuncout[5U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[6U] 
        = __Vfunc_set_parity__5__Vfuncout[6U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[7U] 
        = __Vfunc_set_parity__5__Vfuncout[7U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[8U] 
        = __Vfunc_set_parity__5__Vfuncout[8U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[9U] 
        = __Vfunc_set_parity__5__Vfuncout[9U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[0xaU] 
        = __Vfunc_set_parity__5__Vfuncout[0xaU];
    __Vfunc_encoder__7__r[0U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[0U];
    __Vfunc_encoder__7__r[1U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[1U];
    __Vfunc_encoder__7__r[2U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[2U];
    __Vfunc_encoder__7__r[3U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[3U];
    __Vfunc_encoder__7__r[4U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[4U];
    __Vfunc_encoder__7__r[5U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[5U];
    __Vfunc_encoder__7__r[6U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[6U];
    __Vfunc_encoder__7__r[7U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[7U];
    __Vfunc_encoder__7__r[8U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[8U];
    __Vfunc_encoder__7__r[9U] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[9U];
    __Vfunc_encoder__7__r[0xaU] = __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__req[0xaU];
    __Vfunc_encoder__7__v[0U] = __Vfunc_encoder__7__r[0U];
    __Vfunc_encoder__7__v[1U] = __Vfunc_encoder__7__r[1U];
    __Vfunc_encoder__7__v[2U] = __Vfunc_encoder__7__r[2U];
    __Vfunc_encoder__7__v[3U] = __Vfunc_encoder__7__r[3U];
    __Vfunc_encoder__7__v[4U] = __Vfunc_encoder__7__r[4U];
    __Vfunc_encoder__7__v[5U] = __Vfunc_encoder__7__r[5U];
    __Vfunc_encoder__7__v[6U] = __Vfunc_encoder__7__r[6U];
    __Vfunc_encoder__7__v[7U] = __Vfunc_encoder__7__r[7U];
    __Vfunc_encoder__7__v[8U] = __Vfunc_encoder__7__r[8U];
    __Vfunc_encoder__7__v[9U] = __Vfunc_encoder__7__r[9U];
    __Vfunc_encoder__7__v[0xaU] = __Vfunc_encoder__7__r[0xaU];
    __Vfunc_encoder__7__Vfuncout[0U] = __Vfunc_encoder__7__v[0U];
    __Vfunc_encoder__7__Vfuncout[1U] = __Vfunc_encoder__7__v[1U];
    __Vfunc_encoder__7__Vfuncout[2U] = __Vfunc_encoder__7__v[2U];
    __Vfunc_encoder__7__Vfuncout[3U] = __Vfunc_encoder__7__v[3U];
    __Vfunc_encoder__7__Vfuncout[4U] = __Vfunc_encoder__7__v[4U];
    __Vfunc_encoder__7__Vfuncout[5U] = __Vfunc_encoder__7__v[5U];
    __Vfunc_encoder__7__Vfuncout[6U] = __Vfunc_encoder__7__v[6U];
    __Vfunc_encoder__7__Vfuncout[7U] = __Vfunc_encoder__7__v[7U];
    __Vfunc_encoder__7__Vfuncout[8U] = __Vfunc_encoder__7__v[8U];
    __Vfunc_encoder__7__Vfuncout[9U] = __Vfunc_encoder__7__v[9U];
    __Vfunc_encoder__7__Vfuncout[0xaU] = __Vfunc_encoder__7__v[0xaU];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[0U] 
        = __Vfunc_encoder__7__Vfuncout[0U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[1U] 
        = __Vfunc_encoder__7__Vfuncout[1U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[2U] 
        = __Vfunc_encoder__7__Vfuncout[2U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[3U] 
        = __Vfunc_encoder__7__Vfuncout[3U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[4U] 
        = __Vfunc_encoder__7__Vfuncout[4U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[5U] 
        = __Vfunc_encoder__7__Vfuncout[5U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[6U] 
        = __Vfunc_encoder__7__Vfuncout[6U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[7U] 
        = __Vfunc_encoder__7__Vfuncout[7U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[8U] 
        = __Vfunc_encoder__7__Vfuncout[8U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[9U] 
        = __Vfunc_encoder__7__Vfuncout[9U];
    __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[0xaU] 
        = __Vfunc_encoder__7__Vfuncout[0xaU];
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[0xaU] 
                                                                >> 8U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[0xaU]));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[9U] 
                                                             >> 0x18U));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[9U] 
                                                                >> 0x10U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[9U] 
                                                                >> 8U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[9U]));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[8U] 
                                                             >> 0x18U));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[8U] 
                                                                >> 0x10U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[8U] 
                                                                >> 8U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[8U]));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[7U] 
                                                             >> 0x18U));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[7U] 
                                                                >> 0x10U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[7U] 
                                                                >> 8U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[7U]));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[6U] 
                                                             >> 0x18U));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[6U] 
                                                                >> 0x10U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[6U] 
                                                                >> 8U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[6U]));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[5U] 
                                                             >> 0x18U));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[5U] 
                                                                >> 0x10U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[5U] 
                                                                >> 8U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[5U]));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[4U] 
                                                             >> 0x18U));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[4U] 
                                                                >> 0x10U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[4U] 
                                                                >> 8U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[4U]));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[3U] 
                                                             >> 0x18U));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[3U] 
                                                                >> 0x10U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[3U] 
                                                                >> 8U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[3U]));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[2U] 
                                                             >> 0x18U));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[2U] 
                                                                >> 0x10U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[2U] 
                                                                >> 8U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[2U]));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[1U] 
                                                             >> 0x18U));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[1U] 
                                                                >> 0x10U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[1U] 
                                                                >> 8U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[1U]));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[0U] 
                                                             >> 0x18U));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[0U] 
                                                                >> 0x10U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & (__Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[0U] 
                                                                >> 8U)));
    co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                       "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           99);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__inq.push_back(
                                                            (0xffU 
                                                             & __Vtask_spi_full_flow_tick_count_tb__DOT__send_move_queue_add_x__3__raw[0U]));
    vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__cycles = 0U;
    while (((~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s)) 
            & VL_GTS_III(32, 0x1e8480U, vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__cycles))) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           136);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__cycles 
            = ((IData)(1U) + vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__cycles);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s))))) {
        VL_WRITEF("Falha: driver_busy_start\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 137, "");
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__cycles = 0U;
    while (((VL_LTS_III(32, vlSelf->spi_full_flow_tick_count_tb__DOT__step_count_x, vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__N) 
             | (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s)) 
            & VL_GTS_III(32, 0x5f5e100U, vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__cycles))) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           140);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__cycles 
            = ((IData)(1U) + vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__cycles);
    }
    if (VL_UNLIKELY((vlSelf->spi_full_flow_tick_count_tb__DOT__step_count_x 
                     != vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__N))) {
        VL_WRITEF("Falha: steps_exact\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 142, "");
    }
    if (VL_UNLIKELY(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s)) {
        VL_WRITEF("Falha: driver_idle_end\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 143, "");
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__expected_ticks 
        = VL_MULS_III(32, (IData)(5U), vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__N);
    if (VL_UNLIKELY((vlSelf->spi_full_flow_tick_count_tb__DOT__tick_count_while_busy 
                     != vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__expected_ticks))) {
        VL_WRITEF("Falha: tick_count_matches\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 149, "");
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__steps_after 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__step_count_x;
    vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__ticks_after 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__tick_count_while_busy;
    spi_full_flow_tick_count_tb__DOT____Vrepeat1 = 0x2710U;
    while (VL_LTS_III(32, 0U, spi_full_flow_tick_count_tb__DOT____Vrepeat1)) {
        co_await vlSelf->__VtrigSched_h335ba313__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge spi_full_flow_tick_count_tb.clk)", 
                                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                                           155);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        spi_full_flow_tick_count_tb__DOT____Vrepeat1 
            = (spi_full_flow_tick_count_tb__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((vlSelf->spi_full_flow_tick_count_tb__DOT__step_count_x 
                     != vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__steps_after))) {
        VL_WRITEF("Falha: no_steps_after_idle\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 156, "");
    }
    if (VL_UNLIKELY((vlSelf->spi_full_flow_tick_count_tb__DOT__tick_count_while_busy 
                     != vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__ticks_after))) {
        VL_WRITEF("Falha: no_busy_ticks_after_idle\n");
        VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 157, "");
    }
    VL_WRITEF("Sucesso: spi_full_flow_tick_count_tb (ticks=%0d exp=%0d steps=%0d)\n",
              32,vlSelf->spi_full_flow_tick_count_tb__DOT__tick_count_while_busy,
              32,vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__expected_ticks,
              32,vlSelf->spi_full_flow_tick_count_tb__DOT__step_count_x);
    VL_FINISH_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 161, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root___dump_triggers__act(Vspi_full_flow_tick_count_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_full_flow_tick_count_tb___024root___eval_triggers__act(Vspi_full_flow_tick_count_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_tick_count_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_tick_count_tb__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_tick_count_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_tick_count_tb__DOT__clk__0 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_tick_count_tb__DOT__rst_n__0 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_full_flow_tick_count_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlWide<11>/*351:0*/ Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0;
extern const VlWide<11>/*351:0*/ Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0;
extern const VlWide<11>/*351:0*/ Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0;
extern const VlWide<18>/*575:0*/ Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0;

VL_INLINE_OPT void Vspi_full_flow_tick_count_tb___024root___nba_sequent__TOP__0(Vspi_full_flow_tick_count_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_write__8__data;
    __Vtask_write__8__data = 0;
    CData/*7:0*/ __Vtask_read__9__data;
    __Vtask_read__9__data = 0;
    VlWide<23>/*726:0*/ __Vfunc_feed__10__Vfuncout;
    VL_ZERO_W(727, __Vfunc_feed__10__Vfuncout);
    VlWide<23>/*726:0*/ __Vfunc_feed__10__in_ctx;
    VL_ZERO_W(727, __Vfunc_feed__10__in_ctx);
    CData/*7:0*/ __Vfunc_feed__10__data;
    __Vfunc_feed__10__data = 0;
    CData/*0:0*/ __Vfunc_feed__10__frame_valid;
    __Vfunc_feed__10__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__10__frame_error;
    __Vfunc_feed__10__frame_error = 0;
    CData/*7:0*/ __Vfunc_feed__10__out_msgType;
    __Vfunc_feed__10__out_msgType = 0;
    VlWide<3>/*71:0*/ __Vfunc_feed__10__move_home_frame;
    VL_ZERO_W(72, __Vfunc_feed__10__move_home_frame);
    IData/*31:0*/ __Vfunc_feed__10__start_move_frame;
    __Vfunc_feed__10__start_move_frame = 0;
    QData/*63:0*/ __Vfunc_feed__10__move_probe_frame;
    __Vfunc_feed__10__move_probe_frame = 0;
    VlWide<11>/*335:0*/ __Vfunc_feed__10__queue_add_frame;
    VL_ZERO_W(336, __Vfunc_feed__10__queue_add_frame);
    IData/*31:0*/ __Vfunc_feed__10__move_end_frame;
    __Vfunc_feed__10__move_end_frame = 0;
    IData/*31:0*/ __Vfunc_feed__10__queue_status_frame;
    __Vfunc_feed__10__queue_status_frame = 0;
    IData/*31:0*/ __Vfunc_feed__10__fpga_status_frame;
    __Vfunc_feed__10__fpga_status_frame = 0;
    QData/*55:0*/ __Vfunc_feed__10__led_ctrl_frame;
    __Vfunc_feed__10__led_ctrl_frame = 0;
    VlWide<23>/*726:0*/ __Vfunc_feed__10__ctx;
    VL_ZERO_W(727, __Vfunc_feed__10__ctx);
    VlWide<3>/*83:0*/ __Vfunc_feed__21__Vfuncout;
    VL_ZERO_W(84, __Vfunc_feed__21__Vfuncout);
    VlWide<3>/*83:0*/ __Vfunc_feed__21__in_ctx;
    VL_ZERO_W(84, __Vfunc_feed__21__in_ctx);
    CData/*7:0*/ __Vfunc_feed__21__data;
    __Vfunc_feed__21__data = 0;
    VlWide<3>/*83:0*/ __Vfunc_feed__21__ctx;
    VL_ZERO_W(84, __Vfunc_feed__21__ctx);
    VlWide<3>/*83:0*/ __Vfunc_feed__22__Vfuncout;
    VL_ZERO_W(84, __Vfunc_feed__22__Vfuncout);
    VlWide<3>/*83:0*/ __Vfunc_feed__22__in_ctx;
    VL_ZERO_W(84, __Vfunc_feed__22__in_ctx);
    CData/*7:0*/ __Vfunc_feed__22__data;
    __Vfunc_feed__22__data = 0;
    VlWide<3>/*71:0*/ __Vfunc_feed__22__out_frame;
    VL_ZERO_W(72, __Vfunc_feed__22__out_frame);
    VlWide<3>/*83:0*/ __Vfunc_feed__22__ctx;
    VL_ZERO_W(84, __Vfunc_feed__22__ctx);
    QData/*33:0*/ __Vfunc_feed__25__Vfuncout;
    __Vfunc_feed__25__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__25__in_ctx;
    __Vfunc_feed__25__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__25__data;
    __Vfunc_feed__25__data = 0;
    QData/*33:0*/ __Vfunc_feed__25__ctx;
    __Vfunc_feed__25__ctx = 0;
    QData/*33:0*/ __Vfunc_feed__26__Vfuncout;
    __Vfunc_feed__26__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__26__in_ctx;
    __Vfunc_feed__26__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__26__data;
    __Vfunc_feed__26__data = 0;
    IData/*31:0*/ __Vfunc_feed__26__out_frame;
    __Vfunc_feed__26__out_frame = 0;
    QData/*33:0*/ __Vfunc_feed__26__ctx;
    __Vfunc_feed__26__ctx = 0;
    VlWide<3>/*74:0*/ __Vfunc_feed__29__Vfuncout;
    VL_ZERO_W(75, __Vfunc_feed__29__Vfuncout);
    VlWide<3>/*74:0*/ __Vfunc_feed__29__in_ctx;
    VL_ZERO_W(75, __Vfunc_feed__29__in_ctx);
    CData/*7:0*/ __Vfunc_feed__29__data;
    __Vfunc_feed__29__data = 0;
    VlWide<3>/*74:0*/ __Vfunc_feed__29__ctx;
    VL_ZERO_W(75, __Vfunc_feed__29__ctx);
    VlWide<3>/*74:0*/ __Vfunc_feed__30__Vfuncout;
    VL_ZERO_W(75, __Vfunc_feed__30__Vfuncout);
    VlWide<3>/*74:0*/ __Vfunc_feed__30__in_ctx;
    VL_ZERO_W(75, __Vfunc_feed__30__in_ctx);
    CData/*7:0*/ __Vfunc_feed__30__data;
    __Vfunc_feed__30__data = 0;
    QData/*63:0*/ __Vfunc_feed__30__out_frame;
    __Vfunc_feed__30__out_frame = 0;
    VlWide<3>/*74:0*/ __Vfunc_feed__30__ctx;
    VL_ZERO_W(75, __Vfunc_feed__30__ctx);
    VlWide<11>/*342:0*/ __Vfunc_feed__32__Vfuncout;
    VL_ZERO_W(343, __Vfunc_feed__32__Vfuncout);
    VlWide<11>/*342:0*/ __Vfunc_feed__32__in_ctx;
    VL_ZERO_W(343, __Vfunc_feed__32__in_ctx);
    CData/*7:0*/ __Vfunc_feed__32__data;
    __Vfunc_feed__32__data = 0;
    CData/*0:0*/ __Vfunc_feed__32__frame_error;
    __Vfunc_feed__32__frame_error = 0;
    VlWide<11>/*342:0*/ __Vfunc_feed__32__ctx;
    VL_ZERO_W(343, __Vfunc_feed__32__ctx);
    VlWide<11>/*335:0*/ __Vfunc_decoder__34__raw;
    VL_ZERO_W(336, __Vfunc_decoder__34__raw);
    VlWide<11>/*335:0*/ __Vfunc_decoder__34__r;
    VL_ZERO_W(336, __Vfunc_decoder__34__r);
    VlWide<11>/*342:0*/ __Vfunc_feed__35__Vfuncout;
    VL_ZERO_W(343, __Vfunc_feed__35__Vfuncout);
    VlWide<11>/*342:0*/ __Vfunc_feed__35__in_ctx;
    VL_ZERO_W(343, __Vfunc_feed__35__in_ctx);
    CData/*7:0*/ __Vfunc_feed__35__data;
    __Vfunc_feed__35__data = 0;
    CData/*0:0*/ __Vfunc_feed__35__frame_error;
    __Vfunc_feed__35__frame_error = 0;
    VlWide<11>/*335:0*/ __Vfunc_feed__35__out_frame;
    VL_ZERO_W(336, __Vfunc_feed__35__out_frame);
    VlWide<11>/*335:0*/ __Vfunc_feed__35__unnamedblk1__DOT__tmp;
    VL_ZERO_W(336, __Vfunc_feed__35__unnamedblk1__DOT__tmp);
    VlWide<11>/*342:0*/ __Vfunc_feed__35__ctx;
    VL_ZERO_W(343, __Vfunc_feed__35__ctx);
    VlWide<11>/*335:0*/ __Vfunc_make_default__36__Vfuncout;
    VL_ZERO_W(336, __Vfunc_make_default__36__Vfuncout);
    VlWide<11>/*335:0*/ __Vfunc_make_default__36__r;
    VL_ZERO_W(336, __Vfunc_make_default__36__r);
    VlWide<11>/*335:0*/ __Vfunc_decoder__37__Vfuncout;
    VL_ZERO_W(336, __Vfunc_decoder__37__Vfuncout);
    VlWide<11>/*335:0*/ __Vfunc_decoder__37__raw;
    VL_ZERO_W(336, __Vfunc_decoder__37__raw);
    VlWide<11>/*335:0*/ __Vfunc_decoder__37__r;
    VL_ZERO_W(336, __Vfunc_decoder__37__r);
    QData/*33:0*/ __Vfunc_feed__40__Vfuncout;
    __Vfunc_feed__40__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__40__in_ctx;
    __Vfunc_feed__40__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__40__data;
    __Vfunc_feed__40__data = 0;
    QData/*33:0*/ __Vfunc_feed__40__ctx;
    __Vfunc_feed__40__ctx = 0;
    QData/*33:0*/ __Vfunc_feed__41__Vfuncout;
    __Vfunc_feed__41__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__41__in_ctx;
    __Vfunc_feed__41__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__41__data;
    __Vfunc_feed__41__data = 0;
    IData/*31:0*/ __Vfunc_feed__41__out_frame;
    __Vfunc_feed__41__out_frame = 0;
    QData/*33:0*/ __Vfunc_feed__41__ctx;
    __Vfunc_feed__41__ctx = 0;
    QData/*33:0*/ __Vfunc_feed__44__Vfuncout;
    __Vfunc_feed__44__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__44__in_ctx;
    __Vfunc_feed__44__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__44__data;
    __Vfunc_feed__44__data = 0;
    QData/*33:0*/ __Vfunc_feed__44__ctx;
    __Vfunc_feed__44__ctx = 0;
    QData/*33:0*/ __Vfunc_feed__45__Vfuncout;
    __Vfunc_feed__45__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__45__in_ctx;
    __Vfunc_feed__45__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__45__data;
    __Vfunc_feed__45__data = 0;
    IData/*31:0*/ __Vfunc_feed__45__out_frame;
    __Vfunc_feed__45__out_frame = 0;
    QData/*33:0*/ __Vfunc_feed__45__ctx;
    __Vfunc_feed__45__ctx = 0;
    QData/*33:0*/ __Vfunc_feed__48__Vfuncout;
    __Vfunc_feed__48__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__48__in_ctx;
    __Vfunc_feed__48__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__48__data;
    __Vfunc_feed__48__data = 0;
    QData/*33:0*/ __Vfunc_feed__48__ctx;
    __Vfunc_feed__48__ctx = 0;
    QData/*33:0*/ __Vfunc_feed__49__Vfuncout;
    __Vfunc_feed__49__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__49__in_ctx;
    __Vfunc_feed__49__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__49__data;
    __Vfunc_feed__49__data = 0;
    IData/*31:0*/ __Vfunc_feed__49__out_frame;
    __Vfunc_feed__49__out_frame = 0;
    QData/*33:0*/ __Vfunc_feed__49__ctx;
    __Vfunc_feed__49__ctx = 0;
    VlWide<3>/*66:0*/ __Vfunc_feed__52__Vfuncout;
    VL_ZERO_W(67, __Vfunc_feed__52__Vfuncout);
    VlWide<3>/*66:0*/ __Vfunc_feed__52__in_ctx;
    VL_ZERO_W(67, __Vfunc_feed__52__in_ctx);
    CData/*7:0*/ __Vfunc_feed__52__data;
    __Vfunc_feed__52__data = 0;
    VlWide<3>/*66:0*/ __Vfunc_feed__52__ctx;
    VL_ZERO_W(67, __Vfunc_feed__52__ctx);
    VlWide<3>/*66:0*/ __Vfunc_feed__53__Vfuncout;
    VL_ZERO_W(67, __Vfunc_feed__53__Vfuncout);
    VlWide<3>/*66:0*/ __Vfunc_feed__53__in_ctx;
    VL_ZERO_W(67, __Vfunc_feed__53__in_ctx);
    CData/*7:0*/ __Vfunc_feed__53__data;
    __Vfunc_feed__53__data = 0;
    QData/*55:0*/ __Vfunc_feed__53__out_frame;
    __Vfunc_feed__53__out_frame = 0;
    VlWide<3>/*66:0*/ __Vfunc_feed__53__ctx;
    VL_ZERO_W(67, __Vfunc_feed__53__ctx);
    VlWide<3>/*66:0*/ __Vfunc_feed__54__Vfuncout;
    VL_ZERO_W(67, __Vfunc_feed__54__Vfuncout);
    VlWide<3>/*66:0*/ __Vfunc_feed__54__in_ctx;
    VL_ZERO_W(67, __Vfunc_feed__54__in_ctx);
    CData/*7:0*/ __Vfunc_feed__54__data;
    __Vfunc_feed__54__data = 0;
    CData/*0:0*/ __Vfunc_feed__54__frame_valid;
    __Vfunc_feed__54__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__54__frame_error;
    __Vfunc_feed__54__frame_error = 0;
    QData/*55:0*/ __Vfunc_feed__54__out_frame;
    __Vfunc_feed__54__out_frame = 0;
    VlWide<3>/*66:0*/ __Vfunc_feed__54__ctx;
    VL_ZERO_W(67, __Vfunc_feed__54__ctx);
    QData/*33:0*/ __Vfunc_feed__55__Vfuncout;
    __Vfunc_feed__55__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__55__in_ctx;
    __Vfunc_feed__55__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__55__data;
    __Vfunc_feed__55__data = 0;
    CData/*0:0*/ __Vfunc_feed__55__frame_valid;
    __Vfunc_feed__55__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__55__frame_error;
    __Vfunc_feed__55__frame_error = 0;
    IData/*31:0*/ __Vfunc_feed__55__out_frame;
    __Vfunc_feed__55__out_frame = 0;
    QData/*33:0*/ __Vfunc_feed__55__ctx;
    __Vfunc_feed__55__ctx = 0;
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
    VlWide<11>/*342:0*/ __Vfunc_feed__58__Vfuncout;
    VL_ZERO_W(343, __Vfunc_feed__58__Vfuncout);
    VlWide<11>/*342:0*/ __Vfunc_feed__58__in_ctx;
    VL_ZERO_W(343, __Vfunc_feed__58__in_ctx);
    CData/*7:0*/ __Vfunc_feed__58__data;
    __Vfunc_feed__58__data = 0;
    CData/*0:0*/ __Vfunc_feed__58__frame_valid;
    __Vfunc_feed__58__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__58__frame_error;
    __Vfunc_feed__58__frame_error = 0;
    VlWide<11>/*335:0*/ __Vfunc_feed__58__out_frame;
    VL_ZERO_W(336, __Vfunc_feed__58__out_frame);
    VlWide<11>/*335:0*/ __Vfunc_feed__58__unnamedblk1__DOT__tmp;
    VL_ZERO_W(336, __Vfunc_feed__58__unnamedblk1__DOT__tmp);
    VlWide<11>/*342:0*/ __Vfunc_feed__58__ctx;
    VL_ZERO_W(343, __Vfunc_feed__58__ctx);
    VlWide<11>/*335:0*/ __Vfunc_make_default__59__Vfuncout;
    VL_ZERO_W(336, __Vfunc_make_default__59__Vfuncout);
    VlWide<11>/*335:0*/ __Vfunc_make_default__59__r;
    VL_ZERO_W(336, __Vfunc_make_default__59__r);
    VlWide<11>/*335:0*/ __Vfunc_decoder__60__Vfuncout;
    VL_ZERO_W(336, __Vfunc_decoder__60__Vfuncout);
    VlWide<11>/*335:0*/ __Vfunc_decoder__60__raw;
    VL_ZERO_W(336, __Vfunc_decoder__60__raw);
    VlWide<11>/*335:0*/ __Vfunc_decoder__60__r;
    VL_ZERO_W(336, __Vfunc_decoder__60__r);
    VlWide<3>/*74:0*/ __Vfunc_feed__61__Vfuncout;
    VL_ZERO_W(75, __Vfunc_feed__61__Vfuncout);
    VlWide<3>/*74:0*/ __Vfunc_feed__61__in_ctx;
    VL_ZERO_W(75, __Vfunc_feed__61__in_ctx);
    CData/*7:0*/ __Vfunc_feed__61__data;
    __Vfunc_feed__61__data = 0;
    CData/*0:0*/ __Vfunc_feed__61__frame_valid;
    __Vfunc_feed__61__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__61__frame_error;
    __Vfunc_feed__61__frame_error = 0;
    QData/*63:0*/ __Vfunc_feed__61__out_frame;
    __Vfunc_feed__61__out_frame = 0;
    VlWide<3>/*74:0*/ __Vfunc_feed__61__ctx;
    VL_ZERO_W(75, __Vfunc_feed__61__ctx);
    QData/*33:0*/ __Vfunc_feed__62__Vfuncout;
    __Vfunc_feed__62__Vfuncout = 0;
    QData/*33:0*/ __Vfunc_feed__62__in_ctx;
    __Vfunc_feed__62__in_ctx = 0;
    CData/*7:0*/ __Vfunc_feed__62__data;
    __Vfunc_feed__62__data = 0;
    CData/*0:0*/ __Vfunc_feed__62__frame_valid;
    __Vfunc_feed__62__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__62__frame_error;
    __Vfunc_feed__62__frame_error = 0;
    IData/*31:0*/ __Vfunc_feed__62__out_frame;
    __Vfunc_feed__62__out_frame = 0;
    QData/*33:0*/ __Vfunc_feed__62__ctx;
    __Vfunc_feed__62__ctx = 0;
    VlWide<3>/*83:0*/ __Vfunc_feed__63__Vfuncout;
    VL_ZERO_W(84, __Vfunc_feed__63__Vfuncout);
    VlWide<3>/*83:0*/ __Vfunc_feed__63__in_ctx;
    VL_ZERO_W(84, __Vfunc_feed__63__in_ctx);
    CData/*7:0*/ __Vfunc_feed__63__data;
    __Vfunc_feed__63__data = 0;
    CData/*0:0*/ __Vfunc_feed__63__frame_valid;
    __Vfunc_feed__63__frame_valid = 0;
    CData/*0:0*/ __Vfunc_feed__63__frame_error;
    __Vfunc_feed__63__frame_error = 0;
    VlWide<3>/*71:0*/ __Vfunc_feed__63__out_frame;
    VL_ZERO_W(72, __Vfunc_feed__63__out_frame);
    VlWide<3>/*83:0*/ __Vfunc_feed__63__ctx;
    VL_ZERO_W(84, __Vfunc_feed__63__ctx);
    VlWide<23>/*726:0*/ __Vfunc_init__64__Vfuncout;
    VL_ZERO_W(727, __Vfunc_init__64__Vfuncout);
    VlWide<23>/*726:0*/ __Vfunc_init__64__ctx;
    VL_ZERO_W(727, __Vfunc_init__64__ctx);
    QData/*63:0*/ __Vfunc_set_parity__89__Vfuncout;
    __Vfunc_set_parity__89__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_set_parity__89__in;
    __Vfunc_set_parity__89__in = 0;
    QData/*63:0*/ __Vfunc_set_parity__89__r;
    __Vfunc_set_parity__89__r = 0;
    CData/*7:0*/ __Vfunc_calc_parity__90__Vfuncout;
    __Vfunc_calc_parity__90__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_calc_parity__90__f;
    __Vfunc_calc_parity__90__f = 0;
    QData/*63:0*/ __Vfunc_encoder__91__Vfuncout;
    __Vfunc_encoder__91__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_encoder__91__r;
    __Vfunc_encoder__91__r = 0;
    QData/*63:0*/ __Vfunc_encoder__91__v;
    __Vfunc_encoder__91__v = 0;
    IData/*31:0*/ __Vfunc_encoder__93__Vfuncout;
    __Vfunc_encoder__93__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_encoder__93__r;
    __Vfunc_encoder__93__r = 0;
    QData/*47:0*/ __Vfunc_make_default_ok__94__Vfuncout;
    __Vfunc_make_default_ok__94__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_make_default_ok__94__id_echo;
    __Vfunc_make_default_ok__94__id_echo = 0;
    QData/*47:0*/ __Vfunc_make_default_ok__94__r;
    __Vfunc_make_default_ok__94__r = 0;
    QData/*47:0*/ __Vfunc_make_default_err__95__Vfuncout;
    __Vfunc_make_default_err__95__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_make_default_err__95__id_echo;
    __Vfunc_make_default_err__95__id_echo = 0;
    QData/*47:0*/ __Vfunc_make_default_err__95__r;
    __Vfunc_make_default_err__95__r = 0;
    QData/*47:0*/ __Vfunc_set_parity__96__Vfuncout;
    __Vfunc_set_parity__96__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_set_parity__96__in;
    __Vfunc_set_parity__96__in = 0;
    QData/*47:0*/ __Vfunc_set_parity__96__r;
    __Vfunc_set_parity__96__r = 0;
    CData/*0:0*/ __Vfunc_calc_parity_bit__97__Vfuncout;
    __Vfunc_calc_parity_bit__97__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_calc_parity_bit__97__f;
    __Vfunc_calc_parity_bit__97__f = 0;
    QData/*47:0*/ __Vfunc_encoder__98__Vfuncout;
    __Vfunc_encoder__98__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_encoder__98__r;
    __Vfunc_encoder__98__r = 0;
    QData/*47:0*/ __Vfunc_encoder__98__v;
    __Vfunc_encoder__98__v = 0;
    QData/*63:0*/ __Vfunc_set_parity__100__Vfuncout;
    __Vfunc_set_parity__100__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_set_parity__100__in;
    __Vfunc_set_parity__100__in = 0;
    QData/*63:0*/ __Vfunc_set_parity__100__r;
    __Vfunc_set_parity__100__r = 0;
    CData/*7:0*/ __Vfunc_calc_parity__101__Vfuncout;
    __Vfunc_calc_parity__101__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_calc_parity__101__f;
    __Vfunc_calc_parity__101__f = 0;
    QData/*63:0*/ __Vfunc_encoder__102__Vfuncout;
    __Vfunc_encoder__102__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_encoder__102__r;
    __Vfunc_encoder__102__r = 0;
    QData/*63:0*/ __Vfunc_encoder__102__v;
    __Vfunc_encoder__102__v = 0;
    VlWide<3>/*95:0*/ __Vfunc_set_parity__104__Vfuncout;
    VL_ZERO_W(96, __Vfunc_set_parity__104__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_set_parity__104__in;
    VL_ZERO_W(96, __Vfunc_set_parity__104__in);
    VlWide<3>/*95:0*/ __Vfunc_set_parity__104__r;
    VL_ZERO_W(96, __Vfunc_set_parity__104__r);
    CData/*0:0*/ __Vfunc_calc_parity_bit__105__Vfuncout;
    __Vfunc_calc_parity_bit__105__Vfuncout = 0;
    VlWide<3>/*95:0*/ __Vfunc_calc_parity_bit__105__f;
    VL_ZERO_W(96, __Vfunc_calc_parity_bit__105__f);
    VlWide<3>/*95:0*/ __Vfunc_encoder__106__Vfuncout;
    VL_ZERO_W(96, __Vfunc_encoder__106__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_encoder__106__r;
    VL_ZERO_W(96, __Vfunc_encoder__106__r);
    IData/*31:0*/ __Vfunc_encoder__108__Vfuncout;
    __Vfunc_encoder__108__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_encoder__108__r;
    __Vfunc_encoder__108__r = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__112__Vfuncout;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__112__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__112__d;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__112__d = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__113__Vfuncout;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__113__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__113__d;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__113__d = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__115__Vfuncout;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__115__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__115__on;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__115__on = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__116__Vfuncout;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__116__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__116__en;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__116__en = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__117__Vfuncout;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__117__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__117__d;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__117__d = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__118__Vfuncout;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__118__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__118__d;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__118__d = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__120__Vfuncout;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__120__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__120__on;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__120__on = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__121__Vfuncout;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__121__en;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__121__en = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__122__Vfuncout;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__122__d;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__122__d = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__123__Vfuncout;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__123__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__123__d;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__123__d = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__125__Vfuncout;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__125__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__125__on;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__125__on = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__126__Vfuncout;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__126__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__126__en;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__126__en = 0;
    CData/*7:0*/ __Vtask_write__127__data;
    __Vtask_write__127__data = 0;
    CData/*7:0*/ __Vtask_read__128__data;
    __Vtask_read__128__data = 0;
    CData/*0:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__rd_en;
    __Vdly__spi_full_flow_tick_count_tb__DOT__rd_en = 0;
    CData/*1:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state = 0;
    CData/*0:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled = 0;
    CData/*7:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__current_move_id;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__current_move_id = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q = 0;
    CData/*0:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q = 0;
    CData/*0:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s = 0;
    CData/*0:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q = 0;
    CData/*0:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q = 0;
    CData/*0:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s = 0;
    CData/*0:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q = 0;
    CData/*0:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q = 0;
    CData/*0:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s = 0;
    CData/*0:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q = 0;
    CData/*0:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q = 0;
    VlWide<5>/*159:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift;
    VL_ZERO_W(160, __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift);
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes = 0;
    IData/*31:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx = 0;
    CData/*1:0*/ __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state = 0;
    // Body
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[0U] 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[0U];
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[1U] 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[1U];
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[2U] 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[2U];
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[3U] 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[3U];
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[4U] 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[4U];
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state;
    __Vdly__spi_full_flow_tick_count_tb__DOT__rd_en 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__rd_en;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__current_move_id 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__current_move_id;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q;
    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_cnt_q = 0U;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__clear_cnt_q = 0U;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q 
        = ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n) 
           && (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__estop_inhibit));
    vlSelf->spi_full_flow_tick_count_tb__DOT__prev_busy_x 
        = ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n) 
           && (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s));
    if (vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n) {
        if (((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_step_x) 
             & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__prev_x)))) {
            vlSelf->spi_full_flow_tick_count_tb__DOT__step_count_x 
                = ((IData)(1U) + vlSelf->spi_full_flow_tick_count_tb__DOT__step_count_x);
        }
        if (((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s) 
             & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q))) {
            vlSelf->spi_full_flow_tick_count_tb__DOT__tick_count_while_busy 
                = ((IData)(1U) + vlSelf->spi_full_flow_tick_count_tb__DOT__tick_count_while_busy);
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__frame_valid = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__frame_error = 0U;
        if (vlSelf->spi_full_flow_tick_count_tb__DOT__spi_byte_valid) {
            if ((1U & (~ (IData)(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.full)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.full)))) {
                    vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count 
                        = ((IData)(1U) + vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count);
                }
            }
            if ((0xd2U != vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
                __Vtask_write__8__data = vlSelf->spi_full_flow_tick_count_tb__DOT__spi_byte;
                if ((0xd2U != vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
                    vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.__Vlvbound_h7a17aa00__0 
                        = __Vtask_write__8__data;
                    if ((0xd1U >= (0xffU & vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.wr_ptr))) {
                        vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.mem[(0xffU 
                                                                                & vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.wr_ptr)] 
                            = vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.__Vlvbound_h7a17aa00__0;
                    }
                    vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.wr_ptr 
                        = VL_MODDIV_III(32, ((IData)(1U) 
                                             + vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.wr_ptr), (IData)(0xd2U));
                }
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.empty)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.empty)))) {
                __Vtask_read__9__data = ((0xd1U >= 
                                          (0xffU & vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.rd_ptr))
                                          ? vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.mem
                                         [(0xffU & vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.rd_ptr)]
                                          : 0U);
                vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count 
                    = (vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count 
                       - (IData)(1U));
                vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.rd_ptr 
                    = VL_MODDIV_III(32, ((IData)(1U) 
                                         + vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.rd_ptr), (IData)(0xd2U));
            }
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__unnamedblk1__DOT__data 
                = __Vtask_read__9__data;
            __Vfunc_feed__10__data = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__unnamedblk1__DOT__data;
            __Vfunc_feed__10__in_ctx[0U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0U];
            __Vfunc_feed__10__in_ctx[1U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[1U];
            __Vfunc_feed__10__in_ctx[2U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[2U];
            __Vfunc_feed__10__in_ctx[3U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[3U];
            __Vfunc_feed__10__in_ctx[4U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[4U];
            __Vfunc_feed__10__in_ctx[5U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[5U];
            __Vfunc_feed__10__in_ctx[6U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[6U];
            __Vfunc_feed__10__in_ctx[7U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[7U];
            __Vfunc_feed__10__in_ctx[8U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[8U];
            __Vfunc_feed__10__in_ctx[9U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[9U];
            __Vfunc_feed__10__in_ctx[0xaU] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xaU];
            __Vfunc_feed__10__in_ctx[0xbU] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xbU];
            __Vfunc_feed__10__in_ctx[0xcU] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xcU];
            __Vfunc_feed__10__in_ctx[0xdU] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xdU];
            __Vfunc_feed__10__in_ctx[0xeU] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xeU];
            __Vfunc_feed__10__in_ctx[0xfU] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xfU];
            __Vfunc_feed__10__in_ctx[0x10U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x10U];
            __Vfunc_feed__10__in_ctx[0x11U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x11U];
            __Vfunc_feed__10__in_ctx[0x12U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x12U];
            __Vfunc_feed__10__in_ctx[0x13U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x13U];
            __Vfunc_feed__10__in_ctx[0x14U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x14U];
            __Vfunc_feed__10__in_ctx[0x15U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x15U];
            __Vfunc_feed__10__in_ctx[0x16U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x16U];
            __Vfunc_feed__10__ctx[0U] = __Vfunc_feed__10__in_ctx[0U];
            __Vfunc_feed__10__ctx[1U] = __Vfunc_feed__10__in_ctx[1U];
            __Vfunc_feed__10__ctx[2U] = __Vfunc_feed__10__in_ctx[2U];
            __Vfunc_feed__10__ctx[3U] = __Vfunc_feed__10__in_ctx[3U];
            __Vfunc_feed__10__ctx[4U] = __Vfunc_feed__10__in_ctx[4U];
            __Vfunc_feed__10__ctx[5U] = __Vfunc_feed__10__in_ctx[5U];
            __Vfunc_feed__10__ctx[6U] = __Vfunc_feed__10__in_ctx[6U];
            __Vfunc_feed__10__ctx[7U] = __Vfunc_feed__10__in_ctx[7U];
            __Vfunc_feed__10__ctx[8U] = __Vfunc_feed__10__in_ctx[8U];
            __Vfunc_feed__10__ctx[9U] = __Vfunc_feed__10__in_ctx[9U];
            __Vfunc_feed__10__ctx[0xaU] = __Vfunc_feed__10__in_ctx[0xaU];
            __Vfunc_feed__10__ctx[0xbU] = __Vfunc_feed__10__in_ctx[0xbU];
            __Vfunc_feed__10__ctx[0xcU] = __Vfunc_feed__10__in_ctx[0xcU];
            __Vfunc_feed__10__ctx[0xdU] = __Vfunc_feed__10__in_ctx[0xdU];
            __Vfunc_feed__10__ctx[0xeU] = __Vfunc_feed__10__in_ctx[0xeU];
            __Vfunc_feed__10__ctx[0xfU] = __Vfunc_feed__10__in_ctx[0xfU];
            __Vfunc_feed__10__ctx[0x10U] = __Vfunc_feed__10__in_ctx[0x10U];
            __Vfunc_feed__10__ctx[0x11U] = __Vfunc_feed__10__in_ctx[0x11U];
            __Vfunc_feed__10__ctx[0x12U] = __Vfunc_feed__10__in_ctx[0x12U];
            __Vfunc_feed__10__ctx[0x13U] = __Vfunc_feed__10__in_ctx[0x13U];
            __Vfunc_feed__10__ctx[0x14U] = __Vfunc_feed__10__in_ctx[0x14U];
            __Vfunc_feed__10__ctx[0x15U] = __Vfunc_feed__10__in_ctx[0x15U];
            __Vfunc_feed__10__ctx[0x16U] = __Vfunc_feed__10__in_ctx[0x16U];
            __Vfunc_feed__10__frame_valid = 0U;
            __Vfunc_feed__10__frame_error = 0U;
            __Vfunc_feed__10__out_msgType = (0xffU 
                                             & (__Vfunc_feed__10__ctx[0x16U] 
                                                >> 1U));
            __Vfunc_feed__10__move_home_frame[0U] = 0x55U;
            __Vfunc_feed__10__move_home_frame[1U] = 0x4000000U;
            __Vfunc_feed__10__move_home_frame[2U] = 0xaaU;
            __Vfunc_feed__10__start_move_frame = 0xaa030055U;
            __Vfunc_feed__10__move_probe_frame = 0xaa05000000000055ULL;
            __Vfunc_feed__10__queue_add_frame[0U] = 
                Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[0U];
            __Vfunc_feed__10__queue_add_frame[1U] = 
                Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[1U];
            __Vfunc_feed__10__queue_add_frame[2U] = 
                Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[2U];
            __Vfunc_feed__10__queue_add_frame[3U] = 
                Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[3U];
            __Vfunc_feed__10__queue_add_frame[4U] = 
                Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[4U];
            __Vfunc_feed__10__queue_add_frame[5U] = 
                Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[5U];
            __Vfunc_feed__10__queue_add_frame[6U] = 
                Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[6U];
            __Vfunc_feed__10__queue_add_frame[7U] = 
                Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[7U];
            __Vfunc_feed__10__queue_add_frame[8U] = 
                Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[8U];
            __Vfunc_feed__10__queue_add_frame[9U] = 
                Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[9U];
            __Vfunc_feed__10__queue_add_frame[0xaU] 
                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[0xaU];
            __Vfunc_feed__10__move_end_frame = 0xaa060055U;
            __Vfunc_feed__10__queue_status_frame = 0xaa020055U;
            __Vfunc_feed__10__fpga_status_frame = 0xaa200055U;
            __Vfunc_feed__10__led_ctrl_frame = 0xaa070000000055ULL;
            if ((0U == (3U & (__Vfunc_feed__10__ctx[0x16U] 
                              >> 0x15U)))) {
                if ((0xaaU == (IData)(__Vfunc_feed__10__data))) {
                    __Vfunc_feed__10__ctx[0x16U] = 
                        ((0x7e01ffU & __Vfunc_feed__10__ctx[0x16U]) 
                         | (0x7fffffU & ((IData)(__Vfunc_feed__10__data) 
                                         << 9U)));
                    __Vfunc_feed__10__ctx[0x16U] = 
                        (0x200000U | (0x1fffffU & __Vfunc_feed__10__ctx[0x16U]));
                } else {
                    __Vfunc_feed__10__frame_error = 0U;
                }
            } else if ((1U == (3U & (__Vfunc_feed__10__ctx[0x16U] 
                                     >> 0x15U)))) {
                __Vfunc_feed__10__ctx[0x16U] = ((0x7ffe01U 
                                                 & __Vfunc_feed__10__ctx[0x16U]) 
                                                | (0x7fffffU 
                                                   & ((IData)(__Vfunc_feed__10__data) 
                                                      << 1U)));
                if (((((((((4U == (IData)(__Vfunc_feed__10__data)) 
                           | (3U == (IData)(__Vfunc_feed__10__data))) 
                          | (5U == (IData)(__Vfunc_feed__10__data))) 
                         | (1U == (IData)(__Vfunc_feed__10__data))) 
                        | (6U == (IData)(__Vfunc_feed__10__data))) 
                       | (2U == (IData)(__Vfunc_feed__10__data))) 
                      | (0x20U == (IData)(__Vfunc_feed__10__data))) 
                     | (7U == (IData)(__Vfunc_feed__10__data)))) {
                    if ((4U == (IData)(__Vfunc_feed__10__data))) {
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0x20000U | (0x61ffffU 
                                           & __Vfunc_feed__10__ctx[0x16U]));
                        __Vfunc_feed__10__ctx[0x13U] 
                            = (0xaa00000U | (0x1fffU 
                                             & __Vfunc_feed__10__ctx[0x13U]));
                        __Vfunc_feed__10__ctx[0x14U] = 0U;
                        __Vfunc_feed__10__ctx[0x15U] = 0x15408000U;
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0x7ffffeU & __Vfunc_feed__10__ctx[0x16U]);
                        __Vfunc_feed__21__data = (0xffU 
                                                  & (__Vfunc_feed__10__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__21__in_ctx[0U] 
                            = ((__Vfunc_feed__10__ctx[0x14U] 
                                << 0x13U) | (__Vfunc_feed__10__ctx[0x13U] 
                                             >> 0xdU));
                        __Vfunc_feed__21__in_ctx[1U] 
                            = ((__Vfunc_feed__10__ctx[0x15U] 
                                << 0x13U) | (__Vfunc_feed__10__ctx[0x14U] 
                                             >> 0xdU));
                        __Vfunc_feed__21__in_ctx[2U] 
                            = (0xfffffU & ((__Vfunc_feed__10__ctx[0x16U] 
                                            << 0x13U) 
                                           | (__Vfunc_feed__10__ctx[0x15U] 
                                              >> 0xdU)));
                        __Vfunc_feed__21__ctx[0U] = 
                            __Vfunc_feed__21__in_ctx[0U];
                        __Vfunc_feed__21__ctx[1U] = 
                            __Vfunc_feed__21__in_ctx[1U];
                        __Vfunc_feed__21__ctx[2U] = 
                            __Vfunc_feed__21__in_ctx[2U];
                        if ((0x80000U & __Vfunc_feed__21__ctx[2U])) {
                            if ((0x40000U & __Vfunc_feed__21__ctx[2U])) {
                                __Vfunc_feed__21__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__21__ctx[2U]);
                            } else if ((0x20000U & 
                                        __Vfunc_feed__21__ctx[2U])) {
                                __Vfunc_feed__21__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__21__ctx[2U]);
                            } else if ((0x10000U & 
                                        __Vfunc_feed__21__ctx[2U])) {
                                __Vfunc_feed__21__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__21__ctx[2U]);
                            } else {
                                if ((0x55U == (IData)(__Vfunc_feed__21__data))) {
                                    __Vfunc_feed__21__ctx[0U] 
                                        = ((0xffff00ffU 
                                            & __Vfunc_feed__21__ctx[0U]) 
                                           | ((IData)(__Vfunc_feed__21__data) 
                                              << 8U));
                                }
                                __Vfunc_feed__21__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__21__ctx[2U]);
                            }
                        } else if ((0x40000U & __Vfunc_feed__21__ctx[2U])) {
                            if ((0x20000U & __Vfunc_feed__21__ctx[2U])) {
                                if ((0x10000U & __Vfunc_feed__21__ctx[2U])) {
                                    __Vfunc_feed__21__ctx[0U] 
                                        = ((0xff00ffffU 
                                            & __Vfunc_feed__21__ctx[0U]) 
                                           | ((IData)(__Vfunc_feed__21__data) 
                                              << 0x10U));
                                    __Vfunc_feed__21__ctx[2U] 
                                        = ((0xffffU 
                                            & __Vfunc_feed__21__ctx[2U]) 
                                           | (0xfffffU 
                                              & ((((IData)(__Vfunc_feed__21__data) 
                                                   == 
                                                   (0xffU 
                                                    & __Vfunc_feed__21__ctx[0U]))
                                                   ? 8U
                                                   : 0U) 
                                                 << 0x10U)));
                                } else {
                                    __Vfunc_feed__21__ctx[0U] 
                                        = ((0xffffffU 
                                            & __Vfunc_feed__21__ctx[0U]) 
                                           | ((IData)(__Vfunc_feed__21__data) 
                                              << 0x18U));
                                    __Vfunc_feed__21__ctx[0U] 
                                        = ((0xffffff00U 
                                            & __Vfunc_feed__21__ctx[0U]) 
                                           | (0xffU 
                                              & (__Vfunc_feed__21__ctx[0U] 
                                                 ^ (IData)(__Vfunc_feed__21__data))));
                                    __Vfunc_feed__21__ctx[2U] 
                                        = (0x70000U 
                                           | (0xffffU 
                                              & __Vfunc_feed__21__ctx[2U]));
                                }
                            } else if ((0x10000U & 
                                        __Vfunc_feed__21__ctx[2U])) {
                                __Vfunc_feed__21__ctx[1U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__21__ctx[1U]) 
                                       | (IData)(__Vfunc_feed__21__data));
                                __Vfunc_feed__21__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__21__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__21__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__21__data))));
                                __Vfunc_feed__21__ctx[2U] 
                                    = (0x60000U | (0xffffU 
                                                   & __Vfunc_feed__21__ctx[2U]));
                            } else {
                                __Vfunc_feed__21__ctx[1U] 
                                    = ((0xffff00ffU 
                                        & __Vfunc_feed__21__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__21__data) 
                                          << 8U));
                                __Vfunc_feed__21__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__21__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__21__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__21__data))));
                                __Vfunc_feed__21__ctx[2U] 
                                    = (0x50000U | (0xffffU 
                                                   & __Vfunc_feed__21__ctx[2U]));
                            }
                        } else if ((0x20000U & __Vfunc_feed__21__ctx[2U])) {
                            if ((0x10000U & __Vfunc_feed__21__ctx[2U])) {
                                __Vfunc_feed__21__ctx[1U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__21__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__21__data) 
                                          << 0x10U));
                                __Vfunc_feed__21__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__21__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__21__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__21__data))));
                                __Vfunc_feed__21__ctx[2U] 
                                    = (0x40000U | (0xffffU 
                                                   & __Vfunc_feed__21__ctx[2U]));
                            } else {
                                __Vfunc_feed__21__ctx[1U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__21__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__21__data) 
                                          << 0x18U));
                                __Vfunc_feed__21__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__21__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__21__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__21__data))));
                                __Vfunc_feed__21__ctx[2U] 
                                    = (0x30000U | (0xffffU 
                                                   & __Vfunc_feed__21__ctx[2U]));
                            }
                        } else if ((0x10000U & __Vfunc_feed__21__ctx[2U])) {
                            if ((4U == (IData)(__Vfunc_feed__21__data))) {
                                __Vfunc_feed__21__ctx[2U] 
                                    = ((0xfff00U & 
                                        __Vfunc_feed__21__ctx[2U]) 
                                       | (0xfffffU 
                                          & (IData)(__Vfunc_feed__21__data)));
                                __Vfunc_feed__21__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__21__ctx[0U]) 
                                       | (IData)(__Vfunc_feed__21__data));
                                __Vfunc_feed__21__ctx[2U] 
                                    = (0x20000U | (0xffffU 
                                                   & __Vfunc_feed__21__ctx[2U]));
                            } else {
                                __Vfunc_feed__21__ctx[2U] 
                                    = (0xffffU & __Vfunc_feed__21__ctx[2U]);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__21__data))) {
                            __Vfunc_feed__21__ctx[2U] 
                                = ((0xffU & __Vfunc_feed__21__ctx[2U]) 
                                   | (0xfff00U & (0x10000U 
                                                  | ((IData)(__Vfunc_feed__21__data) 
                                                     << 8U))));
                            __Vfunc_feed__21__ctx[0U] 
                                = (0xffffff00U & __Vfunc_feed__21__ctx[0U]);
                        }
                        __Vfunc_feed__21__Vfuncout[0U] 
                            = __Vfunc_feed__21__ctx[0U];
                        __Vfunc_feed__21__Vfuncout[1U] 
                            = __Vfunc_feed__21__ctx[1U];
                        __Vfunc_feed__21__Vfuncout[2U] 
                            = __Vfunc_feed__21__ctx[2U];
                        __Vfunc_feed__10__ctx[0x13U] 
                            = ((0x1fffU & __Vfunc_feed__10__ctx[0x13U]) 
                               | (__Vfunc_feed__21__Vfuncout[0U] 
                                  << 0xdU));
                        __Vfunc_feed__10__ctx[0x14U] 
                            = ((__Vfunc_feed__21__Vfuncout[0U] 
                                >> 0x13U) | (__Vfunc_feed__21__Vfuncout[1U] 
                                             << 0xdU));
                        __Vfunc_feed__10__ctx[0x15U] 
                            = ((__Vfunc_feed__21__Vfuncout[1U] 
                                >> 0x13U) | (__Vfunc_feed__21__Vfuncout[2U] 
                                             << 0xdU));
                        __Vfunc_feed__10__ctx[0x16U] 
                            = ((0x7ffffeU & __Vfunc_feed__10__ctx[0x16U]) 
                               | (0x7fffffU & (__Vfunc_feed__21__Vfuncout[2U] 
                                               >> 0x13U)));
                        __Vfunc_feed__22__data = __Vfunc_feed__10__data;
                        __Vfunc_feed__22__in_ctx[0U] 
                            = ((__Vfunc_feed__10__ctx[0x14U] 
                                << 0x13U) | (__Vfunc_feed__10__ctx[0x13U] 
                                             >> 0xdU));
                        __Vfunc_feed__22__in_ctx[1U] 
                            = ((__Vfunc_feed__10__ctx[0x15U] 
                                << 0x13U) | (__Vfunc_feed__10__ctx[0x14U] 
                                             >> 0xdU));
                        __Vfunc_feed__22__in_ctx[2U] 
                            = (0xfffffU & ((__Vfunc_feed__10__ctx[0x16U] 
                                            << 0x13U) 
                                           | (__Vfunc_feed__10__ctx[0x15U] 
                                              >> 0xdU)));
                        __Vfunc_feed__22__ctx[0U] = 
                            __Vfunc_feed__22__in_ctx[0U];
                        __Vfunc_feed__22__ctx[1U] = 
                            __Vfunc_feed__22__in_ctx[1U];
                        __Vfunc_feed__22__ctx[2U] = 
                            __Vfunc_feed__22__in_ctx[2U];
                        __Vfunc_feed__22__out_frame[0U] 
                            = ((__Vfunc_feed__22__ctx[1U] 
                                << 0x18U) | (__Vfunc_feed__22__ctx[0U] 
                                             >> 8U));
                        __Vfunc_feed__22__out_frame[1U] 
                            = ((__Vfunc_feed__22__ctx[2U] 
                                << 0x18U) | (__Vfunc_feed__22__ctx[1U] 
                                             >> 8U));
                        __Vfunc_feed__22__out_frame[2U] 
                            = (0xffU & (__Vfunc_feed__22__ctx[2U] 
                                        >> 8U));
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
                                    __Vfunc_feed__22__out_frame[0U] 
                                        = ((__Vfunc_feed__22__ctx[1U] 
                                            << 0x18U) 
                                           | (__Vfunc_feed__22__ctx[0U] 
                                              >> 8U));
                                    __Vfunc_feed__22__out_frame[1U] 
                                        = ((__Vfunc_feed__22__ctx[2U] 
                                            << 0x18U) 
                                           | (__Vfunc_feed__22__ctx[1U] 
                                              >> 8U));
                                    __Vfunc_feed__22__out_frame[2U] 
                                        = (0xffU & 
                                           (__Vfunc_feed__22__ctx[2U] 
                                            >> 8U));
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
                        __Vfunc_feed__10__move_home_frame[0U] 
                            = __Vfunc_feed__22__out_frame[0U];
                        __Vfunc_feed__10__move_home_frame[1U] 
                            = __Vfunc_feed__22__out_frame[1U];
                        __Vfunc_feed__10__move_home_frame[2U] 
                            = __Vfunc_feed__22__out_frame[2U];
                        __Vfunc_feed__10__ctx[0x13U] 
                            = ((0x1fffU & __Vfunc_feed__10__ctx[0x13U]) 
                               | (__Vfunc_feed__22__Vfuncout[0U] 
                                  << 0xdU));
                        __Vfunc_feed__10__ctx[0x14U] 
                            = ((__Vfunc_feed__22__Vfuncout[0U] 
                                >> 0x13U) | (__Vfunc_feed__22__Vfuncout[1U] 
                                             << 0xdU));
                        __Vfunc_feed__10__ctx[0x15U] 
                            = ((__Vfunc_feed__22__Vfuncout[1U] 
                                >> 0x13U) | (__Vfunc_feed__22__Vfuncout[2U] 
                                             << 0xdU));
                        __Vfunc_feed__10__ctx[0x16U] 
                            = ((0x7ffffeU & __Vfunc_feed__10__ctx[0x16U]) 
                               | (0x7fffffU & (__Vfunc_feed__22__Vfuncout[2U] 
                                               >> 0x13U)));
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__10__ctx[0x16U]));
                    } else if ((3U == (IData)(__Vfunc_feed__10__data))) {
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0x40000U | (0x61ffffU 
                                           & __Vfunc_feed__10__ctx[0x16U]));
                        __Vfunc_feed__10__ctx[0x12U] 
                            = (0x1802a800U | (0x7ffU 
                                              & __Vfunc_feed__10__ctx[0x12U]));
                        __Vfunc_feed__10__ctx[0x13U] 
                            = (0x550U | (0xffffe000U 
                                         & __Vfunc_feed__10__ctx[0x13U]));
                        __Vfunc_feed__25__data = (0xffU 
                                                  & (__Vfunc_feed__10__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__25__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__10__ctx[0x13U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__10__ctx[0x12U])) 
                                                  >> 0xbU)));
                        __Vfunc_feed__25__ctx = __Vfunc_feed__25__in_ctx;
                        if ((1U & (IData)((__Vfunc_feed__25__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__25__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__25__data))) {
                                    __Vfunc_feed__25__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__25__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__25__data)));
                                }
                                __Vfunc_feed__25__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__25__ctx);
                            } else {
                                __Vfunc_feed__25__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__25__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__25__data)) 
                                          << 8U));
                                __Vfunc_feed__25__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__25__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__25__ctx 
                                                  >> 0x20U)))) {
                            if ((3U == (IData)(__Vfunc_feed__25__data))) {
                                __Vfunc_feed__25__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__25__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__25__data)) 
                                          << 0x10U));
                                __Vfunc_feed__25__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__25__ctx));
                            } else {
                                __Vfunc_feed__25__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__25__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__25__data))) {
                            __Vfunc_feed__25__ctx = 
                                ((0xffffffULL & __Vfunc_feed__25__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__25__data)))) 
                                    << 0x18U));
                        }
                        __Vfunc_feed__25__Vfuncout 
                            = __Vfunc_feed__25__ctx;
                        __Vfunc_feed__10__ctx[0x12U] 
                            = ((0x7ffU & __Vfunc_feed__10__ctx[0x12U]) 
                               | ((IData)(__Vfunc_feed__25__Vfuncout) 
                                  << 0xbU));
                        __Vfunc_feed__10__ctx[0x13U] 
                            = ((0xffffe000U & __Vfunc_feed__10__ctx[0x13U]) 
                               | (((IData)(__Vfunc_feed__25__Vfuncout) 
                                   >> 0x15U) | ((IData)(
                                                        (__Vfunc_feed__25__Vfuncout 
                                                         >> 0x20U)) 
                                                << 0xbU)));
                        __Vfunc_feed__26__data = __Vfunc_feed__10__data;
                        __Vfunc_feed__26__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__10__ctx[0x13U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__10__ctx[0x12U])) 
                                                  >> 0xbU)));
                        __Vfunc_feed__26__ctx = __Vfunc_feed__26__in_ctx;
                        __Vfunc_feed__26__out_frame 
                            = (IData)(__Vfunc_feed__26__ctx);
                        if ((1U & (IData)((__Vfunc_feed__26__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__26__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__26__data))) {
                                    __Vfunc_feed__26__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__26__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__26__data)));
                                    __Vfunc_feed__26__out_frame 
                                        = (IData)(__Vfunc_feed__26__ctx);
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
                        __Vfunc_feed__10__start_move_frame 
                            = __Vfunc_feed__26__out_frame;
                        __Vfunc_feed__10__ctx[0x12U] 
                            = ((0x7ffU & __Vfunc_feed__10__ctx[0x12U]) 
                               | ((IData)(__Vfunc_feed__26__Vfuncout) 
                                  << 0xbU));
                        __Vfunc_feed__10__ctx[0x13U] 
                            = ((0xffffe000U & __Vfunc_feed__10__ctx[0x13U]) 
                               | (((IData)(__Vfunc_feed__26__Vfuncout) 
                                   >> 0x15U) | ((IData)(
                                                        (__Vfunc_feed__26__Vfuncout 
                                                         >> 0x20U)) 
                                                << 0xbU)));
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__10__ctx[0x16U]));
                    } else if ((5U == (IData)(__Vfunc_feed__10__data))) {
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0x60000U | (0x61ffffU 
                                           & __Vfunc_feed__10__ctx[0x16U]));
                        __Vfunc_feed__10__ctx[0x10U] = 0x5500U;
                        __Vfunc_feed__10__ctx[0x11U] = 0x5000000U;
                        __Vfunc_feed__10__ctx[0x12U] 
                            = (0xaaU | (0xfffff800U 
                                        & __Vfunc_feed__10__ctx[0x12U]));
                        __Vfunc_feed__29__data = (0xffU 
                                                  & (__Vfunc_feed__10__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__29__in_ctx[0U] 
                            = __Vfunc_feed__10__ctx[0x10U];
                        __Vfunc_feed__29__in_ctx[1U] 
                            = __Vfunc_feed__10__ctx[0x11U];
                        __Vfunc_feed__29__in_ctx[2U] 
                            = (0x7ffU & __Vfunc_feed__10__ctx[0x12U]);
                        __Vfunc_feed__29__ctx[0U] = 
                            __Vfunc_feed__29__in_ctx[0U];
                        __Vfunc_feed__29__ctx[1U] = 
                            __Vfunc_feed__29__in_ctx[1U];
                        __Vfunc_feed__29__ctx[2U] = 
                            __Vfunc_feed__29__in_ctx[2U];
                        if ((0x400U & __Vfunc_feed__29__ctx[2U])) {
                            if ((0x200U & __Vfunc_feed__29__ctx[2U])) {
                                if ((0x100U & __Vfunc_feed__29__ctx[2U])) {
                                    if ((0x55U == (IData)(__Vfunc_feed__29__data))) {
                                        __Vfunc_feed__29__ctx[0U] 
                                            = ((0xffff00ffU 
                                                & __Vfunc_feed__29__ctx[0U]) 
                                               | ((IData)(__Vfunc_feed__29__data) 
                                                  << 8U));
                                    }
                                    __Vfunc_feed__29__ctx[2U] 
                                        = (0xffU & 
                                           __Vfunc_feed__29__ctx[2U]);
                                } else {
                                    __Vfunc_feed__29__ctx[0U] 
                                        = ((0xff00ffffU 
                                            & __Vfunc_feed__29__ctx[0U]) 
                                           | ((IData)(__Vfunc_feed__29__data) 
                                              << 0x10U));
                                    __Vfunc_feed__29__ctx[2U] 
                                        = ((0xffU & 
                                            __Vfunc_feed__29__ctx[2U]) 
                                           | (0x7ffU 
                                              & ((((IData)(__Vfunc_feed__29__data) 
                                                   == 
                                                   (0xffU 
                                                    & __Vfunc_feed__29__ctx[0U]))
                                                   ? 7U
                                                   : 0U) 
                                                 << 8U)));
                                }
                            } else if ((0x100U & __Vfunc_feed__29__ctx[2U])) {
                                __Vfunc_feed__29__ctx[0U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__29__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__29__data) 
                                          << 0x18U));
                                __Vfunc_feed__29__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__29__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__29__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__29__data))));
                                __Vfunc_feed__29__ctx[2U] 
                                    = (0x600U | (0xffU 
                                                 & __Vfunc_feed__29__ctx[2U]));
                            } else {
                                __Vfunc_feed__29__ctx[1U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__29__ctx[1U]) 
                                       | (IData)(__Vfunc_feed__29__data));
                                __Vfunc_feed__29__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__29__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__29__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__29__data))));
                                __Vfunc_feed__29__ctx[2U] 
                                    = (0x500U | (0xffU 
                                                 & __Vfunc_feed__29__ctx[2U]));
                            }
                        } else if ((0x200U & __Vfunc_feed__29__ctx[2U])) {
                            if ((0x100U & __Vfunc_feed__29__ctx[2U])) {
                                __Vfunc_feed__29__ctx[1U] 
                                    = ((0xffff00ffU 
                                        & __Vfunc_feed__29__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__29__data) 
                                          << 8U));
                                __Vfunc_feed__29__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__29__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__29__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__29__data))));
                                __Vfunc_feed__29__ctx[2U] 
                                    = (0x400U | (0xffU 
                                                 & __Vfunc_feed__29__ctx[2U]));
                            } else {
                                __Vfunc_feed__29__ctx[1U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__29__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__29__data) 
                                          << 0x10U));
                                __Vfunc_feed__29__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__29__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__29__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__29__data))));
                                __Vfunc_feed__29__ctx[2U] 
                                    = (0x300U | (0xffU 
                                                 & __Vfunc_feed__29__ctx[2U]));
                            }
                        } else if ((0x100U & __Vfunc_feed__29__ctx[2U])) {
                            if ((5U == (IData)(__Vfunc_feed__29__data))) {
                                __Vfunc_feed__29__ctx[1U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__29__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__29__data) 
                                          << 0x18U));
                                __Vfunc_feed__29__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__29__ctx[0U]) 
                                       | (IData)(__Vfunc_feed__29__data));
                                __Vfunc_feed__29__ctx[2U] 
                                    = (0x200U | (0xffU 
                                                 & __Vfunc_feed__29__ctx[2U]));
                            } else {
                                __Vfunc_feed__29__ctx[2U] 
                                    = (0xffU & __Vfunc_feed__29__ctx[2U]);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__29__data))) {
                            __Vfunc_feed__29__ctx[2U] 
                                = (0x7ffU & (0x100U 
                                             | (IData)(__Vfunc_feed__29__data)));
                            __Vfunc_feed__29__ctx[0U] 
                                = (0xffffff00U & __Vfunc_feed__29__ctx[0U]);
                        }
                        __Vfunc_feed__29__Vfuncout[0U] 
                            = __Vfunc_feed__29__ctx[0U];
                        __Vfunc_feed__29__Vfuncout[1U] 
                            = __Vfunc_feed__29__ctx[1U];
                        __Vfunc_feed__29__Vfuncout[2U] 
                            = __Vfunc_feed__29__ctx[2U];
                        __Vfunc_feed__10__ctx[0x10U] 
                            = __Vfunc_feed__29__Vfuncout[0U];
                        __Vfunc_feed__10__ctx[0x11U] 
                            = __Vfunc_feed__29__Vfuncout[1U];
                        __Vfunc_feed__10__ctx[0x12U] 
                            = ((0xfffff800U & __Vfunc_feed__10__ctx[0x12U]) 
                               | __Vfunc_feed__29__Vfuncout[2U]);
                        __Vfunc_feed__30__data = __Vfunc_feed__10__data;
                        __Vfunc_feed__30__in_ctx[0U] 
                            = __Vfunc_feed__10__ctx[0x10U];
                        __Vfunc_feed__30__in_ctx[1U] 
                            = __Vfunc_feed__10__ctx[0x11U];
                        __Vfunc_feed__30__in_ctx[2U] 
                            = (0x7ffU & __Vfunc_feed__10__ctx[0x12U]);
                        __Vfunc_feed__30__ctx[0U] = 
                            __Vfunc_feed__30__in_ctx[0U];
                        __Vfunc_feed__30__ctx[1U] = 
                            __Vfunc_feed__30__in_ctx[1U];
                        __Vfunc_feed__30__ctx[2U] = 
                            __Vfunc_feed__30__in_ctx[2U];
                        __Vfunc_feed__30__out_frame 
                            = (((QData)((IData)(__Vfunc_feed__30__ctx[2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              __Vfunc_feed__30__ctx[1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                __Vfunc_feed__30__ctx[0U])) 
                                                >> 8U)));
                        if ((0x400U & __Vfunc_feed__30__ctx[2U])) {
                            if ((0x200U & __Vfunc_feed__30__ctx[2U])) {
                                if ((0x100U & __Vfunc_feed__30__ctx[2U])) {
                                    if ((0x55U == (IData)(__Vfunc_feed__30__data))) {
                                        __Vfunc_feed__30__ctx[0U] 
                                            = ((0xffff00ffU 
                                                & __Vfunc_feed__30__ctx[0U]) 
                                               | ((IData)(__Vfunc_feed__30__data) 
                                                  << 8U));
                                        __Vfunc_feed__30__out_frame 
                                            = (((QData)((IData)(
                                                                __Vfunc_feed__30__ctx[2U])) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   __Vfunc_feed__30__ctx[1U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     __Vfunc_feed__30__ctx[0U])) 
                                                     >> 8U)));
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
                        __Vfunc_feed__10__move_probe_frame 
                            = __Vfunc_feed__30__out_frame;
                        __Vfunc_feed__10__ctx[0x10U] 
                            = __Vfunc_feed__30__Vfuncout[0U];
                        __Vfunc_feed__10__ctx[0x11U] 
                            = __Vfunc_feed__30__Vfuncout[1U];
                        __Vfunc_feed__10__ctx[0x12U] 
                            = ((0xfffff800U & __Vfunc_feed__10__ctx[0x12U]) 
                               | __Vfunc_feed__30__Vfuncout[2U]);
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__10__ctx[0x16U]));
                    } else if ((1U == (IData)(__Vfunc_feed__10__data))) {
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0x80000U | (0x61ffffU 
                                           & __Vfunc_feed__10__ctx[0x16U]));
                        __Vfunc_feed__10__ctx[5U] = 
                            ((0x1ffU & __Vfunc_feed__10__ctx[5U]) 
                             | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[0U] 
                                << 9U));
                        __Vfunc_feed__10__ctx[6U] = 
                            ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[0U] 
                              >> 0x17U) | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[1U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[7U] = 
                            ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[1U] 
                              >> 0x17U) | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[2U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[8U] = 
                            ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[2U] 
                              >> 0x17U) | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[3U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[9U] = 
                            ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[3U] 
                              >> 0x17U) | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[4U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[0xaU] 
                            = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[4U] 
                                >> 0x17U) | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[5U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xbU] 
                            = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[5U] 
                                >> 0x17U) | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[6U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xcU] 
                            = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[6U] 
                                >> 0x17U) | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[7U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xdU] 
                            = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[7U] 
                                >> 0x17U) | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[8U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xeU] 
                            = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[8U] 
                                >> 0x17U) | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[9U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xfU] 
                            = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[9U] 
                                >> 0x17U) | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9cb4abb4_0[0xaU] 
                                             << 9U));
                        __Vfunc_feed__32__data = (0xffU 
                                                  & (__Vfunc_feed__10__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__32__in_ctx[0U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[0U] 
                               & ((__Vfunc_feed__10__ctx[6U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[5U] 
                                                >> 9U)));
                        __Vfunc_feed__32__in_ctx[1U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[1U] 
                               & ((__Vfunc_feed__10__ctx[7U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[6U] 
                                                >> 9U)));
                        __Vfunc_feed__32__in_ctx[2U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[2U] 
                               & ((__Vfunc_feed__10__ctx[8U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[7U] 
                                                >> 9U)));
                        __Vfunc_feed__32__in_ctx[3U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[3U] 
                               & ((__Vfunc_feed__10__ctx[9U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[8U] 
                                                >> 9U)));
                        __Vfunc_feed__32__in_ctx[4U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[4U] 
                               & ((__Vfunc_feed__10__ctx[0xaU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[9U] 
                                                >> 9U)));
                        __Vfunc_feed__32__in_ctx[5U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[5U] 
                               & ((__Vfunc_feed__10__ctx[0xbU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xaU] 
                                                >> 9U)));
                        __Vfunc_feed__32__in_ctx[6U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[6U] 
                               & ((__Vfunc_feed__10__ctx[0xcU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xbU] 
                                                >> 9U)));
                        __Vfunc_feed__32__in_ctx[7U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[7U] 
                               & ((__Vfunc_feed__10__ctx[0xdU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xcU] 
                                                >> 9U)));
                        __Vfunc_feed__32__in_ctx[8U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[8U] 
                               & ((__Vfunc_feed__10__ctx[0xeU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xdU] 
                                                >> 9U)));
                        __Vfunc_feed__32__in_ctx[9U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[9U] 
                               & ((__Vfunc_feed__10__ctx[0xfU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xeU] 
                                                >> 9U)));
                        __Vfunc_feed__32__in_ctx[0xaU] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[0xaU] 
                               & ((__Vfunc_feed__10__ctx[0x10U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xfU] 
                                                >> 9U)));
                        {
                            __Vfunc_feed__32__ctx[0U] 
                                = __Vfunc_feed__32__in_ctx[0U];
                            __Vfunc_feed__32__ctx[1U] 
                                = __Vfunc_feed__32__in_ctx[1U];
                            __Vfunc_feed__32__ctx[2U] 
                                = __Vfunc_feed__32__in_ctx[2U];
                            __Vfunc_feed__32__ctx[3U] 
                                = __Vfunc_feed__32__in_ctx[3U];
                            __Vfunc_feed__32__ctx[4U] 
                                = __Vfunc_feed__32__in_ctx[4U];
                            __Vfunc_feed__32__ctx[5U] 
                                = __Vfunc_feed__32__in_ctx[5U];
                            __Vfunc_feed__32__ctx[6U] 
                                = __Vfunc_feed__32__in_ctx[6U];
                            __Vfunc_feed__32__ctx[7U] 
                                = __Vfunc_feed__32__in_ctx[7U];
                            __Vfunc_feed__32__ctx[8U] 
                                = __Vfunc_feed__32__in_ctx[8U];
                            __Vfunc_feed__32__ctx[9U] 
                                = __Vfunc_feed__32__in_ctx[9U];
                            __Vfunc_feed__32__ctx[0xaU] 
                                = __Vfunc_feed__32__in_ctx[0xaU];
                            __Vfunc_feed__32__frame_error = 0U;
                            vlSymsp->TOP__move_queue_add_req_parser_pkg.__Vlvbound_heeac623e__0 
                                = __Vfunc_feed__32__data;
                            if (VL_LIKELY((0x156U >= 
                                           ((IData)(1U) 
                                            + (0x1ffU 
                                               & (((IData)(0x14fU) 
                                                   - 
                                                   VL_SHIFTL_III(9,32,32, 
                                                                 (0x3fU 
                                                                  & (__Vfunc_feed__32__ctx[0xaU] 
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
                                                                     & (__Vfunc_feed__32__ctx[0xaU] 
                                                                        >> 0x11U)), 3U)) 
                                                     - (IData)(7U)))), __Vfunc_feed__32__ctx, vlSymsp->TOP__move_queue_add_req_parser_pkg.__Vlvbound_heeac623e__0);
                            }
                            if ((0U == (0x3fU & (__Vfunc_feed__32__ctx[0xaU] 
                                                 >> 0x11U)))) {
                                if ((0xaaU != (IData)(__Vfunc_feed__32__data))) {
                                    __Vfunc_feed__32__frame_error = 1U;
                                }
                            } else if ((1U == (0x3fU 
                                               & (__Vfunc_feed__32__ctx[0xaU] 
                                                  >> 0x11U)))) {
                                if ((1U == (IData)(__Vfunc_feed__32__data))) {
                                    __Vfunc_feed__32__ctx[0U] 
                                        = ((0xfffffffeU 
                                            & __Vfunc_feed__32__ctx[0U]) 
                                           | (1U & 
                                              VL_REDXOR_8(__Vfunc_feed__32__data)));
                                } else {
                                    __Vfunc_feed__32__frame_error = 1U;
                                    __Vfunc_feed__32__ctx[0xaU] 
                                        = (0x1ffffU 
                                           & __Vfunc_feed__32__ctx[0xaU]);
                                    __Vfunc_feed__32__Vfuncout[0U] 
                                        = __Vfunc_feed__32__ctx[0U];
                                    __Vfunc_feed__32__Vfuncout[1U] 
                                        = __Vfunc_feed__32__ctx[1U];
                                    __Vfunc_feed__32__Vfuncout[2U] 
                                        = __Vfunc_feed__32__ctx[2U];
                                    __Vfunc_feed__32__Vfuncout[3U] 
                                        = __Vfunc_feed__32__ctx[3U];
                                    __Vfunc_feed__32__Vfuncout[4U] 
                                        = __Vfunc_feed__32__ctx[4U];
                                    __Vfunc_feed__32__Vfuncout[5U] 
                                        = __Vfunc_feed__32__ctx[5U];
                                    __Vfunc_feed__32__Vfuncout[6U] 
                                        = __Vfunc_feed__32__ctx[6U];
                                    __Vfunc_feed__32__Vfuncout[7U] 
                                        = __Vfunc_feed__32__ctx[7U];
                                    __Vfunc_feed__32__Vfuncout[8U] 
                                        = __Vfunc_feed__32__ctx[8U];
                                    __Vfunc_feed__32__Vfuncout[9U] 
                                        = __Vfunc_feed__32__ctx[9U];
                                    __Vfunc_feed__32__Vfuncout[0xaU] 
                                        = __Vfunc_feed__32__ctx[0xaU];
                                    goto __Vlabel1;
                                }
                            } else if ((0x28U == (0x3fU 
                                                  & (__Vfunc_feed__32__ctx[0xaU] 
                                                     >> 0x11U)))) {
                                if (((1U & (IData)(__Vfunc_feed__32__data)) 
                                     != (1U & __Vfunc_feed__32__ctx[0U]))) {
                                    __Vfunc_feed__32__frame_error = 1U;
                                    __Vfunc_feed__32__ctx[0xaU] 
                                        = (0x1ffffU 
                                           & __Vfunc_feed__32__ctx[0xaU]);
                                    __Vfunc_feed__32__ctx[0U] 
                                        = (0xfffffffeU 
                                           & __Vfunc_feed__32__ctx[0U]);
                                    __Vfunc_feed__32__Vfuncout[0U] 
                                        = __Vfunc_feed__32__ctx[0U];
                                    __Vfunc_feed__32__Vfuncout[1U] 
                                        = __Vfunc_feed__32__ctx[1U];
                                    __Vfunc_feed__32__Vfuncout[2U] 
                                        = __Vfunc_feed__32__ctx[2U];
                                    __Vfunc_feed__32__Vfuncout[3U] 
                                        = __Vfunc_feed__32__ctx[3U];
                                    __Vfunc_feed__32__Vfuncout[4U] 
                                        = __Vfunc_feed__32__ctx[4U];
                                    __Vfunc_feed__32__Vfuncout[5U] 
                                        = __Vfunc_feed__32__ctx[5U];
                                    __Vfunc_feed__32__Vfuncout[6U] 
                                        = __Vfunc_feed__32__ctx[6U];
                                    __Vfunc_feed__32__Vfuncout[7U] 
                                        = __Vfunc_feed__32__ctx[7U];
                                    __Vfunc_feed__32__Vfuncout[8U] 
                                        = __Vfunc_feed__32__ctx[8U];
                                    __Vfunc_feed__32__Vfuncout[9U] 
                                        = __Vfunc_feed__32__ctx[9U];
                                    __Vfunc_feed__32__Vfuncout[0xaU] 
                                        = __Vfunc_feed__32__ctx[0xaU];
                                    goto __Vlabel1;
                                }
                            } else if ((0x29U == (0x3fU 
                                                  & (__Vfunc_feed__32__ctx[0xaU] 
                                                     >> 0x11U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__32__data))) {
                                    __Vfunc_decoder__34__raw[0U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[0U] 
                                           & ((__Vfunc_feed__32__ctx[1U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__32__ctx[0U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__34__raw[1U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[1U] 
                                           & ((__Vfunc_feed__32__ctx[2U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__32__ctx[1U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__34__raw[2U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[2U] 
                                           & ((__Vfunc_feed__32__ctx[3U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__32__ctx[2U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__34__raw[3U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[3U] 
                                           & ((__Vfunc_feed__32__ctx[4U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__32__ctx[3U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__34__raw[4U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[4U] 
                                           & ((__Vfunc_feed__32__ctx[5U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__32__ctx[4U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__34__raw[5U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[5U] 
                                           & ((__Vfunc_feed__32__ctx[6U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__32__ctx[5U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__34__raw[6U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[6U] 
                                           & ((__Vfunc_feed__32__ctx[7U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__32__ctx[6U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__34__raw[7U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[7U] 
                                           & ((__Vfunc_feed__32__ctx[8U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__32__ctx[7U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__34__raw[8U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[8U] 
                                           & ((__Vfunc_feed__32__ctx[9U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__32__ctx[8U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__34__raw[9U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[9U] 
                                           & ((__Vfunc_feed__32__ctx[0xaU] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__32__ctx[9U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__34__raw[0xaU] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[0xaU] 
                                           & (__Vfunc_feed__32__ctx[0xaU] 
                                              >> 1U));
                                    __Vfunc_decoder__34__r[0U] 
                                        = __Vfunc_decoder__34__raw[0U];
                                    __Vfunc_decoder__34__r[1U] 
                                        = __Vfunc_decoder__34__raw[1U];
                                    __Vfunc_decoder__34__r[2U] 
                                        = __Vfunc_decoder__34__raw[2U];
                                    __Vfunc_decoder__34__r[3U] 
                                        = __Vfunc_decoder__34__raw[3U];
                                    __Vfunc_decoder__34__r[4U] 
                                        = __Vfunc_decoder__34__raw[4U];
                                    __Vfunc_decoder__34__r[5U] 
                                        = __Vfunc_decoder__34__raw[5U];
                                    __Vfunc_decoder__34__r[6U] 
                                        = __Vfunc_decoder__34__raw[6U];
                                    __Vfunc_decoder__34__r[7U] 
                                        = __Vfunc_decoder__34__raw[7U];
                                    __Vfunc_decoder__34__r[8U] 
                                        = __Vfunc_decoder__34__raw[8U];
                                    __Vfunc_decoder__34__r[9U] 
                                        = __Vfunc_decoder__34__raw[9U];
                                    __Vfunc_decoder__34__r[0xaU] 
                                        = __Vfunc_decoder__34__raw[0xaU];
                                } else {
                                    __Vfunc_feed__32__frame_error = 1U;
                                }
                                __Vfunc_feed__32__ctx[0xaU] 
                                    = (0x1ffffU & __Vfunc_feed__32__ctx[0xaU]);
                                __Vfunc_feed__32__ctx[0U] 
                                    = (0xfffffffeU 
                                       & __Vfunc_feed__32__ctx[0U]);
                                __Vfunc_feed__32__Vfuncout[0U] 
                                    = __Vfunc_feed__32__ctx[0U];
                                __Vfunc_feed__32__Vfuncout[1U] 
                                    = __Vfunc_feed__32__ctx[1U];
                                __Vfunc_feed__32__Vfuncout[2U] 
                                    = __Vfunc_feed__32__ctx[2U];
                                __Vfunc_feed__32__Vfuncout[3U] 
                                    = __Vfunc_feed__32__ctx[3U];
                                __Vfunc_feed__32__Vfuncout[4U] 
                                    = __Vfunc_feed__32__ctx[4U];
                                __Vfunc_feed__32__Vfuncout[5U] 
                                    = __Vfunc_feed__32__ctx[5U];
                                __Vfunc_feed__32__Vfuncout[6U] 
                                    = __Vfunc_feed__32__ctx[6U];
                                __Vfunc_feed__32__Vfuncout[7U] 
                                    = __Vfunc_feed__32__ctx[7U];
                                __Vfunc_feed__32__Vfuncout[8U] 
                                    = __Vfunc_feed__32__ctx[8U];
                                __Vfunc_feed__32__Vfuncout[9U] 
                                    = __Vfunc_feed__32__ctx[9U];
                                __Vfunc_feed__32__Vfuncout[0xaU] 
                                    = __Vfunc_feed__32__ctx[0xaU];
                                goto __Vlabel1;
                            } else if (((2U <= (0x3fU 
                                                & (__Vfunc_feed__32__ctx[0xaU] 
                                                   >> 0x11U))) 
                                        & (0x27U >= 
                                           (0x3fU & 
                                            (__Vfunc_feed__32__ctx[0xaU] 
                                             >> 0x11U))))) {
                                __Vfunc_feed__32__ctx[0U] 
                                    = ((0xfffffffeU 
                                        & __Vfunc_feed__32__ctx[0U]) 
                                       | (1U & (__Vfunc_feed__32__ctx[0U] 
                                                ^ VL_REDXOR_8(__Vfunc_feed__32__data))));
                            }
                            if (__Vfunc_feed__32__frame_error) {
                                __Vfunc_feed__32__ctx[0xaU] 
                                    = (0x1ffffU & __Vfunc_feed__32__ctx[0xaU]);
                                __Vfunc_feed__32__ctx[0U] 
                                    = (0xfffffffeU 
                                       & __Vfunc_feed__32__ctx[0U]);
                            } else if ((0x29U > (0x3fU 
                                                 & (__Vfunc_feed__32__ctx[0xaU] 
                                                    >> 0x11U)))) {
                                __Vfunc_feed__32__ctx[0xaU] 
                                    = ((0x1ffffU & 
                                        __Vfunc_feed__32__ctx[0xaU]) 
                                       | (0x7e0000U 
                                          & (((IData)(1U) 
                                              + ((__Vfunc_feed__32__ctx[0xaU] 
                                                  << 0xfU) 
                                                 | (__Vfunc_feed__32__ctx[0xaU] 
                                                    >> 0x11U))) 
                                             << 0x11U)));
                            }
                            __Vfunc_feed__32__Vfuncout[0U] 
                                = __Vfunc_feed__32__ctx[0U];
                            __Vfunc_feed__32__Vfuncout[1U] 
                                = __Vfunc_feed__32__ctx[1U];
                            __Vfunc_feed__32__Vfuncout[2U] 
                                = __Vfunc_feed__32__ctx[2U];
                            __Vfunc_feed__32__Vfuncout[3U] 
                                = __Vfunc_feed__32__ctx[3U];
                            __Vfunc_feed__32__Vfuncout[4U] 
                                = __Vfunc_feed__32__ctx[4U];
                            __Vfunc_feed__32__Vfuncout[5U] 
                                = __Vfunc_feed__32__ctx[5U];
                            __Vfunc_feed__32__Vfuncout[6U] 
                                = __Vfunc_feed__32__ctx[6U];
                            __Vfunc_feed__32__Vfuncout[7U] 
                                = __Vfunc_feed__32__ctx[7U];
                            __Vfunc_feed__32__Vfuncout[8U] 
                                = __Vfunc_feed__32__ctx[8U];
                            __Vfunc_feed__32__Vfuncout[9U] 
                                = __Vfunc_feed__32__ctx[9U];
                            __Vfunc_feed__32__Vfuncout[0xaU] 
                                = __Vfunc_feed__32__ctx[0xaU];
                            __Vlabel1: ;
                        }
                        __Vfunc_feed__10__ctx[5U] = 
                            ((0x1ffU & __Vfunc_feed__10__ctx[5U]) 
                             | (__Vfunc_feed__32__Vfuncout[0U] 
                                << 9U));
                        __Vfunc_feed__10__ctx[6U] = 
                            ((__Vfunc_feed__32__Vfuncout[0U] 
                              >> 0x17U) | (__Vfunc_feed__32__Vfuncout[1U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[7U] = 
                            ((__Vfunc_feed__32__Vfuncout[1U] 
                              >> 0x17U) | (__Vfunc_feed__32__Vfuncout[2U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[8U] = 
                            ((__Vfunc_feed__32__Vfuncout[2U] 
                              >> 0x17U) | (__Vfunc_feed__32__Vfuncout[3U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[9U] = 
                            ((__Vfunc_feed__32__Vfuncout[3U] 
                              >> 0x17U) | (__Vfunc_feed__32__Vfuncout[4U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[0xaU] 
                            = ((__Vfunc_feed__32__Vfuncout[4U] 
                                >> 0x17U) | (__Vfunc_feed__32__Vfuncout[5U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xbU] 
                            = ((__Vfunc_feed__32__Vfuncout[5U] 
                                >> 0x17U) | (__Vfunc_feed__32__Vfuncout[6U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xcU] 
                            = ((__Vfunc_feed__32__Vfuncout[6U] 
                                >> 0x17U) | (__Vfunc_feed__32__Vfuncout[7U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xdU] 
                            = ((__Vfunc_feed__32__Vfuncout[7U] 
                                >> 0x17U) | (__Vfunc_feed__32__Vfuncout[8U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xeU] 
                            = ((__Vfunc_feed__32__Vfuncout[8U] 
                                >> 0x17U) | (__Vfunc_feed__32__Vfuncout[9U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xfU] 
                            = ((__Vfunc_feed__32__Vfuncout[9U] 
                                >> 0x17U) | (__Vfunc_feed__32__Vfuncout[0xaU] 
                                             << 9U));
                        __Vfunc_feed__35__data = __Vfunc_feed__10__data;
                        __Vfunc_feed__35__in_ctx[0U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[0U] 
                               & ((__Vfunc_feed__10__ctx[6U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[5U] 
                                                >> 9U)));
                        __Vfunc_feed__35__in_ctx[1U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[1U] 
                               & ((__Vfunc_feed__10__ctx[7U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[6U] 
                                                >> 9U)));
                        __Vfunc_feed__35__in_ctx[2U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[2U] 
                               & ((__Vfunc_feed__10__ctx[8U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[7U] 
                                                >> 9U)));
                        __Vfunc_feed__35__in_ctx[3U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[3U] 
                               & ((__Vfunc_feed__10__ctx[9U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[8U] 
                                                >> 9U)));
                        __Vfunc_feed__35__in_ctx[4U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[4U] 
                               & ((__Vfunc_feed__10__ctx[0xaU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[9U] 
                                                >> 9U)));
                        __Vfunc_feed__35__in_ctx[5U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[5U] 
                               & ((__Vfunc_feed__10__ctx[0xbU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xaU] 
                                                >> 9U)));
                        __Vfunc_feed__35__in_ctx[6U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[6U] 
                               & ((__Vfunc_feed__10__ctx[0xcU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xbU] 
                                                >> 9U)));
                        __Vfunc_feed__35__in_ctx[7U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[7U] 
                               & ((__Vfunc_feed__10__ctx[0xdU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xcU] 
                                                >> 9U)));
                        __Vfunc_feed__35__in_ctx[8U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[8U] 
                               & ((__Vfunc_feed__10__ctx[0xeU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xdU] 
                                                >> 9U)));
                        __Vfunc_feed__35__in_ctx[9U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[9U] 
                               & ((__Vfunc_feed__10__ctx[0xfU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xeU] 
                                                >> 9U)));
                        __Vfunc_feed__35__in_ctx[0xaU] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[0xaU] 
                               & ((__Vfunc_feed__10__ctx[0x10U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xfU] 
                                                >> 9U)));
                        {
                            __Vfunc_feed__35__ctx[0U] 
                                = __Vfunc_feed__35__in_ctx[0U];
                            __Vfunc_feed__35__ctx[1U] 
                                = __Vfunc_feed__35__in_ctx[1U];
                            __Vfunc_feed__35__ctx[2U] 
                                = __Vfunc_feed__35__in_ctx[2U];
                            __Vfunc_feed__35__ctx[3U] 
                                = __Vfunc_feed__35__in_ctx[3U];
                            __Vfunc_feed__35__ctx[4U] 
                                = __Vfunc_feed__35__in_ctx[4U];
                            __Vfunc_feed__35__ctx[5U] 
                                = __Vfunc_feed__35__in_ctx[5U];
                            __Vfunc_feed__35__ctx[6U] 
                                = __Vfunc_feed__35__in_ctx[6U];
                            __Vfunc_feed__35__ctx[7U] 
                                = __Vfunc_feed__35__in_ctx[7U];
                            __Vfunc_feed__35__ctx[8U] 
                                = __Vfunc_feed__35__in_ctx[8U];
                            __Vfunc_feed__35__ctx[9U] 
                                = __Vfunc_feed__35__in_ctx[9U];
                            __Vfunc_feed__35__ctx[0xaU] 
                                = __Vfunc_feed__35__in_ctx[0xaU];
                            __Vfunc_feed__35__frame_error = 0U;
                            __Vfunc_make_default__36__r[0U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[0U];
                            __Vfunc_make_default__36__r[1U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[1U];
                            __Vfunc_make_default__36__r[2U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[2U];
                            __Vfunc_make_default__36__r[3U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[3U];
                            __Vfunc_make_default__36__r[4U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[4U];
                            __Vfunc_make_default__36__r[5U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[5U];
                            __Vfunc_make_default__36__r[6U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[6U];
                            __Vfunc_make_default__36__r[7U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[7U];
                            __Vfunc_make_default__36__r[8U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[8U];
                            __Vfunc_make_default__36__r[9U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[9U];
                            __Vfunc_make_default__36__r[0xaU] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[0xaU];
                            __Vfunc_make_default__36__Vfuncout[0U] 
                                = __Vfunc_make_default__36__r[0U];
                            __Vfunc_make_default__36__Vfuncout[1U] 
                                = __Vfunc_make_default__36__r[1U];
                            __Vfunc_make_default__36__Vfuncout[2U] 
                                = __Vfunc_make_default__36__r[2U];
                            __Vfunc_make_default__36__Vfuncout[3U] 
                                = __Vfunc_make_default__36__r[3U];
                            __Vfunc_make_default__36__Vfuncout[4U] 
                                = __Vfunc_make_default__36__r[4U];
                            __Vfunc_make_default__36__Vfuncout[5U] 
                                = __Vfunc_make_default__36__r[5U];
                            __Vfunc_make_default__36__Vfuncout[6U] 
                                = __Vfunc_make_default__36__r[6U];
                            __Vfunc_make_default__36__Vfuncout[7U] 
                                = __Vfunc_make_default__36__r[7U];
                            __Vfunc_make_default__36__Vfuncout[8U] 
                                = __Vfunc_make_default__36__r[8U];
                            __Vfunc_make_default__36__Vfuncout[9U] 
                                = __Vfunc_make_default__36__r[9U];
                            __Vfunc_make_default__36__Vfuncout[0xaU] 
                                = __Vfunc_make_default__36__r[0xaU];
                            __Vfunc_feed__35__out_frame[0U] 
                                = __Vfunc_make_default__36__Vfuncout[0U];
                            __Vfunc_feed__35__out_frame[1U] 
                                = __Vfunc_make_default__36__Vfuncout[1U];
                            __Vfunc_feed__35__out_frame[2U] 
                                = __Vfunc_make_default__36__Vfuncout[2U];
                            __Vfunc_feed__35__out_frame[3U] 
                                = __Vfunc_make_default__36__Vfuncout[3U];
                            __Vfunc_feed__35__out_frame[4U] 
                                = __Vfunc_make_default__36__Vfuncout[4U];
                            __Vfunc_feed__35__out_frame[5U] 
                                = __Vfunc_make_default__36__Vfuncout[5U];
                            __Vfunc_feed__35__out_frame[6U] 
                                = __Vfunc_make_default__36__Vfuncout[6U];
                            __Vfunc_feed__35__out_frame[7U] 
                                = __Vfunc_make_default__36__Vfuncout[7U];
                            __Vfunc_feed__35__out_frame[8U] 
                                = __Vfunc_make_default__36__Vfuncout[8U];
                            __Vfunc_feed__35__out_frame[9U] 
                                = __Vfunc_make_default__36__Vfuncout[9U];
                            __Vfunc_feed__35__out_frame[0xaU] 
                                = __Vfunc_make_default__36__Vfuncout[0xaU];
                            vlSymsp->TOP__move_queue_add_req_parser_pkg.__Vlvbound_heeac623e__0 
                                = __Vfunc_feed__35__data;
                            if (VL_LIKELY((0x156U >= 
                                           ((IData)(1U) 
                                            + (0x1ffU 
                                               & (((IData)(0x14fU) 
                                                   - 
                                                   VL_SHIFTL_III(9,32,32, 
                                                                 (0x3fU 
                                                                  & (__Vfunc_feed__35__ctx[0xaU] 
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
                                                                     & (__Vfunc_feed__35__ctx[0xaU] 
                                                                        >> 0x11U)), 3U)) 
                                                     - (IData)(7U)))), __Vfunc_feed__35__ctx, vlSymsp->TOP__move_queue_add_req_parser_pkg.__Vlvbound_heeac623e__0);
                            }
                            if ((0U == (0x3fU & (__Vfunc_feed__35__ctx[0xaU] 
                                                 >> 0x11U)))) {
                                if ((0xaaU != (IData)(__Vfunc_feed__35__data))) {
                                    __Vfunc_feed__35__frame_error = 1U;
                                }
                            } else if ((1U == (0x3fU 
                                               & (__Vfunc_feed__35__ctx[0xaU] 
                                                  >> 0x11U)))) {
                                if ((1U == (IData)(__Vfunc_feed__35__data))) {
                                    __Vfunc_feed__35__ctx[0U] 
                                        = ((0xfffffffeU 
                                            & __Vfunc_feed__35__ctx[0U]) 
                                           | (1U & 
                                              VL_REDXOR_8(__Vfunc_feed__35__data)));
                                } else {
                                    __Vfunc_feed__35__frame_error = 1U;
                                    __Vfunc_feed__35__ctx[0xaU] 
                                        = (0x1ffffU 
                                           & __Vfunc_feed__35__ctx[0xaU]);
                                    __Vfunc_feed__35__Vfuncout[0U] 
                                        = __Vfunc_feed__35__ctx[0U];
                                    __Vfunc_feed__35__Vfuncout[1U] 
                                        = __Vfunc_feed__35__ctx[1U];
                                    __Vfunc_feed__35__Vfuncout[2U] 
                                        = __Vfunc_feed__35__ctx[2U];
                                    __Vfunc_feed__35__Vfuncout[3U] 
                                        = __Vfunc_feed__35__ctx[3U];
                                    __Vfunc_feed__35__Vfuncout[4U] 
                                        = __Vfunc_feed__35__ctx[4U];
                                    __Vfunc_feed__35__Vfuncout[5U] 
                                        = __Vfunc_feed__35__ctx[5U];
                                    __Vfunc_feed__35__Vfuncout[6U] 
                                        = __Vfunc_feed__35__ctx[6U];
                                    __Vfunc_feed__35__Vfuncout[7U] 
                                        = __Vfunc_feed__35__ctx[7U];
                                    __Vfunc_feed__35__Vfuncout[8U] 
                                        = __Vfunc_feed__35__ctx[8U];
                                    __Vfunc_feed__35__Vfuncout[9U] 
                                        = __Vfunc_feed__35__ctx[9U];
                                    __Vfunc_feed__35__Vfuncout[0xaU] 
                                        = __Vfunc_feed__35__ctx[0xaU];
                                    goto __Vlabel2;
                                }
                            } else if ((0x28U == (0x3fU 
                                                  & (__Vfunc_feed__35__ctx[0xaU] 
                                                     >> 0x11U)))) {
                                if (((1U & (IData)(__Vfunc_feed__35__data)) 
                                     != (1U & __Vfunc_feed__35__ctx[0U]))) {
                                    __Vfunc_feed__35__frame_error = 1U;
                                    __Vfunc_feed__35__ctx[0xaU] 
                                        = (0x1ffffU 
                                           & __Vfunc_feed__35__ctx[0xaU]);
                                    __Vfunc_feed__35__ctx[0U] 
                                        = (0xfffffffeU 
                                           & __Vfunc_feed__35__ctx[0U]);
                                    __Vfunc_feed__35__Vfuncout[0U] 
                                        = __Vfunc_feed__35__ctx[0U];
                                    __Vfunc_feed__35__Vfuncout[1U] 
                                        = __Vfunc_feed__35__ctx[1U];
                                    __Vfunc_feed__35__Vfuncout[2U] 
                                        = __Vfunc_feed__35__ctx[2U];
                                    __Vfunc_feed__35__Vfuncout[3U] 
                                        = __Vfunc_feed__35__ctx[3U];
                                    __Vfunc_feed__35__Vfuncout[4U] 
                                        = __Vfunc_feed__35__ctx[4U];
                                    __Vfunc_feed__35__Vfuncout[5U] 
                                        = __Vfunc_feed__35__ctx[5U];
                                    __Vfunc_feed__35__Vfuncout[6U] 
                                        = __Vfunc_feed__35__ctx[6U];
                                    __Vfunc_feed__35__Vfuncout[7U] 
                                        = __Vfunc_feed__35__ctx[7U];
                                    __Vfunc_feed__35__Vfuncout[8U] 
                                        = __Vfunc_feed__35__ctx[8U];
                                    __Vfunc_feed__35__Vfuncout[9U] 
                                        = __Vfunc_feed__35__ctx[9U];
                                    __Vfunc_feed__35__Vfuncout[0xaU] 
                                        = __Vfunc_feed__35__ctx[0xaU];
                                    goto __Vlabel2;
                                }
                            } else if ((0x29U == (0x3fU 
                                                  & (__Vfunc_feed__35__ctx[0xaU] 
                                                     >> 0x11U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__35__data))) {
                                    __Vfunc_decoder__37__raw[0U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[0U] 
                                           & ((__Vfunc_feed__35__ctx[1U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__35__ctx[0U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__37__raw[1U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[1U] 
                                           & ((__Vfunc_feed__35__ctx[2U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__35__ctx[1U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__37__raw[2U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[2U] 
                                           & ((__Vfunc_feed__35__ctx[3U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__35__ctx[2U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__37__raw[3U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[3U] 
                                           & ((__Vfunc_feed__35__ctx[4U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__35__ctx[3U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__37__raw[4U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[4U] 
                                           & ((__Vfunc_feed__35__ctx[5U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__35__ctx[4U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__37__raw[5U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[5U] 
                                           & ((__Vfunc_feed__35__ctx[6U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__35__ctx[5U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__37__raw[6U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[6U] 
                                           & ((__Vfunc_feed__35__ctx[7U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__35__ctx[6U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__37__raw[7U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[7U] 
                                           & ((__Vfunc_feed__35__ctx[8U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__35__ctx[7U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__37__raw[8U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[8U] 
                                           & ((__Vfunc_feed__35__ctx[9U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__35__ctx[8U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__37__raw[9U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[9U] 
                                           & ((__Vfunc_feed__35__ctx[0xaU] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__35__ctx[9U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__37__raw[0xaU] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[0xaU] 
                                           & (__Vfunc_feed__35__ctx[0xaU] 
                                              >> 1U));
                                    __Vfunc_decoder__37__r[0U] 
                                        = __Vfunc_decoder__37__raw[0U];
                                    __Vfunc_decoder__37__r[1U] 
                                        = __Vfunc_decoder__37__raw[1U];
                                    __Vfunc_decoder__37__r[2U] 
                                        = __Vfunc_decoder__37__raw[2U];
                                    __Vfunc_decoder__37__r[3U] 
                                        = __Vfunc_decoder__37__raw[3U];
                                    __Vfunc_decoder__37__r[4U] 
                                        = __Vfunc_decoder__37__raw[4U];
                                    __Vfunc_decoder__37__r[5U] 
                                        = __Vfunc_decoder__37__raw[5U];
                                    __Vfunc_decoder__37__r[6U] 
                                        = __Vfunc_decoder__37__raw[6U];
                                    __Vfunc_decoder__37__r[7U] 
                                        = __Vfunc_decoder__37__raw[7U];
                                    __Vfunc_decoder__37__r[8U] 
                                        = __Vfunc_decoder__37__raw[8U];
                                    __Vfunc_decoder__37__r[9U] 
                                        = __Vfunc_decoder__37__raw[9U];
                                    __Vfunc_decoder__37__r[0xaU] 
                                        = __Vfunc_decoder__37__raw[0xaU];
                                    __Vfunc_decoder__37__Vfuncout[0U] 
                                        = __Vfunc_decoder__37__r[0U];
                                    __Vfunc_decoder__37__Vfuncout[1U] 
                                        = __Vfunc_decoder__37__r[1U];
                                    __Vfunc_decoder__37__Vfuncout[2U] 
                                        = __Vfunc_decoder__37__r[2U];
                                    __Vfunc_decoder__37__Vfuncout[3U] 
                                        = __Vfunc_decoder__37__r[3U];
                                    __Vfunc_decoder__37__Vfuncout[4U] 
                                        = __Vfunc_decoder__37__r[4U];
                                    __Vfunc_decoder__37__Vfuncout[5U] 
                                        = __Vfunc_decoder__37__r[5U];
                                    __Vfunc_decoder__37__Vfuncout[6U] 
                                        = __Vfunc_decoder__37__r[6U];
                                    __Vfunc_decoder__37__Vfuncout[7U] 
                                        = __Vfunc_decoder__37__r[7U];
                                    __Vfunc_decoder__37__Vfuncout[8U] 
                                        = __Vfunc_decoder__37__r[8U];
                                    __Vfunc_decoder__37__Vfuncout[9U] 
                                        = __Vfunc_decoder__37__r[9U];
                                    __Vfunc_decoder__37__Vfuncout[0xaU] 
                                        = __Vfunc_decoder__37__r[0xaU];
                                    __Vfunc_feed__35__unnamedblk1__DOT__tmp[0U] 
                                        = __Vfunc_decoder__37__Vfuncout[0U];
                                    __Vfunc_feed__35__unnamedblk1__DOT__tmp[1U] 
                                        = __Vfunc_decoder__37__Vfuncout[1U];
                                    __Vfunc_feed__35__unnamedblk1__DOT__tmp[2U] 
                                        = __Vfunc_decoder__37__Vfuncout[2U];
                                    __Vfunc_feed__35__unnamedblk1__DOT__tmp[3U] 
                                        = __Vfunc_decoder__37__Vfuncout[3U];
                                    __Vfunc_feed__35__unnamedblk1__DOT__tmp[4U] 
                                        = __Vfunc_decoder__37__Vfuncout[4U];
                                    __Vfunc_feed__35__unnamedblk1__DOT__tmp[5U] 
                                        = __Vfunc_decoder__37__Vfuncout[5U];
                                    __Vfunc_feed__35__unnamedblk1__DOT__tmp[6U] 
                                        = __Vfunc_decoder__37__Vfuncout[6U];
                                    __Vfunc_feed__35__unnamedblk1__DOT__tmp[7U] 
                                        = __Vfunc_decoder__37__Vfuncout[7U];
                                    __Vfunc_feed__35__unnamedblk1__DOT__tmp[8U] 
                                        = __Vfunc_decoder__37__Vfuncout[8U];
                                    __Vfunc_feed__35__unnamedblk1__DOT__tmp[9U] 
                                        = __Vfunc_decoder__37__Vfuncout[9U];
                                    __Vfunc_feed__35__unnamedblk1__DOT__tmp[0xaU] 
                                        = __Vfunc_decoder__37__Vfuncout[0xaU];
                                    __Vfunc_feed__35__out_frame[0U] 
                                        = __Vfunc_feed__35__unnamedblk1__DOT__tmp[0U];
                                    __Vfunc_feed__35__out_frame[1U] 
                                        = __Vfunc_feed__35__unnamedblk1__DOT__tmp[1U];
                                    __Vfunc_feed__35__out_frame[2U] 
                                        = __Vfunc_feed__35__unnamedblk1__DOT__tmp[2U];
                                    __Vfunc_feed__35__out_frame[3U] 
                                        = __Vfunc_feed__35__unnamedblk1__DOT__tmp[3U];
                                    __Vfunc_feed__35__out_frame[4U] 
                                        = __Vfunc_feed__35__unnamedblk1__DOT__tmp[4U];
                                    __Vfunc_feed__35__out_frame[5U] 
                                        = __Vfunc_feed__35__unnamedblk1__DOT__tmp[5U];
                                    __Vfunc_feed__35__out_frame[6U] 
                                        = __Vfunc_feed__35__unnamedblk1__DOT__tmp[6U];
                                    __Vfunc_feed__35__out_frame[7U] 
                                        = __Vfunc_feed__35__unnamedblk1__DOT__tmp[7U];
                                    __Vfunc_feed__35__out_frame[8U] 
                                        = __Vfunc_feed__35__unnamedblk1__DOT__tmp[8U];
                                    __Vfunc_feed__35__out_frame[9U] 
                                        = __Vfunc_feed__35__unnamedblk1__DOT__tmp[9U];
                                    __Vfunc_feed__35__out_frame[0xaU] 
                                        = __Vfunc_feed__35__unnamedblk1__DOT__tmp[0xaU];
                                } else {
                                    __Vfunc_feed__35__frame_error = 1U;
                                }
                                __Vfunc_feed__35__ctx[0xaU] 
                                    = (0x1ffffU & __Vfunc_feed__35__ctx[0xaU]);
                                __Vfunc_feed__35__ctx[0U] 
                                    = (0xfffffffeU 
                                       & __Vfunc_feed__35__ctx[0U]);
                                __Vfunc_feed__35__Vfuncout[0U] 
                                    = __Vfunc_feed__35__ctx[0U];
                                __Vfunc_feed__35__Vfuncout[1U] 
                                    = __Vfunc_feed__35__ctx[1U];
                                __Vfunc_feed__35__Vfuncout[2U] 
                                    = __Vfunc_feed__35__ctx[2U];
                                __Vfunc_feed__35__Vfuncout[3U] 
                                    = __Vfunc_feed__35__ctx[3U];
                                __Vfunc_feed__35__Vfuncout[4U] 
                                    = __Vfunc_feed__35__ctx[4U];
                                __Vfunc_feed__35__Vfuncout[5U] 
                                    = __Vfunc_feed__35__ctx[5U];
                                __Vfunc_feed__35__Vfuncout[6U] 
                                    = __Vfunc_feed__35__ctx[6U];
                                __Vfunc_feed__35__Vfuncout[7U] 
                                    = __Vfunc_feed__35__ctx[7U];
                                __Vfunc_feed__35__Vfuncout[8U] 
                                    = __Vfunc_feed__35__ctx[8U];
                                __Vfunc_feed__35__Vfuncout[9U] 
                                    = __Vfunc_feed__35__ctx[9U];
                                __Vfunc_feed__35__Vfuncout[0xaU] 
                                    = __Vfunc_feed__35__ctx[0xaU];
                                goto __Vlabel2;
                            } else if (((2U <= (0x3fU 
                                                & (__Vfunc_feed__35__ctx[0xaU] 
                                                   >> 0x11U))) 
                                        & (0x27U >= 
                                           (0x3fU & 
                                            (__Vfunc_feed__35__ctx[0xaU] 
                                             >> 0x11U))))) {
                                __Vfunc_feed__35__ctx[0U] 
                                    = ((0xfffffffeU 
                                        & __Vfunc_feed__35__ctx[0U]) 
                                       | (1U & (__Vfunc_feed__35__ctx[0U] 
                                                ^ VL_REDXOR_8(__Vfunc_feed__35__data))));
                            }
                            if (__Vfunc_feed__35__frame_error) {
                                __Vfunc_feed__35__ctx[0xaU] 
                                    = (0x1ffffU & __Vfunc_feed__35__ctx[0xaU]);
                                __Vfunc_feed__35__ctx[0U] 
                                    = (0xfffffffeU 
                                       & __Vfunc_feed__35__ctx[0U]);
                            } else if ((0x29U > (0x3fU 
                                                 & (__Vfunc_feed__35__ctx[0xaU] 
                                                    >> 0x11U)))) {
                                __Vfunc_feed__35__ctx[0xaU] 
                                    = ((0x1ffffU & 
                                        __Vfunc_feed__35__ctx[0xaU]) 
                                       | (0x7e0000U 
                                          & (((IData)(1U) 
                                              + ((__Vfunc_feed__35__ctx[0xaU] 
                                                  << 0xfU) 
                                                 | (__Vfunc_feed__35__ctx[0xaU] 
                                                    >> 0x11U))) 
                                             << 0x11U)));
                            }
                            __Vfunc_feed__35__Vfuncout[0U] 
                                = __Vfunc_feed__35__ctx[0U];
                            __Vfunc_feed__35__Vfuncout[1U] 
                                = __Vfunc_feed__35__ctx[1U];
                            __Vfunc_feed__35__Vfuncout[2U] 
                                = __Vfunc_feed__35__ctx[2U];
                            __Vfunc_feed__35__Vfuncout[3U] 
                                = __Vfunc_feed__35__ctx[3U];
                            __Vfunc_feed__35__Vfuncout[4U] 
                                = __Vfunc_feed__35__ctx[4U];
                            __Vfunc_feed__35__Vfuncout[5U] 
                                = __Vfunc_feed__35__ctx[5U];
                            __Vfunc_feed__35__Vfuncout[6U] 
                                = __Vfunc_feed__35__ctx[6U];
                            __Vfunc_feed__35__Vfuncout[7U] 
                                = __Vfunc_feed__35__ctx[7U];
                            __Vfunc_feed__35__Vfuncout[8U] 
                                = __Vfunc_feed__35__ctx[8U];
                            __Vfunc_feed__35__Vfuncout[9U] 
                                = __Vfunc_feed__35__ctx[9U];
                            __Vfunc_feed__35__Vfuncout[0xaU] 
                                = __Vfunc_feed__35__ctx[0xaU];
                            __Vlabel2: ;
                        }
                        __Vfunc_feed__10__queue_add_frame[0U] 
                            = __Vfunc_feed__35__out_frame[0U];
                        __Vfunc_feed__10__queue_add_frame[1U] 
                            = __Vfunc_feed__35__out_frame[1U];
                        __Vfunc_feed__10__queue_add_frame[2U] 
                            = __Vfunc_feed__35__out_frame[2U];
                        __Vfunc_feed__10__queue_add_frame[3U] 
                            = __Vfunc_feed__35__out_frame[3U];
                        __Vfunc_feed__10__queue_add_frame[4U] 
                            = __Vfunc_feed__35__out_frame[4U];
                        __Vfunc_feed__10__queue_add_frame[5U] 
                            = __Vfunc_feed__35__out_frame[5U];
                        __Vfunc_feed__10__queue_add_frame[6U] 
                            = __Vfunc_feed__35__out_frame[6U];
                        __Vfunc_feed__10__queue_add_frame[7U] 
                            = __Vfunc_feed__35__out_frame[7U];
                        __Vfunc_feed__10__queue_add_frame[8U] 
                            = __Vfunc_feed__35__out_frame[8U];
                        __Vfunc_feed__10__queue_add_frame[9U] 
                            = __Vfunc_feed__35__out_frame[9U];
                        __Vfunc_feed__10__queue_add_frame[0xaU] 
                            = __Vfunc_feed__35__out_frame[0xaU];
                        __Vfunc_feed__10__ctx[5U] = 
                            ((0x1ffU & __Vfunc_feed__10__ctx[5U]) 
                             | (__Vfunc_feed__35__Vfuncout[0U] 
                                << 9U));
                        __Vfunc_feed__10__ctx[6U] = 
                            ((__Vfunc_feed__35__Vfuncout[0U] 
                              >> 0x17U) | (__Vfunc_feed__35__Vfuncout[1U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[7U] = 
                            ((__Vfunc_feed__35__Vfuncout[1U] 
                              >> 0x17U) | (__Vfunc_feed__35__Vfuncout[2U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[8U] = 
                            ((__Vfunc_feed__35__Vfuncout[2U] 
                              >> 0x17U) | (__Vfunc_feed__35__Vfuncout[3U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[9U] = 
                            ((__Vfunc_feed__35__Vfuncout[3U] 
                              >> 0x17U) | (__Vfunc_feed__35__Vfuncout[4U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[0xaU] 
                            = ((__Vfunc_feed__35__Vfuncout[4U] 
                                >> 0x17U) | (__Vfunc_feed__35__Vfuncout[5U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xbU] 
                            = ((__Vfunc_feed__35__Vfuncout[5U] 
                                >> 0x17U) | (__Vfunc_feed__35__Vfuncout[6U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xcU] 
                            = ((__Vfunc_feed__35__Vfuncout[6U] 
                                >> 0x17U) | (__Vfunc_feed__35__Vfuncout[7U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xdU] 
                            = ((__Vfunc_feed__35__Vfuncout[7U] 
                                >> 0x17U) | (__Vfunc_feed__35__Vfuncout[8U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xeU] 
                            = ((__Vfunc_feed__35__Vfuncout[8U] 
                                >> 0x17U) | (__Vfunc_feed__35__Vfuncout[9U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xfU] 
                            = ((__Vfunc_feed__35__Vfuncout[9U] 
                                >> 0x17U) | (__Vfunc_feed__35__Vfuncout[0xaU] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__10__ctx[0x16U]));
                    } else if ((6U == (IData)(__Vfunc_feed__10__data))) {
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0xa0000U | (0x61ffffU 
                                           & __Vfunc_feed__10__ctx[0x16U]));
                        __Vfunc_feed__10__ctx[4U] = 
                            (0x3002a80U | (0x7fU & 
                                           __Vfunc_feed__10__ctx[4U]));
                        __Vfunc_feed__10__ctx[5U] = 
                            (0x55U | (0xfffffe00U & 
                                      __Vfunc_feed__10__ctx[5U]));
                        __Vfunc_feed__40__data = (0xffU 
                                                  & (__Vfunc_feed__10__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__40__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__10__ctx[5U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__10__ctx[4U])) 
                                                  >> 7U)));
                        __Vfunc_feed__40__ctx = __Vfunc_feed__40__in_ctx;
                        if ((1U & (IData)((__Vfunc_feed__40__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__40__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__40__data))) {
                                    __Vfunc_feed__40__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__40__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__40__data)));
                                }
                                __Vfunc_feed__40__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__40__ctx);
                            } else {
                                __Vfunc_feed__40__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__40__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__40__data)) 
                                          << 8U));
                                __Vfunc_feed__40__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__40__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__40__ctx 
                                                  >> 0x20U)))) {
                            if ((6U == (IData)(__Vfunc_feed__40__data))) {
                                __Vfunc_feed__40__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__40__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__40__data)) 
                                          << 0x10U));
                                __Vfunc_feed__40__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__40__ctx));
                            } else {
                                __Vfunc_feed__40__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__40__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__40__data))) {
                            __Vfunc_feed__40__ctx = 
                                ((0xffffffULL & __Vfunc_feed__40__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__40__data)))) 
                                    << 0x18U));
                        }
                        __Vfunc_feed__40__Vfuncout 
                            = __Vfunc_feed__40__ctx;
                        __Vfunc_feed__10__ctx[4U] = 
                            ((0x7fU & __Vfunc_feed__10__ctx[4U]) 
                             | ((IData)(__Vfunc_feed__40__Vfuncout) 
                                << 7U));
                        __Vfunc_feed__10__ctx[5U] = 
                            ((0xfffffe00U & __Vfunc_feed__10__ctx[5U]) 
                             | (((IData)(__Vfunc_feed__40__Vfuncout) 
                                 >> 0x19U) | ((IData)(
                                                      (__Vfunc_feed__40__Vfuncout 
                                                       >> 0x20U)) 
                                              << 7U)));
                        __Vfunc_feed__41__data = __Vfunc_feed__10__data;
                        __Vfunc_feed__41__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__10__ctx[5U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__10__ctx[4U])) 
                                                  >> 7U)));
                        __Vfunc_feed__41__ctx = __Vfunc_feed__41__in_ctx;
                        __Vfunc_feed__41__out_frame 
                            = (IData)(__Vfunc_feed__41__ctx);
                        if ((1U & (IData)((__Vfunc_feed__41__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__41__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__41__data))) {
                                    __Vfunc_feed__41__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__41__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__41__data)));
                                    __Vfunc_feed__41__out_frame 
                                        = (IData)(__Vfunc_feed__41__ctx);
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
                        __Vfunc_feed__10__move_end_frame 
                            = __Vfunc_feed__41__out_frame;
                        __Vfunc_feed__10__ctx[4U] = 
                            ((0x7fU & __Vfunc_feed__10__ctx[4U]) 
                             | ((IData)(__Vfunc_feed__41__Vfuncout) 
                                << 7U));
                        __Vfunc_feed__10__ctx[5U] = 
                            ((0xfffffe00U & __Vfunc_feed__10__ctx[5U]) 
                             | (((IData)(__Vfunc_feed__41__Vfuncout) 
                                 >> 0x19U) | ((IData)(
                                                      (__Vfunc_feed__41__Vfuncout 
                                                       >> 0x20U)) 
                                              << 7U)));
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__10__ctx[0x16U]));
                    } else if ((2U == (IData)(__Vfunc_feed__10__data))) {
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0xc0000U | (0x61ffffU 
                                           & __Vfunc_feed__10__ctx[0x16U]));
                        __Vfunc_feed__10__ctx[3U] = 
                            (0x40400aa0U | (0x1fU & 
                                            __Vfunc_feed__10__ctx[3U]));
                        __Vfunc_feed__10__ctx[4U] = 
                            (0x15U | (0xffffff80U & 
                                      __Vfunc_feed__10__ctx[4U]));
                        __Vfunc_feed__44__data = (0xffU 
                                                  & (__Vfunc_feed__10__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__44__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__10__ctx[4U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__10__ctx[3U])) 
                                                  >> 5U)));
                        __Vfunc_feed__44__ctx = __Vfunc_feed__44__in_ctx;
                        if ((1U & (IData)((__Vfunc_feed__44__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__44__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__44__data))) {
                                    __Vfunc_feed__44__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__44__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__44__data)));
                                }
                                __Vfunc_feed__44__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__44__ctx);
                            } else {
                                __Vfunc_feed__44__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__44__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__44__data)) 
                                          << 8U));
                                __Vfunc_feed__44__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__44__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__44__ctx 
                                                  >> 0x20U)))) {
                            if ((2U == (IData)(__Vfunc_feed__44__data))) {
                                __Vfunc_feed__44__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__44__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__44__data)) 
                                          << 0x10U));
                                __Vfunc_feed__44__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__44__ctx));
                            } else {
                                __Vfunc_feed__44__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__44__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__44__data))) {
                            __Vfunc_feed__44__ctx = 
                                ((0xffffffULL & __Vfunc_feed__44__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__44__data)))) 
                                    << 0x18U));
                        }
                        __Vfunc_feed__44__Vfuncout 
                            = __Vfunc_feed__44__ctx;
                        __Vfunc_feed__10__ctx[3U] = 
                            ((0x1fU & __Vfunc_feed__10__ctx[3U]) 
                             | ((IData)(__Vfunc_feed__44__Vfuncout) 
                                << 5U));
                        __Vfunc_feed__10__ctx[4U] = 
                            ((0xffffff80U & __Vfunc_feed__10__ctx[4U]) 
                             | (((IData)(__Vfunc_feed__44__Vfuncout) 
                                 >> 0x1bU) | ((IData)(
                                                      (__Vfunc_feed__44__Vfuncout 
                                                       >> 0x20U)) 
                                              << 5U)));
                        __Vfunc_feed__45__data = __Vfunc_feed__10__data;
                        __Vfunc_feed__45__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__10__ctx[4U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__10__ctx[3U])) 
                                                  >> 5U)));
                        __Vfunc_feed__45__ctx = __Vfunc_feed__45__in_ctx;
                        __Vfunc_feed__45__out_frame 
                            = (IData)(__Vfunc_feed__45__ctx);
                        if ((1U & (IData)((__Vfunc_feed__45__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__45__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__45__data))) {
                                    __Vfunc_feed__45__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__45__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__45__data)));
                                    __Vfunc_feed__45__out_frame 
                                        = (IData)(__Vfunc_feed__45__ctx);
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
                        __Vfunc_feed__10__queue_status_frame 
                            = __Vfunc_feed__45__out_frame;
                        __Vfunc_feed__10__ctx[3U] = 
                            ((0x1fU & __Vfunc_feed__10__ctx[3U]) 
                             | ((IData)(__Vfunc_feed__45__Vfuncout) 
                                << 5U));
                        __Vfunc_feed__10__ctx[4U] = 
                            ((0xffffff80U & __Vfunc_feed__10__ctx[4U]) 
                             | (((IData)(__Vfunc_feed__45__Vfuncout) 
                                 >> 0x1bU) | ((IData)(
                                                      (__Vfunc_feed__45__Vfuncout 
                                                       >> 0x20U)) 
                                              << 5U)));
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__10__ctx[0x16U]));
                    } else if ((0x20U == (IData)(__Vfunc_feed__10__data))) {
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0xe0000U | (0x61ffffU 
                                           & __Vfunc_feed__10__ctx[0x16U]));
                        __Vfunc_feed__10__ctx[2U] = 
                            (0x510002a8U | (7U & __Vfunc_feed__10__ctx[2U]));
                        __Vfunc_feed__10__ctx[3U] = 
                            (5U | (0xffffffe0U & __Vfunc_feed__10__ctx[3U]));
                        __Vfunc_feed__48__data = (0xffU 
                                                  & (__Vfunc_feed__10__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__48__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__10__ctx[3U])) 
                                                << 0x1dU) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__10__ctx[2U])) 
                                                  >> 3U)));
                        __Vfunc_feed__48__ctx = __Vfunc_feed__48__in_ctx;
                        if ((1U & (IData)((__Vfunc_feed__48__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__48__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__48__data))) {
                                    __Vfunc_feed__48__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__48__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__48__data)));
                                }
                                __Vfunc_feed__48__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__48__ctx);
                            } else {
                                __Vfunc_feed__48__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__48__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__48__data)) 
                                          << 8U));
                                __Vfunc_feed__48__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__48__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__48__ctx 
                                                  >> 0x20U)))) {
                            if ((0x20U == (IData)(__Vfunc_feed__48__data))) {
                                __Vfunc_feed__48__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__48__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__48__data)) 
                                          << 0x10U));
                                __Vfunc_feed__48__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__48__ctx));
                            } else {
                                __Vfunc_feed__48__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__48__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__48__data))) {
                            __Vfunc_feed__48__ctx = 
                                ((0xffffffULL & __Vfunc_feed__48__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__48__data)))) 
                                    << 0x18U));
                        }
                        __Vfunc_feed__48__Vfuncout 
                            = __Vfunc_feed__48__ctx;
                        __Vfunc_feed__10__ctx[2U] = 
                            ((7U & __Vfunc_feed__10__ctx[2U]) 
                             | ((IData)(__Vfunc_feed__48__Vfuncout) 
                                << 3U));
                        __Vfunc_feed__10__ctx[3U] = 
                            ((0xffffffe0U & __Vfunc_feed__10__ctx[3U]) 
                             | (((IData)(__Vfunc_feed__48__Vfuncout) 
                                 >> 0x1dU) | ((IData)(
                                                      (__Vfunc_feed__48__Vfuncout 
                                                       >> 0x20U)) 
                                              << 3U)));
                        __Vfunc_feed__49__data = __Vfunc_feed__10__data;
                        __Vfunc_feed__49__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__10__ctx[3U])) 
                                                << 0x1dU) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__10__ctx[2U])) 
                                                  >> 3U)));
                        __Vfunc_feed__49__ctx = __Vfunc_feed__49__in_ctx;
                        __Vfunc_feed__49__out_frame 
                            = (IData)(__Vfunc_feed__49__ctx);
                        if ((1U & (IData)((__Vfunc_feed__49__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__49__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__49__data))) {
                                    __Vfunc_feed__49__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__49__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__49__data)));
                                    __Vfunc_feed__49__out_frame 
                                        = (IData)(__Vfunc_feed__49__ctx);
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
                        __Vfunc_feed__10__fpga_status_frame 
                            = __Vfunc_feed__49__out_frame;
                        __Vfunc_feed__10__ctx[2U] = 
                            ((7U & __Vfunc_feed__10__ctx[2U]) 
                             | ((IData)(__Vfunc_feed__49__Vfuncout) 
                                << 3U));
                        __Vfunc_feed__10__ctx[3U] = 
                            ((0xffffffe0U & __Vfunc_feed__10__ctx[3U]) 
                             | (((IData)(__Vfunc_feed__49__Vfuncout) 
                                 >> 0x1dU) | ((IData)(
                                                      (__Vfunc_feed__49__Vfuncout 
                                                       >> 0x20U)) 
                                              << 3U)));
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__10__ctx[0x16U]));
                    } else {
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0x100000U | (0x61ffffU 
                                            & __Vfunc_feed__10__ctx[0x16U]));
                        __Vfunc_feed__10__ctx[0U] = 0x5500U;
                        __Vfunc_feed__10__ctx[1U] = 0xaa070000U;
                        __Vfunc_feed__10__ctx[2U] = 
                            (0xfffffff8U & __Vfunc_feed__10__ctx[2U]);
                        __Vfunc_feed__52__data = (0xffU 
                                                  & (__Vfunc_feed__10__ctx[0x16U] 
                                                     >> 9U));
                        __Vfunc_feed__52__in_ctx[0U] 
                            = __Vfunc_feed__10__ctx[0U];
                        __Vfunc_feed__52__in_ctx[1U] 
                            = __Vfunc_feed__10__ctx[1U];
                        __Vfunc_feed__52__in_ctx[2U] 
                            = (7U & __Vfunc_feed__10__ctx[2U]);
                        __Vfunc_feed__52__ctx[0U] = 
                            __Vfunc_feed__52__in_ctx[0U];
                        __Vfunc_feed__52__ctx[1U] = 
                            __Vfunc_feed__52__in_ctx[1U];
                        __Vfunc_feed__52__ctx[2U] = 
                            __Vfunc_feed__52__in_ctx[2U];
                        if ((4U & __Vfunc_feed__52__ctx[2U])) {
                            if ((2U & __Vfunc_feed__52__ctx[2U])) {
                                if ((1U & __Vfunc_feed__52__ctx[2U])) {
                                    __Vfunc_feed__52__ctx[2U] = 0U;
                                } else {
                                    if ((0x55U == (IData)(__Vfunc_feed__52__data))) {
                                        __Vfunc_feed__52__ctx[0U] 
                                            = ((0xffff00ffU 
                                                & __Vfunc_feed__52__ctx[0U]) 
                                               | ((IData)(__Vfunc_feed__52__data) 
                                                  << 8U));
                                    }
                                    __Vfunc_feed__52__ctx[2U] = 0U;
                                }
                            } else if ((1U & __Vfunc_feed__52__ctx[2U])) {
                                __Vfunc_feed__52__ctx[0U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__52__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__52__data) 
                                          << 0x10U));
                                __Vfunc_feed__52__ctx[2U] 
                                    = (((IData)(__Vfunc_feed__52__data) 
                                        == (0xffU & 
                                            __Vfunc_feed__52__ctx[0U]))
                                        ? 6U : 0U);
                            } else {
                                __Vfunc_feed__52__ctx[0U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__52__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__52__data) 
                                          << 0x18U));
                                __Vfunc_feed__52__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__52__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__52__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__52__data))));
                                __Vfunc_feed__52__ctx[2U] = 5U;
                            }
                        } else if ((2U & __Vfunc_feed__52__ctx[2U])) {
                            if ((1U & __Vfunc_feed__52__ctx[2U])) {
                                __Vfunc_feed__52__ctx[1U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__52__ctx[1U]) 
                                       | (IData)(__Vfunc_feed__52__data));
                                __Vfunc_feed__52__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__52__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__52__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__52__data))));
                                __Vfunc_feed__52__ctx[2U] = 4U;
                            } else {
                                __Vfunc_feed__52__ctx[1U] 
                                    = ((0xffff00ffU 
                                        & __Vfunc_feed__52__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__52__data) 
                                          << 8U));
                                __Vfunc_feed__52__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__52__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__52__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__52__data))));
                                __Vfunc_feed__52__ctx[2U] = 3U;
                            }
                        } else if ((1U & __Vfunc_feed__52__ctx[2U])) {
                            if ((7U == (IData)(__Vfunc_feed__52__data))) {
                                __Vfunc_feed__52__ctx[1U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__52__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__52__data) 
                                          << 0x10U));
                                __Vfunc_feed__52__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__52__ctx[0U]) 
                                       | (IData)(__Vfunc_feed__52__data));
                                __Vfunc_feed__52__ctx[2U] = 2U;
                            } else {
                                __Vfunc_feed__52__ctx[2U] = 0U;
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__52__data))) {
                            __Vfunc_feed__52__ctx[1U] 
                                = ((0xffffffU & __Vfunc_feed__52__ctx[1U]) 
                                   | ((IData)(__Vfunc_feed__52__data) 
                                      << 0x18U));
                            __Vfunc_feed__52__ctx[2U] 
                                = (7U & (1U | ((IData)(__Vfunc_feed__52__data) 
                                               >> 8U)));
                            __Vfunc_feed__52__ctx[0U] 
                                = (0xffffff00U & __Vfunc_feed__52__ctx[0U]);
                        }
                        __Vfunc_feed__52__Vfuncout[0U] 
                            = __Vfunc_feed__52__ctx[0U];
                        __Vfunc_feed__52__Vfuncout[1U] 
                            = __Vfunc_feed__52__ctx[1U];
                        __Vfunc_feed__52__Vfuncout[2U] 
                            = __Vfunc_feed__52__ctx[2U];
                        __Vfunc_feed__10__ctx[0U] = 
                            __Vfunc_feed__52__Vfuncout[0U];
                        __Vfunc_feed__10__ctx[1U] = 
                            __Vfunc_feed__52__Vfuncout[1U];
                        __Vfunc_feed__10__ctx[2U] = 
                            ((0xfffffff8U & __Vfunc_feed__10__ctx[2U]) 
                             | __Vfunc_feed__52__Vfuncout[2U]);
                        __Vfunc_feed__53__data = __Vfunc_feed__10__data;
                        __Vfunc_feed__53__in_ctx[0U] 
                            = __Vfunc_feed__10__ctx[0U];
                        __Vfunc_feed__53__in_ctx[1U] 
                            = __Vfunc_feed__10__ctx[1U];
                        __Vfunc_feed__53__in_ctx[2U] 
                            = (7U & __Vfunc_feed__10__ctx[2U]);
                        __Vfunc_feed__53__ctx[0U] = 
                            __Vfunc_feed__53__in_ctx[0U];
                        __Vfunc_feed__53__ctx[1U] = 
                            __Vfunc_feed__53__in_ctx[1U];
                        __Vfunc_feed__53__ctx[2U] = 
                            __Vfunc_feed__53__in_ctx[2U];
                        __Vfunc_feed__53__out_frame 
                            = (0xffffffffffffffULL 
                               & (((QData)((IData)(
                                                   __Vfunc_feed__53__ctx[1U])) 
                                   << 0x18U) | ((QData)((IData)(
                                                                __Vfunc_feed__53__ctx[0U])) 
                                                >> 8U)));
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
                                        __Vfunc_feed__53__out_frame 
                                            = (0xffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   __Vfunc_feed__53__ctx[1U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     __Vfunc_feed__53__ctx[0U])) 
                                                     >> 8U)));
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
                        __Vfunc_feed__10__led_ctrl_frame 
                            = __Vfunc_feed__53__out_frame;
                        __Vfunc_feed__10__ctx[0U] = 
                            __Vfunc_feed__53__Vfuncout[0U];
                        __Vfunc_feed__10__ctx[1U] = 
                            __Vfunc_feed__53__Vfuncout[1U];
                        __Vfunc_feed__10__ctx[2U] = 
                            ((0xfffffff8U & __Vfunc_feed__10__ctx[2U]) 
                             | __Vfunc_feed__53__Vfuncout[2U]);
                        __Vfunc_feed__10__ctx[0x16U] 
                            = (0x400000U | (0x1fffffU 
                                            & __Vfunc_feed__10__ctx[0x16U]));
                    }
                } else {
                    __Vfunc_feed__10__frame_error = 1U;
                    __Vfunc_feed__10__ctx[0x16U] = 
                        (0x1ffffU & __Vfunc_feed__10__ctx[0x16U]);
                }
            } else if ((2U == (3U & (__Vfunc_feed__10__ctx[0x16U] 
                                     >> 0x15U)))) {
                if ((0x100000U & __Vfunc_feed__10__ctx[0x16U])) {
                    if ((0x80000U & __Vfunc_feed__10__ctx[0x16U])) {
                        __Vfunc_feed__10__frame_error = 1U;
                    } else if ((0x40000U & __Vfunc_feed__10__ctx[0x16U])) {
                        __Vfunc_feed__10__frame_error = 1U;
                    } else if ((0x20000U & __Vfunc_feed__10__ctx[0x16U])) {
                        __Vfunc_feed__10__frame_error = 1U;
                    } else {
                        __Vfunc_feed__54__data = __Vfunc_feed__10__data;
                        __Vfunc_feed__54__in_ctx[0U] 
                            = __Vfunc_feed__10__ctx[0U];
                        __Vfunc_feed__54__in_ctx[1U] 
                            = __Vfunc_feed__10__ctx[1U];
                        __Vfunc_feed__54__in_ctx[2U] 
                            = (7U & __Vfunc_feed__10__ctx[2U]);
                        __Vfunc_feed__54__ctx[0U] = 
                            __Vfunc_feed__54__in_ctx[0U];
                        __Vfunc_feed__54__ctx[1U] = 
                            __Vfunc_feed__54__in_ctx[1U];
                        __Vfunc_feed__54__ctx[2U] = 
                            __Vfunc_feed__54__in_ctx[2U];
                        __Vfunc_feed__54__frame_valid = 0U;
                        __Vfunc_feed__54__frame_error = 0U;
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
                                    __Vfunc_feed__54__frame_error = 1U;
                                    __Vfunc_feed__54__ctx[2U] = 0U;
                                } else {
                                    if ((0x55U == (IData)(__Vfunc_feed__54__data))) {
                                        __Vfunc_feed__54__ctx[0U] 
                                            = ((0xffff00ffU 
                                                & __Vfunc_feed__54__ctx[0U]) 
                                               | ((IData)(__Vfunc_feed__54__data) 
                                                  << 8U));
                                        __Vfunc_feed__54__frame_valid = 1U;
                                        __Vfunc_feed__54__out_frame 
                                            = (0xffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   __Vfunc_feed__54__ctx[1U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     __Vfunc_feed__54__ctx[0U])) 
                                                     >> 8U)));
                                    } else {
                                        __Vfunc_feed__54__frame_error = 1U;
                                    }
                                    __Vfunc_feed__54__ctx[2U] = 0U;
                                }
                            } else if ((1U & __Vfunc_feed__54__ctx[2U])) {
                                __Vfunc_feed__54__ctx[0U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__54__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__54__data) 
                                          << 0x10U));
                                if (((IData)(__Vfunc_feed__54__data) 
                                     == (0xffU & __Vfunc_feed__54__ctx[0U]))) {
                                    __Vfunc_feed__54__ctx[2U] = 6U;
                                } else {
                                    __Vfunc_feed__54__frame_error = 1U;
                                    __Vfunc_feed__54__ctx[2U] = 0U;
                                }
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
                                __Vfunc_feed__54__frame_error = 1U;
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
                        } else {
                            __Vfunc_feed__54__frame_error = 1U;
                        }
                        __Vfunc_feed__54__Vfuncout[0U] 
                            = __Vfunc_feed__54__ctx[0U];
                        __Vfunc_feed__54__Vfuncout[1U] 
                            = __Vfunc_feed__54__ctx[1U];
                        __Vfunc_feed__54__Vfuncout[2U] 
                            = __Vfunc_feed__54__ctx[2U];
                        __Vfunc_feed__10__frame_valid 
                            = __Vfunc_feed__54__frame_valid;
                        __Vfunc_feed__10__frame_error 
                            = __Vfunc_feed__54__frame_error;
                        __Vfunc_feed__10__led_ctrl_frame 
                            = __Vfunc_feed__54__out_frame;
                        __Vfunc_feed__10__ctx[0U] = 
                            __Vfunc_feed__54__Vfuncout[0U];
                        __Vfunc_feed__10__ctx[1U] = 
                            __Vfunc_feed__54__Vfuncout[1U];
                        __Vfunc_feed__10__ctx[2U] = 
                            ((0xfffffff8U & __Vfunc_feed__10__ctx[2U]) 
                             | __Vfunc_feed__54__Vfuncout[2U]);
                        __Vfunc_feed__10__out_msgType = 7U;
                    }
                } else if ((0x80000U & __Vfunc_feed__10__ctx[0x16U])) {
                    if ((0x40000U & __Vfunc_feed__10__ctx[0x16U])) {
                        if ((0x20000U & __Vfunc_feed__10__ctx[0x16U])) {
                            __Vfunc_feed__55__data 
                                = __Vfunc_feed__10__data;
                            __Vfunc_feed__55__in_ctx 
                                = (0x3ffffffffULL & 
                                   (((QData)((IData)(
                                                     __Vfunc_feed__10__ctx[3U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  __Vfunc_feed__10__ctx[2U])) 
                                                  >> 3U)));
                            __Vfunc_feed__55__ctx = __Vfunc_feed__55__in_ctx;
                            __Vfunc_feed__55__frame_valid = 0U;
                            __Vfunc_feed__55__frame_error = 0U;
                            __Vfunc_feed__55__out_frame 
                                = (IData)(__Vfunc_feed__55__ctx);
                            if ((1U & (IData)((__Vfunc_feed__55__ctx 
                                               >> 0x21U)))) {
                                if ((1U & (IData)((__Vfunc_feed__55__ctx 
                                                   >> 0x20U)))) {
                                    if ((0x55U == (IData)(__Vfunc_feed__55__data))) {
                                        __Vfunc_feed__55__ctx 
                                            = ((0x3ffffff00ULL 
                                                & __Vfunc_feed__55__ctx) 
                                               | (IData)((IData)(__Vfunc_feed__55__data)));
                                        __Vfunc_feed__55__frame_valid = 1U;
                                        __Vfunc_feed__55__out_frame 
                                            = (IData)(__Vfunc_feed__55__ctx);
                                    } else {
                                        __Vfunc_feed__55__frame_error = 1U;
                                    }
                                    __Vfunc_feed__55__ctx 
                                        = (0xffffffffULL 
                                           & __Vfunc_feed__55__ctx);
                                } else {
                                    __Vfunc_feed__55__ctx 
                                        = ((0x3ffff00ffULL 
                                            & __Vfunc_feed__55__ctx) 
                                           | ((QData)((IData)(__Vfunc_feed__55__data)) 
                                              << 8U));
                                    __Vfunc_feed__55__ctx 
                                        = (0x300000000ULL 
                                           | __Vfunc_feed__55__ctx);
                                }
                            } else if ((1U & (IData)(
                                                     (__Vfunc_feed__55__ctx 
                                                      >> 0x20U)))) {
                                if ((0x20U == (IData)(__Vfunc_feed__55__data))) {
                                    __Vfunc_feed__55__ctx 
                                        = ((0x3ff00ffffULL 
                                            & __Vfunc_feed__55__ctx) 
                                           | ((QData)((IData)(__Vfunc_feed__55__data)) 
                                              << 0x10U));
                                    __Vfunc_feed__55__ctx 
                                        = (0x200000000ULL 
                                           | (0xffffffffULL 
                                              & __Vfunc_feed__55__ctx));
                                } else {
                                    __Vfunc_feed__55__frame_error = 1U;
                                    __Vfunc_feed__55__ctx 
                                        = (0xffffffffULL 
                                           & __Vfunc_feed__55__ctx);
                                }
                            } else if ((0xaaU == (IData)(__Vfunc_feed__55__data))) {
                                __Vfunc_feed__55__ctx 
                                    = ((0xffffffULL 
                                        & __Vfunc_feed__55__ctx) 
                                       | ((QData)((IData)(
                                                          (0x100U 
                                                           | (IData)(__Vfunc_feed__55__data)))) 
                                          << 0x18U));
                            } else {
                                __Vfunc_feed__55__frame_error = 1U;
                            }
                            __Vfunc_feed__55__Vfuncout 
                                = __Vfunc_feed__55__ctx;
                            __Vfunc_feed__10__frame_valid 
                                = __Vfunc_feed__55__frame_valid;
                            __Vfunc_feed__10__frame_error 
                                = __Vfunc_feed__55__frame_error;
                            __Vfunc_feed__10__fpga_status_frame 
                                = __Vfunc_feed__55__out_frame;
                            __Vfunc_feed__10__ctx[2U] 
                                = ((7U & __Vfunc_feed__10__ctx[2U]) 
                                   | ((IData)(__Vfunc_feed__55__Vfuncout) 
                                      << 3U));
                            __Vfunc_feed__10__ctx[3U] 
                                = ((0xffffffe0U & __Vfunc_feed__10__ctx[3U]) 
                                   | (((IData)(__Vfunc_feed__55__Vfuncout) 
                                       >> 0x1dU) | 
                                      ((IData)((__Vfunc_feed__55__Vfuncout 
                                                >> 0x20U)) 
                                       << 3U)));
                            __Vfunc_feed__10__out_msgType = 0x20U;
                        } else {
                            __Vfunc_feed__56__data 
                                = __Vfunc_feed__10__data;
                            __Vfunc_feed__56__in_ctx 
                                = (0x3ffffffffULL & 
                                   (((QData)((IData)(
                                                     __Vfunc_feed__10__ctx[4U])) 
                                     << 0x1bU) | ((QData)((IData)(
                                                                  __Vfunc_feed__10__ctx[3U])) 
                                                  >> 5U)));
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
                                if ((2U == (IData)(__Vfunc_feed__56__data))) {
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
                            __Vfunc_feed__10__frame_valid 
                                = __Vfunc_feed__56__frame_valid;
                            __Vfunc_feed__10__frame_error 
                                = __Vfunc_feed__56__frame_error;
                            __Vfunc_feed__10__queue_status_frame 
                                = __Vfunc_feed__56__out_frame;
                            __Vfunc_feed__10__ctx[3U] 
                                = ((0x1fU & __Vfunc_feed__10__ctx[3U]) 
                                   | ((IData)(__Vfunc_feed__56__Vfuncout) 
                                      << 5U));
                            __Vfunc_feed__10__ctx[4U] 
                                = ((0xffffff80U & __Vfunc_feed__10__ctx[4U]) 
                                   | (((IData)(__Vfunc_feed__56__Vfuncout) 
                                       >> 0x1bU) | 
                                      ((IData)((__Vfunc_feed__56__Vfuncout 
                                                >> 0x20U)) 
                                       << 5U)));
                            __Vfunc_feed__10__out_msgType = 2U;
                        }
                    } else if ((0x20000U & __Vfunc_feed__10__ctx[0x16U])) {
                        __Vfunc_feed__57__data = __Vfunc_feed__10__data;
                        __Vfunc_feed__57__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__10__ctx[5U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__10__ctx[4U])) 
                                                  >> 7U)));
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
                        } else if ((1U & (IData)((__Vfunc_feed__57__ctx 
                                                  >> 0x20U)))) {
                            if ((6U == (IData)(__Vfunc_feed__57__data))) {
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
                            __Vfunc_feed__57__ctx = 
                                ((0xffffffULL & __Vfunc_feed__57__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__57__data)))) 
                                    << 0x18U));
                        } else {
                            __Vfunc_feed__57__frame_error = 1U;
                        }
                        __Vfunc_feed__57__Vfuncout 
                            = __Vfunc_feed__57__ctx;
                        __Vfunc_feed__10__frame_valid 
                            = __Vfunc_feed__57__frame_valid;
                        __Vfunc_feed__10__frame_error 
                            = __Vfunc_feed__57__frame_error;
                        __Vfunc_feed__10__move_end_frame 
                            = __Vfunc_feed__57__out_frame;
                        __Vfunc_feed__10__ctx[4U] = 
                            ((0x7fU & __Vfunc_feed__10__ctx[4U]) 
                             | ((IData)(__Vfunc_feed__57__Vfuncout) 
                                << 7U));
                        __Vfunc_feed__10__ctx[5U] = 
                            ((0xfffffe00U & __Vfunc_feed__10__ctx[5U]) 
                             | (((IData)(__Vfunc_feed__57__Vfuncout) 
                                 >> 0x19U) | ((IData)(
                                                      (__Vfunc_feed__57__Vfuncout 
                                                       >> 0x20U)) 
                                              << 7U)));
                        __Vfunc_feed__10__out_msgType = 6U;
                    } else {
                        __Vfunc_feed__58__data = __Vfunc_feed__10__data;
                        __Vfunc_feed__58__in_ctx[0U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[0U] 
                               & ((__Vfunc_feed__10__ctx[6U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[5U] 
                                                >> 9U)));
                        __Vfunc_feed__58__in_ctx[1U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[1U] 
                               & ((__Vfunc_feed__10__ctx[7U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[6U] 
                                                >> 9U)));
                        __Vfunc_feed__58__in_ctx[2U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[2U] 
                               & ((__Vfunc_feed__10__ctx[8U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[7U] 
                                                >> 9U)));
                        __Vfunc_feed__58__in_ctx[3U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[3U] 
                               & ((__Vfunc_feed__10__ctx[9U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[8U] 
                                                >> 9U)));
                        __Vfunc_feed__58__in_ctx[4U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[4U] 
                               & ((__Vfunc_feed__10__ctx[0xaU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[9U] 
                                                >> 9U)));
                        __Vfunc_feed__58__in_ctx[5U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[5U] 
                               & ((__Vfunc_feed__10__ctx[0xbU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xaU] 
                                                >> 9U)));
                        __Vfunc_feed__58__in_ctx[6U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[6U] 
                               & ((__Vfunc_feed__10__ctx[0xcU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xbU] 
                                                >> 9U)));
                        __Vfunc_feed__58__in_ctx[7U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[7U] 
                               & ((__Vfunc_feed__10__ctx[0xdU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xcU] 
                                                >> 9U)));
                        __Vfunc_feed__58__in_ctx[8U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[8U] 
                               & ((__Vfunc_feed__10__ctx[0xeU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xdU] 
                                                >> 9U)));
                        __Vfunc_feed__58__in_ctx[9U] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[9U] 
                               & ((__Vfunc_feed__10__ctx[0xfU] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xeU] 
                                                >> 9U)));
                        __Vfunc_feed__58__in_ctx[0xaU] 
                            = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcbcede4_0[0xaU] 
                               & ((__Vfunc_feed__10__ctx[0x10U] 
                                   << 0x17U) | (__Vfunc_feed__10__ctx[0xfU] 
                                                >> 9U)));
                        {
                            __Vfunc_feed__58__ctx[0U] 
                                = __Vfunc_feed__58__in_ctx[0U];
                            __Vfunc_feed__58__ctx[1U] 
                                = __Vfunc_feed__58__in_ctx[1U];
                            __Vfunc_feed__58__ctx[2U] 
                                = __Vfunc_feed__58__in_ctx[2U];
                            __Vfunc_feed__58__ctx[3U] 
                                = __Vfunc_feed__58__in_ctx[3U];
                            __Vfunc_feed__58__ctx[4U] 
                                = __Vfunc_feed__58__in_ctx[4U];
                            __Vfunc_feed__58__ctx[5U] 
                                = __Vfunc_feed__58__in_ctx[5U];
                            __Vfunc_feed__58__ctx[6U] 
                                = __Vfunc_feed__58__in_ctx[6U];
                            __Vfunc_feed__58__ctx[7U] 
                                = __Vfunc_feed__58__in_ctx[7U];
                            __Vfunc_feed__58__ctx[8U] 
                                = __Vfunc_feed__58__in_ctx[8U];
                            __Vfunc_feed__58__ctx[9U] 
                                = __Vfunc_feed__58__in_ctx[9U];
                            __Vfunc_feed__58__ctx[0xaU] 
                                = __Vfunc_feed__58__in_ctx[0xaU];
                            __Vfunc_feed__58__frame_valid = 0U;
                            __Vfunc_feed__58__frame_error = 0U;
                            __Vfunc_make_default__59__r[0U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[0U];
                            __Vfunc_make_default__59__r[1U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[1U];
                            __Vfunc_make_default__59__r[2U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[2U];
                            __Vfunc_make_default__59__r[3U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[3U];
                            __Vfunc_make_default__59__r[4U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[4U];
                            __Vfunc_make_default__59__r[5U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[5U];
                            __Vfunc_make_default__59__r[6U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[6U];
                            __Vfunc_make_default__59__r[7U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[7U];
                            __Vfunc_make_default__59__r[8U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[8U];
                            __Vfunc_make_default__59__r[9U] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[9U];
                            __Vfunc_make_default__59__r[0xaU] 
                                = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[0xaU];
                            __Vfunc_make_default__59__Vfuncout[0U] 
                                = __Vfunc_make_default__59__r[0U];
                            __Vfunc_make_default__59__Vfuncout[1U] 
                                = __Vfunc_make_default__59__r[1U];
                            __Vfunc_make_default__59__Vfuncout[2U] 
                                = __Vfunc_make_default__59__r[2U];
                            __Vfunc_make_default__59__Vfuncout[3U] 
                                = __Vfunc_make_default__59__r[3U];
                            __Vfunc_make_default__59__Vfuncout[4U] 
                                = __Vfunc_make_default__59__r[4U];
                            __Vfunc_make_default__59__Vfuncout[5U] 
                                = __Vfunc_make_default__59__r[5U];
                            __Vfunc_make_default__59__Vfuncout[6U] 
                                = __Vfunc_make_default__59__r[6U];
                            __Vfunc_make_default__59__Vfuncout[7U] 
                                = __Vfunc_make_default__59__r[7U];
                            __Vfunc_make_default__59__Vfuncout[8U] 
                                = __Vfunc_make_default__59__r[8U];
                            __Vfunc_make_default__59__Vfuncout[9U] 
                                = __Vfunc_make_default__59__r[9U];
                            __Vfunc_make_default__59__Vfuncout[0xaU] 
                                = __Vfunc_make_default__59__r[0xaU];
                            __Vfunc_feed__58__out_frame[0U] 
                                = __Vfunc_make_default__59__Vfuncout[0U];
                            __Vfunc_feed__58__out_frame[1U] 
                                = __Vfunc_make_default__59__Vfuncout[1U];
                            __Vfunc_feed__58__out_frame[2U] 
                                = __Vfunc_make_default__59__Vfuncout[2U];
                            __Vfunc_feed__58__out_frame[3U] 
                                = __Vfunc_make_default__59__Vfuncout[3U];
                            __Vfunc_feed__58__out_frame[4U] 
                                = __Vfunc_make_default__59__Vfuncout[4U];
                            __Vfunc_feed__58__out_frame[5U] 
                                = __Vfunc_make_default__59__Vfuncout[5U];
                            __Vfunc_feed__58__out_frame[6U] 
                                = __Vfunc_make_default__59__Vfuncout[6U];
                            __Vfunc_feed__58__out_frame[7U] 
                                = __Vfunc_make_default__59__Vfuncout[7U];
                            __Vfunc_feed__58__out_frame[8U] 
                                = __Vfunc_make_default__59__Vfuncout[8U];
                            __Vfunc_feed__58__out_frame[9U] 
                                = __Vfunc_make_default__59__Vfuncout[9U];
                            __Vfunc_feed__58__out_frame[0xaU] 
                                = __Vfunc_make_default__59__Vfuncout[0xaU];
                            vlSymsp->TOP__move_queue_add_req_parser_pkg.__Vlvbound_heeac623e__0 
                                = __Vfunc_feed__58__data;
                            if (VL_LIKELY((0x156U >= 
                                           ((IData)(1U) 
                                            + (0x1ffU 
                                               & (((IData)(0x14fU) 
                                                   - 
                                                   VL_SHIFTL_III(9,32,32, 
                                                                 (0x3fU 
                                                                  & (__Vfunc_feed__58__ctx[0xaU] 
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
                                                                     & (__Vfunc_feed__58__ctx[0xaU] 
                                                                        >> 0x11U)), 3U)) 
                                                     - (IData)(7U)))), __Vfunc_feed__58__ctx, vlSymsp->TOP__move_queue_add_req_parser_pkg.__Vlvbound_heeac623e__0);
                            }
                            if ((0U == (0x3fU & (__Vfunc_feed__58__ctx[0xaU] 
                                                 >> 0x11U)))) {
                                if ((0xaaU != (IData)(__Vfunc_feed__58__data))) {
                                    __Vfunc_feed__58__frame_error = 1U;
                                }
                            } else if ((1U == (0x3fU 
                                               & (__Vfunc_feed__58__ctx[0xaU] 
                                                  >> 0x11U)))) {
                                if ((1U == (IData)(__Vfunc_feed__58__data))) {
                                    __Vfunc_feed__58__ctx[0U] 
                                        = ((0xfffffffeU 
                                            & __Vfunc_feed__58__ctx[0U]) 
                                           | (1U & 
                                              VL_REDXOR_8(__Vfunc_feed__58__data)));
                                } else {
                                    __Vfunc_feed__58__frame_error = 1U;
                                    __Vfunc_feed__58__ctx[0xaU] 
                                        = (0x1ffffU 
                                           & __Vfunc_feed__58__ctx[0xaU]);
                                    __Vfunc_feed__58__Vfuncout[0U] 
                                        = __Vfunc_feed__58__ctx[0U];
                                    __Vfunc_feed__58__Vfuncout[1U] 
                                        = __Vfunc_feed__58__ctx[1U];
                                    __Vfunc_feed__58__Vfuncout[2U] 
                                        = __Vfunc_feed__58__ctx[2U];
                                    __Vfunc_feed__58__Vfuncout[3U] 
                                        = __Vfunc_feed__58__ctx[3U];
                                    __Vfunc_feed__58__Vfuncout[4U] 
                                        = __Vfunc_feed__58__ctx[4U];
                                    __Vfunc_feed__58__Vfuncout[5U] 
                                        = __Vfunc_feed__58__ctx[5U];
                                    __Vfunc_feed__58__Vfuncout[6U] 
                                        = __Vfunc_feed__58__ctx[6U];
                                    __Vfunc_feed__58__Vfuncout[7U] 
                                        = __Vfunc_feed__58__ctx[7U];
                                    __Vfunc_feed__58__Vfuncout[8U] 
                                        = __Vfunc_feed__58__ctx[8U];
                                    __Vfunc_feed__58__Vfuncout[9U] 
                                        = __Vfunc_feed__58__ctx[9U];
                                    __Vfunc_feed__58__Vfuncout[0xaU] 
                                        = __Vfunc_feed__58__ctx[0xaU];
                                    goto __Vlabel3;
                                }
                            } else if ((0x28U == (0x3fU 
                                                  & (__Vfunc_feed__58__ctx[0xaU] 
                                                     >> 0x11U)))) {
                                if (((1U & (IData)(__Vfunc_feed__58__data)) 
                                     != (1U & __Vfunc_feed__58__ctx[0U]))) {
                                    __Vfunc_feed__58__frame_error = 1U;
                                    __Vfunc_feed__58__ctx[0xaU] 
                                        = (0x1ffffU 
                                           & __Vfunc_feed__58__ctx[0xaU]);
                                    __Vfunc_feed__58__ctx[0U] 
                                        = (0xfffffffeU 
                                           & __Vfunc_feed__58__ctx[0U]);
                                    __Vfunc_feed__58__Vfuncout[0U] 
                                        = __Vfunc_feed__58__ctx[0U];
                                    __Vfunc_feed__58__Vfuncout[1U] 
                                        = __Vfunc_feed__58__ctx[1U];
                                    __Vfunc_feed__58__Vfuncout[2U] 
                                        = __Vfunc_feed__58__ctx[2U];
                                    __Vfunc_feed__58__Vfuncout[3U] 
                                        = __Vfunc_feed__58__ctx[3U];
                                    __Vfunc_feed__58__Vfuncout[4U] 
                                        = __Vfunc_feed__58__ctx[4U];
                                    __Vfunc_feed__58__Vfuncout[5U] 
                                        = __Vfunc_feed__58__ctx[5U];
                                    __Vfunc_feed__58__Vfuncout[6U] 
                                        = __Vfunc_feed__58__ctx[6U];
                                    __Vfunc_feed__58__Vfuncout[7U] 
                                        = __Vfunc_feed__58__ctx[7U];
                                    __Vfunc_feed__58__Vfuncout[8U] 
                                        = __Vfunc_feed__58__ctx[8U];
                                    __Vfunc_feed__58__Vfuncout[9U] 
                                        = __Vfunc_feed__58__ctx[9U];
                                    __Vfunc_feed__58__Vfuncout[0xaU] 
                                        = __Vfunc_feed__58__ctx[0xaU];
                                    goto __Vlabel3;
                                }
                            } else if ((0x29U == (0x3fU 
                                                  & (__Vfunc_feed__58__ctx[0xaU] 
                                                     >> 0x11U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__58__data))) {
                                    __Vfunc_decoder__60__raw[0U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[0U] 
                                           & ((__Vfunc_feed__58__ctx[1U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__58__ctx[0U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__60__raw[1U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[1U] 
                                           & ((__Vfunc_feed__58__ctx[2U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__58__ctx[1U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__60__raw[2U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[2U] 
                                           & ((__Vfunc_feed__58__ctx[3U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__58__ctx[2U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__60__raw[3U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[3U] 
                                           & ((__Vfunc_feed__58__ctx[4U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__58__ctx[3U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__60__raw[4U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[4U] 
                                           & ((__Vfunc_feed__58__ctx[5U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__58__ctx[4U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__60__raw[5U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[5U] 
                                           & ((__Vfunc_feed__58__ctx[6U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__58__ctx[5U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__60__raw[6U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[6U] 
                                           & ((__Vfunc_feed__58__ctx[7U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__58__ctx[6U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__60__raw[7U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[7U] 
                                           & ((__Vfunc_feed__58__ctx[8U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__58__ctx[7U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__60__raw[8U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[8U] 
                                           & ((__Vfunc_feed__58__ctx[9U] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__58__ctx[8U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__60__raw[9U] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[9U] 
                                           & ((__Vfunc_feed__58__ctx[0xaU] 
                                               << 0x1fU) 
                                              | (__Vfunc_feed__58__ctx[9U] 
                                                 >> 1U)));
                                    __Vfunc_decoder__60__raw[0xaU] 
                                        = (Vspi_full_flow_tick_count_tb__ConstPool__CONST_hfcc3ede4_0[0xaU] 
                                           & (__Vfunc_feed__58__ctx[0xaU] 
                                              >> 1U));
                                    __Vfunc_decoder__60__r[0U] 
                                        = __Vfunc_decoder__60__raw[0U];
                                    __Vfunc_decoder__60__r[1U] 
                                        = __Vfunc_decoder__60__raw[1U];
                                    __Vfunc_decoder__60__r[2U] 
                                        = __Vfunc_decoder__60__raw[2U];
                                    __Vfunc_decoder__60__r[3U] 
                                        = __Vfunc_decoder__60__raw[3U];
                                    __Vfunc_decoder__60__r[4U] 
                                        = __Vfunc_decoder__60__raw[4U];
                                    __Vfunc_decoder__60__r[5U] 
                                        = __Vfunc_decoder__60__raw[5U];
                                    __Vfunc_decoder__60__r[6U] 
                                        = __Vfunc_decoder__60__raw[6U];
                                    __Vfunc_decoder__60__r[7U] 
                                        = __Vfunc_decoder__60__raw[7U];
                                    __Vfunc_decoder__60__r[8U] 
                                        = __Vfunc_decoder__60__raw[8U];
                                    __Vfunc_decoder__60__r[9U] 
                                        = __Vfunc_decoder__60__raw[9U];
                                    __Vfunc_decoder__60__r[0xaU] 
                                        = __Vfunc_decoder__60__raw[0xaU];
                                    __Vfunc_decoder__60__Vfuncout[0U] 
                                        = __Vfunc_decoder__60__r[0U];
                                    __Vfunc_decoder__60__Vfuncout[1U] 
                                        = __Vfunc_decoder__60__r[1U];
                                    __Vfunc_decoder__60__Vfuncout[2U] 
                                        = __Vfunc_decoder__60__r[2U];
                                    __Vfunc_decoder__60__Vfuncout[3U] 
                                        = __Vfunc_decoder__60__r[3U];
                                    __Vfunc_decoder__60__Vfuncout[4U] 
                                        = __Vfunc_decoder__60__r[4U];
                                    __Vfunc_decoder__60__Vfuncout[5U] 
                                        = __Vfunc_decoder__60__r[5U];
                                    __Vfunc_decoder__60__Vfuncout[6U] 
                                        = __Vfunc_decoder__60__r[6U];
                                    __Vfunc_decoder__60__Vfuncout[7U] 
                                        = __Vfunc_decoder__60__r[7U];
                                    __Vfunc_decoder__60__Vfuncout[8U] 
                                        = __Vfunc_decoder__60__r[8U];
                                    __Vfunc_decoder__60__Vfuncout[9U] 
                                        = __Vfunc_decoder__60__r[9U];
                                    __Vfunc_decoder__60__Vfuncout[0xaU] 
                                        = __Vfunc_decoder__60__r[0xaU];
                                    __Vfunc_feed__58__unnamedblk1__DOT__tmp[0U] 
                                        = __Vfunc_decoder__60__Vfuncout[0U];
                                    __Vfunc_feed__58__unnamedblk1__DOT__tmp[1U] 
                                        = __Vfunc_decoder__60__Vfuncout[1U];
                                    __Vfunc_feed__58__unnamedblk1__DOT__tmp[2U] 
                                        = __Vfunc_decoder__60__Vfuncout[2U];
                                    __Vfunc_feed__58__unnamedblk1__DOT__tmp[3U] 
                                        = __Vfunc_decoder__60__Vfuncout[3U];
                                    __Vfunc_feed__58__unnamedblk1__DOT__tmp[4U] 
                                        = __Vfunc_decoder__60__Vfuncout[4U];
                                    __Vfunc_feed__58__unnamedblk1__DOT__tmp[5U] 
                                        = __Vfunc_decoder__60__Vfuncout[5U];
                                    __Vfunc_feed__58__unnamedblk1__DOT__tmp[6U] 
                                        = __Vfunc_decoder__60__Vfuncout[6U];
                                    __Vfunc_feed__58__unnamedblk1__DOT__tmp[7U] 
                                        = __Vfunc_decoder__60__Vfuncout[7U];
                                    __Vfunc_feed__58__unnamedblk1__DOT__tmp[8U] 
                                        = __Vfunc_decoder__60__Vfuncout[8U];
                                    __Vfunc_feed__58__unnamedblk1__DOT__tmp[9U] 
                                        = __Vfunc_decoder__60__Vfuncout[9U];
                                    __Vfunc_feed__58__unnamedblk1__DOT__tmp[0xaU] 
                                        = __Vfunc_decoder__60__Vfuncout[0xaU];
                                    __Vfunc_feed__58__out_frame[0U] 
                                        = __Vfunc_feed__58__unnamedblk1__DOT__tmp[0U];
                                    __Vfunc_feed__58__out_frame[1U] 
                                        = __Vfunc_feed__58__unnamedblk1__DOT__tmp[1U];
                                    __Vfunc_feed__58__out_frame[2U] 
                                        = __Vfunc_feed__58__unnamedblk1__DOT__tmp[2U];
                                    __Vfunc_feed__58__out_frame[3U] 
                                        = __Vfunc_feed__58__unnamedblk1__DOT__tmp[3U];
                                    __Vfunc_feed__58__out_frame[4U] 
                                        = __Vfunc_feed__58__unnamedblk1__DOT__tmp[4U];
                                    __Vfunc_feed__58__out_frame[5U] 
                                        = __Vfunc_feed__58__unnamedblk1__DOT__tmp[5U];
                                    __Vfunc_feed__58__out_frame[6U] 
                                        = __Vfunc_feed__58__unnamedblk1__DOT__tmp[6U];
                                    __Vfunc_feed__58__out_frame[7U] 
                                        = __Vfunc_feed__58__unnamedblk1__DOT__tmp[7U];
                                    __Vfunc_feed__58__out_frame[8U] 
                                        = __Vfunc_feed__58__unnamedblk1__DOT__tmp[8U];
                                    __Vfunc_feed__58__out_frame[9U] 
                                        = __Vfunc_feed__58__unnamedblk1__DOT__tmp[9U];
                                    __Vfunc_feed__58__out_frame[0xaU] 
                                        = __Vfunc_feed__58__unnamedblk1__DOT__tmp[0xaU];
                                    __Vfunc_feed__58__frame_valid = 1U;
                                } else {
                                    __Vfunc_feed__58__frame_error = 1U;
                                }
                                __Vfunc_feed__58__ctx[0xaU] 
                                    = (0x1ffffU & __Vfunc_feed__58__ctx[0xaU]);
                                __Vfunc_feed__58__ctx[0U] 
                                    = (0xfffffffeU 
                                       & __Vfunc_feed__58__ctx[0U]);
                                __Vfunc_feed__58__Vfuncout[0U] 
                                    = __Vfunc_feed__58__ctx[0U];
                                __Vfunc_feed__58__Vfuncout[1U] 
                                    = __Vfunc_feed__58__ctx[1U];
                                __Vfunc_feed__58__Vfuncout[2U] 
                                    = __Vfunc_feed__58__ctx[2U];
                                __Vfunc_feed__58__Vfuncout[3U] 
                                    = __Vfunc_feed__58__ctx[3U];
                                __Vfunc_feed__58__Vfuncout[4U] 
                                    = __Vfunc_feed__58__ctx[4U];
                                __Vfunc_feed__58__Vfuncout[5U] 
                                    = __Vfunc_feed__58__ctx[5U];
                                __Vfunc_feed__58__Vfuncout[6U] 
                                    = __Vfunc_feed__58__ctx[6U];
                                __Vfunc_feed__58__Vfuncout[7U] 
                                    = __Vfunc_feed__58__ctx[7U];
                                __Vfunc_feed__58__Vfuncout[8U] 
                                    = __Vfunc_feed__58__ctx[8U];
                                __Vfunc_feed__58__Vfuncout[9U] 
                                    = __Vfunc_feed__58__ctx[9U];
                                __Vfunc_feed__58__Vfuncout[0xaU] 
                                    = __Vfunc_feed__58__ctx[0xaU];
                                goto __Vlabel3;
                            } else if (((2U <= (0x3fU 
                                                & (__Vfunc_feed__58__ctx[0xaU] 
                                                   >> 0x11U))) 
                                        & (0x27U >= 
                                           (0x3fU & 
                                            (__Vfunc_feed__58__ctx[0xaU] 
                                             >> 0x11U))))) {
                                __Vfunc_feed__58__ctx[0U] 
                                    = ((0xfffffffeU 
                                        & __Vfunc_feed__58__ctx[0U]) 
                                       | (1U & (__Vfunc_feed__58__ctx[0U] 
                                                ^ VL_REDXOR_8(__Vfunc_feed__58__data))));
                            }
                            if (__Vfunc_feed__58__frame_error) {
                                __Vfunc_feed__58__ctx[0xaU] 
                                    = (0x1ffffU & __Vfunc_feed__58__ctx[0xaU]);
                                __Vfunc_feed__58__ctx[0U] 
                                    = (0xfffffffeU 
                                       & __Vfunc_feed__58__ctx[0U]);
                            } else if ((0x29U > (0x3fU 
                                                 & (__Vfunc_feed__58__ctx[0xaU] 
                                                    >> 0x11U)))) {
                                __Vfunc_feed__58__ctx[0xaU] 
                                    = ((0x1ffffU & 
                                        __Vfunc_feed__58__ctx[0xaU]) 
                                       | (0x7e0000U 
                                          & (((IData)(1U) 
                                              + ((__Vfunc_feed__58__ctx[0xaU] 
                                                  << 0xfU) 
                                                 | (__Vfunc_feed__58__ctx[0xaU] 
                                                    >> 0x11U))) 
                                             << 0x11U)));
                            }
                            __Vfunc_feed__58__Vfuncout[0U] 
                                = __Vfunc_feed__58__ctx[0U];
                            __Vfunc_feed__58__Vfuncout[1U] 
                                = __Vfunc_feed__58__ctx[1U];
                            __Vfunc_feed__58__Vfuncout[2U] 
                                = __Vfunc_feed__58__ctx[2U];
                            __Vfunc_feed__58__Vfuncout[3U] 
                                = __Vfunc_feed__58__ctx[3U];
                            __Vfunc_feed__58__Vfuncout[4U] 
                                = __Vfunc_feed__58__ctx[4U];
                            __Vfunc_feed__58__Vfuncout[5U] 
                                = __Vfunc_feed__58__ctx[5U];
                            __Vfunc_feed__58__Vfuncout[6U] 
                                = __Vfunc_feed__58__ctx[6U];
                            __Vfunc_feed__58__Vfuncout[7U] 
                                = __Vfunc_feed__58__ctx[7U];
                            __Vfunc_feed__58__Vfuncout[8U] 
                                = __Vfunc_feed__58__ctx[8U];
                            __Vfunc_feed__58__Vfuncout[9U] 
                                = __Vfunc_feed__58__ctx[9U];
                            __Vfunc_feed__58__Vfuncout[0xaU] 
                                = __Vfunc_feed__58__ctx[0xaU];
                            __Vlabel3: ;
                        }
                        __Vfunc_feed__10__frame_valid 
                            = __Vfunc_feed__58__frame_valid;
                        __Vfunc_feed__10__frame_error 
                            = __Vfunc_feed__58__frame_error;
                        __Vfunc_feed__10__queue_add_frame[0U] 
                            = __Vfunc_feed__58__out_frame[0U];
                        __Vfunc_feed__10__queue_add_frame[1U] 
                            = __Vfunc_feed__58__out_frame[1U];
                        __Vfunc_feed__10__queue_add_frame[2U] 
                            = __Vfunc_feed__58__out_frame[2U];
                        __Vfunc_feed__10__queue_add_frame[3U] 
                            = __Vfunc_feed__58__out_frame[3U];
                        __Vfunc_feed__10__queue_add_frame[4U] 
                            = __Vfunc_feed__58__out_frame[4U];
                        __Vfunc_feed__10__queue_add_frame[5U] 
                            = __Vfunc_feed__58__out_frame[5U];
                        __Vfunc_feed__10__queue_add_frame[6U] 
                            = __Vfunc_feed__58__out_frame[6U];
                        __Vfunc_feed__10__queue_add_frame[7U] 
                            = __Vfunc_feed__58__out_frame[7U];
                        __Vfunc_feed__10__queue_add_frame[8U] 
                            = __Vfunc_feed__58__out_frame[8U];
                        __Vfunc_feed__10__queue_add_frame[9U] 
                            = __Vfunc_feed__58__out_frame[9U];
                        __Vfunc_feed__10__queue_add_frame[0xaU] 
                            = __Vfunc_feed__58__out_frame[0xaU];
                        __Vfunc_feed__10__ctx[5U] = 
                            ((0x1ffU & __Vfunc_feed__10__ctx[5U]) 
                             | (__Vfunc_feed__58__Vfuncout[0U] 
                                << 9U));
                        __Vfunc_feed__10__ctx[6U] = 
                            ((__Vfunc_feed__58__Vfuncout[0U] 
                              >> 0x17U) | (__Vfunc_feed__58__Vfuncout[1U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[7U] = 
                            ((__Vfunc_feed__58__Vfuncout[1U] 
                              >> 0x17U) | (__Vfunc_feed__58__Vfuncout[2U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[8U] = 
                            ((__Vfunc_feed__58__Vfuncout[2U] 
                              >> 0x17U) | (__Vfunc_feed__58__Vfuncout[3U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[9U] = 
                            ((__Vfunc_feed__58__Vfuncout[3U] 
                              >> 0x17U) | (__Vfunc_feed__58__Vfuncout[4U] 
                                           << 9U));
                        __Vfunc_feed__10__ctx[0xaU] 
                            = ((__Vfunc_feed__58__Vfuncout[4U] 
                                >> 0x17U) | (__Vfunc_feed__58__Vfuncout[5U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xbU] 
                            = ((__Vfunc_feed__58__Vfuncout[5U] 
                                >> 0x17U) | (__Vfunc_feed__58__Vfuncout[6U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xcU] 
                            = ((__Vfunc_feed__58__Vfuncout[6U] 
                                >> 0x17U) | (__Vfunc_feed__58__Vfuncout[7U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xdU] 
                            = ((__Vfunc_feed__58__Vfuncout[7U] 
                                >> 0x17U) | (__Vfunc_feed__58__Vfuncout[8U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xeU] 
                            = ((__Vfunc_feed__58__Vfuncout[8U] 
                                >> 0x17U) | (__Vfunc_feed__58__Vfuncout[9U] 
                                             << 9U));
                        __Vfunc_feed__10__ctx[0xfU] 
                            = ((__Vfunc_feed__58__Vfuncout[9U] 
                                >> 0x17U) | (__Vfunc_feed__58__Vfuncout[0xaU] 
                                             << 9U));
                        __Vfunc_feed__10__out_msgType = 1U;
                    }
                } else if ((0x40000U & __Vfunc_feed__10__ctx[0x16U])) {
                    if ((0x20000U & __Vfunc_feed__10__ctx[0x16U])) {
                        __Vfunc_feed__61__data = __Vfunc_feed__10__data;
                        __Vfunc_feed__61__in_ctx[0U] 
                            = __Vfunc_feed__10__ctx[0x10U];
                        __Vfunc_feed__61__in_ctx[1U] 
                            = __Vfunc_feed__10__ctx[0x11U];
                        __Vfunc_feed__61__in_ctx[2U] 
                            = (0x7ffU & __Vfunc_feed__10__ctx[0x12U]);
                        __Vfunc_feed__61__ctx[0U] = 
                            __Vfunc_feed__61__in_ctx[0U];
                        __Vfunc_feed__61__ctx[1U] = 
                            __Vfunc_feed__61__in_ctx[1U];
                        __Vfunc_feed__61__ctx[2U] = 
                            __Vfunc_feed__61__in_ctx[2U];
                        __Vfunc_feed__61__frame_valid = 0U;
                        __Vfunc_feed__61__frame_error = 0U;
                        __Vfunc_feed__61__out_frame 
                            = (((QData)((IData)(__Vfunc_feed__61__ctx[2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              __Vfunc_feed__61__ctx[1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                __Vfunc_feed__61__ctx[0U])) 
                                                >> 8U)));
                        if ((0x400U & __Vfunc_feed__61__ctx[2U])) {
                            if ((0x200U & __Vfunc_feed__61__ctx[2U])) {
                                if ((0x100U & __Vfunc_feed__61__ctx[2U])) {
                                    if ((0x55U == (IData)(__Vfunc_feed__61__data))) {
                                        __Vfunc_feed__61__ctx[0U] 
                                            = ((0xffff00ffU 
                                                & __Vfunc_feed__61__ctx[0U]) 
                                               | ((IData)(__Vfunc_feed__61__data) 
                                                  << 8U));
                                        __Vfunc_feed__61__frame_valid = 1U;
                                        __Vfunc_feed__61__out_frame 
                                            = (((QData)((IData)(
                                                                __Vfunc_feed__61__ctx[2U])) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   __Vfunc_feed__61__ctx[1U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     __Vfunc_feed__61__ctx[0U])) 
                                                     >> 8U)));
                                    } else {
                                        __Vfunc_feed__61__frame_error = 1U;
                                    }
                                    __Vfunc_feed__61__ctx[2U] 
                                        = (0xffU & 
                                           __Vfunc_feed__61__ctx[2U]);
                                } else {
                                    __Vfunc_feed__61__ctx[0U] 
                                        = ((0xff00ffffU 
                                            & __Vfunc_feed__61__ctx[0U]) 
                                           | ((IData)(__Vfunc_feed__61__data) 
                                              << 0x10U));
                                    if (((IData)(__Vfunc_feed__61__data) 
                                         == (0xffU 
                                             & __Vfunc_feed__61__ctx[0U]))) {
                                        __Vfunc_feed__61__ctx[2U] 
                                            = (0x700U 
                                               | __Vfunc_feed__61__ctx[2U]);
                                    } else {
                                        __Vfunc_feed__61__frame_error = 1U;
                                        __Vfunc_feed__61__ctx[2U] 
                                            = (0xffU 
                                               & __Vfunc_feed__61__ctx[2U]);
                                    }
                                }
                            } else if ((0x100U & __Vfunc_feed__61__ctx[2U])) {
                                __Vfunc_feed__61__ctx[0U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__61__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__61__data) 
                                          << 0x18U));
                                __Vfunc_feed__61__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__61__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__61__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__61__data))));
                                __Vfunc_feed__61__ctx[2U] 
                                    = (0x600U | (0xffU 
                                                 & __Vfunc_feed__61__ctx[2U]));
                            } else {
                                __Vfunc_feed__61__ctx[1U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__61__ctx[1U]) 
                                       | (IData)(__Vfunc_feed__61__data));
                                __Vfunc_feed__61__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__61__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__61__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__61__data))));
                                __Vfunc_feed__61__ctx[2U] 
                                    = (0x500U | (0xffU 
                                                 & __Vfunc_feed__61__ctx[2U]));
                            }
                        } else if ((0x200U & __Vfunc_feed__61__ctx[2U])) {
                            if ((0x100U & __Vfunc_feed__61__ctx[2U])) {
                                __Vfunc_feed__61__ctx[1U] 
                                    = ((0xffff00ffU 
                                        & __Vfunc_feed__61__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__61__data) 
                                          << 8U));
                                __Vfunc_feed__61__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__61__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__61__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__61__data))));
                                __Vfunc_feed__61__ctx[2U] 
                                    = (0x400U | (0xffU 
                                                 & __Vfunc_feed__61__ctx[2U]));
                            } else {
                                __Vfunc_feed__61__ctx[1U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__61__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__61__data) 
                                          << 0x10U));
                                __Vfunc_feed__61__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__61__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__61__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__61__data))));
                                __Vfunc_feed__61__ctx[2U] 
                                    = (0x300U | (0xffU 
                                                 & __Vfunc_feed__61__ctx[2U]));
                            }
                        } else if ((0x100U & __Vfunc_feed__61__ctx[2U])) {
                            if ((5U == (IData)(__Vfunc_feed__61__data))) {
                                __Vfunc_feed__61__ctx[1U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__61__ctx[1U]) 
                                       | ((IData)(__Vfunc_feed__61__data) 
                                          << 0x18U));
                                __Vfunc_feed__61__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__61__ctx[0U]) 
                                       | (IData)(__Vfunc_feed__61__data));
                                __Vfunc_feed__61__ctx[2U] 
                                    = (0x200U | (0xffU 
                                                 & __Vfunc_feed__61__ctx[2U]));
                            } else {
                                __Vfunc_feed__61__frame_error = 1U;
                                __Vfunc_feed__61__ctx[2U] 
                                    = (0xffU & __Vfunc_feed__61__ctx[2U]);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__61__data))) {
                            __Vfunc_feed__61__ctx[2U] 
                                = (0x7ffU & (0x100U 
                                             | (IData)(__Vfunc_feed__61__data)));
                            __Vfunc_feed__61__ctx[0U] 
                                = (0xffffff00U & __Vfunc_feed__61__ctx[0U]);
                        } else {
                            __Vfunc_feed__61__frame_error = 1U;
                        }
                        __Vfunc_feed__61__Vfuncout[0U] 
                            = __Vfunc_feed__61__ctx[0U];
                        __Vfunc_feed__61__Vfuncout[1U] 
                            = __Vfunc_feed__61__ctx[1U];
                        __Vfunc_feed__61__Vfuncout[2U] 
                            = __Vfunc_feed__61__ctx[2U];
                        __Vfunc_feed__10__frame_valid 
                            = __Vfunc_feed__61__frame_valid;
                        __Vfunc_feed__10__frame_error 
                            = __Vfunc_feed__61__frame_error;
                        __Vfunc_feed__10__move_probe_frame 
                            = __Vfunc_feed__61__out_frame;
                        __Vfunc_feed__10__ctx[0x10U] 
                            = __Vfunc_feed__61__Vfuncout[0U];
                        __Vfunc_feed__10__ctx[0x11U] 
                            = __Vfunc_feed__61__Vfuncout[1U];
                        __Vfunc_feed__10__ctx[0x12U] 
                            = ((0xfffff800U & __Vfunc_feed__10__ctx[0x12U]) 
                               | __Vfunc_feed__61__Vfuncout[2U]);
                        __Vfunc_feed__10__out_msgType = 5U;
                    } else {
                        __Vfunc_feed__62__data = __Vfunc_feed__10__data;
                        __Vfunc_feed__62__in_ctx = 
                            (0x3ffffffffULL & (((QData)((IData)(
                                                                __Vfunc_feed__10__ctx[0x13U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  __Vfunc_feed__10__ctx[0x12U])) 
                                                  >> 0xbU)));
                        __Vfunc_feed__62__ctx = __Vfunc_feed__62__in_ctx;
                        __Vfunc_feed__62__frame_valid = 0U;
                        __Vfunc_feed__62__frame_error = 0U;
                        __Vfunc_feed__62__out_frame 
                            = (IData)(__Vfunc_feed__62__ctx);
                        if ((1U & (IData)((__Vfunc_feed__62__ctx 
                                           >> 0x21U)))) {
                            if ((1U & (IData)((__Vfunc_feed__62__ctx 
                                               >> 0x20U)))) {
                                if ((0x55U == (IData)(__Vfunc_feed__62__data))) {
                                    __Vfunc_feed__62__ctx 
                                        = ((0x3ffffff00ULL 
                                            & __Vfunc_feed__62__ctx) 
                                           | (IData)((IData)(__Vfunc_feed__62__data)));
                                    __Vfunc_feed__62__frame_valid = 1U;
                                    __Vfunc_feed__62__out_frame 
                                        = (IData)(__Vfunc_feed__62__ctx);
                                } else {
                                    __Vfunc_feed__62__frame_error = 1U;
                                }
                                __Vfunc_feed__62__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__62__ctx);
                            } else {
                                __Vfunc_feed__62__ctx 
                                    = ((0x3ffff00ffULL 
                                        & __Vfunc_feed__62__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__62__data)) 
                                          << 8U));
                                __Vfunc_feed__62__ctx 
                                    = (0x300000000ULL 
                                       | __Vfunc_feed__62__ctx);
                            }
                        } else if ((1U & (IData)((__Vfunc_feed__62__ctx 
                                                  >> 0x20U)))) {
                            if ((3U == (IData)(__Vfunc_feed__62__data))) {
                                __Vfunc_feed__62__ctx 
                                    = ((0x3ff00ffffULL 
                                        & __Vfunc_feed__62__ctx) 
                                       | ((QData)((IData)(__Vfunc_feed__62__data)) 
                                          << 0x10U));
                                __Vfunc_feed__62__ctx 
                                    = (0x200000000ULL 
                                       | (0xffffffffULL 
                                          & __Vfunc_feed__62__ctx));
                            } else {
                                __Vfunc_feed__62__frame_error = 1U;
                                __Vfunc_feed__62__ctx 
                                    = (0xffffffffULL 
                                       & __Vfunc_feed__62__ctx);
                            }
                        } else if ((0xaaU == (IData)(__Vfunc_feed__62__data))) {
                            __Vfunc_feed__62__ctx = 
                                ((0xffffffULL & __Vfunc_feed__62__ctx) 
                                 | ((QData)((IData)(
                                                    (0x100U 
                                                     | (IData)(__Vfunc_feed__62__data)))) 
                                    << 0x18U));
                        } else {
                            __Vfunc_feed__62__frame_error = 1U;
                        }
                        __Vfunc_feed__62__Vfuncout 
                            = __Vfunc_feed__62__ctx;
                        __Vfunc_feed__10__frame_valid 
                            = __Vfunc_feed__62__frame_valid;
                        __Vfunc_feed__10__frame_error 
                            = __Vfunc_feed__62__frame_error;
                        __Vfunc_feed__10__start_move_frame 
                            = __Vfunc_feed__62__out_frame;
                        __Vfunc_feed__10__ctx[0x12U] 
                            = ((0x7ffU & __Vfunc_feed__10__ctx[0x12U]) 
                               | ((IData)(__Vfunc_feed__62__Vfuncout) 
                                  << 0xbU));
                        __Vfunc_feed__10__ctx[0x13U] 
                            = ((0xffffe000U & __Vfunc_feed__10__ctx[0x13U]) 
                               | (((IData)(__Vfunc_feed__62__Vfuncout) 
                                   >> 0x15U) | ((IData)(
                                                        (__Vfunc_feed__62__Vfuncout 
                                                         >> 0x20U)) 
                                                << 0xbU)));
                        __Vfunc_feed__10__out_msgType = 3U;
                    }
                } else if ((0x20000U & __Vfunc_feed__10__ctx[0x16U])) {
                    __Vfunc_feed__63__data = __Vfunc_feed__10__data;
                    __Vfunc_feed__63__in_ctx[0U] = 
                        ((__Vfunc_feed__10__ctx[0x14U] 
                          << 0x13U) | (__Vfunc_feed__10__ctx[0x13U] 
                                       >> 0xdU));
                    __Vfunc_feed__63__in_ctx[1U] = 
                        ((__Vfunc_feed__10__ctx[0x15U] 
                          << 0x13U) | (__Vfunc_feed__10__ctx[0x14U] 
                                       >> 0xdU));
                    __Vfunc_feed__63__in_ctx[2U] = 
                        (0xfffffU & ((__Vfunc_feed__10__ctx[0x16U] 
                                      << 0x13U) | (
                                                   __Vfunc_feed__10__ctx[0x15U] 
                                                   >> 0xdU)));
                    __Vfunc_feed__63__ctx[0U] = __Vfunc_feed__63__in_ctx[0U];
                    __Vfunc_feed__63__ctx[1U] = __Vfunc_feed__63__in_ctx[1U];
                    __Vfunc_feed__63__ctx[2U] = __Vfunc_feed__63__in_ctx[2U];
                    __Vfunc_feed__63__frame_valid = 0U;
                    __Vfunc_feed__63__frame_error = 0U;
                    __Vfunc_feed__63__out_frame[0U] 
                        = ((__Vfunc_feed__63__ctx[1U] 
                            << 0x18U) | (__Vfunc_feed__63__ctx[0U] 
                                         >> 8U));
                    __Vfunc_feed__63__out_frame[1U] 
                        = ((__Vfunc_feed__63__ctx[2U] 
                            << 0x18U) | (__Vfunc_feed__63__ctx[1U] 
                                         >> 8U));
                    __Vfunc_feed__63__out_frame[2U] 
                        = (0xffU & (__Vfunc_feed__63__ctx[2U] 
                                    >> 8U));
                    if ((0x80000U & __Vfunc_feed__63__ctx[2U])) {
                        if ((0x40000U & __Vfunc_feed__63__ctx[2U])) {
                            __Vfunc_feed__63__frame_error = 1U;
                            __Vfunc_feed__63__ctx[2U] 
                                = (0xffffU & __Vfunc_feed__63__ctx[2U]);
                        } else if ((0x20000U & __Vfunc_feed__63__ctx[2U])) {
                            __Vfunc_feed__63__frame_error = 1U;
                            __Vfunc_feed__63__ctx[2U] 
                                = (0xffffU & __Vfunc_feed__63__ctx[2U]);
                        } else if ((0x10000U & __Vfunc_feed__63__ctx[2U])) {
                            __Vfunc_feed__63__frame_error = 1U;
                            __Vfunc_feed__63__ctx[2U] 
                                = (0xffffU & __Vfunc_feed__63__ctx[2U]);
                        } else {
                            if ((0x55U == (IData)(__Vfunc_feed__63__data))) {
                                __Vfunc_feed__63__ctx[0U] 
                                    = ((0xffff00ffU 
                                        & __Vfunc_feed__63__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__63__data) 
                                          << 8U));
                                __Vfunc_feed__63__frame_valid = 1U;
                                __Vfunc_feed__63__out_frame[0U] 
                                    = ((__Vfunc_feed__63__ctx[1U] 
                                        << 0x18U) | 
                                       (__Vfunc_feed__63__ctx[0U] 
                                        >> 8U));
                                __Vfunc_feed__63__out_frame[1U] 
                                    = ((__Vfunc_feed__63__ctx[2U] 
                                        << 0x18U) | 
                                       (__Vfunc_feed__63__ctx[1U] 
                                        >> 8U));
                                __Vfunc_feed__63__out_frame[2U] 
                                    = (0xffU & (__Vfunc_feed__63__ctx[2U] 
                                                >> 8U));
                            } else {
                                __Vfunc_feed__63__frame_error = 1U;
                            }
                            __Vfunc_feed__63__ctx[2U] 
                                = (0xffffU & __Vfunc_feed__63__ctx[2U]);
                        }
                    } else if ((0x40000U & __Vfunc_feed__63__ctx[2U])) {
                        if ((0x20000U & __Vfunc_feed__63__ctx[2U])) {
                            if ((0x10000U & __Vfunc_feed__63__ctx[2U])) {
                                __Vfunc_feed__63__ctx[0U] 
                                    = ((0xff00ffffU 
                                        & __Vfunc_feed__63__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__63__data) 
                                          << 0x10U));
                                if (((IData)(__Vfunc_feed__63__data) 
                                     == (0xffU & __Vfunc_feed__63__ctx[0U]))) {
                                    __Vfunc_feed__63__ctx[2U] 
                                        = (0x80000U 
                                           | (0xffffU 
                                              & __Vfunc_feed__63__ctx[2U]));
                                } else {
                                    __Vfunc_feed__63__frame_error = 1U;
                                    __Vfunc_feed__63__ctx[2U] 
                                        = (0xffffU 
                                           & __Vfunc_feed__63__ctx[2U]);
                                }
                            } else {
                                __Vfunc_feed__63__ctx[0U] 
                                    = ((0xffffffU & 
                                        __Vfunc_feed__63__ctx[0U]) 
                                       | ((IData)(__Vfunc_feed__63__data) 
                                          << 0x18U));
                                __Vfunc_feed__63__ctx[0U] 
                                    = ((0xffffff00U 
                                        & __Vfunc_feed__63__ctx[0U]) 
                                       | (0xffU & (
                                                   __Vfunc_feed__63__ctx[0U] 
                                                   ^ (IData)(__Vfunc_feed__63__data))));
                                __Vfunc_feed__63__ctx[2U] 
                                    = (0x70000U | (0xffffU 
                                                   & __Vfunc_feed__63__ctx[2U]));
                            }
                        } else if ((0x10000U & __Vfunc_feed__63__ctx[2U])) {
                            __Vfunc_feed__63__ctx[1U] 
                                = ((0xffffff00U & __Vfunc_feed__63__ctx[1U]) 
                                   | (IData)(__Vfunc_feed__63__data));
                            __Vfunc_feed__63__ctx[0U] 
                                = ((0xffffff00U & __Vfunc_feed__63__ctx[0U]) 
                                   | (0xffU & (__Vfunc_feed__63__ctx[0U] 
                                               ^ (IData)(__Vfunc_feed__63__data))));
                            __Vfunc_feed__63__ctx[2U] 
                                = (0x60000U | (0xffffU 
                                               & __Vfunc_feed__63__ctx[2U]));
                        } else {
                            __Vfunc_feed__63__ctx[1U] 
                                = ((0xffff00ffU & __Vfunc_feed__63__ctx[1U]) 
                                   | ((IData)(__Vfunc_feed__63__data) 
                                      << 8U));
                            __Vfunc_feed__63__ctx[0U] 
                                = ((0xffffff00U & __Vfunc_feed__63__ctx[0U]) 
                                   | (0xffU & (__Vfunc_feed__63__ctx[0U] 
                                               ^ (IData)(__Vfunc_feed__63__data))));
                            __Vfunc_feed__63__ctx[2U] 
                                = (0x50000U | (0xffffU 
                                               & __Vfunc_feed__63__ctx[2U]));
                        }
                    } else if ((0x20000U & __Vfunc_feed__63__ctx[2U])) {
                        if ((0x10000U & __Vfunc_feed__63__ctx[2U])) {
                            __Vfunc_feed__63__ctx[1U] 
                                = ((0xff00ffffU & __Vfunc_feed__63__ctx[1U]) 
                                   | ((IData)(__Vfunc_feed__63__data) 
                                      << 0x10U));
                            __Vfunc_feed__63__ctx[0U] 
                                = ((0xffffff00U & __Vfunc_feed__63__ctx[0U]) 
                                   | (0xffU & (__Vfunc_feed__63__ctx[0U] 
                                               ^ (IData)(__Vfunc_feed__63__data))));
                            __Vfunc_feed__63__ctx[2U] 
                                = (0x40000U | (0xffffU 
                                               & __Vfunc_feed__63__ctx[2U]));
                        } else {
                            __Vfunc_feed__63__ctx[1U] 
                                = ((0xffffffU & __Vfunc_feed__63__ctx[1U]) 
                                   | ((IData)(__Vfunc_feed__63__data) 
                                      << 0x18U));
                            __Vfunc_feed__63__ctx[0U] 
                                = ((0xffffff00U & __Vfunc_feed__63__ctx[0U]) 
                                   | (0xffU & (__Vfunc_feed__63__ctx[0U] 
                                               ^ (IData)(__Vfunc_feed__63__data))));
                            __Vfunc_feed__63__ctx[2U] 
                                = (0x30000U | (0xffffU 
                                               & __Vfunc_feed__63__ctx[2U]));
                        }
                    } else if ((0x10000U & __Vfunc_feed__63__ctx[2U])) {
                        if ((4U == (IData)(__Vfunc_feed__63__data))) {
                            __Vfunc_feed__63__ctx[2U] 
                                = ((0xfff00U & __Vfunc_feed__63__ctx[2U]) 
                                   | (0xfffffU & (IData)(__Vfunc_feed__63__data)));
                            __Vfunc_feed__63__ctx[0U] 
                                = ((0xffffff00U & __Vfunc_feed__63__ctx[0U]) 
                                   | (IData)(__Vfunc_feed__63__data));
                            __Vfunc_feed__63__ctx[2U] 
                                = (0x20000U | (0xffffU 
                                               & __Vfunc_feed__63__ctx[2U]));
                        } else {
                            __Vfunc_feed__63__frame_error = 1U;
                            __Vfunc_feed__63__ctx[2U] 
                                = (0xffffU & __Vfunc_feed__63__ctx[2U]);
                        }
                    } else if ((0xaaU == (IData)(__Vfunc_feed__63__data))) {
                        __Vfunc_feed__63__ctx[2U] = 
                            ((0xffU & __Vfunc_feed__63__ctx[2U]) 
                             | (0xfff00U & (0x10000U 
                                            | ((IData)(__Vfunc_feed__63__data) 
                                               << 8U))));
                        __Vfunc_feed__63__ctx[0U] = 
                            (0xffffff00U & __Vfunc_feed__63__ctx[0U]);
                    } else {
                        __Vfunc_feed__63__frame_error = 1U;
                    }
                    __Vfunc_feed__63__Vfuncout[0U] 
                        = __Vfunc_feed__63__ctx[0U];
                    __Vfunc_feed__63__Vfuncout[1U] 
                        = __Vfunc_feed__63__ctx[1U];
                    __Vfunc_feed__63__Vfuncout[2U] 
                        = __Vfunc_feed__63__ctx[2U];
                    __Vfunc_feed__10__frame_valid = __Vfunc_feed__63__frame_valid;
                    __Vfunc_feed__10__frame_error = __Vfunc_feed__63__frame_error;
                    __Vfunc_feed__10__move_home_frame[0U] 
                        = __Vfunc_feed__63__out_frame[0U];
                    __Vfunc_feed__10__move_home_frame[1U] 
                        = __Vfunc_feed__63__out_frame[1U];
                    __Vfunc_feed__10__move_home_frame[2U] 
                        = __Vfunc_feed__63__out_frame[2U];
                    __Vfunc_feed__10__ctx[0x13U] = 
                        ((0x1fffU & __Vfunc_feed__10__ctx[0x13U]) 
                         | (__Vfunc_feed__63__Vfuncout[0U] 
                            << 0xdU));
                    __Vfunc_feed__10__ctx[0x14U] = 
                        ((__Vfunc_feed__63__Vfuncout[0U] 
                          >> 0x13U) | (__Vfunc_feed__63__Vfuncout[1U] 
                                       << 0xdU));
                    __Vfunc_feed__10__ctx[0x15U] = 
                        ((__Vfunc_feed__63__Vfuncout[1U] 
                          >> 0x13U) | (__Vfunc_feed__63__Vfuncout[2U] 
                                       << 0xdU));
                    __Vfunc_feed__10__ctx[0x16U] = 
                        ((0x7ffffeU & __Vfunc_feed__10__ctx[0x16U]) 
                         | (0x7fffffU & (__Vfunc_feed__63__Vfuncout[2U] 
                                         >> 0x13U)));
                    __Vfunc_feed__10__out_msgType = 4U;
                } else {
                    __Vfunc_feed__10__frame_error = 1U;
                }
                if (((IData)(__Vfunc_feed__10__frame_valid) 
                     | (IData)(__Vfunc_feed__10__frame_error))) {
                    __Vfunc_feed__10__ctx[0x16U] = 
                        (0x1ffffU & __Vfunc_feed__10__ctx[0x16U]);
                }
            } else {
                __Vfunc_feed__10__frame_error = 1U;
                __Vfunc_feed__10__ctx[0x16U] = (0x1ffffU 
                                                & __Vfunc_feed__10__ctx[0x16U]);
            }
            __Vfunc_feed__10__Vfuncout[0U] = __Vfunc_feed__10__ctx[0U];
            __Vfunc_feed__10__Vfuncout[1U] = __Vfunc_feed__10__ctx[1U];
            __Vfunc_feed__10__Vfuncout[2U] = __Vfunc_feed__10__ctx[2U];
            __Vfunc_feed__10__Vfuncout[3U] = __Vfunc_feed__10__ctx[3U];
            __Vfunc_feed__10__Vfuncout[4U] = __Vfunc_feed__10__ctx[4U];
            __Vfunc_feed__10__Vfuncout[5U] = __Vfunc_feed__10__ctx[5U];
            __Vfunc_feed__10__Vfuncout[6U] = __Vfunc_feed__10__ctx[6U];
            __Vfunc_feed__10__Vfuncout[7U] = __Vfunc_feed__10__ctx[7U];
            __Vfunc_feed__10__Vfuncout[8U] = __Vfunc_feed__10__ctx[8U];
            __Vfunc_feed__10__Vfuncout[9U] = __Vfunc_feed__10__ctx[9U];
            __Vfunc_feed__10__Vfuncout[0xaU] = __Vfunc_feed__10__ctx[0xaU];
            __Vfunc_feed__10__Vfuncout[0xbU] = __Vfunc_feed__10__ctx[0xbU];
            __Vfunc_feed__10__Vfuncout[0xcU] = __Vfunc_feed__10__ctx[0xcU];
            __Vfunc_feed__10__Vfuncout[0xdU] = __Vfunc_feed__10__ctx[0xdU];
            __Vfunc_feed__10__Vfuncout[0xeU] = __Vfunc_feed__10__ctx[0xeU];
            __Vfunc_feed__10__Vfuncout[0xfU] = __Vfunc_feed__10__ctx[0xfU];
            __Vfunc_feed__10__Vfuncout[0x10U] = __Vfunc_feed__10__ctx[0x10U];
            __Vfunc_feed__10__Vfuncout[0x11U] = __Vfunc_feed__10__ctx[0x11U];
            __Vfunc_feed__10__Vfuncout[0x12U] = __Vfunc_feed__10__ctx[0x12U];
            __Vfunc_feed__10__Vfuncout[0x13U] = __Vfunc_feed__10__ctx[0x13U];
            __Vfunc_feed__10__Vfuncout[0x14U] = __Vfunc_feed__10__ctx[0x14U];
            __Vfunc_feed__10__Vfuncout[0x15U] = __Vfunc_feed__10__ctx[0x15U];
            __Vfunc_feed__10__Vfuncout[0x16U] = __Vfunc_feed__10__ctx[0x16U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__frame_valid 
                = __Vfunc_feed__10__frame_valid;
            vlSelf->spi_full_flow_tick_count_tb__DOT__frame_error 
                = __Vfunc_feed__10__frame_error;
            vlSelf->spi_full_flow_tick_count_tb__DOT__out_msgType 
                = __Vfunc_feed__10__out_msgType;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_home_frame[0U] 
                = __Vfunc_feed__10__move_home_frame[0U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_home_frame[1U] 
                = __Vfunc_feed__10__move_home_frame[1U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_home_frame[2U] 
                = __Vfunc_feed__10__move_home_frame[2U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__start_move_frame 
                = __Vfunc_feed__10__start_move_frame;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_probe_frame 
                = __Vfunc_feed__10__move_probe_frame;
            vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[0U] 
                = __Vfunc_feed__10__queue_add_frame[0U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[1U] 
                = __Vfunc_feed__10__queue_add_frame[1U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[2U] 
                = __Vfunc_feed__10__queue_add_frame[2U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[3U] 
                = __Vfunc_feed__10__queue_add_frame[3U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[4U] 
                = __Vfunc_feed__10__queue_add_frame[4U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[5U] 
                = __Vfunc_feed__10__queue_add_frame[5U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[6U] 
                = __Vfunc_feed__10__queue_add_frame[6U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[7U] 
                = __Vfunc_feed__10__queue_add_frame[7U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[8U] 
                = __Vfunc_feed__10__queue_add_frame[8U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[9U] 
                = __Vfunc_feed__10__queue_add_frame[9U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[0xaU] 
                = __Vfunc_feed__10__queue_add_frame[0xaU];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_end_frame 
                = __Vfunc_feed__10__move_end_frame;
            vlSelf->spi_full_flow_tick_count_tb__DOT__queue_status_frame 
                = __Vfunc_feed__10__queue_status_frame;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__fpga_status_frame 
                = __Vfunc_feed__10__fpga_status_frame;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__led_ctrl_frame 
                = __Vfunc_feed__10__led_ctrl_frame;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0U] 
                = __Vfunc_feed__10__Vfuncout[0U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[1U] 
                = __Vfunc_feed__10__Vfuncout[1U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[2U] 
                = __Vfunc_feed__10__Vfuncout[2U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[3U] 
                = __Vfunc_feed__10__Vfuncout[3U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[4U] 
                = __Vfunc_feed__10__Vfuncout[4U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[5U] 
                = __Vfunc_feed__10__Vfuncout[5U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[6U] 
                = __Vfunc_feed__10__Vfuncout[6U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[7U] 
                = __Vfunc_feed__10__Vfuncout[7U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[8U] 
                = __Vfunc_feed__10__Vfuncout[8U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[9U] 
                = __Vfunc_feed__10__Vfuncout[9U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xaU] 
                = __Vfunc_feed__10__Vfuncout[0xaU];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xbU] 
                = __Vfunc_feed__10__Vfuncout[0xbU];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xcU] 
                = __Vfunc_feed__10__Vfuncout[0xcU];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xdU] 
                = __Vfunc_feed__10__Vfuncout[0xdU];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xeU] 
                = __Vfunc_feed__10__Vfuncout[0xeU];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xfU] 
                = __Vfunc_feed__10__Vfuncout[0xfU];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x10U] 
                = __Vfunc_feed__10__Vfuncout[0x10U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x11U] 
                = __Vfunc_feed__10__Vfuncout[0x11U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x12U] 
                = __Vfunc_feed__10__Vfuncout[0x12U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x13U] 
                = __Vfunc_feed__10__Vfuncout[0x13U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x14U] 
                = __Vfunc_feed__10__Vfuncout[0x14U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x15U] 
                = __Vfunc_feed__10__Vfuncout[0x15U];
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x16U] 
                = __Vfunc_feed__10__Vfuncout[0x16U];
        }
        if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled) {
            if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__sync_req) {
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q = 1U;
            }
            if (((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q) 
                 & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q))) {
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q = 0U;
            }
        } else {
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q = 0U;
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__wr_en = 0U;
        if ((0U != (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_miso__DOT__gap))) {
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_miso__DOT__gap 
                = (3U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_miso__DOT__gap) 
                         - (IData)(1U)));
        } else if ((1U & (~ (IData)(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.empty)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.empty)))) {
                __Vtask_read__128__data = ((0xc7U >= 
                                            (0xffU 
                                             & vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.rd_ptr))
                                            ? vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.mem
                                           [(0xffU 
                                             & vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.rd_ptr)]
                                            : 0U);
                vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.count 
                    = (vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.count 
                       - (IData)(1U));
                vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.rd_ptr 
                    = VL_MODDIV_III(32, ((IData)(1U) 
                                         + vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.rd_ptr), (IData)(0xc8U));
            }
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_miso__DOT__unnamedblk1__DOT__b 
                = __Vtask_read__128__data;
            vlSelf->spi_full_flow_tick_count_tb__DOT__waddr = 0U;
            vlSelf->spi_full_flow_tick_count_tb__DOT__wdata 
                = vlSelf->spi_full_flow_tick_count_tb__DOT__u_miso__DOT__unnamedblk1__DOT__b;
            vlSelf->spi_full_flow_tick_count_tb__DOT__wr_en = 1U;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_miso__DOT__gap = 2U;
        }
        if ((0U == (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state))) {
            vlSelf->spi_full_flow_tick_count_tb__DOT__tx_busy = 0U;
            if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick) {
                if ((0U >= (1U & vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick_idx))) {
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[0U] 
                        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__bits_arr
                        [(1U & vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick_idx)][0U];
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[1U] 
                        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__bits_arr
                        [(1U & vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick_idx)][1U];
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[2U] 
                        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__bits_arr
                        [(1U & vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick_idx)][2U];
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[3U] 
                        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__bits_arr
                        [(1U & vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick_idx)][3U];
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[4U] 
                        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__bits_arr
                        [(1U & vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick_idx)][4U];
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes 
                        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_arr
                        [(1U & vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick_idx)];
                } else {
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[0U] = 0U;
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[1U] = 0U;
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[2U] = 0U;
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[3U] = 0U;
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[4U] = 0U;
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes = 0U;
                }
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx = 0U;
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state = 1U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__tx_busy = 1U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__rr_ptr = 0U;
            }
        } else if ((1U == (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.full)))) {
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__unnamedblk1__DOT__b 
                    = ((0x9fU >= (0xffU & (((IData)(0x9fU) 
                                            - VL_SHIFTL_III(8,32,32, vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx, 3U)) 
                                           - (IData)(7U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & (((IData)(0x9fU) 
                                                 - 
                                                 VL_SHIFTL_III(8,32,32, vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx, 3U)) 
                                                - (IData)(7U))))
                                      ? 0U : (vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[
                                              (((IData)(7U) 
                                                + (0xffU 
                                                   & (((IData)(0x9fU) 
                                                       - 
                                                       VL_SHIFTL_III(8,32,32, vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx, 3U)) 
                                                      - (IData)(7U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(0x9fU) 
                                                       - 
                                                       VL_SHIFTL_III(8,32,32, vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx, 3U)) 
                                                      - (IData)(7U)))))) 
                                    | (vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[
                                       (7U & ((((IData)(0x9fU) 
                                                - VL_SHIFTL_III(8,32,32, vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx, 3U)) 
                                               - (IData)(7U)) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           (((IData)(0x9fU) 
                                             - VL_SHIFTL_III(8,32,32, vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx, 3U)) 
                                            - (IData)(7U))))))
                        : 0U);
                __Vtask_write__127__data = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__unnamedblk1__DOT__b;
                if (vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.full) {
                    vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.__Vlvbound_h564755a9__0 
                        = __Vtask_write__127__data;
                    if ((0xc7U >= (0xffU & vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.wr_ptr))) {
                        vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.mem[(0xffU 
                                                                                & vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.wr_ptr)] 
                            = vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.__Vlvbound_h564755a9__0;
                    }
                    vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.rd_ptr 
                        = VL_MODDIV_III(32, ((IData)(1U) 
                                             + vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.rd_ptr), (IData)(0xc8U));
                    vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.wr_ptr 
                        = VL_MODDIV_III(32, ((IData)(1U) 
                                             + vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.wr_ptr), (IData)(0xc8U));
                } else {
                    vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.__Vlvbound_h564755a9__1 
                        = __Vtask_write__127__data;
                    if ((0xc7U >= (0xffU & vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.wr_ptr))) {
                        vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.mem[(0xffU 
                                                                                & vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.wr_ptr)] 
                            = vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.__Vlvbound_h564755a9__1;
                    }
                    vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.count 
                        = ((IData)(1U) + vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.count);
                    vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.wr_ptr 
                        = VL_MODDIV_III(32, ((IData)(1U) 
                                             + vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.wr_ptr), (IData)(0xc8U));
                }
                if ((((IData)(1U) + vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx) 
                     >= vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes)) {
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__tx_busy = 0U;
                } else {
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx 
                        = ((IData)(1U) + vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx);
                }
            }
        } else {
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state = 0U;
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[0U] 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[0U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[1U] 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[1U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[2U] 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[2U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[3U] 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[3U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[4U] 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[4U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state;
        if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__debounced_active) {
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__latched_q = 1U;
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__overflow_error = 0U;
        if (vlSelf->spi_full_flow_tick_count_tb__DOT__spi_byte_valid) {
            if ((0xd2U == vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)) {
                vlSelf->spi_full_flow_tick_count_tb__DOT__overflow_error = 1U;
            }
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_pulse_q = 0U;
        if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled) {
            if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q) {
                if ((0x40U <= ((IData)(1U) + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q))) {
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_pulse_q = 1U;
                } else {
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q 
                        = ((IData)(1U) + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q);
                }
            }
        } else {
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q = 0U;
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__o_active_pulse 
            = ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__in_sync) 
               & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_active)));
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__o_inactive_pulse 
            = ((~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__in_sync)) 
               & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_active));
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_q 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_active;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__done_s = 0U;
        if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_end_pulse) {
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
        }
        if ((((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_z) 
              & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s))) 
             & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled))) {
            __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__122__d 
                = (1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask) 
                         >> 2U));
            __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__122__Vfuncout 
                = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__122__d;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s = 1U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q 
                = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_z;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s 
                = (1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask) 
                         >> 2U));
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_out_s 
                = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__122__Vfuncout;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q = 0U;
        }
        if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s) {
            if (((1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask) 
                        >> 2U)) != (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s))) {
                __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__123__d 
                    = (1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask) 
                             >> 2U));
                __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__123__Vfuncout 
                    = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__123__d;
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s 
                    = (1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask) 
                             >> 2U));
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_out_s 
                    = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_dir__123__Vfuncout;
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q = 0U;
            }
            if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q) {
                if ((0U != vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q)) {
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q 
                        = (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q 
                           - (IData)(1U));
                }
                if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q) {
                    if ((4U <= ((IData)(1U) + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q))) {
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q = 0U;
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
                        if ((1U & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_z)))) {
                            if ((0U < vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q)) {
                                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q 
                                    = (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q 
                                       - (IData)(1U));
                                if ((1U == vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q)) {
                                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s = 0U;
                                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__done_s = 1U;
                                }
                            } else {
                                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s = 0U;
                                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__done_s = 1U;
                            }
                        }
                    } else {
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q 
                            = ((IData)(1U) + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q);
                    }
                } else if ((0U == vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q)) {
                    if ((0x10000U <= (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q 
                                      + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_z))) {
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q 
                            = ((vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q 
                                + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_z) 
                               - (IData)(0x10000U));
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q = 1U;
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
                    } else {
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q 
                            = (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q 
                               + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_z);
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled)))) {
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__done_s = 0U;
        if ((((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_y) 
              & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s))) 
             & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled))) {
            __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__117__d 
                = (1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask) 
                         >> 1U));
            __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__117__Vfuncout 
                = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__117__d;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s = 1U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q 
                = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_y;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s 
                = (1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask) 
                         >> 1U));
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_out_s 
                = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__117__Vfuncout;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q = 0U;
        }
        if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s) {
            if (((1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask) 
                        >> 1U)) != (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s))) {
                __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__118__d 
                    = (1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask) 
                             >> 1U));
                __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__118__Vfuncout 
                    = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__118__d;
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s 
                    = (1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask) 
                             >> 1U));
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_out_s 
                    = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_dir__118__Vfuncout;
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q = 0U;
            }
            if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q) {
                if ((0U != vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q)) {
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q 
                        = (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q 
                           - (IData)(1U));
                }
                if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q) {
                    if ((4U <= ((IData)(1U) + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q))) {
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q = 0U;
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
                        if ((1U & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_y)))) {
                            if ((0U < vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q)) {
                                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q 
                                    = (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q 
                                       - (IData)(1U));
                                if ((1U == vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q)) {
                                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s = 0U;
                                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__done_s = 1U;
                                }
                            } else {
                                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s = 0U;
                                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__done_s = 1U;
                            }
                        }
                    } else {
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q 
                            = ((IData)(1U) + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q);
                    }
                } else if ((0U == vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q)) {
                    if ((0x10000U <= (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q 
                                      + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_y))) {
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q 
                            = ((vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q 
                                + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_y) 
                               - (IData)(0x10000U));
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q = 1U;
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
                    } else {
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q 
                            = (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q 
                               + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_y);
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled)))) {
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__done_s = 0U;
        if ((((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_x) 
              & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s))) 
             & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled))) {
            __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__112__d 
                = (1U & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask));
            __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__112__Vfuncout 
                = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__112__d;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s = 1U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q 
                = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_x;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s 
                = (1U & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask));
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_out_s 
                = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__112__Vfuncout;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q = 0U;
        }
        if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s) {
            if (((1U & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask)) 
                 != (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s))) {
                __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__113__d 
                    = (1U & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask));
                __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__113__Vfuncout 
                    = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__113__d;
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s 
                    = (1U & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask));
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_out_s 
                    = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_dir__113__Vfuncout;
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q = 0U;
            }
            if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q) {
                if ((0U != vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q)) {
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q 
                        = (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q 
                           - (IData)(1U));
                }
                if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q) {
                    if ((4U <= ((IData)(1U) + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q))) {
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q = 0U;
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
                        if ((1U & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_x)))) {
                            if ((0U < vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q)) {
                                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q 
                                    = (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q 
                                       - (IData)(1U));
                                if ((1U == vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q)) {
                                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s = 0U;
                                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__done_s = 1U;
                                }
                            } else {
                                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s = 0U;
                                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__done_s = 1U;
                            }
                        }
                    } else {
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q 
                            = ((IData)(1U) + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q);
                    }
                } else if ((0U == vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q)) {
                    if ((0x10000U <= (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q 
                                      + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_x))) {
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q 
                            = ((vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q 
                                + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_x) 
                               - (IData)(0x10000U));
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q = 1U;
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
                    } else {
                        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q 
                            = (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q 
                               + vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_x);
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled)))) {
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q = 0U;
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
        }
    } else {
        vlSelf->spi_full_flow_tick_count_tb__DOT__step_count_x = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__tick_count_while_busy = 0U;
        __Vfunc_init__64__ctx[5U] = ((0x1ffU & __Vfunc_init__64__ctx[5U]) 
                                     | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0U] 
                                        << 9U));
        __Vfunc_init__64__ctx[6U] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0U] 
                                      >> 0x17U) | (
                                                   Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[1U] 
                                                   << 9U));
        __Vfunc_init__64__ctx[7U] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[1U] 
                                      >> 0x17U) | (
                                                   Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[2U] 
                                                   << 9U));
        __Vfunc_init__64__ctx[8U] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[2U] 
                                      >> 0x17U) | (
                                                   Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[3U] 
                                                   << 9U));
        __Vfunc_init__64__ctx[9U] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[3U] 
                                      >> 0x17U) | (
                                                   Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[4U] 
                                                   << 9U));
        __Vfunc_init__64__ctx[0xaU] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[4U] 
                                        >> 0x17U) | 
                                       (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[5U] 
                                        << 9U));
        __Vfunc_init__64__ctx[0xbU] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[5U] 
                                        >> 0x17U) | 
                                       (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[6U] 
                                        << 9U));
        __Vfunc_init__64__ctx[0xcU] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[6U] 
                                        >> 0x17U) | 
                                       (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[7U] 
                                        << 9U));
        __Vfunc_init__64__ctx[0xdU] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[7U] 
                                        >> 0x17U) | 
                                       (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[8U] 
                                        << 9U));
        __Vfunc_init__64__ctx[0xeU] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[8U] 
                                        >> 0x17U) | 
                                       (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[9U] 
                                        << 9U));
        __Vfunc_init__64__ctx[0xfU] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[9U] 
                                        >> 0x17U) | 
                                       (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0xaU] 
                                        << 9U));
        __Vfunc_init__64__ctx[0x10U] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0xaU] 
                                         >> 0x17U) 
                                        | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0xbU] 
                                           << 9U));
        __Vfunc_init__64__ctx[0x11U] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0xbU] 
                                         >> 0x17U) 
                                        | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0xcU] 
                                           << 9U));
        __Vfunc_init__64__ctx[0x12U] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0xcU] 
                                         >> 0x17U) 
                                        | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0xdU] 
                                           << 9U));
        __Vfunc_init__64__ctx[0x13U] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0xdU] 
                                         >> 0x17U) 
                                        | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0xeU] 
                                           << 9U));
        __Vfunc_init__64__ctx[0x14U] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0xeU] 
                                         >> 0x17U) 
                                        | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0xfU] 
                                           << 9U));
        __Vfunc_init__64__ctx[0x15U] = ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0xfU] 
                                         >> 0x17U) 
                                        | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0x10U] 
                                           << 9U));
        __Vfunc_init__64__ctx[0x16U] = (0x7fffffU & 
                                        ((Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0x10U] 
                                          >> 0x17U) 
                                         | (Vspi_full_flow_tick_count_tb__ConstPool__CONST_h9394af27_0[0x11U] 
                                            << 9U)));
        __Vfunc_init__64__ctx[0U] = 0x5500U;
        __Vfunc_init__64__ctx[1U] = 0xaa070000U;
        __Vfunc_init__64__ctx[2U] = 0x510002a8U;
        __Vfunc_init__64__ctx[3U] = 0x40400aa5U;
        __Vfunc_init__64__ctx[4U] = 0x3002a95U;
        __Vfunc_init__64__ctx[5U] = (0x55U | (0xfffffe00U 
                                              & __Vfunc_init__64__ctx[5U]));
        __Vfunc_init__64__Vfuncout[0U] = __Vfunc_init__64__ctx[0U];
        __Vfunc_init__64__Vfuncout[1U] = __Vfunc_init__64__ctx[1U];
        __Vfunc_init__64__Vfuncout[2U] = __Vfunc_init__64__ctx[2U];
        __Vfunc_init__64__Vfuncout[3U] = __Vfunc_init__64__ctx[3U];
        __Vfunc_init__64__Vfuncout[4U] = __Vfunc_init__64__ctx[4U];
        __Vfunc_init__64__Vfuncout[5U] = __Vfunc_init__64__ctx[5U];
        __Vfunc_init__64__Vfuncout[6U] = __Vfunc_init__64__ctx[6U];
        __Vfunc_init__64__Vfuncout[7U] = __Vfunc_init__64__ctx[7U];
        __Vfunc_init__64__Vfuncout[8U] = __Vfunc_init__64__ctx[8U];
        __Vfunc_init__64__Vfuncout[9U] = __Vfunc_init__64__ctx[9U];
        __Vfunc_init__64__Vfuncout[0xaU] = __Vfunc_init__64__ctx[0xaU];
        __Vfunc_init__64__Vfuncout[0xbU] = __Vfunc_init__64__ctx[0xbU];
        __Vfunc_init__64__Vfuncout[0xcU] = __Vfunc_init__64__ctx[0xcU];
        __Vfunc_init__64__Vfuncout[0xdU] = __Vfunc_init__64__ctx[0xdU];
        __Vfunc_init__64__Vfuncout[0xeU] = __Vfunc_init__64__ctx[0xeU];
        __Vfunc_init__64__Vfuncout[0xfU] = __Vfunc_init__64__ctx[0xfU];
        __Vfunc_init__64__Vfuncout[0x10U] = __Vfunc_init__64__ctx[0x10U];
        __Vfunc_init__64__Vfuncout[0x11U] = __Vfunc_init__64__ctx[0x11U];
        __Vfunc_init__64__Vfuncout[0x12U] = __Vfunc_init__64__ctx[0x12U];
        __Vfunc_init__64__Vfuncout[0x13U] = __Vfunc_init__64__ctx[0x13U];
        __Vfunc_init__64__Vfuncout[0x14U] = __Vfunc_init__64__ctx[0x14U];
        __Vfunc_init__64__Vfuncout[0x15U] = __Vfunc_init__64__ctx[0x15U];
        __Vfunc_init__64__Vfuncout[0x16U] = __Vfunc_init__64__ctx[0x16U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0U] 
            = __Vfunc_init__64__Vfuncout[0U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[1U] 
            = __Vfunc_init__64__Vfuncout[1U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[2U] 
            = __Vfunc_init__64__Vfuncout[2U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[3U] 
            = __Vfunc_init__64__Vfuncout[3U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[4U] 
            = __Vfunc_init__64__Vfuncout[4U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[5U] 
            = __Vfunc_init__64__Vfuncout[5U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[6U] 
            = __Vfunc_init__64__Vfuncout[6U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[7U] 
            = __Vfunc_init__64__Vfuncout[7U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[8U] 
            = __Vfunc_init__64__Vfuncout[8U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[9U] 
            = __Vfunc_init__64__Vfuncout[9U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xaU] 
            = __Vfunc_init__64__Vfuncout[0xaU];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xbU] 
            = __Vfunc_init__64__Vfuncout[0xbU];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xcU] 
            = __Vfunc_init__64__Vfuncout[0xcU];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xdU] 
            = __Vfunc_init__64__Vfuncout[0xdU];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xeU] 
            = __Vfunc_init__64__Vfuncout[0xeU];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0xfU] 
            = __Vfunc_init__64__Vfuncout[0xfU];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x10U] 
            = __Vfunc_init__64__Vfuncout[0x10U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x11U] 
            = __Vfunc_init__64__Vfuncout[0x11U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x12U] 
            = __Vfunc_init__64__Vfuncout[0x12U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x13U] 
            = __Vfunc_init__64__Vfuncout[0x13U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x14U] 
            = __Vfunc_init__64__Vfuncout[0x14U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x15U] 
            = __Vfunc_init__64__Vfuncout[0x15U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx[0x16U] 
            = __Vfunc_init__64__Vfuncout[0x16U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__frame_valid = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__frame_error = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__out_msgType = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_home_frame[0U] = 0x55U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_home_frame[1U] = 0x4000000U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_home_frame[2U] = 0xaaU;
        vlSelf->spi_full_flow_tick_count_tb__DOT__start_move_frame = 0xaa030055U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_probe_frame = 0xaa05000000000055ULL;
        vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[0U] 
            = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[0U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[1U] 
            = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[1U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[2U] 
            = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[2U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[3U] 
            = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[3U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[4U] 
            = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[4U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[5U] 
            = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[5U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[6U] 
            = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[6U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[7U] 
            = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[7U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[8U] 
            = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[8U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[9U] 
            = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[9U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[0xaU] 
            = Vspi_full_flow_tick_count_tb__ConstPool__CONST_h43f068a5_0[0xaU];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_end_frame = 0xaa060055U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__queue_status_frame = 0xaa020055U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__fpga_status_frame = 0xaa200055U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__led_ctrl_frame = 0xaa070000000055ULL;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__wr_en = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__waddr = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__wdata = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_miso__DOT__gap = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[0U] = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[1U] = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[2U] = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[3U] = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[4U] = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__rr_ptr = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__tx_busy = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[0U] 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[0U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[1U] 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[1U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[2U] 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[2U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[3U] 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[3U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[4U] 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift[4U];
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__latched_q = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__overflow_error = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_pulse_q = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_q = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__o_active_pulse = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__o_inactive_pulse = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__done_s = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_out_s = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__done_s = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_out_s = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q 
            = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__done_s = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_out_s = 0U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q 
        = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q 
        = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s 
        = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q 
        = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q 
        = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q 
        = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q;
    vlSelf->spi_full_flow_tick_count_tb__DOT__prev_x 
        = ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n) 
           && (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_step_x));
    if (vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n) {
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__debounced_active 
            = (1U & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__in_sync)));
        __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__125__on 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q;
        __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__125__Vfuncout 
            = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__125__on;
        vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_step_z 
            = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__125__Vfuncout;
        __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__120__on 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q;
        __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__120__Vfuncout 
            = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__120__on;
        vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_step_y 
            = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__120__Vfuncout;
        __Vdly__spi_full_flow_tick_count_tb__DOT__rd_en = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__spi_byte_valid = 0U;
        if ((0U == (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state))) {
            if (vlSelf->spi_full_flow_tick_count_tb__DOT__irq) {
                __Vdly__spi_full_flow_tick_count_tb__DOT__rd_en = 1U;
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state))) {
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state))) {
            vlSelf->spi_full_flow_tick_count_tb__DOT__spi_byte 
                = vlSelf->spi_full_flow_tick_count_tb__DOT__rdata;
            vlSelf->spi_full_flow_tick_count_tb__DOT__spi_byte_valid = 1U;
            if (vlSelf->spi_full_flow_tick_count_tb__DOT__irq) {
                __Vdly__spi_full_flow_tick_count_tb__DOT__rd_en = 1U;
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state = 1U;
            } else {
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state = 0U;
            }
        } else {
            __Vdly__spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state = 0U;
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_active 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__in_sync;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q = 0U;
        if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled) {
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q = 1U;
        }
    } else {
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__debounced_active = 0U;
        __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__125__on 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q;
        __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__125__Vfuncout 
            = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__125__on;
        vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_step_z 
            = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__125__Vfuncout;
        __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__120__on 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q;
        __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__120__Vfuncout 
            = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__120__on;
        vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_step_y 
            = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__120__Vfuncout;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__rd_en = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__spi_byte_valid = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__spi_byte = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q = 0U;
    }
    if ((0U == (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state))) {
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__k = 1U;
    }
    if (vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n) {
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_x = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_y = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_z = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__sync_req = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_end_pulse = 0U;
        if (((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pending) 
             & vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__ready_arr
             [0U])) {
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pending = 0U;
        }
        if (((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_pending) 
             & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__prox_active))) {
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk1__DOT__r = 0xab04000000000054ULL;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk1__DOT__r 
                = ((0xffff00000000ffffULL & vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk1__DOT__r) 
                   | ((QData)((IData)((((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_frame_id) 
                                        << 0x18U) | 
                                       ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_axis_mask) 
                                        << 8U)))) << 0x10U));
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_len = 8U;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pending = 1U;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_pending = 0U;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_x = 0U;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_y = 0U;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_z = 0U;
            __Vfunc_set_parity__89__in = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk1__DOT__r;
            __Vfunc_set_parity__89__r = __Vfunc_set_parity__89__in;
            __Vfunc_calc_parity__90__f = __Vfunc_set_parity__89__in;
            __Vfunc_calc_parity__90__Vfuncout = (0xffU 
                                                 & (((((IData)(
                                                               (__Vfunc_calc_parity__90__f 
                                                                >> 0x30U)) 
                                                       ^ (IData)(
                                                                 (__Vfunc_calc_parity__90__f 
                                                                  >> 0x28U))) 
                                                      ^ (IData)(
                                                                (__Vfunc_calc_parity__90__f 
                                                                 >> 0x20U))) 
                                                     ^ (IData)(
                                                               (__Vfunc_calc_parity__90__f 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (__Vfunc_calc_parity__90__f 
                                                               >> 0x10U))));
            __Vfunc_set_parity__89__r = ((0xffffffffffff00ffULL 
                                          & __Vfunc_set_parity__89__r) 
                                         | ((QData)((IData)(__Vfunc_calc_parity__90__Vfuncout)) 
                                            << 8U));
            __Vfunc_set_parity__89__Vfuncout = __Vfunc_set_parity__89__r;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk1__DOT__r 
                = __Vfunc_set_parity__89__Vfuncout;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[0U] = 0U;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[1U] = 0U;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[2U] = 0U;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[3U] = 0U;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[4U] = 0U;
            __Vfunc_encoder__91__r = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk1__DOT__r;
            __Vfunc_encoder__91__v = __Vfunc_encoder__91__r;
            __Vfunc_encoder__91__Vfuncout = __Vfunc_encoder__91__v;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[3U] 
                = (IData)(__Vfunc_encoder__91__Vfuncout);
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[4U] 
                = (IData)((__Vfunc_encoder__91__Vfuncout 
                           >> 0x20U));
        }
        if (((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__sync_start) 
             & (0U != (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_pending)))) {
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_x 
                = (1U & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_pending));
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_y 
                = (1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_pending) 
                         >> 1U));
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_z 
                = (1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_pending) 
                         >> 2U));
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_pending = 0U;
        }
        if (vlSelf->spi_full_flow_tick_count_tb__DOT__frame_valid) {
            if ((3U == (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__out_msgType))) {
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk2__DOT__r = 0xab030054U;
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled = 1U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__sync_req = 1U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk2__DOT__r 
                    = ((0xffff00ffU & vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk2__DOT__r) 
                       | (0xff00U & vlSelf->spi_full_flow_tick_count_tb__DOT__start_move_frame));
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_len = 4U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pending = 1U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[0U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[1U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[2U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[3U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[4U] = 0U;
                __Vfunc_encoder__93__r = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk2__DOT__r;
                __Vfunc_encoder__93__Vfuncout = __Vfunc_encoder__93__r;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[4U] 
                    = __Vfunc_encoder__93__Vfuncout;
            } else if ((1U == (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__out_msgType))) {
                if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled) {
                    __Vfunc_make_default_ok__94__id_echo 
                        = (vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[9U] 
                           >> 0x18U);
                    __Vfunc_make_default_ok__94__r 
                        = ((0xffULL & __Vfunc_make_default_ok__94__r) 
                           | ((QData)((IData)((0xab010000U 
                                               | ((IData)(__Vfunc_make_default_ok__94__id_echo) 
                                                  << 8U)))) 
                              << 0x10U));
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask 
                        = (7U & (vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[9U] 
                                 >> 0x10U));
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_x 
                        = vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[8U];
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_y 
                        = ((vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[7U] 
                            << 0x10U) | (vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[6U] 
                                         >> 0x10U));
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_z 
                        = vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[5U];
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_x 
                        = (vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[9U] 
                           << 0x10U);
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_y 
                        = (0xffff0000U & vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[7U]);
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_z 
                        = (vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[6U] 
                           << 0x10U);
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_x 
                        = (vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[4U] 
                           >> 0x10U);
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_x 
                        = (0xffffU & vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[4U]);
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_x 
                        = (vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[3U] 
                           >> 0x10U);
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_y 
                        = (0xffffU & vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[3U]);
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_y 
                        = (vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[2U] 
                           >> 0x10U);
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_y 
                        = (0xffffU & vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[2U]);
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_z 
                        = (vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[1U] 
                           >> 0x10U);
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_z 
                        = (0xffffU & vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[1U]);
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_z 
                        = (vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[0U] 
                           >> 0x10U);
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_x = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_y = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_z = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_pending 
                        = ((4U & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_pending)) 
                           | (((0U != ((vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[7U] 
                                        << 0x10U) | 
                                       (vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[6U] 
                                        >> 0x10U))) 
                               << 1U) | (0U != vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[8U])));
                    if ((((0U != vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[8U]) 
                          | (0U != ((vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[7U] 
                                     << 0x10U) | (vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[6U] 
                                                  >> 0x10U)))) 
                         | (0U != vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[5U]))) {
                        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__sync_req = 1U;
                    }
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__current_move_id 
                        = (vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[9U] 
                           >> 0x18U);
                    __Vfunc_make_default_ok__94__r 
                        = (0x54ULL | (0xffffffffff00ULL 
                                      & __Vfunc_make_default_ok__94__r));
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_pending 
                        = ((3U & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_pending)) 
                           | ((0U != vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[5U]) 
                              << 2U));
                    __Vfunc_make_default_ok__94__Vfuncout 
                        = __Vfunc_make_default_ok__94__r;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk3__DOT__r 
                        = __Vfunc_make_default_ok__94__Vfuncout;
                } else {
                    __Vfunc_make_default_err__95__id_echo 
                        = (vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame[9U] 
                           >> 0x18U);
                    __Vfunc_make_default_err__95__r 
                        = ((0xffULL & __Vfunc_make_default_err__95__r) 
                           | ((QData)((IData)((0xab010001U 
                                               | ((IData)(__Vfunc_make_default_err__95__id_echo) 
                                                  << 8U)))) 
                              << 0x10U));
                    __Vfunc_make_default_err__95__r 
                        = (0x54ULL | (0xffffffffff00ULL 
                                      & __Vfunc_make_default_err__95__r));
                    __Vfunc_make_default_err__95__Vfuncout 
                        = __Vfunc_make_default_err__95__r;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk3__DOT__r 
                        = __Vfunc_make_default_err__95__Vfuncout;
                }
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_len = 6U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pending = 1U;
                __Vfunc_set_parity__96__in = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk3__DOT__r;
                __Vfunc_set_parity__96__r = __Vfunc_set_parity__96__in;
                VL_ASSIGNSEL_QI(48,8,8U, __Vfunc_set_parity__96__r, 
                                VL_EXTEND_II(8,1, ([&]() {
                                __Vfunc_calc_parity_bit__97__f 
                                    = __Vfunc_set_parity__96__in;
                                __Vfunc_calc_parity_bit__97__Vfuncout 
                                    = (1U & VL_REDXOR_32(
                                                         (0xffffffU 
                                                          & (IData)(
                                                                    (__Vfunc_calc_parity_bit__97__f 
                                                                     >> 0x10U)))));
                            }(), (IData)(__Vfunc_calc_parity_bit__97__Vfuncout))));
                __Vfunc_set_parity__96__Vfuncout = __Vfunc_set_parity__96__r;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk3__DOT__r 
                    = __Vfunc_set_parity__96__Vfuncout;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[0U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[1U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[2U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[3U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[4U] = 0U;
                __Vfunc_encoder__98__r = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk3__DOT__r;
                __Vfunc_encoder__98__v = __Vfunc_encoder__98__r;
                __Vfunc_encoder__98__Vfuncout = __Vfunc_encoder__98__v;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[3U] 
                    = ((0xffffU & vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[3U]) 
                       | ((IData)(__Vfunc_encoder__98__Vfuncout) 
                          << 0x10U));
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[4U] 
                    = (((IData)(__Vfunc_encoder__98__Vfuncout) 
                        >> 0x10U) | ((IData)((__Vfunc_encoder__98__Vfuncout 
                                              >> 0x20U)) 
                                     << 0x10U));
            } else if ((4U == (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__out_msgType))) {
                if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled) {
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_x = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_y = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_z = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_x = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_y = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_z = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_x = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_x = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_x = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_y = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_y = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_y = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_z = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_z = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_z = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_x = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_y = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_z = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_pending = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_frame_id = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_axis_mask = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_pending = 0U;
                    __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__current_move_id = 0U;
                } else {
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk4__DOT__r = 0xab04000000000054ULL;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk4__DOT__r 
                        = (0x100000000ULL | (0xffff0000ffffffffULL 
                                             & vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk4__DOT__r));
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_len = 8U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pending = 1U;
                    __Vfunc_set_parity__100__in = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk4__DOT__r;
                    __Vfunc_set_parity__100__r = __Vfunc_set_parity__100__in;
                    __Vfunc_calc_parity__101__f = __Vfunc_set_parity__100__in;
                    __Vfunc_calc_parity__101__Vfuncout 
                        = (0xffU & (((((IData)((__Vfunc_calc_parity__101__f 
                                                >> 0x30U)) 
                                       ^ (IData)((__Vfunc_calc_parity__101__f 
                                                  >> 0x28U))) 
                                      ^ (IData)((__Vfunc_calc_parity__101__f 
                                                 >> 0x20U))) 
                                     ^ (IData)((__Vfunc_calc_parity__101__f 
                                                >> 0x18U))) 
                                    ^ (IData)((__Vfunc_calc_parity__101__f 
                                               >> 0x10U))));
                    __Vfunc_set_parity__100__r = ((0xffffffffffff00ffULL 
                                                   & __Vfunc_set_parity__100__r) 
                                                  | ((QData)((IData)(__Vfunc_calc_parity__101__Vfuncout)) 
                                                     << 8U));
                    __Vfunc_set_parity__100__Vfuncout 
                        = __Vfunc_set_parity__100__r;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk4__DOT__r 
                        = __Vfunc_set_parity__100__Vfuncout;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[0U] = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[1U] = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[2U] = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[3U] = 0U;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[4U] = 0U;
                    __Vfunc_encoder__102__r = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk4__DOT__r;
                    __Vfunc_encoder__102__v = __Vfunc_encoder__102__r;
                    __Vfunc_encoder__102__Vfuncout 
                        = __Vfunc_encoder__102__v;
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[3U] 
                        = (IData)(__Vfunc_encoder__102__Vfuncout);
                    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[4U] 
                        = (IData)((__Vfunc_encoder__102__Vfuncout 
                                   >> 0x20U));
                }
            } else if ((2U == (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__out_msgType))) {
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[0U] = 0x54U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[1U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[2U] = 0xab020001U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[2U] 
                    = ((0xffff00ffU & vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[2U]) 
                       | ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__current_move_id) 
                          << 8U));
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_len = 0xcU;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pending = 1U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[2U] 
                    = ((0xffffff00U & vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[2U]) 
                       | ((((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s) 
                            | (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s)) 
                           | (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s))
                           ? 0U : 1U));
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[1U] 
                    = (0xffU & vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[1U]);
                __Vfunc_set_parity__104__in[0U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[0U];
                __Vfunc_set_parity__104__in[1U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[1U];
                __Vfunc_set_parity__104__in[2U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[2U];
                __Vfunc_set_parity__104__r[0U] = __Vfunc_set_parity__104__in[0U];
                __Vfunc_set_parity__104__r[1U] = __Vfunc_set_parity__104__in[1U];
                __Vfunc_set_parity__104__r[2U] = __Vfunc_set_parity__104__in[2U];
                VL_ASSIGNSEL_WI(96,8,8U, __Vfunc_set_parity__104__r, 
                                VL_EXTEND_II(8,1, ([&]() {
                                __Vfunc_calc_parity_bit__105__f[0U] 
                                    = __Vfunc_set_parity__104__in[0U];
                                __Vfunc_calc_parity_bit__105__f[1U] 
                                    = __Vfunc_set_parity__104__in[1U];
                                __Vfunc_calc_parity_bit__105__f[2U] 
                                    = __Vfunc_set_parity__104__in[2U];
                                __Vfunc_calc_parity_bit__105__Vfuncout 
                                    = (1U & VL_REDXOR_32(
                                                         ((((__Vfunc_calc_parity_bit__105__f[1U] 
                                                             << 0x10U) 
                                                            | (__Vfunc_calc_parity_bit__105__f[0U] 
                                                               >> 0x10U)) 
                                                           ^ 
                                                           ((__Vfunc_calc_parity_bit__105__f[2U] 
                                                             << 0x10U) 
                                                            | (__Vfunc_calc_parity_bit__105__f[1U] 
                                                               >> 0x10U))) 
                                                          ^ 
                                                          (0xffU 
                                                           & (__Vfunc_calc_parity_bit__105__f[2U] 
                                                              >> 0x10U)))));
                            }(), (IData)(__Vfunc_calc_parity_bit__105__Vfuncout))));
                __Vfunc_set_parity__104__Vfuncout[0U] 
                    = __Vfunc_set_parity__104__r[0U];
                __Vfunc_set_parity__104__Vfuncout[1U] 
                    = __Vfunc_set_parity__104__r[1U];
                __Vfunc_set_parity__104__Vfuncout[2U] 
                    = __Vfunc_set_parity__104__r[2U];
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[0U] 
                    = __Vfunc_set_parity__104__Vfuncout[0U];
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[1U] 
                    = __Vfunc_set_parity__104__Vfuncout[1U];
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[2U] 
                    = __Vfunc_set_parity__104__Vfuncout[2U];
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[0U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[1U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[2U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[3U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[4U] = 0U;
                __Vfunc_encoder__106__r[0U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[0U];
                __Vfunc_encoder__106__r[1U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[1U];
                __Vfunc_encoder__106__r[2U] = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r[2U];
                __Vfunc_encoder__106__Vfuncout[0U] 
                    = __Vfunc_encoder__106__r[0U];
                __Vfunc_encoder__106__Vfuncout[1U] 
                    = __Vfunc_encoder__106__r[1U];
                __Vfunc_encoder__106__Vfuncout[2U] 
                    = __Vfunc_encoder__106__r[2U];
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[2U] 
                    = __Vfunc_encoder__106__Vfuncout[0U];
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[3U] 
                    = __Vfunc_encoder__106__Vfuncout[1U];
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[4U] 
                    = __Vfunc_encoder__106__Vfuncout[2U];
            } else if ((6U == (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__out_msgType))) {
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk6__DOT__r = 0xab060054U;
                __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_end_pulse = 1U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_pending = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_x = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_y = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_z = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_x = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_x = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_x = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_y = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_y = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_y = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_z = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_z = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_z = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk6__DOT__r 
                    = (0xffff00ffU & vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk6__DOT__r);
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_len = 4U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pending = 1U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[0U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[1U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[2U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[3U] = 0U;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[4U] = 0U;
                __Vfunc_encoder__108__r = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk6__DOT__r;
                __Vfunc_encoder__108__Vfuncout = __Vfunc_encoder__108__r;
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[4U] 
                    = __Vfunc_encoder__108__Vfuncout;
            }
        }
    } else {
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pending = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_x = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_y = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_z = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__sync_req = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_end_pulse = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[0U] = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[1U] = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[2U] = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[3U] = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[4U] = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_len = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_x = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_y = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_z = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_x = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_y = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_z = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_x = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_x = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_x = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_y = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_y = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_y = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_z = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_z = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_z = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_x = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_y = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_z = 0U;
        __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__current_move_id = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_pending = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_frame_id = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_axis_mask = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_pending = 0U;
    }
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__115__on 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__115__Vfuncout 
        = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__115__on;
    vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_step_x 
        = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__115__Vfuncout;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state 
        = __Vdly__spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__current_move_id 
        = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__current_move_id;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s 
        = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s 
        = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s 
        = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled 
        = __Vdly__spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__estop_inhibit 
        = ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__debounced_active) 
           | (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__latched_q));
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__in_sync 
        = ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n) 
           && (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__in_meta));
    if (vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n) {
        vlSelf->spi_full_flow_tick_count_tb__DOT__irq 
            = (0U != vlSelf->spi_full_flow_tick_count_tb__DOT__inq.size());
        if (((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__rd_en) 
             & (0U != vlSelf->spi_full_flow_tick_count_tb__DOT__inq.size()))) {
            vlSelf->spi_full_flow_tick_count_tb__DOT__rdata 
                = vlSelf->spi_full_flow_tick_count_tb__DOT__inq.pop_front();
        }
    } else {
        vlSelf->spi_full_flow_tick_count_tb__DOT__irq = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__rdata = 0U;
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__sync_start 
        = ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q) 
           & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q));
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_arr[0U] 
        = (0x1fU & vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_len);
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__bits_arr[0U][0U] 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[0U];
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__bits_arr[0U][1U] 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[1U];
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__bits_arr[0U][2U] 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[2U];
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__bits_arr[0U][3U] 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[3U];
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__bits_arr[0U][4U] 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits[4U];
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__valid_arr[0U] 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pending;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__116__en 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__116__Vfuncout 
        = (1U & (~ (IData)(__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__116__en)));
    vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_enn_x 
        = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__116__Vfuncout;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__121__en 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__121__Vfuncout 
        = (1U & (~ (IData)(__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__121__en)));
    vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_enn_y 
        = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__121__Vfuncout;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__126__en 
        = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled;
    __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__126__Vfuncout 
        = (1U & (~ (IData)(__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__126__en)));
    vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_enn_z 
        = __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__126__Vfuncout;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__prox_active 
        = ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n) 
           && (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__in_sync));
    vlSelf->spi_full_flow_tick_count_tb__DOT__rd_en 
        = __Vdly__spi_full_flow_tick_count_tb__DOT__rd_en;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick = 0U;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick_idx = 0U;
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__ready_arr[0U] = 0U;
    if ((0U == (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state))) {
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__cand = 0U;
        if (((~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick)) 
             & vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__valid_arr
             [0U])) {
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick = 1U;
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick_idx 
                = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__cand;
        }
        if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick) {
            vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT____Vlvbound_h40571ae2__0 = 1U;
            if ((0U >= (1U & vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick_idx))) {
                vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__ready_arr[(1U 
                                                                                & vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick_idx)] 
                    = vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT____Vlvbound_h40571ae2__0;
            }
        }
    }
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__in_meta 
        = ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n) 
           && (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__estop_in));
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__in_sync 
        = ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n) 
           && (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__in_meta));
    vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__in_meta 
        = ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n) 
           && (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__prox_in));
}
