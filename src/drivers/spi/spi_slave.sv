`ifndef __SPI_SLAVE_SV__
`define __SPI_SLAVE_SV__
// spi_slave.sv
// Wrapper minimalista para o núcleo SPI no papel de SLAVE (RPi = master)
// - Expõe interface de registradores (wr_en/rd_en, addr, data, irq)
// - Liga diretamente os pinos SPI do RPi
// - Tri-state de MISO quando SS_N_SLAVE = 1 (via TBUF da Gowin)
//
// Autor: você + ChatGPT (Embarcados/FPGA)
// SPDX-License-Identifier: MIT

module spi_slave (
    // -------------------------
    // Clock/Reset de sistema
    // -------------------------
    input  wire        i_clk,      // clock de sistema (I_CLK)
    input  wire        i_resetn,   // reset ativo-baixo (I_RESETN)

    // -------------------------
    // Interface de escrita (TX)
    // -------------------------
    input  wire        wr_en,      // I_TX_EN
    input  wire [2:0]  waddr,      // I_WADDR[2:0]
    input  wire [7:0]  wdata,      // I_WDATA[7:0]

    // -------------------------
    // Interface de leitura (RX)
    // -------------------------
    input  wire        rd_en,      // I_RX_EN
    input  wire [2:0]  raddr,      // I_RADDR[2:0]
    output wire [7:0]  rdata,      // O_RDATA[7:0]
    output wire        irq,        // O_SPI_INT

    // -------------------------
    // Pinos SPI para Raspberry
    // -------------------------
    input  wire        sclk_slave, // SCLK do RPi (SCLK_SLAVE)
    input  wire        ss_n_slave, // CS# do RPi   (SS_N_SLAVE, ativo em 0)
    input  wire        mosi_slave, // MOSI do RPi  (MOSI_SLAVE)
    output wire        miso_slave  // MISO para RPi (tri-state quando ss_n_slave=1)
);

    // ----------------------------------------
    // Fio interno com os dados do núcleo p/ MISO
    // ----------------------------------------
    wire miso_from_core;

    // ----------------------------------------
    // Núcleo SPI: escolha entre IP real ou STUB de simulação
    // ----------------------------------------
