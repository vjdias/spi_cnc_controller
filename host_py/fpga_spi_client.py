"""
Python SPI client for the spi_cnc_controller FPGA design.

Features
- Builds and parses protocol frames (LED control, FPGA status).
- Robust read: scans for response header and validates parity/tails.
- Clear exceptions for error handling and timeouts.

Assumes Raspberry Pi (or Linux) master using `spidev` (mode 0, MSB-first).

Wire protocol (per HDL):
- Request header/tail: 0xAA / 0x55
- Response header/tail: 0xAB / 0x54
- Types: LED_CTRL=0x07, FPGA_STATUS=0x20
- LED request  (7 bytes): AA 07 id mask value parity tail
- LED response (7 bytes): AB 07 id mask status parity tail
- FPGA status request  (4 bytes): AA 20 id 55
- FPGA status response (12 bytes): AB 20 id status state mode fw[3] fw[2] fw[1] fw[0] parityByte tail

Notes
- The FPGA typically generates the response after the request completes.
  This client sends the request, then starts a fresh read transaction
  clocking out zero bytes until a full response is parsed or timeout.
"""

from __future__ import annotations

import time
from dataclasses import dataclass
from typing import List, Optional, Sequence, Tuple


# ------------------------------
# Protocol constants
# ------------------------------
REQ_HEADER = 0xAA
REQ_TAIL = 0x55
RESP_HEADER = 0xAB
RESP_TAIL = 0x54

LED_CTRL_TYPE = 0x07
FPGA_STATUS_TYPE = 0x20


# ------------------------------
# Exceptions
# ------------------------------
class SpiClientError(Exception):
    pass


class SpiTimeoutError(SpiClientError):
    pass


class ProtocolError(SpiClientError):
    pass


class ParityError(ProtocolError):
    pass


class UnexpectedMsgType(ProtocolError):
    pass


class StatusError(ProtocolError):
    pass


# ------------------------------
# Data classes
# ------------------------------
@dataclass
class LedCtrlResponse:
    frame_id: int
    led_mask: int
    status: int  # 0=OK, 1=ERR_LED


@dataclass
# state: 0=Idle,1=Running,2=Error,3=Busy
# mode:  0=Idle,1=Move,2=Read,3=Write,4=Home,5=Probe
class FpgaStatus:
    frame_id: int
    status: int
    state: int
    mode: int
    fw_version: int  # uint32
    parity_ok: bool


# ------------------------------
# Utilities
# ------------------------------
def _xor_bytes(values: Sequence[int]) -> int:
    x = 0
    for v in values:
        x ^= (v & 0xFF)
    return x & 0xFF


def _parity_bit_of_bytes(values: Sequence[int]) -> int:
    """Returns XOR of all bits across the provided bytes (0 or 1)."""
    acc = 0
    for v in values:
        acc ^= v & 0xFF
    # XOR-reduce all 8 bits
    bit = 0
    for i in range(8):
        bit ^= (acc >> i) & 1
    return bit & 1


def _find_header(buf: Sequence[int], header: int = RESP_HEADER) -> int:
    for i, b in enumerate(buf):
        if b == header:
            return i
    return -1


# ------------------------------
# SPI transport wrapper
# ------------------------------
class _SpiDevWrapper:
    def __init__(self, bus: int, device: int, max_speed_hz: int, mode: int):
        try:
            import spidev  # type: ignore
        except Exception as e:  # pragma: no cover - informative error on non-Linux
            raise SpiClientError(
                "spidev not available. Install on Raspberry Pi: sudo apt install python3-spidev"
            ) from e
        self._spi = spidev.SpiDev()
        self._bus = bus
        self._dev = device
        self._max = max_speed_hz
        self._mode = mode

    def open(self) -> None:
        self._spi.open(self._bus, self._dev)
        self._spi.max_speed_hz = self._max
        self._spi.mode = self._mode
        self._spi.bits_per_word = 8

    def close(self) -> None:
        try:
            self._spi.close()
        except Exception:
            pass

    def xfer(self, data: Sequence[int]) -> List[int]:
        # xfer2 keeps CS low during the whole transfer
        return self._spi.xfer2(list(int(b) & 0xFF for b in data))


