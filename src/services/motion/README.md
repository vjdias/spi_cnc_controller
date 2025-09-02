# Motion Service

Serviço responsável por orquestrar a movimentação dos três eixos controlados
pelos drivers **TMC5160**. Ele recebe os frames já decodificados pelo
`spi_rx_hub_service` e implementa a lógica básica de habilitação e execução de
movimentos.

## Fluxo das requisições

1. **START_MOVE** habilita o modo de movimento e gera resposta de eco. Enquanto
   o modo estiver desabilitado, os demais comandos de movimento retornam erro.
2. **MOVE_QUEUE_ADD** envia parâmetros de direção, velocidade, contagem de
   passos e ganhos PID. O serviço instancia três drivers
   `tmc5160_step_dir_driver` em modo síncrono e dispara o movimento para cada
   eixo conforme o comando. A resposta MOVE_QUEUE_ADD_ACK confirma ou rejeita o
   item.
3. **MOVE_HOME** inicia um movimento contínuo de homing nos eixos indicados,
   usando a mesma velocidade `vhome` para todos. O movimento é finalizado
   quando o sensor de proximidade é acionado e então uma resposta MOVE_HOME é
   enviada indicando os eixos que atingiram a referência.
4. **MOVE_QUEUE_STATUS** pode ser solicitado a qualquer momento e retorna o
   estado atual da fila: `Running` se qualquer eixo estiver em movimento ou
   `Idle` caso contrário, além do `FrameID` do último movimento aceito.
5. **MOVE_END** encerra o modo de movimento e envia resposta de eco. Após um
   MOVE_END (ou evento de emergência) é necessário novo START_MOVE.

## Sensores e segurança

- **Parada de emergência**: entrada tratada pelo `emergency_stop_driver`. Quando
  ativa, inibe os drivers e força a saída do modo de movimento.
- **Sensor de proximidade**: monitorado pelo `lj12a3_proximity_driver` e também
  desabilita os acionamentos quando acionado.
- **Encoder**: posição e velocidade do `quad_encoder_tmcs28_driver` são expostas
  ao serviço para implementação futura de controle PID.

## Tick Gen

Um único `tick_gen` gera pulsos de base (`tick`) e de amostragem PID
(`pid_tick`). Os divisores estão fixos em valores iniciais e usados por todos os
módulos TMC5160.

## Respostas

Todas as respostas dos comandos são publicadas no `resp_stream_if` genérico para
consumo externo.

