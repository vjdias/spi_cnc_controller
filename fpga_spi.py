# fpga_spi.py
# Cliente SPI para Raspberry Pi 3 A+ (SPI0 CE0) falando com o FPGA do projeto.
# Protocolo:
#   Requisição: [HDR_REQ=0xAA][CMD_LED=0x30][ID][IDX][VAL][TAIL_REQ=0x55]
#   Resposta:   [HDR_RSP=0xAB][CMD_LED=0x30][ID][IDX][VAL][OK][TAIL_RSP=0x54]
#
# Observações:
# - Modo SPI: 0 (CPOL=0, CPHA=0) para casar com o SPI slave didático do RTL.
# - Leitura de resposta: o mestre precisa clockar o barramento; aqui fazemos
#   "poll" enviando bytes 0x00 até achar HDR_RSP e então lemos os demais.
# - Velocidade conservadora (1 MHz) por segurança; aumente gradualmente se quiser.
# - Pinos Raspberry Pi 3 A+ (conector de 40 pinos) para SPI0 CE0:
#     * MOSI  → GPIO10, pino físico 19 (dados do Pi para o FPGA)
#     * MISO  → GPIO9,  pino físico 21 (dados do FPGA para o Pi)
#     * SCLK  → GPIO11, pino físico 23 (clock do barramento)
#     * CE0   → GPIO8,  pino físico 24 (chip select, ativo em nível baixo)
#     * GND   → qualquer pino de terra (ex.: pino 6) para referência comum
#     * 3V3   → pino 1 ou 17 para alimentação de 3,3 V, se o FPGA precisar
# - Para a maior velocidade possível do SPI do Raspberry Pi, ajuste ``speed_hz``
#   conforme o hardware permitir (o controlador pode atingir ~125 MHz); use
#   cabos curtos e mantenha os níveis lógicos em 3,3 V.

from __future__ import annotations

import time
from dataclasses import dataclass
from typing import Dict, Optional

import spidev


# Framing (igual ao RTL)
HDR_REQ = 0xAA
TAIL_REQ = 0x55
HDR_RSP = 0xAB
TAIL_RSP = 0x54

# Comando LED (pacote led_cmd_pkg.sv)
CMD_LED = 0x30


@dataclass
class LedResponse:
    """Resposta do serviço de LEDs."""
    id: int
    idx: int
    val: int
    ok: int

    @property
    def success(self) -> bool:
        """Retorna ``True`` quando o FPGA indicou sucesso (``ok``)."""
        return bool(self.ok)


