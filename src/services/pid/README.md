# PID Service

Serviço dedicado ao controle fino dos eixos através de malha fechada. Ele recebe
setpoints de posição e ganhos **Kp/Ki/Kd** provenientes do `motion_service`, além
do feedback dos encoders incrementais. O módulo calcula uma taxa corrigida para
os drivers TMC5160 a partir do erro de posição.

Atualmente apenas o termo proporcional (P) é aplicado sobre uma taxa base
previamente calculada pelo host (feed-forward). Os termos integral e derivativo
podem ser acrescentados futuramente sem alterar a interface.

## Entradas
- `target_x/y/z`: setpoint absoluto em passos para cada eixo.
- `ff_rate_x/y/z`: taxa base de passos por tick gerada pelo host.
- `kp_*, ki_*, kd_*`: ganhos PID por eixo.
- `enc_pos_*`: posição atual medida pelo `quad_encoder_tmcs28_driver`.
- `enable` e `pid_tick`: habilitação e período de amostragem.

## Saídas
- `rate_x/y/z`: taxa ajustada enviada ao driver TMC5160.
- `pid_err_x/y/z`: códigos de erro do controlador (0 = OK).

O `motion_service` instancia este módulo e fornece os parâmetros adequados a
cada movimento da fila, mantendo a separação de responsabilidades entre
planejamento de movimentos e controle de malha.
