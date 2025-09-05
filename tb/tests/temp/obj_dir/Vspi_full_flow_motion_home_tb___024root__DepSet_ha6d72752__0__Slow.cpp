// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_full_flow_motion_home_tb.h for the primary calling header

#include "Vspi_full_flow_motion_home_tb__pch.h"
#include "Vspi_full_flow_motion_home_tb___024root.h"

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___eval_static__TOP(Vspi_full_flow_motion_home_tb___024root* vlSelf);

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___eval_static(Vspi_full_flow_motion_home_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root___eval_static\n"); );
    // Body
    Vspi_full_flow_motion_home_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___eval_static__TOP(Vspi_full_flow_motion_home_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->spi_full_flow_motion_home_tb__DOT__clk = 0U;
    vlSelf->spi_full_flow_motion_home_tb__DOT__rst_n = 0U;
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___eval_final(Vspi_full_flow_motion_home_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___dump_triggers__stl(Vspi_full_flow_motion_home_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vspi_full_flow_motion_home_tb___024root___eval_phase__stl(Vspi_full_flow_motion_home_tb___024root* vlSelf);

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___eval_settle(Vspi_full_flow_motion_home_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root___eval_settle\n"); );
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
            Vspi_full_flow_motion_home_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_motion_home_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vspi_full_flow_motion_home_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___dump_triggers__stl(Vspi_full_flow_motion_home_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___stl_sequent__TOP__0(Vspi_full_flow_motion_home_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__121__Vfuncout;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__121__on;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__121__on = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__122__Vfuncout;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__122__en;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__122__en = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__126__Vfuncout;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__126__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__126__on;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__126__on = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__127__Vfuncout;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__127__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__127__en;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__127__en = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__131__Vfuncout;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__131__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__131__on;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__131__on = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__132__Vfuncout;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__132__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__132__en;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__132__en = 0;
    // Body
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__bits_arr[0U][0U] 
        = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pend_bits[0U];
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__bits_arr[0U][1U] 
        = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pend_bits[1U];
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__bits_arr[0U][2U] 
        = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pend_bits[2U];
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__bits_arr[0U][3U] 
        = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pend_bits[3U];
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__bits_arr[0U][4U] 
        = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pend_bits[4U];
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__len_arr[0U] 
        = (0x1fU & vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pend_len);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__sync_start 
        = ((IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q) 
           & (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q));
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__estop_inhibit 
        = ((IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__debounced_active) 
           | (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__latched_q));
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__121__on 
        = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__121__Vfuncout 
        = __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__121__on;
    vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_step_x 
        = __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_step__121__Vfuncout;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__122__en 
        = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__move_enabled;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__122__Vfuncout 
        = (1U & (~ (IData)(__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__122__en)));
    vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_enn_x 
        = __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__map_enn__122__Vfuncout;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__126__on 
        = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__126__Vfuncout 
        = __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__126__on;
    vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_step_y 
        = __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_step__126__Vfuncout;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__127__en 
        = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__move_enabled;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__127__Vfuncout 
        = (1U & (~ (IData)(__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__127__en)));
    vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_enn_y 
        = __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__map_enn__127__Vfuncout;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__131__on 
        = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__131__Vfuncout 
        = __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__131__on;
    vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_step_z 
        = __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_step__131__Vfuncout;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__132__en 
        = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__move_enabled;
    __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__132__Vfuncout 
        = (1U & (~ (IData)(__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__132__en)));
    vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_enn_z 
        = __Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__map_enn__132__Vfuncout;
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__valid_arr[0U] 
        = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pending;
    if (vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__move_enabled) {
        vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__position 
            = vlSelf->spi_full_flow_motion_home_tb__DOT__enc_pos;
        vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__kp 
            = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kp_x;
        vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__ff_rate 
            = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ff_rate_x;
        vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__target 
            = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__step_x;
        {
            vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__err 
                = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__target) 
                                     - VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__position)));
            vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__mult 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__kp))), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QQ(48,33, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__err))));
            vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__adj 
                = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__mult, 8U)));
            vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__sum 
                = (vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__ff_rate 
                   + vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__adj);
            if (VL_GTS_III(32, 0U, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__sum)) {
                vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__Vfuncout = 0U;
                goto __Vlabel1;
            } else {
                vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__Vfuncout 
                    = vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__sum;
                goto __Vlabel1;
            }
            __Vlabel1: ;
        }
        vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_x 
            = vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__Vfuncout;
        vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__position 
            = vlSelf->spi_full_flow_motion_home_tb__DOT__enc_pos;
        vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__kp 
            = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kp_y;
        vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__ff_rate 
            = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ff_rate_y;
        vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__target 
            = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__step_y;
        {
            vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__err 
                = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__target) 
                                     - VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__position)));
            vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__mult 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__kp))), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QQ(48,33, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__err))));
            vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__adj 
                = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__mult, 8U)));
            vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__sum 
                = (vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__ff_rate 
                   + vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__adj);
            if (VL_GTS_III(32, 0U, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__sum)) {
                vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__Vfuncout = 0U;
                goto __Vlabel2;
            } else {
                vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__Vfuncout 
                    = vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__sum;
                goto __Vlabel2;
            }
            __Vlabel2: ;
        }
        vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_y 
            = vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__Vfuncout;
        vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__position 
            = vlSelf->spi_full_flow_motion_home_tb__DOT__enc_pos;
        vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__kp 
            = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kp_z;
        vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__ff_rate 
            = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ff_rate_z;
        vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__target 
            = vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__step_z;
        {
            vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__err 
                = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__target) 
                                     - VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__position)));
            vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__mult 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__kp))), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QQ(48,33, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__err))));
            vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__adj 
                = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__mult, 8U)));
            vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__sum 
                = (vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__ff_rate 
                   + vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__adj);
            if (VL_GTS_III(32, 0U, vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__sum)) {
                vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__Vfuncout = 0U;
                goto __Vlabel3;
            } else {
                vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__Vfuncout 
                    = vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__sum;
                goto __Vlabel3;
            }
            __Vlabel3: ;
        }
        vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_z 
            = vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__Vfuncout;
    } else {
        vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_x = 0U;
        vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_y = 0U;
        vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_z = 0U;
    }
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__pick = 0U;
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__pick_idx = 0U;
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__ready_arr[0U] = 0U;
    if ((0U == (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__state))) {
        vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__k = 1U;
        vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__cand = 0U;
        if (((~ (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__pick)) 
             & vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__valid_arr
             [0U])) {
            vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__pick = 1U;
            vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__pick_idx 
                = vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__cand;
        }
        if (vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__pick) {
            vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT____Vlvbound_h40571ae2__0 = 1U;
            if ((0U >= (1U & vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__pick_idx))) {
                vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__ready_arr[(1U 
                                                                                & vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__pick_idx)] 
                    = vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT____Vlvbound_h40571ae2__0;
            }
        }
    }
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___eval_triggers__stl(Vspi_full_flow_motion_home_tb___024root* vlSelf);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___eval_stl(Vspi_full_flow_motion_home_tb___024root* vlSelf);

