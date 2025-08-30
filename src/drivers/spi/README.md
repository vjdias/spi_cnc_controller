# SPI Slave Wrapper — README (Corrigido)

Este documento descreve, em formato de *README*, cada ligação de portas da instância do bloco SPI quando o **FPGA atua como *slave*** (Raspberry Pi = master). Para cada item indicamos **Direção**, **Quem dirige**, **Domínio** e **Uso**. Ao final, há notas de temporização e uma sequência típica.

> **Nota sobre sufixo `_d`**: no topo do seu projeto, os pinos externos passam por `IBUF/OBUF/TBUF`, gerando fios internos com sufixo `_d`. À esquerda está a **porta do bloco SPI**; entre parênteses, o **fio interno** conectado.

---

## .I_CLK_d(I_CLK_d)

- **Direção:** entrada do bloco  
- **Quem dirige:** FPGA (clock de sistema/fabric)  
- **Domínio:** clock **interno** (não é o SCLK do barramento SPI)  
- **Uso:** relógio que sincroniza a interface de registradores do IP, flags/IRQ e a “cola” entre o domínio do SPI (assíncrono) e a lógica interna.

---

## .I_RESETN_d(I_RESETN_d)

- **Direção:** entrada do bloco  
- **Quem dirige:** FPGA  
- **Domínio:** **assíncrono ativo-baixo**  
- **Uso:** zera FIFOs, contadores e registradores internos. Mantenha baixo durante a inicialização e leve a ‘1’ após `I_CLK_d` estar estável.

---

## .I_TX_EN_d(I_TX_EN_d)

- **Direção:** entrada do bloco  
- **Quem dirige:** **sua lógica** no FPGA (o RPi **não** controla isto)  
- **Domínio:** `I_CLK_d`  
- **Uso:** **pulso de escrita** para carregar o **byte de transmissão** que o *slave* enviará ao RPi na próxima transação.  
- **Temporização:** pulse por **≥ 1 ciclo de `I_CLK_d`** com `I_WADDR_d` e `I_WDATA_d` **estáveis** nesse ciclo.

---

## .I_WADDR_d(I_WADDR_d[2:0])

- **Direção:** entrada (3 bits)  
- **Quem dirige:** FPGA  
- **Domínio:** `I_CLK_d`  
- **Uso:** **endereço** do registrador/porta a ser **escrito** quando `I_TX_EN_d` é pulso. Em muitos projetos, um dos endereços aponta para o **TX FIFO** (próxima resposta no MISO).  
- **Temporização:** mantenha estável durante o pulso de `I_TX_EN_d`.

---

## .I_WDATA_d(I_WDATA_d[7:0])

- **Direção:** entrada (8 bits)  
- **Quem dirige:** FPGA  
- **Domínio:** `I_CLK_d`  
- **Uso:** **byte** a ser escrito no endereço indicado por `I_WADDR_d` quando `I_TX_EN_d` está ativo. Se o endereço for o de TX, vira a **próxima resposta** no **MISO** quando o RPi clockar.  
- **Temporização:** mantenha estável no ciclo do pulso de `I_TX_EN_d`.

---

## .I_RX_EN_d(I_RX_EN_d)

- **Direção:** entrada do bloco  
- **Quem dirige:** FPGA  
- **Domínio:** `I_CLK_d`  
- **Uso:** **pulso de leitura** para **retirar** um byte que já chegou do RPi (capturado em `MOSI_SLAVE_d`) e disponibilizá-lo em `O_RDATA_d`.  
- **Temporização:** pulse por **≥ 1 ciclo de `I_CLK_d`** com `I_RADDR_d` **estável**; o dado aparece em `O_RDATA_d` **no ciclo seguinte** (latência de 1 ciclo típica).

---

## .I_RADDR_d(I_RADDR_d[2:0])

- **Direção:** entrada (3 bits)  
- **Quem dirige:** FPGA  
- **Domínio:** `I_CLK_d`  
- **Uso:** **endereço** do registrador/porta de **leitura**. Um endereço comum é o **RX FIFO** (próximo byte recebido do RPi).  
- **Temporização:** mantenha estável durante o pulso de `I_RX_EN_d`.

