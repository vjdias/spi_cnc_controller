from __future__ import annotations

import shutil
import tempfile
from pathlib import Path
from typing import Sequence, List, Set


class VerilatorSpiTransport:
    """SPI transport that talks to the synthesizable design via PyVerilator.

    This class compiles ``src/top.sv`` and bit-bangs the SPI pins to emulate a
    Raspberry Pi master.  It implements the minimal ``open/close/xfer`` trio
    expected by :class:`FpgaSpiClient`.
    """

    def __init__(self) -> None:
        self.sim = None
        self._tempdir = None

    # ------------------------------------------------------------------
    def open(self) -> None:  # pragma: no cover - heavy to simulate in tests
        # ``tclwrapper`` (dependency of PyVerilator) expects ``_tkinter.Tkapp`` to
        # expose a ``split`` method which was removed in Python 3.12.  Alias it to
        # ``splitlist`` if missing so the import works on newer Python versions.
        try:  # pragma: no cover - exercised when running the example
            import _tkinter

            TkappType = _tkinter.TkappType
            if not hasattr(TkappType, "split"):
                TkappType.split = TkappType.splitlist  # type: ignore[attr-defined]
        except Exception:
            pass

        import pyverilator  # type: ignore

        root = Path(__file__).resolve().parents[1]
        src_root = root / "src"
        service_root = src_root / "services"
        integrations_root = service_root / "integrations"
        package_root = integrations_root / "packages"
        resp_if = integrations_root / "interfaces" / "resp_stream_if.sv"
        parser_root = src_root / "protocol" / "parsers" / "requests"
        framing_root = src_root / "protocol" / "framings"
        router_root = src_root / "protocol" / "routers"
        driver_root = src_root / "drivers"

        files: List[Path] = []
        files.extend(sorted((framing_root / "constants").glob("*.sv")))
        files.extend(sorted((framing_root / "requests").glob("*.sv")))
        files.extend(sorted((framing_root / "responses").glob("*.sv")))
        files.extend(sorted(parser_root.glob("*.sv")))
        files.extend(sorted(router_root.glob("*.sv")))
        files.extend(sorted(package_root.glob("*.sv")))
        files.extend(sorted((integrations_root / "rtl").glob("*.sv")))
        if resp_if.exists():
            files.append(resp_if)
        # Coleta serviços; todos os módulos agora são suportados pelo wrapper
        for path in sorted(service_root.glob("*.sv")):
            files.append(path)
        for sub in ["spi", "led", "motion", "pid"]:
            subdir = service_root / sub
            if subdir.exists():
                for sv in sorted(subdir.glob("*.sv")):
                    files.append(sv)
        files.extend(sorted((driver_root / "tmc5160").glob("*.sv")))
        files.extend(sorted((driver_root / "proximity_sensor").glob("*.sv")))
        files.extend(sorted((driver_root / "emergency_stop").glob("*.sv")))
        files.extend(sorted((driver_root / "motion").glob("*.sv")))
        files.extend(sorted((driver_root / "spi").glob("*.sv")))
        files.extend(sorted((driver_root / "encoder").glob("*.sv")))
        open_spi = driver_root / "spi" / "spi_slave_open.sv"
        if open_spi.exists():
            files.append(open_spi)

        top_sv = src_root / "top.sv"
        self._tempdir = tempfile.TemporaryDirectory(prefix="verilator_spi_")
        build_dir = Path(self._tempdir.name)
        top_v = build_dir / "top.v"
        shutil.copy(top_sv, top_v)

        filelist = build_dir / "filelist.f"
        with open(filelist, "w") as f:
            for path in files:
                f.write(str(path) + "\n")

        import pyverilator.pyverilator as pv_mod  # type: ignore
        import pyverilator.verilatorcpp as template_cpp  # type: ignore

        # Verilator 5 emits VL_IN/OUT macros taking references (e.g. `&i_clk`),
        # but older PyVerilator releases don't strip the leading ampersand which
        # then leaks into generated wrapper code.  Sanitize names here until
        # upstream adds native support.
        orig_name_fn = pv_mod.verilator_name_to_standard_modular_name

        def patched_name(name: str):
            if isinstance(name, str) and name.startswith("&"):
                name = name[1:]
            return orig_name_fn(name)

        pv_mod.verilator_name_to_standard_modular_name = patched_name

        orig_template_cpp = template_cpp.template_cpp

        def patched_template(top_module, inputs, outputs, internal_signals, json_data):
            strip = lambda ports: [(p[0].lstrip("&"), p[1]) for p in ports]
            return orig_template_cpp(top_module, strip(inputs), strip(outputs), strip(internal_signals), json_data)

        template_cpp.template_cpp = patched_template

        extra_args = [
            "-sv",
            "-f",
            str(filelist),
            "-Wno-TIMESCALEMOD",
            "-Wno-WIDTHEXPAND",
            "-Wno-WIDTHTRUNC",
            "-Wno-LATCH",
            "-Wno-BLKANDNBLK",
            "-DROUTER_IGNORE_NOISE",
            "--top-module",
            "top",
        ]

        real_call_process = pv_mod.call_process

        def patched_call_process(args, quiet: bool = False):
            if len(args) >= 2 and str(args[1]).endswith("verilator"):
                args = list(args[:2]) + extra_args + list(args[2:])
            return real_call_process(args, quiet=quiet)

        pv_mod.call_process = patched_call_process
        try:
            self.sim = pv_mod.PyVerilator.build(str(top_v), build_dir=str(build_dir))
        finally:
            pv_mod.call_process = real_call_process
            pv_mod.verilator_name_to_standard_modular_name = orig_name_fn
            template_cpp.template_cpp = orig_template_cpp

        # Reset
        self.sim.io.i_resetn = 0
        self.sim.io.i_clk = 0
        for _ in range(8):
            self._tick()
        self.sim.io.i_resetn = 1
        for _ in range(8):
            self._tick()
        # Idle values
        self.sim.io.pi_csn = 1
        self.sim.io.pi_sclk = 1
        self.sim.io.pi_mosi = 0

    def close(self) -> None:  # pragma: no cover - heavy
        self.sim = None
        if self._tempdir is not None:
            self._tempdir.cleanup()
            self._tempdir = None

    # ------------------------------------------------------------------
    def _tick(self) -> None:
        assert self.sim is not None
        self.sim.io.i_clk = 0
        self.sim.eval()
        self.sim.io.i_clk = 1
        self.sim.eval()

    # ------------------------------------------------------------------
    def xfer(self, data: Sequence[int]) -> List[int]:  # pragma: no cover - heavy
        assert self.sim is not None
        resp: List[int] = []
        self.sim.io.pi_csn = 0
        for byte in data:
            rbyte = 0
            for bit in range(7, -1, -1):
                b = (byte >> bit) & 1
                self.sim.io.pi_mosi = b
                # falling edge -> data valid
                self.sim.io.pi_sclk = 1
                self._tick()
                self.sim.io.pi_sclk = 0
                self._tick()
                # rising edge -> sample MISO
                miso = int(self.sim.io.pi_miso)
                rbyte = (rbyte << 1) | miso
                self.sim.io.pi_sclk = 1
                self._tick()
            resp.append(rbyte & 0xFF)
        self.sim.io.pi_csn = 1
        self._tick()
        return resp
