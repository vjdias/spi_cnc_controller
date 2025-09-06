open_project spi_cnc_controller.gprj
# Ensure 3V3 CST is present and enabled (disable default CST)
if {[catch {add_file -type cst src/spi_cnc_controller_3v3.cst} err]} {
  puts "Note: 3V3 CST already added"
}
set_file_enable src/spi_cnc_controller.cst false
set_file_enable src/spi_cnc_controller_3v3.cst true

# Use base timing.sdc (27 MHz sys_clk, SPI placeholder + IO delays)
set_file_enable constraints/timing_27.sdc false
set_file_enable constraints/timing_135.sdc false
set_file_enable constraints/timing_27_spi50.sdc false
set_file_enable constraints/timing_27_spi100.sdc false
set_file_enable constraints/timing.sdc true

run all

# Copy reports with suffix 3v3
set pnrdir "impl/pnr"
set outdir [file join  reports]
file mkdir 
foreach pair {
  {spi_cnc_controller.rpt.txt   timing_3v3.rpt.txt}
  {spi_cnc_controller.rpt.html  timing_3v3.rpt.html}
  {spi_cnc_controller.tr.html   tr_3v3.html}
  {spi_cnc_controller_tr_cata.html tr_3v3_cata.html}
  {spi_cnc_controller_tr_content.html tr_3v3_content.html}
  {spi_cnc_controller.power.html power_3v3.html}
  {spi_cnc_controller.pin.html  pin_3v3.html}
  {spi_cnc_controller.timing_paths timing_3v3.timing_paths}
} {
  set src [file join  [lindex  0]]
  set dst [file join  [lindex  1]]
  if {[file exists ]} { file copy -force   }
}

# Restore original CST enablement
set_file_enable src/spi_cnc_controller_3v3.cst false
set_file_enable src/spi_cnc_controller.cst true
save_project
puts "Done 3V3 PNR; reports in impl/pnr/reports"
exit