# ------------------------------
# High-level client
# ------------------------------
class FpgaSpiClient:
    def __init__(
        self,
        bus: int = 0,
        device: int = 0,
        max_speed_hz: int = 1_000_000,
        mode: int = 0,
        transport: Optional[object] = None,
    ) -> None:
        """
        If `transport` is provided, it must expose `open()`, `close()` and `xfer(seq)->list`.
        Otherwise a spidev transport is created with the given parameters.
        """
        self._t = transport or _SpiDevWrapper(bus, device, max_speed_hz, mode)

    # Lifecycle ---------------------------------------------------------------
    def open(self) -> None:
        self._t.open()

    def close(self) -> None:
        self._t.close()

    # Primitives --------------------------------------------------------------
    def _write(self, data: Sequence[int]) -> None:
        self._t.xfer(list(data))  # write-only (MISO ignored)

    def _read(self, nbytes: int, fill: int = 0x00) -> List[int]:
        return self._t.xfer([fill] * nbytes)

    # Maintenance / diagnostics ----------------------------------------------
    def drain(self, nbytes: int = 64, fill: int = 0x00) -> List[int]:
        """Clock out and discard up to nbytes (returns the read bytes)."""
        return self._read(nbytes, fill)

    def resync(self, attempts: int = 8, chunk: int = 32) -> Optional[int]:
        """Try to find a response header in the stream for diagnostics.
        Returns the offset of the first found header in the last read buffer,
        or None if not found after attempts.
        """
        for _ in range(attempts):
            buf = self._read(chunk)
            idx = _find_header(buf, RESP_HEADER)
            if idx >= 0:
                return idx
        return None

    # Request/Response helpers -----------------------------------------------
    def _send_request(self, req: Sequence[int]) -> None:
        self._write(req)

    def _read_response_stream(
        self,
        expect_type: Optional[int],
        timeout_s: float,
        chunk: int = 32,
        max_bytes: int = 1024,
    ) -> List[int]:
        """
        Repeatedly clocks zeros and accumulates bytes until a full frame is found.
        If `expect_type` is set, validates the msgType before returning.
        Raises SpiTimeoutError on timeout, ProtocolError on framing issues.
        """
        buf: List[int] = []
        t0 = time.monotonic()
        while True:
            # Timeout check
            if time.monotonic() - t0 > timeout_s:
                raise SpiTimeoutError("Timeout waiting for response header")

            # Read a chunk
            buf.extend(self._read(chunk))
            if len(buf) > max_bytes:
                raise ProtocolError("Response stream exceeded maximum length")

            # Scan for header
            i = _find_header(buf, RESP_HEADER)
            if i < 0:
                continue  # keep reading

            # We have a header candidate; need at least 2 bytes to know type
            if i + 2 > len(buf):
                continue
            mtype = buf[i + 1]
            # Figure out frame length by type
            if mtype == LED_CTRL_TYPE:
                framelen = 7
            elif mtype == FPGA_STATUS_TYPE:
                framelen = 12
            else:
                # Unknown type: can't determine length; skip this header and continue
                # or raise, depending on policy. Here we skip once.
                # Remove up to i+1 to avoid infinite loop.
                buf = buf[i + 1 :]
                continue

            # Ensure we have the full frame in buffer
            if i + framelen > len(buf):
                continue

            frame = buf[i : i + framelen]
            # Basic tail check
            if frame[-1] != RESP_TAIL:
                # Skip this header and continue scanning
                buf = buf[i + 1 :]
                continue

            # If caller expects a specific type, assert it
            if expect_type is not None and mtype != expect_type:
                raise UnexpectedMsgType(f"Unexpected msgType 0x{mtype:02X}, expected 0x{expect_type:02X}")

            return frame

    # LED control -------------------------------------------------------------
    def led_control(
        self,
        led_mask: int,
        led_value: int,
        frame_id: int = 0,
        timeout_s: float = 0.050,
    ) -> LedCtrlResponse:
        """Set/clear LEDs and return confirmation.

        led_mask: bitmask for LEDs 0..5
        led_value: 1=set bits in mask, 0=clear bits in mask
        """
        led_mask &= 0xFF
        led_value &= 0xFF
        frame_id &= 0xFF

        # Build request: AA 07 id mask value parity tail
        parity = _xor_bytes([LED_CTRL_TYPE, frame_id, led_mask, led_value])
        req = [REQ_HEADER, LED_CTRL_TYPE, frame_id, led_mask, led_value, parity, REQ_TAIL]

        self._send_request(req)

        # Read response frame and parse
        frame = self._read_response_stream(LED_CTRL_TYPE, timeout_s=timeout_s)
        # frame: AB 07 id mask status parity tail
        if frame[0] != RESP_HEADER or frame[1] != LED_CTRL_TYPE or frame[-1] != RESP_TAIL:
            raise ProtocolError("Malformed LED_CTRL response framing")

        parity_calc = _xor_bytes(frame[1:5])
        if frame[5] != parity_calc:
            raise ParityError("LED_CTRL response parity mismatch")

        return LedCtrlResponse(frame_id=frame[2], led_mask=frame[3], status=frame[4])

    # FPGA status -------------------------------------------------------------
    def fpga_status(
        self,
        frame_id: int = 0,
        timeout_s: float = 0.050,
    ) -> FpgaStatus:
        """Request and read FPGA status."""
        frame_id &= 0xFF
        req = [REQ_HEADER, FPGA_STATUS_TYPE, frame_id, REQ_TAIL]

        self._send_request(req)
        frame = self._read_response_stream(FPGA_STATUS_TYPE, timeout_s=timeout_s)

        # frame: AB 20 id status state mode fw3 fw2 fw1 fw0 parity tail
        if len(frame) != 12:
            raise ProtocolError("FPGA_STATUS response length unexpected")
        if frame[0] != RESP_HEADER or frame[1] != FPGA_STATUS_TYPE or frame[-1] != RESP_TAIL:
            raise ProtocolError("Malformed FPGA_STATUS response framing")

        parity_bit = _parity_bit_of_bytes(frame[1:10])
        parity_ok = (frame[10] & 0x1) == parity_bit

        fw = (frame[6] << 24) | (frame[7] << 16) | (frame[8] << 8) | frame[9]
        return FpgaStatus(
            frame_id=frame[2],
            status=frame[3],
            state=frame[4],
            mode=frame[5],
            fw_version=fw,
            parity_ok=parity_ok,
        )


