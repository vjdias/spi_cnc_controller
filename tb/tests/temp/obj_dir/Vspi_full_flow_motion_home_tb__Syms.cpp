// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vspi_full_flow_motion_home_tb__pch.h"
#include "Vspi_full_flow_motion_home_tb.h"
#include "Vspi_full_flow_motion_home_tb___024root.h"
#include "Vspi_full_flow_motion_home_tb_spi_fifo_if.h"
#include "Vspi_full_flow_motion_home_tb_spi_fifo_if__Dc8_DB1.h"
#include "Vspi_full_flow_motion_home_tb_move_queue_add_req_parser_pkg.h"

// FUNCTIONS
Vspi_full_flow_motion_home_tb__Syms::~Vspi_full_flow_motion_home_tb__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vspi_full_flow_motion_home_tb__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vspi_full_flow_motion_home_tb__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vspi_full_flow_motion_home_tb__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vspi_full_flow_motion_home_tb__Syms::Vspi_full_flow_motion_home_tb__Syms(VerilatedContext* contextp, const char* namep, Vspi_full_flow_motion_home_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__move_queue_add_req_parser_pkg{this, Verilated::catName(namep, "move_queue_add_req_parser_pkg")}
    , TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo{this, Verilated::catName(namep, "spi_full_flow_motion_home_tb.rx_fifo")}
    , TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo{this, Verilated::catName(namep, "spi_full_flow_motion_home_tb.tx_fifo")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__move_queue_add_req_parser_pkg = &TOP__move_queue_add_req_parser_pkg;
    TOP.__PVT__spi_full_flow_motion_home_tb__DOT__rx_fifo = &TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo;
    TOP.__PVT__spi_full_flow_motion_home_tb__DOT__tx_fifo = &TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__move_queue_add_req_parser_pkg.__Vconfigure(true);
    TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo.__Vconfigure(true);
    TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo.__Vconfigure(true);
}
