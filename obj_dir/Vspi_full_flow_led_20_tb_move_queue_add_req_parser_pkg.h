// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspi_full_flow_led_20_tb.h for the primary calling header

#ifndef VERILATED_VSPI_FULL_FLOW_LED_20_TB_MOVE_QUEUE_ADD_REQ_PARSER_PKG_H_
#define VERILATED_VSPI_FULL_FLOW_LED_20_TB_MOVE_QUEUE_ADD_REQ_PARSER_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vspi_full_flow_led_20_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vspi_full_flow_led_20_tb_move_queue_add_req_parser_pkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __Vlvbound_heeac623e__0;

    // INTERNAL VARIABLES
    Vspi_full_flow_led_20_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vspi_full_flow_led_20_tb_move_queue_add_req_parser_pkg(Vspi_full_flow_led_20_tb__Syms* symsp, const char* v__name);
    ~Vspi_full_flow_led_20_tb_move_queue_add_req_parser_pkg();
    VL_UNCOPYABLE(Vspi_full_flow_led_20_tb_move_queue_add_req_parser_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