VL_ATTR_COLD bool Vspi_full_flow_motion_home_tb___024root___eval_phase__stl(Vspi_full_flow_motion_home_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vspi_full_flow_motion_home_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vspi_full_flow_motion_home_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___dump_triggers__act(Vspi_full_flow_motion_home_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge spi_full_flow_motion_home_tb.clk or negedge spi_full_flow_motion_home_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge spi_full_flow_motion_home_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___dump_triggers__nba(Vspi_full_flow_motion_home_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge spi_full_flow_motion_home_tb.clk or negedge spi_full_flow_motion_home_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge spi_full_flow_motion_home_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root___ctor_var_reset(Vspi_full_flow_motion_home_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->spi_full_flow_motion_home_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__rdata = VL_RAND_RESET_I(8);
    vlSelf->spi_full_flow_motion_home_tb__DOT__irq = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__spi_byte_valid = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__spi_byte = VL_RAND_RESET_I(8);
    vlSelf->spi_full_flow_motion_home_tb__DOT__overflow_error = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__frame_valid = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__frame_error = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__out_msgType = VL_RAND_RESET_I(8);
    vlSelf->spi_full_flow_motion_home_tb__DOT__start_move_frame = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(72, vlSelf->spi_full_flow_motion_home_tb__DOT__move_home_frame);
    vlSelf->spi_full_flow_motion_home_tb__DOT__enc_pos = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__enc_vel = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__prox_in = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__estop_in = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_step_x = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_enn_x = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_step_y = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_enn_y = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_step_z = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_enn_z = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__tx_busy = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__waddr = VL_RAND_RESET_I(3);
    vlSelf->spi_full_flow_motion_home_tb__DOT__wdata = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->spi_full_flow_motion_home_tb__DOT__resp_byte_count = 0;
    vlSelf->spi_full_flow_motion_home_tb__DOT__inq.atDefault() = VL_RAND_RESET_I(8);
    vlSelf->spi_full_flow_motion_home_tb__DOT__step_count_x = 0;
    vlSelf->spi_full_flow_motion_home_tb__DOT__prev_step_x = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__unnamedblk5__DOT__cycles = 0;
    vlSelf->spi_full_flow_motion_home_tb__DOT__unnamedblk5__DOT__idx = 0;
    vlSelf->spi_full_flow_motion_home_tb__DOT__unnamedblk5__DOT__prev_cnt = 0;
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_rxbridge__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__move_probe_frame = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(336, vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__queue_add_frame);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__move_end_frame = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__queue_status_frame = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__fpga_status_frame = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__led_ctrl_frame = VL_RAND_RESET_Q(56);
    VL_RAND_RESET_W(727, vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__ctx);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__unnamedblk1__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__prox_active = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__estop_inhibit = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__sync_start = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__sync_req = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__start_x = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__start_y = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__start_z = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__dir_mask = VL_RAND_RESET_I(3);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__step_x = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__step_y = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__step_z = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ff_rate_x = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ff_rate_y = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ff_rate_z = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_x = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_y = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_z = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kp_x = VL_RAND_RESET_I(16);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ki_x = VL_RAND_RESET_I(16);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kd_x = VL_RAND_RESET_I(16);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kp_y = VL_RAND_RESET_I(16);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ki_y = VL_RAND_RESET_I(16);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kd_y = VL_RAND_RESET_I(16);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kp_z = VL_RAND_RESET_I(16);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ki_z = VL_RAND_RESET_I(16);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kd_z = VL_RAND_RESET_I(16);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__cont_x = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__cont_y = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__cont_z = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__current_move_id = VL_RAND_RESET_I(8);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__home_pending = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__home_frame_id = VL_RAND_RESET_I(8);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__home_axis_mask = VL_RAND_RESET_I(3);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__move_end_pulse = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__move_enabled = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__start_pending = VL_RAND_RESET_I(3);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pending = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(160, vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pend_bits);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pend_len = 0;
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk1__DOT__r = VL_RAND_RESET_Q(64);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk2__DOT__r = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk3__DOT__r = VL_RAND_RESET_Q(48);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk4__DOT__r = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(96, vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk6__DOT__r = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__in_meta = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__in_sync = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_active = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__in_meta = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__in_sync = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__debounced_active = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__latched_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__clear_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__tick_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__pid_pulse_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__period_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__pulse_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__dir_cmd_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__dir_out_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__period_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__pulse_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__step_on_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__dir_setup_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__busy_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__done_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__done_s = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_out_s = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__period_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__pulse_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__dir_cmd_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__dir_out_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__period_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__pulse_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__step_on_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__dir_setup_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__busy_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__done_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__done_s = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_out_s = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__period_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__pulse_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__dir_cmd_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__dir_out_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__period_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__pulse_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__step_on_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__dir_setup_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__busy_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__done_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__done_s = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_out_s = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(160, vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__shift);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__len_bytes = 0;
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__idx = 0;
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__rr_ptr = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__valid_arr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(160, vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__bits_arr[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__len_arr[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__ready_arr[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__pick = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__pick_idx = 0;
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__k = 0;
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__cand = 0;
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__unnamedblk1__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT____Vlvbound_h40571ae2__0 = VL_RAND_RESET_I(1);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_miso__DOT__gap = VL_RAND_RESET_I(2);
    vlSelf->spi_full_flow_motion_home_tb__DOT__u_miso__DOT__unnamedblk1__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__target = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__ff_rate = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__kp = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__position = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__err = VL_RAND_RESET_Q(33);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__mult = VL_RAND_RESET_Q(48);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__adj = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__115__sum = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__target = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__ff_rate = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__kp = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__position = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__err = VL_RAND_RESET_Q(33);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__mult = VL_RAND_RESET_Q(48);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__adj = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__116__sum = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__target = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__ff_rate = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__kp = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__position = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__err = VL_RAND_RESET_Q(33);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__mult = VL_RAND_RESET_Q(48);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__adj = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__117__sum = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_motion_home_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__spi_full_flow_motion_home_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
