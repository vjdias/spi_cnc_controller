# Tick Gen

O gerador de tick (`tick_gen.sv`) foi movido para este diretório para ficar
próximo dos drivers `tmc5160_step_dir_driver`, já que ambos são usados em
conjunto no modo síncrono (base de tempo comum).

- Caminho: `src/drivers/tmc5160/tick_gen.sv`

Integração típica (síncrona):
- `tick_gen` produz `o_tick` para todos os drivers (entrada `i_tick`).
- `o_pid_tick` pode ser usado como período do controlador PID.
- `o_sync_start` ajuda a alinhar o início de segmentos ao próximo tick.

Os scripts de simulação (ModelSim/Verilator) varrem `src/` recursivamente, então
não é necessário ajustar includes após essa mudança de localização.

