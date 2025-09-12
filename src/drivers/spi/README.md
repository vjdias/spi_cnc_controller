# SPI Slave Driver

This directory contains a simple SPI slave used by the CNC controller.

## Module `SPI_Slave`

* Parameter `SPI_MODE` selects CPOL/CPHA (0–3).
* Inputs
  * `i_Rst_L` – active‑low reset.
  * `i_Clk` – system clock (at least 4× faster than `i_SPI_Clk`).
  * `i_TX_DV` – pulse to load `i_TX_Byte` for transmission.
  * `i_TX_Byte[7:0]` – data to shift out on MISO.
  * `i_SPI_Clk` – SPI clock from master.
  * `i_SPI_MOSI` – master‑out, slave‑in.
  * `i_SPI_CS_n` – active‑low chip select.
* Outputs
  * `o_RX_DV` – asserted for one cycle when a byte is received.
  * `o_RX_Byte[7:0]` – byte received on MOSI.
  * `o_SPI_MISO` – data shifted out to the master, tri‑stated when `i_SPI_CS_n` is high.

The design supports multiple bytes per transfer while chip select remains low
and is compatible with any of the four standard SPI modes.

A simple test bench, `SPI_Slave_TB`, can be used as a reference for
simulation and integration.
