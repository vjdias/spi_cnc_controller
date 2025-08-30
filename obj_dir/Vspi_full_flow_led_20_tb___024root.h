// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspi_full_flow_led_20_tb.h for the primary calling header

#ifndef VERILATED_VSPI_FULL_FLOW_LED_20_TB___024ROOT_H_
#define VERILATED_VSPI_FULL_FLOW_LED_20_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vspi_full_flow_led_20_tb_move_queue_add_req_parser_pkg;
class Vspi_full_flow_led_20_tb_spi_fifo_if;
class Vspi_full_flow_led_20_tb_spi_fifo_if__Dc8_DB1;


class Vspi_full_flow_led_20_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vspi_full_flow_led_20_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vspi_full_flow_led_20_tb_move_queue_add_req_parser_pkg* __PVT__move_queue_add_req_parser_pkg;
    Vspi_full_flow_led_20_tb_spi_fifo_if* __PVT__spi_full_flow_led_20_tb__DOT__rx_fifo;
    Vspi_full_flow_led_20_tb_spi_fifo_if__Dc8_DB1* __PVT__spi_full_flow_led_20_tb__DOT__tx_fifo;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ spi_full_flow_led_20_tb__DOT__clk;
    CData/*0:0*/ spi_full_flow_led_20_tb__DOT__rst_n;
    CData/*0:0*/ spi_full_flow_led_20_tb__DOT__rd_en;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT__rdata;
    CData/*0:0*/ spi_full_flow_led_20_tb__DOT__irq;
    CData/*0:0*/ spi_full_flow_led_20_tb__DOT__spi_byte_valid;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT__spi_byte;
    CData/*0:0*/ spi_full_flow_led_20_tb__DOT__frame_valid;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT__out_msgType;
    CData/*0:0*/ spi_full_flow_led_20_tb__DOT__resp_valid;
    CData/*0:0*/ spi_full_flow_led_20_tb__DOT__tx_busy;
    CData/*0:0*/ spi_full_flow_led_20_tb__DOT__wr_en;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT__wdata;
    CData/*0:0*/ spi_full_flow_led_20_tb__DOT__prev_busy;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT____Vlvbound_h217a7026__0;
    CData/*1:0*/ spi_full_flow_led_20_tb__DOT__u_rxbridge__DOT__state;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT__u_cons__DOT__unnamedblk1__DOT__data;
    CData/*5:0*/ spi_full_flow_led_20_tb__DOT__u_led__DOT__leds_r;
    CData/*0:0*/ spi_full_flow_led_20_tb__DOT__u_led__DOT__pending;
    CData/*1:0*/ spi_full_flow_led_20_tb__DOT__u_tx__DOT__state;
    CData/*0:0*/ spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT__u_tx__DOT__unnamedblk4__DOT__b;
    CData/*0:0*/ spi_full_flow_led_20_tb__DOT__u_tx__DOT____Vlvbound_h40571ae2__0;
    CData/*1:0*/ spi_full_flow_led_20_tb__DOT__u_miso__DOT__gap;
    CData/*7:0*/ spi_full_flow_led_20_tb__DOT__u_miso__DOT__unnamedblk1__DOT__b;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__spi_full_flow_led_20_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__spi_full_flow_led_20_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__resp_byte_count;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__cycle_ctr;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__busy_rise_count;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__busy_cycle_count;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__max_rx_occupancy;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__max_tx_occupancy;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__tx_pause_cycles;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__messages_received;
    VlWide<5>/*159:0*/ spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_bits;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__u_led__DOT__pend_len;
    VlWide<5>/*159:0*/ spi_full_flow_led_20_tb__DOT__u_tx__DOT__shift;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_bytes;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__u_tx__DOT__idx;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__u_tx__DOT__pick_idx;
    IData/*31:0*/ spi_full_flow_led_20_tb__DOT__u_tx__DOT__unnamedblk2__DOT__unnamedblk3__DOT__cand;
    IData/*31:0*/ __VactIterCount;
    QData/*55:0*/ spi_full_flow_led_20_tb__DOT__led_ctrl_frame;
    VlWide<23>/*726:0*/ spi_full_flow_led_20_tb__DOT__u_cons__DOT__ctx;
    QData/*55:0*/ spi_full_flow_led_20_tb__DOT__u_led__DOT__unnamedblk1__DOT__r;
    VlUnpacked<CData/*7:0*/, 140> spi_full_flow_led_20_tb__DOT__resp_bytes;
    VlUnpacked<CData/*7:0*/, 20> spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__masks;
    VlUnpacked<CData/*7:0*/, 20> spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__vals;
    VlUnpacked<CData/*7:0*/, 20> spi_full_flow_led_20_tb__DOT__unnamedblk3__DOT__frameIds;
    VlUnpacked<CData/*0:0*/, 1> spi_full_flow_led_20_tb__DOT__u_tx__DOT__valid_arr;
    VlUnpacked<VlWide<5>/*159:0*/, 1> spi_full_flow_led_20_tb__DOT__u_tx__DOT__bits_arr;
    VlUnpacked<CData/*4:0*/, 1> spi_full_flow_led_20_tb__DOT__u_tx__DOT__len_arr;
    VlUnpacked<CData/*0:0*/, 1> spi_full_flow_led_20_tb__DOT__u_tx__DOT__ready_arr;
    VlQueue<CData/*7:0*/> spi_full_flow_led_20_tb__DOT__inq;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9b9f22fe__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vspi_full_flow_led_20_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vspi_full_flow_led_20_tb___024root(Vspi_full_flow_led_20_tb__Syms* symsp, const char* v__name);
    ~Vspi_full_flow_led_20_tb___024root();
    VL_UNCOPYABLE(Vspi_full_flow_led_20_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
