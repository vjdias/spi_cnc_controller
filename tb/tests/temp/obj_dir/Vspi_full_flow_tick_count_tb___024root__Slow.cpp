// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_full_flow_tick_count_tb.h for the primary calling header

#include "Vspi_full_flow_tick_count_tb__pch.h"
#include "Vspi_full_flow_tick_count_tb__Syms.h"
#include "Vspi_full_flow_tick_count_tb___024root.h"

void Vspi_full_flow_tick_count_tb___024root___ctor_var_reset(Vspi_full_flow_tick_count_tb___024root* vlSelf);

Vspi_full_flow_tick_count_tb___024root::Vspi_full_flow_tick_count_tb___024root(Vspi_full_flow_tick_count_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vspi_full_flow_tick_count_tb___024root___ctor_var_reset(this);
}

void Vspi_full_flow_tick_count_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vspi_full_flow_tick_count_tb___024root::~Vspi_full_flow_tick_count_tb___024root() {
}
