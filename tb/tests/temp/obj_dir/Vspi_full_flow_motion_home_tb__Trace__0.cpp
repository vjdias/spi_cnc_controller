// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_full_flow_motion_home_tb__Syms.h"


void Vspi_full_flow_motion_home_tb___024root__trace_chg_0_sub_0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vspi_full_flow_motion_home_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_chg_0\n"); );
    // Init
    Vspi_full_flow_motion_home_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_full_flow_motion_home_tb___024root*>(voidSelf);
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vspi_full_flow_motion_home_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vspi_full_flow_motion_home_tb___024root__trace_chg_0_sub_0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->spi_full_flow_motion_home_tb__DOT__rst_n));
        bufp->chgIData(oldp+1,(vlSelf->spi_full_flow_motion_home_tb__DOT__enc_pos),32);
        bufp->chgIData(oldp+2,(vlSelf->spi_full_flow_motion_home_tb__DOT__enc_vel),32);
        bufp->chgBit(oldp+3,(vlSelf->spi_full_flow_motion_home_tb__DOT__prox_in));
        bufp->chgBit(oldp+4,(vlSelf->spi_full_flow_motion_home_tb__DOT__estop_in));
        bufp->chgIData(oldp+5,(vlSelf->spi_full_flow_motion_home_tb__DOT__unnamedblk5__DOT__cycles),32);
        bufp->chgIData(oldp+6,(vlSelf->spi_full_flow_motion_home_tb__DOT__unnamedblk5__DOT__idx),32);
        bufp->chgIData(oldp+7,(vlSelf->spi_full_flow_motion_home_tb__DOT__unnamedblk5__DOT__prev_cnt),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+8,((0xa8U < vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo.count)));
        bufp->chgIData(oldp+9,(vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo.wr_ptr),32);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo.rd_ptr),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo.count),32);
        bufp->chgBit(oldp+12,((0xd2U == vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo.count)));
        bufp->chgBit(oldp+13,((0U == vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo.count)));
        bufp->chgIData(oldp+14,(vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo.wr_ptr),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo.rd_ptr),32);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo.count),32);
        bufp->chgBit(oldp+17,((0xc8U == vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo.count)));
        bufp->chgBit(oldp+18,((0U == vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo.count)));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+19,(vlSelf->spi_full_flow_motion_home_tb__DOT__rd_en));
        bufp->chgCData(oldp+20,(vlSelf->spi_full_flow_motion_home_tb__DOT__rdata),8);
        bufp->chgBit(oldp+21,(vlSelf->spi_full_flow_motion_home_tb__DOT__irq));
        bufp->chgBit(oldp+22,(vlSelf->spi_full_flow_motion_home_tb__DOT__spi_byte_valid));
        bufp->chgCData(oldp+23,(vlSelf->spi_full_flow_motion_home_tb__DOT__spi_byte),8);
        bufp->chgBit(oldp+24,(vlSelf->spi_full_flow_motion_home_tb__DOT__overflow_error));
        bufp->chgBit(oldp+25,(vlSelf->spi_full_flow_motion_home_tb__DOT__frame_valid));
        bufp->chgBit(oldp+26,(vlSelf->spi_full_flow_motion_home_tb__DOT__frame_error));
        bufp->chgCData(oldp+27,(vlSelf->spi_full_flow_motion_home_tb__DOT__out_msgType),8);
        bufp->chgIData(oldp+28,(vlSelf->spi_full_flow_motion_home_tb__DOT__start_move_frame),32);
        bufp->chgWData(oldp+29,(vlSelf->spi_full_flow_motion_home_tb__DOT__move_home_frame),72);
        bufp->chgBit(oldp+32,(vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_step_x));
        bufp->chgBit(oldp+33,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_out_s));
        bufp->chgBit(oldp+34,(vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_enn_x));
        bufp->chgBit(oldp+35,(vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_step_y));
        bufp->chgBit(oldp+36,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_out_s));
        bufp->chgBit(oldp+37,(vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_enn_y));
        bufp->chgBit(oldp+38,(vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_step_z));
        bufp->chgBit(oldp+39,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_out_s));
        bufp->chgBit(oldp+40,(vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_enn_z));
        bufp->chgBit(oldp+41,(vlSelf->spi_full_flow_motion_home_tb__DOT__tx_busy));
        bufp->chgBit(oldp+42,(vlSelf->spi_full_flow_motion_home_tb__DOT__wr_en));
        bufp->chgCData(oldp+43,(vlSelf->spi_full_flow_motion_home_tb__DOT__waddr),3);
        bufp->chgCData(oldp+44,(vlSelf->spi_full_flow_motion_home_tb__DOT__wdata),8);
        bufp->chgCData(oldp+45,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[0]),8);
        bufp->chgCData(oldp+46,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[1]),8);
        bufp->chgCData(oldp+47,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[2]),8);
        bufp->chgCData(oldp+48,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[3]),8);
        bufp->chgCData(oldp+49,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[4]),8);
        bufp->chgCData(oldp+50,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[5]),8);
        bufp->chgCData(oldp+51,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[6]),8);
        bufp->chgCData(oldp+52,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[7]),8);
        bufp->chgCData(oldp+53,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[8]),8);
        bufp->chgCData(oldp+54,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[9]),8);
        bufp->chgCData(oldp+55,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[10]),8);
        bufp->chgCData(oldp+56,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[11]),8);
        bufp->chgCData(oldp+57,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[12]),8);
        bufp->chgCData(oldp+58,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[13]),8);
        bufp->chgCData(oldp+59,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[14]),8);
        bufp->chgCData(oldp+60,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[15]),8);
        bufp->chgCData(oldp+61,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[16]),8);
        bufp->chgCData(oldp+62,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[17]),8);
        bufp->chgCData(oldp+63,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[18]),8);
        bufp->chgCData(oldp+64,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[19]),8);
        bufp->chgCData(oldp+65,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[20]),8);
        bufp->chgCData(oldp+66,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[21]),8);
        bufp->chgCData(oldp+67,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[22]),8);
        bufp->chgCData(oldp+68,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[23]),8);
        bufp->chgCData(oldp+69,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[24]),8);
        bufp->chgCData(oldp+70,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[25]),8);
        bufp->chgCData(oldp+71,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[26]),8);
        bufp->chgCData(oldp+72,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[27]),8);
        bufp->chgCData(oldp+73,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[28]),8);
        bufp->chgCData(oldp+74,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[29]),8);
        bufp->chgCData(oldp+75,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[30]),8);
        bufp->chgCData(oldp+76,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[31]),8);
        bufp->chgIData(oldp+77,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_byte_count),32);
        bufp->chgIData(oldp+78,(vlSelf->spi_full_flow_motion_home_tb__DOT__step_count_x),32);
        bufp->chgBit(oldp+79,(vlSelf->spi_full_flow_motion_home_tb__DOT__prev_step_x));
        bufp->chgQData(oldp+80,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__move_probe_frame),64);
        bufp->chgWData(oldp+82,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__queue_add_frame),336);
        bufp->chgIData(oldp+93,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__move_end_frame),32);
        bufp->chgIData(oldp+94,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__queue_status_frame),32);
        bufp->chgIData(oldp+95,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__fpga_status_frame),32);
        bufp->chgQData(oldp+96,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__led_ctrl_frame),56);
        bufp->chgWData(oldp+98,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__ctx),727);
        bufp->chgCData(oldp+121,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__unnamedblk1__DOT__data),8);
        bufp->chgCData(oldp+122,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_miso__DOT__gap),2);
        bufp->chgCData(oldp+123,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_miso__DOT__unnamedblk1__DOT__b),8);
        bufp->chgBit(oldp+124,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__prox_active));
        bufp->chgBit(oldp+125,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__estop_inhibit));
        bufp->chgBit(oldp+126,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q));
        bufp->chgBit(oldp+127,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__pid_pulse_q));
        bufp->chgBit(oldp+128,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__sync_start));
        bufp->chgBit(oldp+129,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__sync_req));
        bufp->chgBit(oldp+130,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__move_enabled));
        bufp->chgBit(oldp+131,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__start_x));
        bufp->chgBit(oldp+132,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__start_y));
        bufp->chgBit(oldp+133,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__start_z));
        bufp->chgBit(oldp+134,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__move_end_pulse));
        bufp->chgCData(oldp+135,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__dir_mask),3);
        bufp->chgIData(oldp+136,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__step_x),32);
        bufp->chgIData(oldp+137,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__step_y),32);
        bufp->chgIData(oldp+138,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__step_z),32);
        bufp->chgIData(oldp+139,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ff_rate_x),32);
        bufp->chgIData(oldp+140,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ff_rate_y),32);
        bufp->chgIData(oldp+141,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ff_rate_z),32);
        bufp->chgSData(oldp+142,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kp_x),16);
        bufp->chgSData(oldp+143,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ki_x),16);
        bufp->chgSData(oldp+144,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kd_x),16);
        bufp->chgSData(oldp+145,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kp_y),16);
        bufp->chgSData(oldp+146,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ki_y),16);
        bufp->chgSData(oldp+147,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kd_y),16);
        bufp->chgSData(oldp+148,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kp_z),16);
        bufp->chgSData(oldp+149,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ki_z),16);
        bufp->chgSData(oldp+150,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kd_z),16);
        bufp->chgBit(oldp+151,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__cont_x));
        bufp->chgBit(oldp+152,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__cont_y));
        bufp->chgBit(oldp+153,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__cont_z));
        bufp->chgCData(oldp+154,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__current_move_id),8);
        bufp->chgBit(oldp+155,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__home_pending));
        bufp->chgCData(oldp+156,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__home_frame_id),8);
        bufp->chgCData(oldp+157,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__home_axis_mask),3);
        bufp->chgBit(oldp+158,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s));
        bufp->chgBit(oldp+159,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s));
        bufp->chgBit(oldp+160,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s));
        bufp->chgCData(oldp+161,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__start_pending),3);
        bufp->chgBit(oldp+162,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pending));
        bufp->chgWData(oldp+163,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pend_bits),160);
        bufp->chgIData(oldp+168,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pend_len),32);
        bufp->chgBit(oldp+169,((1U & (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__dir_mask))));
        bufp->chgBit(oldp+170,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__done_s));
        bufp->chgIData(oldp+171,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q),32);
        bufp->chgBit(oldp+172,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q));
        bufp->chgIData(oldp+173,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q),32);
        bufp->chgIData(oldp+174,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q),32);
        bufp->chgIData(oldp+175,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q),32);
        bufp->chgBit(oldp+176,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s));
        bufp->chgBit(oldp+177,((1U & ((IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__dir_mask) 
                                      >> 1U))));
        bufp->chgBit(oldp+178,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__done_s));
        bufp->chgIData(oldp+179,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q),32);
        bufp->chgBit(oldp+180,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q));
        bufp->chgIData(oldp+181,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q),32);
        bufp->chgIData(oldp+182,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q),32);
        bufp->chgIData(oldp+183,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q),32);
        bufp->chgBit(oldp+184,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s));
        bufp->chgBit(oldp+185,((1U & ((IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__dir_mask) 
                                      >> 2U))));
        bufp->chgBit(oldp+186,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__done_s));
        bufp->chgIData(oldp+187,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q),32);
        bufp->chgBit(oldp+188,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q));
        bufp->chgIData(oldp+189,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q),32);
        bufp->chgIData(oldp+190,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q),32);
        bufp->chgIData(oldp+191,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q),32);
        bufp->chgBit(oldp+192,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s));
        bufp->chgBit(oldp+193,(((~ (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q)) 
                                & (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__estop_inhibit))));
        bufp->chgBit(oldp+194,(((~ (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__estop_inhibit)) 
                                & (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q))));
        bufp->chgBit(oldp+195,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__in_meta));
        bufp->chgBit(oldp+196,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__in_sync));
        bufp->chgBit(oldp+197,((1U & (~ (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__in_sync)))));
        bufp->chgBit(oldp+198,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__debounced_active));
        bufp->chgBit(oldp+199,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__latched_q));
        bufp->chgIData(oldp+200,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__clear_cnt_q),32);
        bufp->chgBit(oldp+201,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q));
        bufp->chgBit(oldp+202,(((~ (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_q)) 
                                & (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_active))));
        bufp->chgBit(oldp+203,(((~ (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_active)) 
                                & (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_q))));
        bufp->chgBit(oldp+204,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__in_meta));
        bufp->chgBit(oldp+205,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__in_sync));
        bufp->chgBit(oldp+206,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_active));
        bufp->chgBit(oldp+207,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_q));
        bufp->chgIData(oldp+208,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__tick_cnt_q),32);
        bufp->chgIData(oldp+209,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q),32);
        bufp->chgBit(oldp+210,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q));
        bufp->chgQData(oldp+211,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk1__DOT__r),64);
        bufp->chgIData(oldp+213,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk2__DOT__r),32);
        bufp->chgQData(oldp+214,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk3__DOT__r),48);
        bufp->chgQData(oldp+216,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk4__DOT__r),64);
        bufp->chgWData(oldp+218,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r),96);
        bufp->chgIData(oldp+221,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk6__DOT__r),32);
        bufp->chgCData(oldp+222,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_rxbridge__DOT__state),2);
        bufp->chgCData(oldp+223,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__state),2);
        bufp->chgWData(oldp+224,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__shift),160);
        bufp->chgIData(oldp+229,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__len_bytes),32);
        bufp->chgIData(oldp+230,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__idx),32);
        bufp->chgIData(oldp+231,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__rr_ptr),32);
        bufp->chgBit(oldp+232,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__valid_arr[0]));
        bufp->chgWData(oldp+233,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__bits_arr[0]),160);
        bufp->chgCData(oldp+238,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__len_arr[0]),5);
        bufp->chgBit(oldp+239,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__ready_arr[0]));
        bufp->chgBit(oldp+240,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__pick));
        bufp->chgIData(oldp+241,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__pick_idx),32);
        bufp->chgIData(oldp+242,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__k),32);
        bufp->chgIData(oldp+243,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__cand),32);
        bufp->chgCData(oldp+244,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__unnamedblk1__DOT__b),8);
        bufp->chgBit(oldp+245,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__ready_arr
                               [0U]));
    }
    bufp->chgBit(oldp+246,(vlSelf->spi_full_flow_motion_home_tb__DOT__clk));
    bufp->chgIData(oldp+247,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_x),32);
    bufp->chgIData(oldp+248,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_y),32);
    bufp->chgIData(oldp+249,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_z),32);
}

void Vspi_full_flow_motion_home_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_cleanup\n"); );
    // Init
    Vspi_full_flow_motion_home_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_full_flow_motion_home_tb___024root*>(voidSelf);
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
