# Driver: Sensor Indutivo LJ12A3-4-Z (M12)

Este driver (SystemVerilog) trata o sinal lógico proveniente do sensor indutivo LJ12A3-4-Z (5–36 V), comum em máquinas CNC/3D printers, com opção de variantes NPN ou PNP e contato NO/NC.

Arquivos
- `lj12a3_proximity_driver.sv`: módulo sintetizável com sincronização, debounce e pulsos de evento.

Conexão elétrica (resumo)
- Não conecte o sensor diretamente ao pino da FPGA (nível 5–36 V!). Use:
  - Optoacoplador, ou
  - Transistor + divisores/pull adequado, ou
  - Módulo conversor de nível.
- NPN NO: linha vai a 0V quando detecta (ativo baixo). PNP NO: linha vai a Vcc quando detecta (ativo alto).
- NC inverte o comportamento de nível em repouso vs. detecção.

Uso do módulo
```systemverilog
lj12a3_proximity_driver #(
  .IS_PNP(1'b0),           // 0: NPN, 1: PNP
  .IS_NORMALLY_OPEN(1'b1), // 1: NO (NA), 0: NC (NF)
  .DEBOUNCE_CYCLES(5000)   // ciclos de clk para debounce; 0 = sem debounce
) u_probe (
  .clk              (i_clk),
  .rst_n            (i_resetn),
  .i_sensor_in      (probe_in_logic), // já convertido p/ nível do FPGA
  .o_active         (),               // nível estável
  .o_active_pulse   (),               // pulso 1 ciclo na ativação
  .o_inactive_pulse ()                // pulso 1 ciclo na desativação
);
```

Parâmetros
- `IS_PNP`: define modo elétrico (PNP=1 / NPN=0). Para NPN, ativo costuma ser nível 0; para PNP, ativo é nível 1.
- `IS_NORMALLY_OPEN`: define contato NO/NC. Para NC, a lógica de ativo é invertida.
- `DEBOUNCE_CYCLES`: filtro de estabilidade em ciclos de clock.

Sinais
- `i_sensor_in`: entrada digital já nivelada (0/1) para o domínio da FPGA.
- `o_active`: estado estável após debounce (1 = sensor detectou alvo).
- `o_active_pulse`: pulso de 1 ciclo na borda de ativação.
- `o_inactive_pulse`: pulso de 1 ciclo na borda de desativação.

Dicas de Constraints
- `.cst` (Physical): configure `-pull` conforme interface, e IO_TYPE (ex.: LVCMOS18/33) de acordo com a placa.
- `.sdc` (Timing): a entrada é assíncrona; a sincronização de 2 FF já está no RTL.
