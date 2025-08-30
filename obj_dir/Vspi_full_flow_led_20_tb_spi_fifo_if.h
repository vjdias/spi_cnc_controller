// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspi_full_flow_led_20_tb.h for the primary calling header

#ifndef VERILATED_VSPI_FULL_FLOW_LED_20_TB_SPI_FIFO_IF_H_
#define VERILATED_VSPI_FULL_FLOW_LED_20_TB_SPI_FIFO_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vspi_full_flow_led_20_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vspi_full_flow_led_20_tb_spi_fifo_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ full;
    CData/*0:0*/ empty;
    CData/*7:0*/ __Vlvbound_h7a17aa00__0;
    IData/*31:0*/ wr_ptr;
    IData/*31:0*/ rd_ptr;
    IData/*31:0*/ count;
    VlUnpacked<CData/*7:0*/, 210> mem;

    // INTERNAL VARIABLES
    Vspi_full_flow_led_20_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vspi_full_flow_led_20_tb_spi_fifo_if(Vspi_full_flow_led_20_tb__Syms* symsp, const char* v__name);
    ~Vspi_full_flow_led_20_tb_spi_fifo_if();
    VL_UNCOPYABLE(Vspi_full_flow_led_20_tb_spi_fifo_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vspi_full_flow_led_20_tb_spi_fifo_if* obj);

#endif  // guard
