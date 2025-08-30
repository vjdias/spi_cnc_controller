// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vspi_full_flow_led_20_tb__pch.h"

//============================================================
// Constructors

Vspi_full_flow_led_20_tb::Vspi_full_flow_led_20_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vspi_full_flow_led_20_tb__Syms(contextp(), _vcname__, this)}
    , __PVT__move_queue_add_req_parser_pkg{vlSymsp->TOP.__PVT__move_queue_add_req_parser_pkg}
    , __PVT__spi_full_flow_led_20_tb__DOT__rx_fifo{vlSymsp->TOP.__PVT__spi_full_flow_led_20_tb__DOT__rx_fifo}
    , __PVT__spi_full_flow_led_20_tb__DOT__tx_fifo{vlSymsp->TOP.__PVT__spi_full_flow_led_20_tb__DOT__tx_fifo}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vspi_full_flow_led_20_tb::Vspi_full_flow_led_20_tb(const char* _vcname__)
    : Vspi_full_flow_led_20_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vspi_full_flow_led_20_tb::~Vspi_full_flow_led_20_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vspi_full_flow_led_20_tb___024root___eval_debug_assertions(Vspi_full_flow_led_20_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vspi_full_flow_led_20_tb___024root___eval_static(Vspi_full_flow_led_20_tb___024root* vlSelf);
void Vspi_full_flow_led_20_tb___024root___eval_initial(Vspi_full_flow_led_20_tb___024root* vlSelf);
void Vspi_full_flow_led_20_tb___024root___eval_settle(Vspi_full_flow_led_20_tb___024root* vlSelf);
void Vspi_full_flow_led_20_tb___024root___eval(Vspi_full_flow_led_20_tb___024root* vlSelf);

void Vspi_full_flow_led_20_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vspi_full_flow_led_20_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vspi_full_flow_led_20_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vspi_full_flow_led_20_tb___024root___eval_static(&(vlSymsp->TOP));
        Vspi_full_flow_led_20_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vspi_full_flow_led_20_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vspi_full_flow_led_20_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vspi_full_flow_led_20_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vspi_full_flow_led_20_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vspi_full_flow_led_20_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vspi_full_flow_led_20_tb___024root___eval_final(Vspi_full_flow_led_20_tb___024root* vlSelf);

VL_ATTR_COLD void Vspi_full_flow_led_20_tb::final() {
    Vspi_full_flow_led_20_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vspi_full_flow_led_20_tb::hierName() const { return vlSymsp->name(); }
const char* Vspi_full_flow_led_20_tb::modelName() const { return "Vspi_full_flow_led_20_tb"; }
unsigned Vspi_full_flow_led_20_tb::threads() const { return 1; }
void Vspi_full_flow_led_20_tb::prepareClone() const { contextp()->prepareClone(); }
void Vspi_full_flow_led_20_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vspi_full_flow_led_20_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vspi_full_flow_led_20_tb::trace()' called on model that was Verilated without --trace option");
}