class FpgaSpi:
    """Cliente simples para o FPGA via SPI."""

    def __init__(self, bus: int = 0, device: int = 0, speed_hz: int = 1_000_000):
        self.bus = bus
        self.device = device
        self.speed_hz = speed_hz
        self.spi: Optional[spidev.SpiDev] = None

    # ----------------- gerência do dispositivo -----------------

    def open(self) -> None:
        spi = spidev.SpiDev()
        spi.open(self.bus, self.device)  # /dev/spidev{bus}.{device} → 0.0 = CE0
        spi.max_speed_hz = self.speed_hz
        spi.mode = 0  # CPOL=0, CPHA=0 (casando com o SPI slave do projeto)
        spi.bits_per_word = 8
        spi.cshigh = False
        spi.loop = False
        spi.threewire = False
        self.spi = spi

    def close(self) -> None:
        if self.spi is not None:
            try:
                self.spi.close()
            finally:
                self.spi = None

    def __enter__(self) -> "FpgaSpi":
        self.open()
        return self

    def __exit__(self, exc_type, exc, tb) -> None:
        self.close()

    # ----------- utilidades de baixo nível -----------

    def _xfer(self, tx: list[int]) -> list[int]:
        if self.spi is None:
            raise RuntimeError("SPI não inicializado. Chame open() ou use o contexto with.")
        # xfer2 mantém CS ativo durante a transferência
        return self.spi.xfer2(tx)

    def _send_frame(self, cmd: int, payload: list[int]) -> None:
        """Envia um frame de requisição: [HDR_REQ][CMD][payload...][TAIL_REQ]."""
        frame = [HDR_REQ, cmd] + payload + [TAIL_REQ]
        self._xfer(frame)

    def _poll_for_header(self, header: int, timeout_s: float = 0.100) -> bool:
        """Gera clocks enviando 0x00 até receber ``header`` ou estourar ``timeout_s``."""
        t0 = time.monotonic()
        while (time.monotonic() - t0) < timeout_s:
            rx = self._xfer([0x00])  # 1 byte de poll
            if rx and rx[0] == header:
                return True
        return False

    def _read_n(self, n: int) -> list[int]:
        """Lê ``n`` bytes clockando 0x00."""
        return self._xfer([0x00] * n)

    def _read_led_response(self, cmd_id: int, timeout_s: float) -> LedResponse:
        if not self._poll_for_header(HDR_RSP, timeout_s=timeout_s):
            raise TimeoutError("Timeout esperando HDR_RSP do FPGA (verifique wiring/clock/latência).")

        rest = self._read_n(6)  # [CMD][ID][IDX][VAL][OK][TAIL_RSP]
        if len(rest) != 6:
            raise IOError("Resposta incompleta do FPGA.")

        cmd, rid, ridx, rval, rok, tail = rest

        if tail != TAIL_RSP:
            raise ValueError(f"TAIL_RSP inválido: 0x{tail:02X}")
        if cmd != CMD_LED:
            raise ValueError(f"CMD inválido na resposta: 0x{cmd:02X}")
        if rid != cmd_id:
            raise ValueError(f"ID de resposta ({rid}) difere do ID enviado ({cmd_id}).")

        return LedResponse(rid, ridx & 0x07, rval & 0x01, rok & 0x01)

    # ----------- API de alto nível (LED) -----------

    def set_led(
        self,
        cmd_id: int,
        led_idx: int,
        led_val: int,
        poll_timeout_s: float = 0.100,
        raise_on_error: bool = True,
    ) -> LedResponse:
        """Envia comando LED e retorna a :class:`LedResponse`.

        ``raise_on_error``
            Quando ``True`` (padrão), levanta :class:`RuntimeError` se ``ok`` for 0.
        """
        cmd_id &= 0xFF
        led_idx &= 0x07
        led_val &= 0x01

        payload = [cmd_id, led_idx, led_val]
        self._send_frame(CMD_LED, payload)

        rsp = self._read_led_response(cmd_id, timeout_s=poll_timeout_s)
        if raise_on_error and not rsp.success:
            raise RuntimeError("FPGA retornou ok=0 para comando LED")
        return rsp


# ---------------------- exemplo de uso CLI ----------------------

def _demo():
    import argparse
    ap = argparse.ArgumentParser(description="Cliente SPI para FPGA (comando LED).")
    ap.add_argument("--bus", type=int, default=0, help="SPI bus (default: 0)")
    ap.add_argument("--dev", type=int, default=0, help="SPI device/CE (default: 0 → CE0)")
    ap.add_argument("--speed", type=int, default=1_000_000, help="SPI clock em Hz (default: 1 MHz)")
    ap.add_argument("--id", type=lambda x: int(x, 0), default=0x01, help="ID do comando (0..255, ex: 0x01)")
    ap.add_argument("--idx", type=int, default=0, help="Índice do LED (0..7)")
    ap.add_argument("--val", type=int, default=1, help="Valor do LED (0/1)")
    ap.add_argument("--timeout", type=float, default=0.100, help="Timeout de poll para resposta (s)")
    ap.add_argument(
        "--no-raise",
        action="store_true",
        help="Não lança exceção quando ok=0 na resposta",
    )
    args = ap.parse_args()

    with FpgaSpi(bus=args.bus, device=args.dev, speed_hz=args.speed) as fpga:
        rsp = fpga.set_led(
            cmd_id=args.id,
            led_idx=args.idx,
            led_val=args.val,
            poll_timeout_s=args.timeout,
            raise_on_error=not args.no_raise,
        )
        print(
            f"Resposta: id=0x{rsp.id:02X}, idx={rsp.idx}, val={rsp.val}, ok={rsp.ok}"
        )


if __name__ == "__main__":
    _demo()
