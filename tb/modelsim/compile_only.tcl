# compile_only.tcl - compila fontes e testbenches sem rodar, para uso na GUI

# diretório raiz do projeto (usa diretório atual do vsim)
set root [file normalize [pwd]]

# utilitário: glob recursivo em Tcl (portável para Windows/Linux)
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

# limpa/gera bibliotecas no diretório temporário de testes
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

# coleta fontes
set src_sv [rglob [file join $root src] "*.sv"]
set src_v  [rglob [file join $root src] "*.v"]
set src_vo [rglob [file join $root src] "*.vo"]

# remove arquivos problemáticos/encriptados do IP SPI MASTER da lista principal
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
  } elseif {[string match */interfaces/*.sv $f]} {
    lappend ifaces $f
  } else {
    lappend rest $f
  }
}

set ordered [concat $pkgs $ifaces $rest]
if {[llength $ordered] > 0} {
  puts "Compilando fontes em ordem: pkgs=[llength $pkgs], ifaces=[llength $ifaces], rest=[llength $rest] (com SIM_STUB_SPI_CORE)"
  eval vlog -sv -mfcu +define+SIM_STUB_SPI_CORE +incdir+$root/tb/tests $ordered
} else {
  puts "Nenhum arquivo de origem encontrado em $root/src"
}

# compila netlists (.vo) de IPs quando existirem
set vo_all {}
foreach f $src_vo { lappend vo_all $f }
foreach f [rglob [file join $root tb tests lib simulate_vo] "*.vo"] { lappend vo_all $f }
if {[llength $vo_all] > 0} {
  puts "Compilando netlists (.vo): [llength $vo_all] arquivos"
  eval vlog $vo_all
}

# compila todos os testbenches (para resolver dependências); você escolherá qual rodar
set tb_files [rglob [file join $root tb tests] "*.sv"]
set filtered_tb {}
foreach f $tb_files {
  if {[string match *spi_master_vo_integration_tb.sv $f]} { continue }
  lappend filtered_tb $f
}
set tb_files $filtered_tb
if {[llength $tb_files] > 0} {
  puts "Compilando testbenches: [llength $tb_files] arquivos"
  eval vlog -sv -mfcu +incdir+$root/tb/tests $tb_files
} else {
  puts "Nenhum testbench encontrado em $root/tb/tests"
}

puts "Compilação concluída. Agora execute: vsim -L simlib spi_full_flow_motion_home_tb"

