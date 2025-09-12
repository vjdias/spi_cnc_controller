`ifndef SPI_SLAVE_SV
`define SPI_SLAVE_SV

// SPI Slave (Mode 3 only: CPOL=1, CPHA=1), MSB-first, 8-bit frames.
// - Clean, auditable implementation
// - Simple register interface (addr ignored except 0):
//     TX write  (i_clk): wr_en & waddr==0, wdata enfileira byte para MISO
//     RX read   (i_clk): rd_en & raddr==0, rdata lê próximo byte recebido
//     irq       (i_clk): alto enquanto houver bytes no RX FIFO
// - Pinos: sclk (idle=1), ss_n (ativo=0), mosi (entrada), miso (saída)
//   Tri-state do pad MISO deve ser feito no top (Z quando ss_n=1).

module spi_slave #(
  parameter int RX_DEPTH = 32,
  parameter int TX_DEPTH = 32
)(
  // Sistema
  input  logic       i_clk,
  input  logic       i_resetn,

  // Interface de escrita (TX -> MISO)
  input  logic       wr_en,
  input  logic [2:0] waddr,
  input  logic [7:0] wdata,

  // Interface de leitura (RX <- MOSI)
  input  logic       rd_en,
  input  logic [2:0] raddr,
  output logic [7:0] rdata,
  output logic       irq,

  // Pinos SPI (Modo 3)
  input  logic       sclk_slave,
  input  logic       ss_n_slave,
  input  logic       mosi_slave,
  output logic       miso_slave
);

  // ----------------------------------------
  // FIFOs assíncronos (SCLK <-> i_clk)
  // ----------------------------------------
  // RX: SCLK -> i_clk
  logic        rx_wr_en_sclk;
  logic [7:0]  rx_wr_data_sclk;
  logic        rx_wr_full_sclk;
  logic        rx_rd_en_sys;
  logic [7:0]  rx_rd_data_sys;
  logic        rx_rd_valid_sys;
  logic        rx_rd_empty_sys;

  async_fifo_gray_rtl #(
    .WIDTH(8), .DEPTH(RX_DEPTH)
  ) u_rx_fifo (
    .wr_clk     (sclk_slave),
    .wr_rst_n   (i_resetn),
    .wr_en      (rx_wr_en_sclk),
    .wr_data    (rx_wr_data_sclk),
    .wr_full    (rx_wr_full_sclk),
    .rd_clk     (i_clk),
    .rd_rst_n   (i_resetn),
    .rd_en      (rx_rd_en_sys),
    .rd_data    (rx_rd_data_sys),
    .rd_valid   (rx_rd_valid_sys),
    .rd_empty   (rx_rd_empty_sys),
    .rd_peek_data(),
    .rd_peek_valid()
  );

  // TX: i_clk -> SCLK
  logic        tx_wr_en_sys;
  logic [7:0]  tx_wr_data_sys;
  logic        tx_wr_full_sys;
  logic        tx_rd_en_sclk;
  logic [7:0]  tx_rd_data_sclk;
  logic        tx_rd_valid_sclk;
  logic        tx_rd_empty_sclk;
  logic [7:0]  tx_peek_data_sclk;
  logic        tx_peek_valid_sclk;

  async_fifo_gray_rtl #(
    .WIDTH(8), .DEPTH(TX_DEPTH)
  ) u_tx_fifo (
    .wr_clk     (i_clk),
    .wr_rst_n   (i_resetn),
    .wr_en      (tx_wr_en_sys),
    .wr_data    (tx_wr_data_sys),
    .wr_full    (tx_wr_full_sys),
    .rd_clk     (sclk_slave),
    .rd_rst_n   (i_resetn),
    .rd_en      (tx_rd_en_sclk),
    .rd_data    (tx_rd_data_sclk),
    .rd_valid   (tx_rd_valid_sclk),
    .rd_empty   (tx_rd_empty_sclk),
    .rd_peek_data(tx_peek_data_sclk),
    .rd_peek_valid(tx_peek_valid_sclk)
  );

  // ----------------------------------------
  // Interface de registradores (i_clk)
  // ----------------------------------------
  // TX write
  assign tx_wr_en_sys   = (wr_en && (waddr == 3'd0) && !tx_wr_full_sys);
  assign tx_wr_data_sys = wdata;

  // RX read (1 ciclo de latência)
  assign rx_rd_en_sys = (rd_en && (raddr == 3'd0) && !rx_rd_empty_sys);
  always_ff @(posedge i_clk or negedge i_resetn) begin
    if (!i_resetn) rdata <= 8'h00;
    else if (rx_rd_valid_sys) rdata <= rx_rd_data_sys;
  end

  // IRQ nível: FIFO RX não vazia
  assign irq = ~rx_rd_empty_sys;

  // ----------------------------------------
  // Stage simples do primeiro byte (i_clk) para o próximo frame
  // ----------------------------------------
  // Sincroniza SS_N para permitir staging apenas quando não selecionado
  logic ss_sync_d1, ss_sync_d2;
  always_ff @(posedge i_clk or negedge i_resetn) begin
    if (!i_resetn) begin ss_sync_d1 <= 1'b1; ss_sync_d2 <= 1'b1; end
    else begin ss_sync_d1 <= ss_n_slave; ss_sync_d2 <= ss_sync_d1; end
  end

  logic [7:0] first_byte_hold_sys;
  logic       first_valid_sys;
  always_ff @(posedge i_clk or negedge i_resetn) begin
    if (!i_resetn) begin
      first_byte_hold_sys <= 8'h00;
      first_valid_sys     <= 1'b0;
    end else begin
      // enquanto SS alto, qualquer write atualiza o primeiro byte a ser usado
      if (wr_en && (waddr == 3'd0) && ss_sync_d2) begin
        first_byte_hold_sys <= wdata;
        first_valid_sys     <= 1'b1;
      end
    end
  end

  // ----------------------------------------
  // Lógica no domínio de SCLK (Modo 3)
  // - Rising: amostra MOSI
  // - Falling: atualiza MISO e desloca
  // ----------------------------------------
  logic [7:0] rx_shift;
  logic [7:0] tx_shift;
  logic [2:0] bit_cnt;           // 0..7
  logic       miso_q;
  logic       tx_reload_next;    // recarregar no próximo falling
  logic [7:0] tx_buf;            // pré-busca de um byte
  logic       tx_buf_valid;
  logic       drop_first_pop;    // descarta cabeça do FIFO na primeira borda após seed
  // Espelho do flag de staging no domínio SCLK
  logic first_valid_ff1, first_valid_ff2;
  always_ff @(posedge sclk_slave or negedge i_resetn) begin
    if (!i_resetn) begin first_valid_ff1 <= 1'b0; first_valid_ff2 <= 1'b0; end
    else begin first_valid_ff1 <= first_valid_sys; first_valid_ff2 <= first_valid_ff1; end
  end

  // Idle/reset quando SS# sobe
  always_ff @(posedge ss_n_slave or negedge i_resetn) begin
    if (!i_resetn) begin
      bit_cnt        <= 3'd0;
      tx_reload_next <= 1'b0;
      tx_shift       <= 8'h00;
      rx_shift       <= 8'h00;
      miso_q         <= 1'b0;
      tx_buf_valid   <= 1'b0;
      drop_first_pop <= 1'b0;
    end else begin
      bit_cnt        <= 3'd0;
      tx_reload_next <= 1'b0;
      drop_first_pop <= 1'b0;
    end
  end

  // Início da transação: coloca MSB do primeiro byte no MISO (falling edge)
  always_ff @(negedge ss_n_slave or negedge i_resetn) begin
    if (!i_resetn) begin
      // nada
    end else begin
      // Prioriza tx_buf; se vazio, usa peek; senão staged; senão 0x00
      if (tx_buf_valid) begin
        tx_shift      <= tx_buf;
        miso_q        <= tx_buf[7];
        tx_buf_valid  <= 1'b0;   // consome pré-busca
        drop_first_pop<= 1'b0;
      end else if (tx_peek_valid_sclk) begin
        tx_shift      <= tx_peek_data_sclk;
        miso_q        <= tx_peek_data_sclk[7];
        drop_first_pop<= 1'b1;   // vamos dar pop no próximo posedge
      end else if (first_valid_ff2) begin
        tx_shift      <= first_byte_hold_sys; // estável enquanto flag alto
        miso_q        <= first_byte_hold_sys[7];
        // não limpamos o flag aqui; uma nova escrita o atualizará
      end else begin
        tx_shift      <= 8'h00;
        miso_q        <= 1'b0;
        drop_first_pop<= 1'b0;
      end
      bit_cnt        <= 3'd0;
      tx_reload_next <= 1'b0;
    end
  end

  // Posedge: amostra MOSI, escreve RX e agenda reload
  always_ff @(posedge sclk_slave or negedge i_resetn) begin
    if (!i_resetn) begin
      rx_wr_en_sclk <= 1'b0;
      tx_rd_en_sclk <= 1'b0;
    end else begin
      rx_wr_en_sclk <= 1'b0;
      tx_rd_en_sclk <= 1'b0;

      // Pop inicial do FIFO TX caso tenhamos usado peek para o primeiro byte
      if (!ss_n_slave && drop_first_pop) begin
        tx_rd_en_sclk <= 1'b1;           // descarta cabeça
        if (tx_rd_valid_sclk) drop_first_pop <= 1'b0;
      end

      // Pré-busca contínua quando buffer vazio
      if (!tx_buf_valid && !tx_rd_empty_sclk) begin
        tx_rd_en_sclk <= 1'b1;           // busca um byte
      end
      if (tx_rd_valid_sclk) begin
        tx_buf       <= tx_rd_data_sclk;
        tx_buf_valid <= 1'b1;
      end

      if (!ss_n_slave) begin
        // sample MOSI no rising
        rx_shift <= {rx_shift[6:0], mosi_slave};
        if (bit_cnt == 3'd7) begin
          // fecha byte de RX
          rx_wr_data_sclk <= {rx_shift[6:0], mosi_slave};
          if (!rx_wr_full_sclk) rx_wr_en_sclk <= 1'b1;
          bit_cnt        <= 3'd0;
          tx_reload_next <= 1'b1;        // pronto para carregar próximo TX
        end else begin
          bit_cnt <= bit_cnt + 3'd1;
        end
      end
    end
  end

  // Negedge: dirige MISO e desloca (Modo 3)
  always_ff @(negedge sclk_slave or negedge i_resetn) begin
    if (!i_resetn) begin
      // nada extra
    end else begin
      if (!ss_n_slave) begin
        if (tx_reload_next) begin
          // carrega próximo byte e apresenta MSB já neste falling
          if (tx_buf_valid) begin
            tx_shift      <= tx_buf;
            miso_q        <= tx_buf[7];
            tx_buf_valid  <= 1'b0;
          end else if (tx_peek_valid_sclk) begin
            tx_shift      <= tx_peek_data_sclk;
            miso_q        <= tx_peek_data_sclk[7];
            tx_rd_en_sclk <= 1'b1; // descarta cabeça no próximo posedge
            drop_first_pop<= 1'b1;
          end else begin
            tx_shift      <= 8'h00;
            miso_q        <= 1'b0;
          end
          tx_reload_next <= 1'b0;
        end else begin
          // desloca um bit para o próximo ciclo
          miso_q   <= tx_shift[7];
          tx_shift <= {tx_shift[6:0], 1'b0};
        end
      end
    end
  end

  assign miso_slave = miso_q;

endmodule
`endif
