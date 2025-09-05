// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLJ12A3_PROXIMITY_DRIVER_TB__SYMS_H_
#define VERILATED_VLJ12A3_PROXIMITY_DRIVER_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vlj12a3_proximity_driver_tb.h"

// INCLUDE MODULE CLASSES
#include "Vlj12a3_proximity_driver_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vlj12a3_proximity_driver_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vlj12a3_proximity_driver_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vlj12a3_proximity_driver_tb___024root TOP;

    // CONSTRUCTORS
    Vlj12a3_proximity_driver_tb__Syms(VerilatedContext* contextp, const char* namep, Vlj12a3_proximity_driver_tb* modelp);
    ~Vlj12a3_proximity_driver_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
