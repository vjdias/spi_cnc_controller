// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vspi_full_flow_tick_count_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vspi_full_flow_tick_count_tb::Vspi_full_flow_tick_count_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vspi_full_flow_tick_count_tb__Syms(contextp(), _vcname__, this)}
    , __PVT__move_queue_add_req_parser_pkg{vlSymsp->TOP.__PVT__move_queue_add_req_parser_pkg}
    , __PVT__spi_full_flow_tick_count_tb__DOT__rx_fifo{vlSymsp->TOP.__PVT__spi_full_flow_tick_count_tb__DOT__rx_fifo}
    , __PVT__spi_full_flow_tick_count_tb__DOT__tx_fifo{vlSymsp->TOP.__PVT__spi_full_flow_tick_count_tb__DOT__tx_fifo}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vspi_full_flow_tick_count_tb::Vspi_full_flow_tick_count_tb(const char* _vcname__)
    : Vspi_full_flow_tick_count_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vspi_full_flow_tick_count_tb::~Vspi_full_flow_tick_count_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vspi_full_flow_tick_count_tb___024root___eval_debug_assertions(Vspi_full_flow_tick_count_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vspi_full_flow_tick_count_tb___024root___eval_static(Vspi_full_flow_tick_count_tb___024root* vlSelf);
void Vspi_full_flow_tick_count_tb___024root___eval_initial(Vspi_full_flow_tick_count_tb___024root* vlSelf);
void Vspi_full_flow_tick_count_tb___024root___eval_settle(Vspi_full_flow_tick_count_tb___024root* vlSelf);
void Vspi_full_flow_tick_count_tb___024root___eval(Vspi_full_flow_tick_count_tb___024root* vlSelf);

void Vspi_full_flow_tick_count_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vspi_full_flow_tick_count_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vspi_full_flow_tick_count_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vspi_full_flow_tick_count_tb___024root___eval_static(&(vlSymsp->TOP));
        Vspi_full_flow_tick_count_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vspi_full_flow_tick_count_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vspi_full_flow_tick_count_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vspi_full_flow_tick_count_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vspi_full_flow_tick_count_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vspi_full_flow_tick_count_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vspi_full_flow_tick_count_tb___024root___eval_final(Vspi_full_flow_tick_count_tb___024root* vlSelf);

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb::final() {
    Vspi_full_flow_tick_count_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vspi_full_flow_tick_count_tb::hierName() const { return vlSymsp->name(); }
const char* Vspi_full_flow_tick_count_tb::modelName() const { return "Vspi_full_flow_tick_count_tb"; }
unsigned Vspi_full_flow_tick_count_tb::threads() const { return 1; }
void Vspi_full_flow_tick_count_tb::prepareClone() const { contextp()->prepareClone(); }
void Vspi_full_flow_tick_count_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vspi_full_flow_tick_count_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vspi_full_flow_tick_count_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vspi_full_flow_tick_count_tb___024root__trace_init_top(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vspi_full_flow_tick_count_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_full_flow_tick_count_tb___024root*>(voidSelf);
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_tick_count_tb___024root__trace_decl_types(tracep);
    Vspi_full_flow_tick_count_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_register(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vspi_full_flow_tick_count_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vspi_full_flow_tick_count_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
