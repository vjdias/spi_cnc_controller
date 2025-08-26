vlib work
vlog ../../src/protocol/framings/constants/protocol_constants_pkg.sv \
     ../../src/protocol/framings/utils/bytes_util_pkg.sv \
     ../../src/protocol/framings/requests/*.sv \
     ../../src/protocol/framings/responses/*.sv \
     ../../tests/framings_tb.sv
vsim -c framings_tb -do waves.do
