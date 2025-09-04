# Gera VCD do teste spi_full_flow_motion_home_tb e roda até o fim
# Uso (GUI ou console):
#  vsim -L simlib spi_full_flow_motion_home_tb
#  do tb/modelsim/dump_motion_home_vcd.do

onerror {resume}

# arquivo de saída
vcd file tb/tests/temp/spi_full_flow_motion_home_tb.vcd

# adiciona hierarquias relevantes
vcd add -r /spi_full_flow_motion_home_tb/*
vcd add -r /spi_full_flow_motion_home_tb/u_cons/*
vcd add -r /spi_full_flow_motion_home_tb/u_motion/*

run -all

vcd flush
vcd off
echo "VCD salvo em tb/tests/temp/spi_full_flow_motion_home_tb.vcd"
