// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vspi_full_flow_tick_count_tb__pch.h"
#include "Vspi_full_flow_tick_count_tb.h"
#include "Vspi_full_flow_tick_count_tb___024root.h"
#include "Vspi_full_flow_tick_count_tb_spi_fifo_if.h"
#include "Vspi_full_flow_tick_count_tb_spi_fifo_if__Dc8_DB1.h"
#include "Vspi_full_flow_tick_count_tb_move_queue_add_req_parser_pkg.h"

// FUNCTIONS
Vspi_full_flow_tick_count_tb__Syms::~Vspi_full_flow_tick_count_tb__Syms()
{
}

Vspi_full_flow_tick_count_tb__Syms::Vspi_full_flow_tick_count_tb__Syms(VerilatedContext* contextp, const char* namep, Vspi_full_flow_tick_count_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__move_queue_add_req_parser_pkg{this, Verilated::catName(namep, "move_queue_add_req_parser_pkg")}
    , TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo{this, Verilated::catName(namep, "spi_full_flow_tick_count_tb.rx_fifo")}
    , TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo{this, Verilated::catName(namep, "spi_full_flow_tick_count_tb.tx_fifo")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__move_queue_add_req_parser_pkg = &TOP__move_queue_add_req_parser_pkg;
    TOP.__PVT__spi_full_flow_tick_count_tb__DOT__rx_fifo = &TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo;
    TOP.__PVT__spi_full_flow_tick_count_tb__DOT__tx_fifo = &TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__move_queue_add_req_parser_pkg.__Vconfigure(true);
    TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.__Vconfigure(true);
    TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.__Vconfigure(true);
}
