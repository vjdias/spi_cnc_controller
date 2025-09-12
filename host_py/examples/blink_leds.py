from __future__ import annotations

import time
from host_py.fpga_spi_client import FpgaSpiClient, explain_exception


def main() -> int:
    cli = FpgaSpiClient(bus=0, device=0, max_speed_hz=1_000_000, mode=0)
    cli.open()
    try:
        # Clear all LEDs first
        try:
            cli.led_control(led_mask=0x3F, led_value=0, frame_id=1)
        except Exception as e:
            print("Init LED clear failed:", e)
            print(explain_exception(e))

        # Simple running pattern
        mask = 1
        frame_id = 2
        for _ in range(24):
            try:
                cli.led_control(led_mask=mask, led_value=1, frame_id=frame_id)
                time.sleep(0.1)
                cli.led_control(led_mask=mask, led_value=0, frame_id=frame_id)
            except Exception as e:
                print("LED control error:", e)
                print(explain_exception(e))
                # try to resync and continue
                cli.drain(64)
            mask <<= 1
            if mask > 0x20:
                mask = 1
            frame_id = (frame_id + 1) & 0xFF
        return 0
    finally:
        cli.close()


if __name__ == "__main__":
    raise SystemExit(main())