# ------------------------------
# Simple CLI usage (optional)
# ------------------------------
def explain_led_status(code: int) -> str:
    if code == 0:
        return "OK"
    if code == 1:
        return "ERR_LED (invalid LED bit in mask)"
    return f"UNKNOWN({code})"


def explain_state(code: int) -> str:
    mapping = {0: "Idle", 1: "Running", 2: "Error", 3: "Busy"}
    return mapping.get(code, f"UNKNOWN({code})")


def explain_mode(code: int) -> str:
    mapping = {0: "Idle", 1: "Move", 2: "Read", 3: "Write", 4: "Home", 5: "Probe"}
    return mapping.get(code, f"UNKNOWN({code})")


def explain_exception(exc: Exception) -> str:
    if isinstance(exc, SpiTimeoutError):
        return (
            "Timeout waiting for response. Check: wiring, SPI mode=0, speed, "
            "CS held low during transfer, and whether the FPGA service actually publishes a response."
        )
    if isinstance(exc, ParityError):
        return (
            "Parity mismatch. Possible causes: corrupted bytes (speed too high), wrong SPI mode, "
            "or mixing responses due to leftover bytes in the stream. Consider lowering speed or calling drain()."
        )
    if isinstance(exc, UnexpectedMsgType):
        return (
            "Unexpected message type. Another service may have responded or stale bytes were present. "
            "Call drain() and retry."
        )
    if isinstance(exc, ProtocolError):
        return (
            "Protocol framing error. Ensure headers/tails match and host clocks enough bytes to receive full frames."
        )
    if isinstance(exc, SpiClientError):
        return "SPI client/transport error. Verify spidev availability and permissions."
    return "Unknown error."

def _format_fw(v: int) -> str:
    return f"{(v>>24)&0xFF}.{(v>>16)&0xFF}.{(v>>8)&0xFF}.{v&0xFF}"


def main(argv: Optional[Sequence[str]] = None) -> int:
    import argparse

    ap = argparse.ArgumentParser(description="FPGA SPI client")
    ap.add_argument("action", choices=["status", "led"], help="Action to execute")
    ap.add_argument("--bus", type=int, default=0)
    ap.add_argument("--dev", type=int, default=0)
    ap.add_argument("--speed", type=int, default=1_000_000)
    ap.add_argument("--mode", type=int, default=0)
    ap.add_argument("--mask", type=lambda x: int(x, 0), default=0x3F, help="LED mask (e.g. 0x3F)")
    ap.add_argument("--value", type=int, choices=[0, 1], default=1, help="LED value for bits in mask")
    args = ap.parse_args(argv)

    client = FpgaSpiClient(bus=args.bus, device=args.dev, max_speed_hz=args.speed, mode=args.mode)
    client.open()
    try:
        if args.action == "status":
            st = client.fpga_status(frame_id=1)
            print(
                f"FPGA_STATUS id={st.frame_id} status={st.status} state={st.state} "
                f"mode={st.mode} fw={_format_fw(st.fw_version)} parity_ok={st.parity_ok}"
            )
        elif args.action == "led":
            resp = client.led_control(led_mask=args.mask, led_value=args.value, frame_id=1)
            print(
                f"LED_CTRL id={resp.frame_id} mask=0x{resp.led_mask:02X} "
                f"status={resp.status} ({explain_led_status(resp.status)})"
            )
        return 0
    finally:
        client.close()


if __name__ == "__main__":  # pragma: no cover
    raise SystemExit(main())
