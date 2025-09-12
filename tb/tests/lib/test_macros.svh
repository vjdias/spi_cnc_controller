`ifndef __TEST_MACROS_SVH__
`define __TEST_MACROS_SVH__

// Macro de asserção unificada para os testbenches
// Usa $finish para encerrar a simulação em caso de falha.
`ifndef TEST_ASSERT
`define TEST_ASSERT(cond, name) \
  if(!(cond)) begin \
    $display("[FAIL] %s", name); \
    $finish; \
  end else begin \
    $display("[PASS] %s", name); \
  end
`endif

// Macros auxiliares para imprimir evidências (esperado vs. obtido)
`ifndef TEST_EXPECT_EQ_HEX
`define TEST_EXPECT_EQ_HEX(got, exp, name) \
  begin \
    if ((got) === (exp)) $display("[PASS] %s: got=%0h exp=%0h", name, (got), (exp)); \
    else begin $display("[FAIL] %s: got=%0h exp=%0h", name, (got), (exp)); $finish; end \
  end
`endif

`ifndef TEST_EXPECT_EQ_DEC
`define TEST_EXPECT_EQ_DEC(got, exp, name) \
  begin \
    if ((got) === (exp)) $display("[PASS] %s: got=%0d exp=%0d", name, (got), (exp)); \
    else begin $display("[FAIL] %s: got=%0d exp=%0d", name, (got), (exp)); $finish; end \
  end
`endif

`ifndef TEST_EXPECT_TRUE
`define TEST_EXPECT_TRUE(cond, name) \
  begin \
    if (cond) $display("[PASS] %s", name); \
    else begin $display("[FAIL] %s", name); $finish; end \
  end
`endif

`endif // __TEST_MACROS_SVH__
