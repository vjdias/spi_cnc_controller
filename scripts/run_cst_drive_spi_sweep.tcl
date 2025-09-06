open_project spi_cnc_controller.gprj

proc ensure_added {file type} {
    if {[catch {add_file -type $type $file} err]} {
        puts "Note: $file already in project"
    } else {
        puts "Added: $file"
    }
}

proc copy_reports {suffix} {
    set pnrdir "impl/pnr"
    set outdir [file join $pnrdir reports]
    file mkdir $outdir
    foreach pair {
        {spi_cnc_controller.rpt.txt   timing_%s.rpt.txt}
        {spi_cnc_controller.rpt.html  timing_%s.rpt.html}
        {spi_cnc_controller.tr.html   tr_%s.html}
        {spi_cnc_controller_tr_cata.html tr_%s_cata.html}
        {spi_cnc_controller_tr_content.html tr_%s_content.html}
        {spi_cnc_controller.power.html power_%s.html}
        {spi_cnc_controller.pin.html  pin_%s.html}
        {spi_cnc_controller.timing_paths timing_%s.timing_paths}
    } {
        set src [file join $pnrdir [lindex $pair 0]]
        set dst [file join $outdir [format [lindex $pair 1] $suffix]]
        if {[file exists $src]} { file copy -force $src $dst }
    }
}

# Ensure CST variants are part of the project
ensure_added src/spi_cnc_controller.cst cst
ensure_added src/spi_cnc_controller_drive4.cst cst
ensure_added src/spi_cnc_controller_drive12.cst cst

# Ensure SDCs for SPI sweeps exist
ensure_added constraints/timing_27_spi50.sdc sdc
ensure_added constraints/timing_27_spi100.sdc sdc

# Disable all timing SDCs initially
foreach f {constraints/timing.sdc constraints/timing_27.sdc constraints/timing_50.sdc constraints/timing_54.sdc constraints/timing_135.sdc constraints/timing_27_spi50.sdc constraints/timing_27_spi100.sdc} {
    catch { set_file_enable $f false }
}

# Function to run for a given CST and SPI SDC
proc run_one {cstfile suffix sdclist} {
    puts "Running with CST=$cstfile, suffix=$suffix"
    # Toggle CSTs
    foreach c {src/spi_cnc_controller.cst src/spi_cnc_controller_drive4.cst src/spi_cnc_controller_drive12.cst} {
        catch { set_file_enable $c false }
    }
    set_file_enable $cstfile true

    foreach sdc $sdclist {
        catch { set_file_enable $sdc false }
    }
    foreach sdc $sdclist {
        set_file_enable $sdc true
        run all
        # Copy with combined suffix
        if {[string match *spi50* $sdc]} {
            copy_reports ${suffix}_spi50
        } elseif {[string match *spi100* $sdc]} {
            copy_reports ${suffix}_spi100
        } else {
            copy_reports ${suffix}
        }
        set_file_enable $sdc false
    }
}

set sdcs {constraints/timing_27_spi50.sdc constraints/timing_27_spi100.sdc}
run_one src/spi_cnc_controller.cst           d8 $sdcs
run_one src/spi_cnc_controller_drive4.cst   d4  $sdcs
run_one src/spi_cnc_controller_drive12.cst  d12 $sdcs

# Restore base state
set_file_enable src/spi_cnc_controller_drive4.cst false
set_file_enable src/spi_cnc_controller_drive12.cst false
set_file_enable src/spi_cnc_controller.cst true
set_file_enable constraints/timing.sdc true
puts "CST drive + SPI sweep complete. Reports in impl/pnr/reports"
exit

