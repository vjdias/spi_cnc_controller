// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlj12a3_proximity_driver_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vlj12a3_proximity_driver_tb::Vlj12a3_proximity_driver_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlj12a3_proximity_driver_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlj12a3_proximity_driver_tb::Vlj12a3_proximity_driver_tb(const char* _vcname__)
    : Vlj12a3_proximity_driver_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlj12a3_proximity_driver_tb::~Vlj12a3_proximity_driver_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlj12a3_proximity_driver_tb___024root___eval_debug_assertions(Vlj12a3_proximity_driver_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vlj12a3_proximity_driver_tb___024root___eval_static(Vlj12a3_proximity_driver_tb___024root* vlSelf);
void Vlj12a3_proximity_driver_tb___024root___eval_initial(Vlj12a3_proximity_driver_tb___024root* vlSelf);
void Vlj12a3_proximity_driver_tb___024root___eval_settle(Vlj12a3_proximity_driver_tb___024root* vlSelf);
void Vlj12a3_proximity_driver_tb___024root___eval(Vlj12a3_proximity_driver_tb___024root* vlSelf);

void Vlj12a3_proximity_driver_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlj12a3_proximity_driver_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlj12a3_proximity_driver_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlj12a3_proximity_driver_tb___024root___eval_static(&(vlSymsp->TOP));
        Vlj12a3_proximity_driver_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vlj12a3_proximity_driver_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlj12a3_proximity_driver_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vlj12a3_proximity_driver_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vlj12a3_proximity_driver_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vlj12a3_proximity_driver_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlj12a3_proximity_driver_tb___024root___eval_final(Vlj12a3_proximity_driver_tb___024root* vlSelf);

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb::final() {
    Vlj12a3_proximity_driver_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlj12a3_proximity_driver_tb::hierName() const { return vlSymsp->name(); }
const char* Vlj12a3_proximity_driver_tb::modelName() const { return "Vlj12a3_proximity_driver_tb"; }
unsigned Vlj12a3_proximity_driver_tb::threads() const { return 1; }
void Vlj12a3_proximity_driver_tb::prepareClone() const { contextp()->prepareClone(); }
void Vlj12a3_proximity_driver_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vlj12a3_proximity_driver_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vlj12a3_proximity_driver_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vlj12a3_proximity_driver_tb___024root__trace_init_top(Vlj12a3_proximity_driver_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlj12a3_proximity_driver_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlj12a3_proximity_driver_tb___024root*>(voidSelf);
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vlj12a3_proximity_driver_tb___024root__trace_decl_types(tracep);
    Vlj12a3_proximity_driver_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root__trace_register(Vlj12a3_proximity_driver_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vlj12a3_proximity_driver_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vlj12a3_proximity_driver_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
