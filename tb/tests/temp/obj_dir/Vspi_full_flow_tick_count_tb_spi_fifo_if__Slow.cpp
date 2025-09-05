// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_full_flow_tick_count_tb.h for the primary calling header

#include "Vspi_full_flow_tick_count_tb__pch.h"
#include "Vspi_full_flow_tick_count_tb__Syms.h"
#include "Vspi_full_flow_tick_count_tb_spi_fifo_if.h"

void Vspi_full_flow_tick_count_tb_spi_fifo_if___ctor_var_reset(Vspi_full_flow_tick_count_tb_spi_fifo_if* vlSelf);

Vspi_full_flow_tick_count_tb_spi_fifo_if::Vspi_full_flow_tick_count_tb_spi_fifo_if(Vspi_full_flow_tick_count_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vspi_full_flow_tick_count_tb_spi_fifo_if___ctor_var_reset(this);
}

void Vspi_full_flow_tick_count_tb_spi_fifo_if::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vspi_full_flow_tick_count_tb_spi_fifo_if::~Vspi_full_flow_tick_count_tb_spi_fifo_if() {
}
