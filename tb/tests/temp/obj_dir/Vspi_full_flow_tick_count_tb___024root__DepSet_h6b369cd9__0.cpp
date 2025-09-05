// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_full_flow_tick_count_tb.h for the primary calling header

#include "Vspi_full_flow_tick_count_tb__pch.h"
#include "Vspi_full_flow_tick_count_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vspi_full_flow_tick_count_tb___024root___eval_initial__TOP__Vtiming__1(Vspi_full_flow_tick_count_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 
                                           15);
        vlSelf->spi_full_flow_tick_count_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vspi_full_flow_tick_count_tb___024root___act_sequent__TOP__0(Vspi_full_flow_tick_count_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled) {
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__position 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__enc_pos;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__kp 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_x;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__ff_rate 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_x;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__target 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_x;
        {
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__err 
                = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__target) 
                                     - VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__position)));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__mult 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__kp))), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QQ(48,33, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__err))));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__adj 
                = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__mult, 8U)));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__sum 
                = (vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__ff_rate 
                   + vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__adj);
            if (VL_GTS_III(32, 0U, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__sum)) {
                vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__Vfuncout = 0U;
                goto __Vlabel4;
            } else {
                vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__Vfuncout 
                    = vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__sum;
                goto __Vlabel4;
            }
            __Vlabel4: ;
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_x 
            = vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__Vfuncout;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__position 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__enc_pos;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__kp 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_y;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__ff_rate 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_y;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__target 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_y;
        {
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__err 
                = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__target) 
                                     - VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__position)));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__mult 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__kp))), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QQ(48,33, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__err))));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__adj 
                = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__mult, 8U)));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__sum 
                = (vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__ff_rate 
                   + vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__adj);
            if (VL_GTS_III(32, 0U, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__sum)) {
                vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__Vfuncout = 0U;
                goto __Vlabel5;
            } else {
                vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__Vfuncout 
                    = vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__sum;
                goto __Vlabel5;
            }
            __Vlabel5: ;
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_y 
            = vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__Vfuncout;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__position 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__enc_pos;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__kp 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_z;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__ff_rate 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_z;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__target 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_z;
        {
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__err 
                = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__target) 
                                     - VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__position)));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__mult 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__kp))), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QQ(48,33, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__err))));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__adj 
                = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__mult, 8U)));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__sum 
                = (vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__ff_rate 
                   + vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__adj);
            if (VL_GTS_III(32, 0U, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__sum)) {
                vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__Vfuncout = 0U;
                goto __Vlabel6;
            } else {
                vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__Vfuncout 
                    = vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__sum;
                goto __Vlabel6;
            }
            __Vlabel6: ;
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_z 
            = vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__Vfuncout;
    } else {
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_x = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_y = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_z = 0U;
    }
}

void Vspi_full_flow_tick_count_tb___024root___eval_act(Vspi_full_flow_tick_count_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vspi_full_flow_tick_count_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vspi_full_flow_tick_count_tb___024root___nba_comb__TOP__0(Vspi_full_flow_tick_count_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    if (vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled) {
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__position 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__enc_pos;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__kp 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_x;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__ff_rate 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_x;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__target 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_x;
        {
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__err 
                = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__target) 
                                     - VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__position)));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__mult 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__kp))), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QQ(48,33, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__err))));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__adj 
                = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__mult, 8U)));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__sum 
                = (vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__ff_rate 
                   + vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__adj);
            if (VL_GTS_III(32, 0U, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__sum)) {
                vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__Vfuncout = 0U;
                goto __Vlabel7;
            } else {
                vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__Vfuncout 
                    = vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__sum;
                goto __Vlabel7;
            }
            __Vlabel7: ;
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_x 
            = vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__Vfuncout;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__position 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__enc_pos;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__kp 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_y;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__ff_rate 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_y;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__target 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_y;
        {
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__err 
                = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__target) 
                                     - VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__position)));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__mult 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__kp))), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QQ(48,33, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__err))));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__adj 
                = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__mult, 8U)));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__sum 
                = (vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__ff_rate 
                   + vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__adj);
            if (VL_GTS_III(32, 0U, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__sum)) {
                vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__Vfuncout = 0U;
                goto __Vlabel8;
            } else {
                vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__Vfuncout 
                    = vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__sum;
                goto __Vlabel8;
            }
            __Vlabel8: ;
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_y 
            = vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__Vfuncout;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__position 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__enc_pos;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__kp 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_z;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__ff_rate 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_z;
        vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__target 
            = vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_z;
        {
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__err 
                = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__target) 
                                     - VL_EXTENDS_QI(33,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__position)));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__mult 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__kp))), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QQ(48,33, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__err))));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__adj 
                = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__mult, 8U)));
            vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__sum 
                = (vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__ff_rate 
                   + vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__adj);
            if (VL_GTS_III(32, 0U, vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__sum)) {
                vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__Vfuncout = 0U;
                goto __Vlabel9;
            } else {
                vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__Vfuncout 
                    = vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__sum;
                goto __Vlabel9;
            }
            __Vlabel9: ;
        }
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_z 
            = vlSelf->__Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__Vfuncout;
    } else {
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_x = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_y = 0U;
        vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_z = 0U;
    }
}

void Vspi_full_flow_tick_count_tb___024root___timing_resume(Vspi_full_flow_tick_count_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h335ba313__0.resume("@(posedge spi_full_flow_tick_count_tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vspi_full_flow_tick_count_tb___024root___timing_commit(Vspi_full_flow_tick_count_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h335ba313__0.commit("@(posedge spi_full_flow_tick_count_tb.clk)");
    }
}

void Vspi_full_flow_tick_count_tb___024root___eval_triggers__act(Vspi_full_flow_tick_count_tb___024root* vlSelf);

bool Vspi_full_flow_tick_count_tb___024root___eval_phase__act(Vspi_full_flow_tick_count_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vspi_full_flow_tick_count_tb___024root___eval_triggers__act(vlSelf);
    Vspi_full_flow_tick_count_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vspi_full_flow_tick_count_tb___024root___timing_resume(vlSelf);
        Vspi_full_flow_tick_count_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vspi_full_flow_tick_count_tb___024root___eval_nba(Vspi_full_flow_tick_count_tb___024root* vlSelf);

bool Vspi_full_flow_tick_count_tb___024root___eval_phase__nba(Vspi_full_flow_tick_count_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vspi_full_flow_tick_count_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root___dump_triggers__nba(Vspi_full_flow_tick_count_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root___dump_triggers__act(Vspi_full_flow_tick_count_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_full_flow_tick_count_tb___024root___eval(Vspi_full_flow_tick_count_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vspi_full_flow_tick_count_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vspi_full_flow_tick_count_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/Valdir/Documents/Develop/fpga/tangPrime20k/spi_cnc_controller/tb/tests/spi_full_flow_tick_count_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vspi_full_flow_tick_count_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vspi_full_flow_tick_count_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vspi_full_flow_tick_count_tb___024root___eval_debug_assertions(Vspi_full_flow_tick_count_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
