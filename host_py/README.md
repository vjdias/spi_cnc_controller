FPGA SPI Python Client

Overview
- Talks to the spi_cnc_controller FPGA over SPI as master (Raspberry Pi).
- Implements LED control and FPGA status requests with robust error handling.

Requirements
- Raspberry Pi or Linux board with SPI enabled
- Python 3.8+
- spidev: `sudo apt-get install python3-spidev`

Verilator simulation
- Optionally build and exercise the full FPGA RTL in software using
  [PyVerilator](https://github.com/verilator/pyverilator).  This is useful
  for running the Python client without hardware.
  - Install dependencies: `python -m pip install pyverilator`
  - Run the demo that blinks the LEDs inside the simulation:
    `python3 host_py/examples/blink_leds_sim.py`
  - The script compiles `src/top.sv` with Verilator, toggles the SPI pins
    and exchanges frames with the FPGA logic using the same client API.
  - Por padrão são usados os serviços sintetizáveis sem interfaces, garantindo
    compatibilidade com Verilator. Para habilitar as versões com interfaces
    (utilizadas nos testbenches ModelSim), compile definindo
    `-DSPI_USE_INTERFACES` — recurso ainda não suportado no Verilator 5.x.
  - Em caso de *Timeout waiting for response header* ou para depurar o fluxo
    SPI, o `blink_leds_sim.py` roda com `debug=True` e o transporte Verilator
    gera o arquivo `blink_leds_sim.vcd` com as ondas dos sinais SPI. Abra esse
    VCD no [GTKWave](http://gtkwave.sourceforge.net/) para inspecionar as
    transações e localizar falhas de comunicação.

Usage
- Status:
  `python3 -m host_py.fpga_spi_client status --bus 0 --dev 0 --speed 1000000`

- LED control (turn on LEDs in mask 0x3F):
  `python3 -m host_py.fpga_spi_client led --mask 0x3F --value 1`

Library example
```
from host_py.fpga_spi_client import FpgaSpiClient

cli = FpgaSpiClient(bus=0, device=0, max_speed_hz=1_000_000, mode=0)
cli.open()
try:
    st = cli.fpga_status(frame_id=1)
    print(st)
    r = cli.led_control(led_mask=0x03, led_value=1, frame_id=2)
    print(r)
finally:
    cli.close()
```

Notes
- Client sends request in one transaction, then reads response in a new
  transaction by clocking zeroes until a full frame is parsed or timeout.
- Adjust `timeout_s` if your system clock is slow.
- The LED control service is wired in `src/top.sv` and produces responses.
  The `fpga_status` request is parsed by the router, but there is no
  response service connected in `top.sv` (the `fpga_status_frame` port is
  currently unused), so `fpga_status()` may timeout unless you add a service
  that publishes a response to the TX stream.
