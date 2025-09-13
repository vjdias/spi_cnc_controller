# run_master_vo_integration.tcl — compila e executa o TB de integração
# que usa o netlist VO do SPI Master (gw_spi_master.vo) e o wrapper
# spi_slave com STUB (define SIM_STUB_SPI_CORE).

# diretório raiz do projeto (usa diretório atual do vsim)
set root [file normalize [pwd]]

# utilitário: glob recursivo em Tcl (portável p/ Windows/Linux)
proc rglob {dir pattern} {
  set results {}
  if {![file exists $dir]} {return $results}
  foreach item [glob -nocomplain -directory $dir *] {
    if {[file isdirectory $item]} {
      set results [concat $results [rglob $item $pattern]]
    } else {
      if {[string match $pattern [file tail $item]]} {
        lappend results $item
      }
    }
  }
  return $results
}

# cria/usa bibliotecas no diretório temporário
set sim_temp_dir [file join $root tb tests temp]
file mkdir $sim_temp_dir

# WORK: mapeia a lib padrão 'work' para tb/tests/temp/work
set work_dir [file join $sim_temp_dir work]
catch { vdel -lib work -all }
file mkdir $work_dir
vlib $work_dir
vmap work $work_dir

# coloca a biblioteca física da simlib dentro de tb/tests/temp/simlib
set simlib_dir [file join $sim_temp_dir simlib]
catch { vdel -lib simlib -all }
vlib $simlib_dir
vmap simlib $simlib_dir

# compila a simlib da Gowin (primitivas)
set simlib_candidates [list \
  [file join $root tb tests lib simlib gw2a prim_sim.v] \
  [file join $root tb tests lib simlib gw1n prim_sim.v]
]
set simlib_file ""
foreach cand $simlib_candidates {
  if {[file exists $cand]} { set simlib_file $cand; break }
}
if {$simlib_file ne ""} {
  puts "Compilando simlib: $simlib_file"
  vlog -work simlib $simlib_file
} else {
  puts "Aviso: simlib não encontrada em tb/tests/lib/simlib/{gw2a,gw1n}/prim_sim.v"
}

# coleta fontes de src, filtrando o IP cifrado spi_master.v
set src_sv [rglob [file join $root src] "*.sv"]
set src_v  [rglob [file join $root src] "*.v"]
set sv_v_filtered {}
foreach f [concat $src_sv $src_v] {
  if {[string match *spi_master.v $f]} { continue }
  if {[string match *spi_master_tmp.v $f]} { continue }
  if {[string match */temp/*/spi_master_tmp.v $f]} { continue }
  lappend sv_v_filtered $f
}

# ordena: pacotes primeiro, depois interfaces, depois o restante
set pkgs {}
set ifaces {}
set rest {}
foreach f $sv_v_filtered {
  if {[string match *.sv $f] && [regexp {_pkg\.sv$} $f]} {
    lappend pkgs $f
  } elseif {[regexp {/(interfaces)/} $f]} {
    lappend ifaces $f
  } else {
    lappend rest $f
  }
}

set ordered [concat $pkgs $ifaces $rest]
if {[llength $ordered] > 0} {
  puts "Compilando fontes com STUB do wrapper (SIM_STUB_SPI_CORE), SPI_USE_INTERFACES e ROUTER_IGNORE_NOISE"
  eval vlog -sv -mfcu +define+SIM_STUB_SPI_CORE+SPI_USE_INTERFACES+ROUTER_IGNORE_NOISE +incdir+$root/tb/tests $ordered
} else {
  puts "Nenhum arquivo de origem encontrado em $root/src"
}

# compila o netlist VO do master
set vo_master [file join $root tb tests lib simulate_vo gw_spi_master.vo]
if {[file exists $vo_master]} {
  puts "Compilando VO do SPI Master: $vo_master"
  vlog $vo_master
} else {
  puts "Erro: netlist VO do SPI Master não encontrado em $vo_master"
  quit -f
}

# compila o TB de integração com VO do master
set tb_file [file join $root tb tests spi_master_vo_integration_tb.sv]
if {![file exists $tb_file]} {
  puts "Erro: testbench não encontrado em $tb_file"
  quit -f
}
vlog -sv -mfcu +define+SPI_USE_INTERFACES+INCLUDE_MASTER_VO_TB +incdir+$root/tb/tests $tb_file

puts "Executando spi_master_vo_integration_tb com libs simlib"
vsim -quiet -L simlib -onfinish stop spi_master_vo_integration_tb -do {run -all; quit -sim}

quit -f
