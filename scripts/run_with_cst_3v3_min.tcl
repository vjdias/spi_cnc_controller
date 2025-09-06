open_project spi_cnc_controller.gprj
if {[catch {add_file -type cst src/spi_cnc_controller_3v3.cst} err]} {}
set_file_enable src/spi_cnc_controller.cst false
set_file_enable src/spi_cnc_controller_3v3.cst true
set_file_enable constraints/timing.sdc true
set_file_enable constraints/timing_27.sdc false
set_file_enable constraints/timing_135.sdc false
set_file_enable constraints/timing_27_spi50.sdc false
set_file_enable constraints/timing_27_spi100.sdc false
run all
set_file_enable src/spi_cnc_controller_3v3.cst false
set_file_enable src/spi_cnc_controller.cst true
exit
