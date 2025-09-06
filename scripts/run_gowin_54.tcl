open_project spi_cnc_controller.gprj
# Ensure SDC is present
if {[catch {add_file -type sdc constraints/timing_54.sdc} err]} {
  puts "Note: timing_54.sdc already in project"
}
# Disable other SDCs to avoid overlaps
set_file_enable constraints/timing.sdc false
set_file_enable constraints/timing_27.sdc false
set_file_enable constraints/timing_135.sdc false
set_file_enable constraints/timing_27_spi50.sdc false
set_file_enable constraints/timing_27_spi100.sdc false
# Enable 54 MHz SDC
set_file_enable constraints/timing_54.sdc true

run all

# Copy reports with suffix 54
set pnrdir "impl/pnr"
set outdir [file join  reports]
file mkdir 
foreach pair {
  {spi_cnc_controller.rpt.txt   timing_54.rpt.txt}
  {spi_cnc_controller.rpt.html  timing_54.rpt.html}
  {spi_cnc_controller.tr.html   tr_54.html}
  {spi_cnc_controller_tr_cata.html tr_54_cata.html}
  {spi_cnc_controller_tr_content.html tr_54_content.html}
  {spi_cnc_controller.power.html power_54.html}
  {spi_cnc_controller.pin.html  pin_54.html}
  {spi_cnc_controller.timing_paths timing_54.timing_paths}
} {
  set src [file join  [lindex  0]]
  set dst [file join  [lindex  1]]
  if {[file exists ]} { file copy -force   }
}

# Restore base SDC
set_file_enable constraints/timing_54.sdc false
set_file_enable constraints/timing.sdc true
save_project
puts "54 MHz build complete. Reports in impl/pnr/reports"
exit
