// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vlj12a3_proximity_driver_tb__pch.h"
#include "Vlj12a3_proximity_driver_tb.h"
#include "Vlj12a3_proximity_driver_tb___024root.h"

// FUNCTIONS
Vlj12a3_proximity_driver_tb__Syms::~Vlj12a3_proximity_driver_tb__Syms()
{
}

Vlj12a3_proximity_driver_tb__Syms::Vlj12a3_proximity_driver_tb__Syms(VerilatedContext* contextp, const char* namep, Vlj12a3_proximity_driver_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