`ifndef SIM_STUB_SPI_CORE
    // Instância do núcleo gerado (slave)
    // (nome de módulo "escapado" conforme o gerador da Gowin)
    \~spi_master.SPI_MASTER_Top u_spi_slave_core (
        .I_CLK     (i_clk),
        .I_RESETN  (i_resetn),

        .I_TX_EN   (wr_en),
        .I_WADDR   (waddr[2:0]),
        .I_WDATA   (wdata[7:0]),

        .I_RX_EN   (rd_en),
        .I_RADDR   (raddr[2:0]),
        .O_RDATA   (rdata[7:0]),
        .O_SPI_INT (irq),

        // Pinos SLAVE
        .SCLK_SLAVE(sclk_slave),
        .SS_N_SLAVE(ss_n_slave),
        .MOSI_SLAVE(mosi_slave),
        .MISO_SLAVE(miso_from_core)

        // Se a sua variante do core tiver também portas *_MASTER,
        // elas podem ficar desconectadas ou em tri-state fora daqui.
    );
`else
    // STUB comportamental para simulação sem o IP cifrado
    // - TX: byte escrito via wr_en/waddr é deslocado em MISO durante SS# baixo
    // - RX: a cada 8 amostras de MOSI (SCLK ↑), um byte é armazenado e IRQ sobe
    //        até ser limpo por leitura (rd_en/raddr)
    localparam [2:0] TX_DATA_ADDR = 3'd0;
    localparam [2:0] RX_DATA_ADDR = 3'd0;

    // Regs internos
    reg [7:0] tx_reg, tx_shift;
    reg [7:0] rx_reg, rx_shift;
    reg [2:0] bit_cnt;
    reg       irq_r;
    reg [7:0] rdata_r;

    // Buffer simples para múltiplos bytes de TX (pré-carregados antes da transação)
    reg [7:0] tx_buf[0:15];
    reg [3:0] tx_count;  // quantidade de bytes válidos em tx_buf
    reg [3:0] tx_idx;    // índice do próximo byte a transmitir

    assign irq   = irq_r;
    assign rdata = rdata_r;

    // Escrita de TX e leitura de RX no domínio de i_clk
    always @(posedge i_clk or negedge i_resetn) begin
      if (!i_resetn) begin
        tx_reg  <= 8'h00;
        rdata_r <= 8'h00;
        irq_r   <= 1'b0;
        tx_count <= 4'd0;
      end else begin
        if (wr_en && (waddr == TX_DATA_ADDR)) begin
          tx_reg <= wdata;
          // Se não estamos em transação (SS_n alto), acumula no buffer de pré-carga
          if (ss_n_slave && tx_count < 4'd15) begin
            tx_buf[tx_count] <= wdata;
            tx_count <= tx_count + 4'd1;
          end
        end
        if (rd_en && (raddr == RX_DATA_ADDR)) begin
          rdata_r <= rx_reg;
          irq_r   <= 1'b0; // clear-on-read
        end
      end
    end

    // Início de transação: carrega o primeiro byte de TX
    always @(negedge ss_n_slave or negedge i_resetn) begin
      if (!i_resetn) begin
        tx_shift <= 8'h00;
        tx_idx   <= 4'd0;
      end else begin
        tx_idx   <= 4'd0;
        // Se houver bytes pré-carregados, usa o primeiro do buffer; caso contrário, usa tx_reg
        if (tx_count != 0) begin
          tx_shift <= tx_buf[0];
        end else begin
          tx_shift <= tx_reg;
        end
      end
    end

    // Fim de transação: descarta o que foi consumido
    always @(posedge ss_n_slave or negedge i_resetn) begin
      if (!i_resetn) begin
        tx_count <= 4'd0;
      end else begin
        // Consome tx_idx bytes do início do buffer
        if (tx_idx != 0) begin
          integer k;
          for (k = 0; k < 15; k = k + 1) begin
            if (k + tx_idx < 16)
              tx_buf[k] <= tx_buf[k + tx_idx];
          end
          if (tx_count > tx_idx)
            tx_count <= tx_count - tx_idx;
          else
            tx_count <= 4'd0;
        end
      end
    end

    // Amostragem de MOSI (modo 0) e contagem de bits
    always @(posedge sclk_slave or posedge ss_n_slave or negedge i_resetn) begin
      if (!i_resetn) begin
        rx_shift <= 8'h00;
        bit_cnt  <= 3'd0;
      end else if (ss_n_slave) begin
        bit_cnt  <= 3'd0;
      end else begin
        rx_shift <= {rx_shift[6:0], mosi_slave};
        bit_cnt  <= bit_cnt + 3'd1;
        if (bit_cnt == 3'd7) begin
          rx_reg <= {rx_shift[6:0], mosi_slave};
          irq_r  <= 1'b1;
        end
      end
    end

    // Deslocamento de TX e drive de MISO em borda de descida
    // A cada 8 bits transmitidos (bit_cnt == 0 após a borda de subida),
    // recarrega o próximo byte a partir de tx_reg para suportar bursts
    // multi-byte com SS_n mantido baixo.
    always @(negedge sclk_slave or posedge ss_n_slave or negedge i_resetn) begin
      if (!i_resetn) begin
        tx_shift <= 8'h00;
      end else if (ss_n_slave) begin
        tx_shift <= tx_shift; // mantém
      end else begin
        if (bit_cnt == 3'd0) begin
          // carrega próximo byte do buffer se disponível; senão, reusa tx_reg
          if (tx_idx + 1 < tx_count) begin
            tx_shift <= tx_buf[tx_idx + 1];
            tx_idx   <= tx_idx + 1;
          end else begin
            tx_shift <= tx_reg;
            tx_idx   <= tx_idx + 1;
          end
        end else begin
          tx_shift <= {tx_shift[6:0], 1'b0};   // shift para o próximo bit
        end
      end
    end

    assign miso_from_core = tx_shift[7];
`endif

    // ----------------------------------------
    // TRI-STATE de MISO quando o device NÃO está selecionado
    // Usa o TBUF da Gowin (igual o netlist do IP faz).
    // OEN = 1 ==> saída em Z; OEN = 0 ==> saída ativa
    // Logo, OEN recebe SS_N (alto = não selecionado = Z).
    // ----------------------------------------
    TBUF u_miso_buf (
        .O  (miso_slave),
        .I  (miso_from_core),
        .OEN(ss_n_slave)   // tri-state quando SS_n = 1
    );

endmodule
`default_nettype wire
`endif // __SPI_SLAVE_SV__
