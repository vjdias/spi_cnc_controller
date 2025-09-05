// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspi_full_flow_tick_count_tb.h for the primary calling header

#ifndef VERILATED_VSPI_FULL_FLOW_TICK_COUNT_TB___024ROOT_H_
#define VERILATED_VSPI_FULL_FLOW_TICK_COUNT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vspi_full_flow_tick_count_tb_move_queue_add_req_parser_pkg;
class Vspi_full_flow_tick_count_tb_spi_fifo_if;
class Vspi_full_flow_tick_count_tb_spi_fifo_if__Dc8_DB1;


class Vspi_full_flow_tick_count_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vspi_full_flow_tick_count_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vspi_full_flow_tick_count_tb_move_queue_add_req_parser_pkg* __PVT__move_queue_add_req_parser_pkg;
    Vspi_full_flow_tick_count_tb_spi_fifo_if* __PVT__spi_full_flow_tick_count_tb__DOT__rx_fifo;
    Vspi_full_flow_tick_count_tb_spi_fifo_if__Dc8_DB1* __PVT__spi_full_flow_tick_count_tb__DOT__tx_fifo;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__clk;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__rst_n;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__rd_en;
        CData/*7:0*/ spi_full_flow_tick_count_tb__DOT__rdata;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__irq;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__spi_byte_valid;
        CData/*7:0*/ spi_full_flow_tick_count_tb__DOT__spi_byte;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__overflow_error;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__frame_valid;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__frame_error;
        CData/*7:0*/ spi_full_flow_tick_count_tb__DOT__out_msgType;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__prox_in;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__estop_in;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__tmc_step_x;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__tmc_enn_x;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__tmc_step_y;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__tmc_enn_y;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__tmc_step_z;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__tmc_enn_z;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__tx_busy;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__wr_en;
        CData/*2:0*/ spi_full_flow_tick_count_tb__DOT__waddr;
        CData/*7:0*/ spi_full_flow_tick_count_tb__DOT__wdata;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__prev_x;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__prev_busy_x;
        CData/*1:0*/ spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state;
        CData/*7:0*/ spi_full_flow_tick_count_tb__DOT__u_cons__DOT__unnamedblk1__DOT__data;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__prox_active;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__estop_inhibit;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__sync_start;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__sync_req;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_x;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_y;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_z;
        CData/*2:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_x;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_y;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_z;
        CData/*7:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__current_move_id;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_pending;
        CData/*7:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_frame_id;
        CData/*2:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_axis_mask;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_end_pulse;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled;
        CData/*2:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_pending;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pending;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__o_active_pulse;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__o_inactive_pulse;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__in_meta;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__in_sync;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_active;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__in_meta;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__in_sync;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__debounced_active;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__latched_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_pulse_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__dir_cmd_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__dir_out_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__step_on_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__busy_q;
    };
    struct {
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__done_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__done_s;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_out_s;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__dir_cmd_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__dir_out_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__step_on_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__busy_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__done_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__done_s;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_out_s;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__dir_cmd_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__dir_out_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__step_on_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__busy_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__done_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__done_s;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_out_s;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s;
        CData/*1:0*/ spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick;
        CData/*7:0*/ spi_full_flow_tick_count_tb__DOT__u_tx__DOT__unnamedblk1__DOT__b;
        CData/*0:0*/ spi_full_flow_tick_count_tb__DOT__u_tx__DOT____Vlvbound_h40571ae2__0;
        CData/*1:0*/ spi_full_flow_tick_count_tb__DOT__u_miso__DOT__gap;
        CData/*7:0*/ spi_full_flow_tick_count_tb__DOT__u_miso__DOT__unnamedblk1__DOT__b;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__spi_full_flow_tick_count_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__spi_full_flow_tick_count_tb__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_x;
        SData/*15:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_x;
        SData/*15:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_x;
        SData/*15:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_y;
        SData/*15:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_y;
        SData/*15:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_y;
        SData/*15:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_z;
        SData/*15:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_z;
        SData/*15:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_z;
        SData/*15:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__kp;
        SData/*15:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__kp;
        SData/*15:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__kp;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__start_move_frame;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__queue_status_frame;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__enc_pos;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__enc_vel;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__step_count_x;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__tick_count_while_busy;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__N;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__cycles;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__expected_ticks;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__steps_after;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__ticks_after;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_end_frame;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_cons__DOT__fpga_status_frame;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_x;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_y;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_z;
    };
    struct {
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_x;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_y;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_z;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_x;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_y;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_z;
        VlWide<5>/*159:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_len;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk2__DOT__r;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk6__DOT__r;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__clear_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__period_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__pulse_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__period_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__pulse_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__dir_setup_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__period_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__pulse_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__period_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__pulse_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__dir_setup_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__period_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__pulse_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__period_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__pulse_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__dir_setup_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q;
        VlWide<5>/*159:0*/ spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_tx__DOT__rr_ptr;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick_idx;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_tx__DOT__k;
        IData/*31:0*/ spi_full_flow_tick_count_tb__DOT__u_tx__DOT__cand;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__Vfuncout;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__target;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__ff_rate;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__position;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__adj;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__sum;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__Vfuncout;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__target;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__ff_rate;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__position;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__adj;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__sum;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__Vfuncout;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__target;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__ff_rate;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__position;
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__adj;
    };
    struct {
        IData/*31:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__sum;
        IData/*31:0*/ __VactIterCount;
        VlWide<11>/*335:0*/ spi_full_flow_tick_count_tb__DOT__queue_add_frame;
        VlWide<3>/*71:0*/ spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_home_frame;
        QData/*63:0*/ spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_probe_frame;
        QData/*55:0*/ spi_full_flow_tick_count_tb__DOT__u_cons__DOT__led_ctrl_frame;
        VlWide<23>/*726:0*/ spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx;
        QData/*63:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk1__DOT__r;
        QData/*47:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk3__DOT__r;
        QData/*63:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk4__DOT__r;
        VlWide<3>/*95:0*/ spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r;
        QData/*32:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__err;
        QData/*47:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__109__mult;
        QData/*32:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__err;
        QData/*47:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__110__mult;
        QData/*32:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__err;
        QData/*47:0*/ __Vfunc_spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_pid__DOT__p_control__111__mult;
        VlUnpacked<CData/*0:0*/, 1> spi_full_flow_tick_count_tb__DOT__u_tx__DOT__valid_arr;
        VlUnpacked<VlWide<5>/*159:0*/, 1> spi_full_flow_tick_count_tb__DOT__u_tx__DOT__bits_arr;
        VlUnpacked<CData/*4:0*/, 1> spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_arr;
        VlUnpacked<CData/*0:0*/, 1> spi_full_flow_tick_count_tb__DOT__u_tx__DOT__ready_arr;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlQueue<CData/*7:0*/> spi_full_flow_tick_count_tb__DOT__inq;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h335ba313__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vspi_full_flow_tick_count_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vspi_full_flow_tick_count_tb___024root(Vspi_full_flow_tick_count_tb__Syms* symsp, const char* v__name);
    ~Vspi_full_flow_tick_count_tb___024root();
    VL_UNCOPYABLE(Vspi_full_flow_tick_count_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
