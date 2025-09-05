# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vspi_full_flow_tick_count_tb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vspi_full_flow_tick_count_tb \
	Vspi_full_flow_tick_count_tb___024root__DepSet_hff4db961__0 \
	Vspi_full_flow_tick_count_tb___024root__DepSet_hff4db961__1 \
	Vspi_full_flow_tick_count_tb___024root__DepSet_h6b369cd9__0 \
	Vspi_full_flow_tick_count_tb_spi_fifo_if__DepSet_h89338b03__0 \
	Vspi_full_flow_tick_count_tb_spi_fifo_if__Dc8_DB1__DepSet_h64b46ea3__0 \
	Vspi_full_flow_tick_count_tb__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vspi_full_flow_tick_count_tb__ConstPool_0 \
	Vspi_full_flow_tick_count_tb___024root__Slow \
	Vspi_full_flow_tick_count_tb___024root__DepSet_hff4db961__0__Slow \
	Vspi_full_flow_tick_count_tb___024root__DepSet_h6b369cd9__0__Slow \
	Vspi_full_flow_tick_count_tb_spi_fifo_if__Slow \
	Vspi_full_flow_tick_count_tb_spi_fifo_if__DepSet_h89338b03__0__Slow \
	Vspi_full_flow_tick_count_tb_spi_fifo_if__Dc8_DB1__Slow \
	Vspi_full_flow_tick_count_tb_spi_fifo_if__Dc8_DB1__DepSet_h64b46ea3__0__Slow \
	Vspi_full_flow_tick_count_tb_move_queue_add_req_parser_pkg__Slow \
	Vspi_full_flow_tick_count_tb_move_queue_add_req_parser_pkg__DepSet_ha210e5b2__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vspi_full_flow_tick_count_tb__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vspi_full_flow_tick_count_tb__Syms \
	Vspi_full_flow_tick_count_tb__Trace__0__Slow \
	Vspi_full_flow_tick_count_tb__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