---

## .O_RDATA_d(O_RDATA_d[7:0])

- **Direção:** **saída** (8 bits)  
- **Quem dirige:** bloco SPI  
- **Domínio:** `I_CLK_d`  
- **Uso:** **byte lido** do endereço indicado por `I_RADDR_d`.  
- **Validade:** válido **após** o pulso de `I_RX_EN_d` (tipicamente 1 ciclo de latência).

---

## .O_SPI_INT_d(O_SPI_INT_d)

- **Direção:** **saída**  
- **Quem dirige:** bloco SPI  
- **Domínio:** `I_CLK_d`  
- **Uso:** **interrupção/flag de evento** (por exemplo: RX pronto, TX pronto, erros de FIFO, fim de transferência). Ligue ao seu controlador de IRQ/FSM e **limpe** a causa pelos registradores do IP, conforme a sua configuração.

---

## .SCLK_SLAVE_d(SCLK_SLAVE_d)

- **Direção:** **entrada** (pino SPI)  
- **Quem dirige:** **Raspberry Pi** (master)  
- **Domínio:** **clock do barramento SPI** (assíncrono a `I_CLK_d`)  
- **Uso:** define os flancos de amostragem e de *drive* durante a comunicação no modo *slave*. O IP usa esse clock para deslocar bits de `MOSI_SLAVE_d` e temporizar a saída em `MISO_SLAVE_d`, de acordo com **CPOL/CPHA**.

---

## .SS_N_SLAVE_d(SS_N_SLAVE_d)

- **Direção:** **entrada** (pino SPI)  
- **Quem dirige:** **Raspberry Pi**  
- **Domínio:** sinal assíncrono de **chip-select** (ativo em ‘0’)  
- **Uso:** **delimita** a transação SPI no modo *slave*: queda → início de *frame*; subida → término do *frame* (reset dos *shift registers* internos).

---

## .MOSI_SLAVE_d(MOSI_SLAVE_d)

- **Direção:** **entrada** (pino SPI)  
- **Quem dirige:** **Raspberry Pi**  
- **Domínio:** regido por `SCLK_SLAVE_d`  
- **Uso:** **dados recebidos** do master quando o FPGA está como *slave*. Ao completar um byte, o IP o encaminha para o caminho de RX, que você acessa via `I_RADDR_d`/`I_RX_EN_d` → `O_RDATA_d`.

---

## .MISO_SLAVE_d(MISO_SLAVE_d)

- **Direção:** **saída** (pino SPI)  
- **Quem dirige:** **FPGA** (bloco SPI)  
- **Domínio:** regido por `SCLK_SLAVE_d` (saída no flanco definido pela CPHA)  
- **Uso:** **dados enviados** ao RPi quando estamos como *slave*.  
- **Importante (tri-state):** nem todas as gerações/topos inserem `TBUF` no pad de `MISO_SLAVE`. Se o seu barramento tiver **múltiplos slaves**, **garanta alta-impedância (Z) com `TBUF` ou *gating* por `SS_N_SLAVE`** para evitar contenção quando o dispositivo **não** estiver selecionado.

---

## Dicas rápidas e sequência típica

- O **Raspberry Pi não aciona** `I_TX_EN_d`/`I_RX_EN_d`; quem faz isso é **sua lógica interna** no domínio `I_CLK_d`.
- **Sequência sugerida:**  
  1) **Preparar resposta**: aplicar `I_WADDR_d`/`I_WDATA_d` e pulsar `I_TX_EN_d` (≥ 1 ciclo).  
  2) **Transação do RPi**: `SS_N_SLAVE_d` ↓ e `SCLK_SLAVE_d` ativo; IP envia pelo `MISO_SLAVE_d` e captura `MOSI_SLAVE_d`.  
  3) **Consumir recebido**: aplicar `I_RADDR_d` e pulsar `I_RX_EN_d` (≥ 1 ciclo) → byte **válido em `O_RDATA_d`** no ciclo seguinte.
- Ajuste **CPOL/CPHA** do IP para casar com o modo do RPi (Mode 0: CPOL=0, CPHA=0; Mode 3: CPOL=1, CPHA=1), conforme sua aplicação.
