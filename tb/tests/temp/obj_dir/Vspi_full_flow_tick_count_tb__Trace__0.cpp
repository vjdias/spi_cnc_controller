// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_full_flow_tick_count_tb__Syms.h"


void Vspi_full_flow_tick_count_tb___024root__trace_chg_0_sub_0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vspi_full_flow_tick_count_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_chg_0\n"); );
    // Init
    Vspi_full_flow_tick_count_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_full_flow_tick_count_tb___024root*>(voidSelf);
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vspi_full_flow_tick_count_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vspi_full_flow_tick_count_tb___024root__trace_chg_0_sub_0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n));
        bufp->chgIData(oldp+1,(vlSelf->spi_full_flow_tick_count_tb__DOT__enc_pos),32);
        bufp->chgIData(oldp+2,(vlSelf->spi_full_flow_tick_count_tb__DOT__enc_vel),32);
        bufp->chgBit(oldp+3,(vlSelf->spi_full_flow_tick_count_tb__DOT__prox_in));
        bufp->chgBit(oldp+4,(vlSelf->spi_full_flow_tick_count_tb__DOT__estop_in));
        bufp->chgIData(oldp+5,(vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__N),32);
        bufp->chgIData(oldp+6,(vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__cycles),32);
        bufp->chgIData(oldp+7,(vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__expected_ticks),32);
        bufp->chgIData(oldp+8,(vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__steps_after),32);
        bufp->chgIData(oldp+9,(vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__ticks_after),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+10,((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)));
        bufp->chgIData(oldp+11,(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.wr_ptr),32);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.rd_ptr),32);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count),32);
        bufp->chgBit(oldp+14,((0xd2U == vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)));
        bufp->chgBit(oldp+15,((0U == vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)));
        bufp->chgIData(oldp+16,(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.wr_ptr),32);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.rd_ptr),32);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.count),32);
        bufp->chgBit(oldp+19,((0xc8U == vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.count)));
        bufp->chgBit(oldp+20,((0U == vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.count)));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+21,(vlSelf->spi_full_flow_tick_count_tb__DOT__rd_en));
        bufp->chgCData(oldp+22,(vlSelf->spi_full_flow_tick_count_tb__DOT__rdata),8);
        bufp->chgBit(oldp+23,(vlSelf->spi_full_flow_tick_count_tb__DOT__irq));
        bufp->chgBit(oldp+24,(vlSelf->spi_full_flow_tick_count_tb__DOT__spi_byte_valid));
        bufp->chgCData(oldp+25,(vlSelf->spi_full_flow_tick_count_tb__DOT__spi_byte),8);
        bufp->chgBit(oldp+26,(vlSelf->spi_full_flow_tick_count_tb__DOT__overflow_error));
        bufp->chgBit(oldp+27,(vlSelf->spi_full_flow_tick_count_tb__DOT__frame_valid));
        bufp->chgBit(oldp+28,(vlSelf->spi_full_flow_tick_count_tb__DOT__frame_error));
        bufp->chgCData(oldp+29,(vlSelf->spi_full_flow_tick_count_tb__DOT__out_msgType),8);
        bufp->chgIData(oldp+30,(vlSelf->spi_full_flow_tick_count_tb__DOT__start_move_frame),32);
        bufp->chgWData(oldp+31,(vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame),336);
        bufp->chgIData(oldp+42,(vlSelf->spi_full_flow_tick_count_tb__DOT__queue_status_frame),32);
        bufp->chgBit(oldp+43,(vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_step_x));
        bufp->chgBit(oldp+44,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_out_s));
        bufp->chgBit(oldp+45,(vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_enn_x));
        bufp->chgBit(oldp+46,(vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_step_y));
        bufp->chgBit(oldp+47,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_out_s));
        bufp->chgBit(oldp+48,(vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_enn_y));
        bufp->chgBit(oldp+49,(vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_step_z));
        bufp->chgBit(oldp+50,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_out_s));
        bufp->chgBit(oldp+51,(vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_enn_z));
        bufp->chgBit(oldp+52,(vlSelf->spi_full_flow_tick_count_tb__DOT__tx_busy));
        bufp->chgBit(oldp+53,(vlSelf->spi_full_flow_tick_count_tb__DOT__wr_en));
        bufp->chgCData(oldp+54,(vlSelf->spi_full_flow_tick_count_tb__DOT__waddr),3);
        bufp->chgCData(oldp+55,(vlSelf->spi_full_flow_tick_count_tb__DOT__wdata),8);
        bufp->chgIData(oldp+56,(vlSelf->spi_full_flow_tick_count_tb__DOT__step_count_x),32);
        bufp->chgBit(oldp+57,(vlSelf->spi_full_flow_tick_count_tb__DOT__prev_x));
        bufp->chgIData(oldp+58,(vlSelf->spi_full_flow_tick_count_tb__DOT__tick_count_while_busy),32);
        bufp->chgBit(oldp+59,(vlSelf->spi_full_flow_tick_count_tb__DOT__prev_busy_x));
        bufp->chgWData(oldp+60,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_home_frame),72);
        bufp->chgQData(oldp+63,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_probe_frame),64);
        bufp->chgIData(oldp+65,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_end_frame),32);
        bufp->chgIData(oldp+66,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__fpga_status_frame),32);
        bufp->chgQData(oldp+67,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__led_ctrl_frame),56);
        bufp->chgWData(oldp+69,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx),727);
        bufp->chgCData(oldp+92,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__unnamedblk1__DOT__data),8);
        bufp->chgCData(oldp+93,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_miso__DOT__gap),2);
        bufp->chgCData(oldp+94,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_miso__DOT__unnamedblk1__DOT__b),8);
        bufp->chgBit(oldp+95,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__prox_active));
        bufp->chgBit(oldp+96,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__estop_inhibit));
        bufp->chgBit(oldp+97,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q));
        bufp->chgBit(oldp+98,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_pulse_q));
        bufp->chgBit(oldp+99,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__sync_start));
        bufp->chgBit(oldp+100,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__sync_req));
        bufp->chgBit(oldp+101,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled));
        bufp->chgBit(oldp+102,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_x));
        bufp->chgBit(oldp+103,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_y));
        bufp->chgBit(oldp+104,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_z));
        bufp->chgBit(oldp+105,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_end_pulse));
        bufp->chgCData(oldp+106,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask),3);
        bufp->chgIData(oldp+107,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_x),32);
        bufp->chgIData(oldp+108,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_y),32);
        bufp->chgIData(oldp+109,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_z),32);
        bufp->chgIData(oldp+110,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_x),32);
        bufp->chgIData(oldp+111,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_y),32);
        bufp->chgIData(oldp+112,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_z),32);
        bufp->chgSData(oldp+113,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_x),16);
        bufp->chgSData(oldp+114,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_x),16);
        bufp->chgSData(oldp+115,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_x),16);
        bufp->chgSData(oldp+116,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_y),16);
        bufp->chgSData(oldp+117,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_y),16);
        bufp->chgSData(oldp+118,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_y),16);
        bufp->chgSData(oldp+119,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_z),16);
        bufp->chgSData(oldp+120,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_z),16);
        bufp->chgSData(oldp+121,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_z),16);
        bufp->chgBit(oldp+122,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_x));
        bufp->chgBit(oldp+123,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_y));
        bufp->chgBit(oldp+124,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_z));
        bufp->chgCData(oldp+125,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__current_move_id),8);
        bufp->chgBit(oldp+126,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_pending));
        bufp->chgCData(oldp+127,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_frame_id),8);
        bufp->chgCData(oldp+128,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_axis_mask),3);
        bufp->chgBit(oldp+129,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s));
        bufp->chgBit(oldp+130,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s));
        bufp->chgBit(oldp+131,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s));
        bufp->chgCData(oldp+132,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_pending),3);
        bufp->chgBit(oldp+133,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pending));
        bufp->chgWData(oldp+134,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits),160);
        bufp->chgIData(oldp+139,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_len),32);
        bufp->chgBit(oldp+140,((1U & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask))));
        bufp->chgBit(oldp+141,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__done_s));
        bufp->chgIData(oldp+142,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q),32);
        bufp->chgBit(oldp+143,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q));
        bufp->chgIData(oldp+144,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q),32);
        bufp->chgIData(oldp+145,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q),32);
        bufp->chgIData(oldp+146,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q),32);
        bufp->chgBit(oldp+147,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s));
        bufp->chgBit(oldp+148,((1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask) 
                                      >> 1U))));
        bufp->chgBit(oldp+149,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__done_s));
        bufp->chgIData(oldp+150,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q),32);
        bufp->chgBit(oldp+151,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q));
        bufp->chgIData(oldp+152,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q),32);
        bufp->chgIData(oldp+153,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q),32);
        bufp->chgIData(oldp+154,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q),32);
        bufp->chgBit(oldp+155,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s));
        bufp->chgBit(oldp+156,((1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask) 
                                      >> 2U))));
        bufp->chgBit(oldp+157,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__done_s));
        bufp->chgIData(oldp+158,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q),32);
        bufp->chgBit(oldp+159,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q));
        bufp->chgIData(oldp+160,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q),32);
        bufp->chgIData(oldp+161,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q),32);
        bufp->chgIData(oldp+162,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q),32);
        bufp->chgBit(oldp+163,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s));
        bufp->chgBit(oldp+164,(((~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q)) 
                                & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__estop_inhibit))));
        bufp->chgBit(oldp+165,(((~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__estop_inhibit)) 
                                & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q))));
        bufp->chgBit(oldp+166,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__in_meta));
        bufp->chgBit(oldp+167,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__in_sync));
        bufp->chgBit(oldp+168,((1U & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__in_sync)))));
        bufp->chgBit(oldp+169,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__debounced_active));
        bufp->chgBit(oldp+170,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__latched_q));
        bufp->chgIData(oldp+171,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__clear_cnt_q),32);
        bufp->chgBit(oldp+172,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q));
        bufp->chgBit(oldp+173,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__o_active_pulse));
        bufp->chgBit(oldp+174,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__o_inactive_pulse));
        bufp->chgBit(oldp+175,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__in_meta));
        bufp->chgBit(oldp+176,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__in_sync));
        bufp->chgBit(oldp+177,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_active));
        bufp->chgBit(oldp+178,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_q));
        bufp->chgIData(oldp+179,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_cnt_q),32);
        bufp->chgIData(oldp+180,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q),32);
        bufp->chgBit(oldp+181,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q));
        bufp->chgQData(oldp+182,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk1__DOT__r),64);
        bufp->chgIData(oldp+184,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk2__DOT__r),32);
        bufp->chgQData(oldp+185,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk3__DOT__r),48);
        bufp->chgQData(oldp+187,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk4__DOT__r),64);
        bufp->chgWData(oldp+189,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r),96);
        bufp->chgIData(oldp+192,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk6__DOT__r),32);
        bufp->chgCData(oldp+193,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state),2);
        bufp->chgCData(oldp+194,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state),2);
        bufp->chgWData(oldp+195,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift),160);
        bufp->chgIData(oldp+200,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes),32);
        bufp->chgIData(oldp+201,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx),32);
        bufp->chgIData(oldp+202,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__rr_ptr),32);
        bufp->chgBit(oldp+203,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__valid_arr[0]));
        bufp->chgWData(oldp+204,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__bits_arr[0]),160);
        bufp->chgCData(oldp+209,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_arr[0]),5);
        bufp->chgBit(oldp+210,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__ready_arr[0]));
        bufp->chgBit(oldp+211,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick));
        bufp->chgIData(oldp+212,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick_idx),32);
        bufp->chgIData(oldp+213,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__k),32);
        bufp->chgIData(oldp+214,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__cand),32);
        bufp->chgCData(oldp+215,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__unnamedblk1__DOT__b),8);
        bufp->chgBit(oldp+216,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__ready_arr
                               [0U]));
    }
    bufp->chgBit(oldp+217,(vlSelf->spi_full_flow_tick_count_tb__DOT__clk));
    bufp->chgIData(oldp+218,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_x),32);
    bufp->chgIData(oldp+219,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_y),32);
    bufp->chgIData(oldp+220,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_z),32);
}

void Vspi_full_flow_tick_count_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_cleanup\n"); );
    // Init
    Vspi_full_flow_tick_count_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_full_flow_tick_count_tb___024root*>(voidSelf);
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
