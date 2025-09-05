// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSPI_FULL_FLOW_MOTION_HOME_TB__SYMS_H_
#define VERILATED_VSPI_FULL_FLOW_MOTION_HOME_TB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vspi_full_flow_motion_home_tb.h"

// INCLUDE MODULE CLASSES
#include "Vspi_full_flow_motion_home_tb___024root.h"
#include "Vspi_full_flow_motion_home_tb_spi_fifo_if.h"
#include "Vspi_full_flow_motion_home_tb_spi_fifo_if__Dc8_DB1.h"
#include "Vspi_full_flow_motion_home_tb_move_queue_add_req_parser_pkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vspi_full_flow_motion_home_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vspi_full_flow_motion_home_tb* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vspi_full_flow_motion_home_tb___024root TOP;
    Vspi_full_flow_motion_home_tb_move_queue_add_req_parser_pkg TOP__move_queue_add_req_parser_pkg;
    Vspi_full_flow_motion_home_tb_spi_fifo_if TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo;
    Vspi_full_flow_motion_home_tb_spi_fifo_if__Dc8_DB1 TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo;

    // CONSTRUCTORS
    Vspi_full_flow_motion_home_tb__Syms(VerilatedContext* contextp, const char* namep, Vspi_full_flow_motion_home_tb* modelp);
    ~Vspi_full_flow_motion_home_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
