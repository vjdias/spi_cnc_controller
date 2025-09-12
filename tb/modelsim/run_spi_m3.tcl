# run_spi_m3.tcl - compila e executa apenas o novo SPI (Modo 3) e seu TB

set root [file normalize [pwd]]
set tbdir [file join $root tb tests]

# libs
set sim_temp_dir [file join $root tb tests temp]
file mkdir $sim_temp_dir
set work_dir [file join $sim_temp_dir work]
catch { vdel -lib work -all }
file mkdir $work_dir
vlib $work_dir
vmap work $work_dir

# simlib opcional (Gowin)
set simlib_dir [file join $sim_temp_dir simlib]
catch { vdel -lib simlib -all }
vlib $simlib_dir
vmap simlib $simlib_dir
set simlib_candidates [list \
  [file join $tbdir lib simlib gw2a prim_sim.v] \
  [file join $tbdir lib simlib gw1n prim_sim.v] ]
set simlib_file ""
foreach cand $simlib_candidates { if {[file exists $cand]} { set simlib_file $cand; break } }
if {$simlib_file ne ""} { vlog -work simlib $simlib_file }

# Compila apenas o que é necessário
vlog -sv -mfcu +incdir+$tbdir \
  $root/src/services/integrations/rtl/async_fifo_gray_rtl.sv \
  $root/src/drivers/spi/spi_slave.sv \
  $root/tb/tests/spi_slave_m3_tb.sv

vsim -L simlib work.spi_slave_m3_tb -voptargs=+acc
add wave -r /*
run -all
