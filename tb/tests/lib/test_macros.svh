`ifndef __TEST_MACROS_SVH__
`define __TEST_MACROS_SVH__

// Macro de asserção unificada para os testbenches
// Usa $finish para encerrar a simulação em caso de falha.
`ifndef TEST_ASSERT
`define TEST_ASSERT(cond, name) if(!(cond)) begin $display("Falha: %s", name); $finish; end
`endif

`endif // __TEST_MACROS_SVH__

