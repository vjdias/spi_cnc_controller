from __future__ import annotations

import time

from host_py.fpga_spi_client import FpgaSpiClient, explain_exception
from host_py.verilator_transport import VerilatorSpiTransport


def main() -> int:
    transport = VerilatorSpiTransport()
    cli = FpgaSpiClient(transport=transport)
    cli.open()
    try:
        try:
            cli.led_control(led_mask=0x3F, led_value=0, frame_id=1)
        except Exception as e:  # pragma: no cover - demo script
            print("Init LED clear failed:", e)
            print(explain_exception(e))

        mask = 1
        frame_id = 2
        for _ in range(6):
            try:
                cli.led_control(led_mask=mask, led_value=1, frame_id=frame_id)
                time.sleep(0.01)
                cli.led_control(led_mask=mask, led_value=0, frame_id=frame_id)
            except Exception as e:  # pragma: no cover - demo script
                print("LED control error:", e)
                print(explain_exception(e))
                cli.drain(64)
            mask <<= 1
            if mask > 0x20:
                mask = 1
            frame_id = (frame_id + 1) & 0xFF
        return 0
    finally:
        cli.close()


if __name__ == "__main__":  # pragma: no cover
    raise SystemExit(main())
