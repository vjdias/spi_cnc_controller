# Gera VCD do teste spi_full_flow_motion_early_end_tb e roda até o fim
# Uso:
#  vsim -L simlib spi_full_flow_motion_early_end_tb
#  do tb/modelsim/dump_motion_early_end_vcd.do

onerror {resume}

vcd file tb/tests/temp/spi_full_flow_motion_early_end_tb.vcd
vcd add -r /spi_full_flow_motion_early_end_tb/*
vcd add -r /spi_full_flow_motion_early_end_tb/u_cons/*
vcd add -r /spi_full_flow_motion_early_end_tb/u_motion/*

run -all

vcd flush
vcd off
echo "VCD salvo em tb/tests/temp/spi_full_flow_motion_early_end_tb.vcd"
