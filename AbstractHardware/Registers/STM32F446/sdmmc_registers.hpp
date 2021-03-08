/******************************************************************************
* Filename : sdmmc_registers.hpp
*
* Details  : SDMMC
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct SDMMC
{
  // SDMMC power control register
  struct SDMMC_POWER : Register<0x40012c00, ReadWriteMode, 0x0>
  {
    // Data and command direction signals polarity selection. This bit can only be written when the SDMMC is in the power-off state (PWRCTRL = 00).
    struct DIRPOL : RegisterField<SDMMC_POWER, 4, 1, ReadWriteMode>
    {
    };
    // Voltage switch procedure enable. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). This bit is used to stop the SDMMC_CK after the voltage switch command response:
    struct VSWITCHEN : RegisterField<SDMMC_POWER, 3, 1, ReadWriteMode>
    {
    };
    // Voltage switch sequence start. This bit is used to start the timing critical section of the voltage switch sequence:
    struct VSWITCH : RegisterField<SDMMC_POWER, 2, 1, ReadWriteMode>
    {
    };
    // SDMMC state control bits. These bits can only be written when the SDMMC is not in the power-on state (PWRCTRL?11). These bits are used to define the functional state of the SDMMC signals: Any further write will be ignored, PWRCTRL value will keep 11.
    struct PWRCTRL : RegisterField<SDMMC_POWER, 0, 2, ReadWriteMode>
    {
    };
  };

  // The SDMMC_CLKCR register controls the SDMMC_CK output clock, the SDMMC_RX_CLK receive clock, and the bus width.
  struct SDMMC_CLKCR : Register<0x40012c04, ReadWriteMode, 0x0>
  {
    // Receive clock selection. These bits can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0)
    struct SELCLKRX : RegisterField<SDMMC_CLKCR, 20, 2, ReadWriteMode>
    {
    };
    // Bus speed mode selection between DS, HS, SDR12, SDR25 and SDR50, DDR50, SDR104. This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0)
    struct BUSSPEED : RegisterField<SDMMC_CLKCR, 19, 1, ReadWriteMode>
    {
    };
    // Data rate signaling selection This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) DDR rate shall only be selected with 4-bit or 8-bit wide bus mode. (WIDBUS &gt; 00). DDR = 1 has no effect when WIDBUS = 00 (1-bit wide bus). DDR rate shall only be selected with clock division &gt;1. (CLKDIV &gt; 0)
    struct DDR : RegisterField<SDMMC_CLKCR, 18, 1, ReadWriteMode>
    {
    };
    // Hardware flow control enable This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) When Hardware flow control is enabled, the meaning of the TXFIFOE and RXFIFOF flags change, please see SDMMC status register definition in Section56.8.11.
    struct HWFC_EN : RegisterField<SDMMC_CLKCR, 17, 1, ReadWriteMode>
    {
    };
    // SDMMC_CK dephasing selection bit for data and Command. This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). When clock division = 1 (CLKDIV = 0), this bit has no effect. Data and Command change on SDMMC_CK falling edge. When clock division &gt;1 (CLKDIV &gt; 0) &amp; DDR = 0: - SDMMC_CK edge occurs on SDMMCCLK rising edge. When clock division >1 (CLKDIV > 0) & DDR = 1: - Data changed on the SDMMCCLK falling edge succeeding a SDMMC_CK edge. - SDMMC_CK edge occurs on SDMMCCLK rising edge. - Data changed on the SDMMC_CK falling edge succeeding a SDMMC_CK edge. - SDMMC_CK edge occurs on SDMMCCLK rising edge.
    struct NEGEDGE : RegisterField<SDMMC_CLKCR, 16, 1, ReadWriteMode>
    {
    };
    // Wide bus mode enable bit This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0)
    struct WIDBUS : RegisterField<SDMMC_CLKCR, 14, 2, ReadWriteMode>
    {
    };
    // Power saving configuration bit This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) For power saving, the SDMMC_CK clock output can be disabled when the bus is idle by setting PWRSAV:
    struct PWRSAV : RegisterField<SDMMC_CLKCR, 12, 1, ReadWriteMode>
    {
    };
    // Clock divide factor This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). This field defines the divide factor between the input clock (SDMMCCLK) and the output clock (SDMMC_CK): SDMMC_CK frequency = SDMMCCLK / [2 * CLKDIV]. 0xx: etc.. xxx: etc..
    struct CLKDIV : RegisterField<SDMMC_CLKCR, 0, 10, ReadWriteMode>
    {
    };
  };

  // The SDMMC_ARGR register contains a 32-bit command argument, which is sent to a card as part of a command message.
  struct SDMMC_ARGR : Register<0x40012c08, ReadWriteMode, 0x0>
  {
    // Command argument. These bits can only be written by firmware when CPSM is disabled (CPSMEN = 0). Command argument sent to a card as part of a command message. If a command contains an argument, it must be loaded into this register before writing a command to the command register.
    struct CMDARG : RegisterField<SDMMC_ARGR, 0, 32, ReadWriteMode>
    {
    };
  };

  // The SDMMC_CMDR register contains the command index and command type bits. The command index is sent to a card as part of a command message. The command type bits control the command path state machine (CPSM).
  struct SDMMC_CMDR : Register<0x40012c0c, ReadWriteMode, 0x0>
  {
    // The CPSM treats the command as a Suspend or Resume command and signals interrupt period start/end. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). CMDSUSPEND = 1 and CMDTRANS = 0 Suspend command, start interrupt period when response bit BS=0. CMDSUSPEND = 1 and CMDTRANS = 1 Resume command with data, end interrupt period when response bit DF=1.
    struct CMDSUSPEND : RegisterField<SDMMC_CMDR, 16, 1, ReadWriteMode>
    {
    };
    // Enable boot mode procedure.
    struct BOOTEN : RegisterField<SDMMC_CMDR, 15, 1, ReadWriteMode>
    {
    };
    // Select the boot mode procedure to be used. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0)
    struct BOOTMODE : RegisterField<SDMMC_CMDR, 14, 1, ReadWriteMode>
    {
    };
    // Hold new data block transmission and reception in the DPSM. If this bit is set, the DPSM will not move from the Wait_S state to the Send state or from the Wait_R state to the Receive state.
    struct DTHOLD : RegisterField<SDMMC_CMDR, 13, 1, ReadWriteMode>
    {
    };
    // Command path state machine (CPSM) Enable bit This bit is written 1 by firmware, and cleared by hardware when the CPSM enters the Idle state. If this bit is set, the CPSM is enabled. When DTEN = 1, no command will be transfered nor boot procedure will be started. CPSMEN is cleared to 0.
    struct CPSMEN : RegisterField<SDMMC_CMDR, 12, 1, ReadWriteMode>
    {
    };
    // CPSM Waits for end of data transfer (CmdPend internal signal) from DPSM. This bit when set, the CPSM waits for the end of data transfer trigger before it starts sending a command. WAITPEND is only taken into account when DTMODE = MMC stream data transfer, WIDBUS = 1-bit wide bus mode, DPSMACT = 1 and DTDIR = from host to card.
    struct WAITPEND : RegisterField<SDMMC_CMDR, 11, 1, ReadWriteMode>
    {
    };
    // CPSM waits for interrupt request. If this bit is set, the CPSM disables command timeout and waits for an card interrupt request (Response). If this bit is cleared in the CPSM Wait state, will cause the abort of the interrupt mode.
    struct WAITINT : RegisterField<SDMMC_CMDR, 10, 1, ReadWriteMode>
    {
    };
    // Wait for response bits. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). They are used to configure whether the CPSM is to wait for a response, and if yes, which kind of response.
    struct WAITRESP : RegisterField<SDMMC_CMDR, 8, 2, ReadWriteMode>
    {
    };
    // The CPSM treats the command as a Stop Transmission command and signals Abort to the DPSM. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). If this bit is set, the CPSM issues the Abort signal to the DPSM when the command is sent.
    struct CMDSTOP : RegisterField<SDMMC_CMDR, 7, 1, ReadWriteMode>
    {
    };
    // The CPSM treats the command as a data transfer command, stops the interrupt period, and signals DataEnable to the DPSM This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). If this bit is set, the CPSM issues an end of interrupt period and issues DataEnable signal to the DPSM when the command is sent.
    struct CMDTRANS : RegisterField<SDMMC_CMDR, 6, 1, ReadWriteMode>
    {
    };
    // Command index. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). The command index is sent to the card as part of a command message.
    struct CMDINDEX : RegisterField<SDMMC_CMDR, 0, 6, ReadWriteMode>
    {
    };
  };

  // The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
  struct SDMMC_RESP1R : Register<0x40012c10, ReadMode, 0x0>
  {
    // see Table404.
    struct CARDSTATUS1 : RegisterField<SDMMC_RESP1R, 0, 32, ReadMode>
    {
    };
  };

  // The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
  struct SDMMC_RESP2R : Register<0x40012c14, ReadMode, 0x0>
  {
    // see Table404.
    struct CARDSTATUS2 : RegisterField<SDMMC_RESP2R, 0, 32, ReadMode>
    {
    };
  };

  // The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
  struct SDMMC_RESP3R : Register<0x40012c18, ReadMode, 0x0>
  {
    // see Table404.
    struct CARDSTATUS3 : RegisterField<SDMMC_RESP3R, 0, 32, ReadMode>
    {
    };
  };

  // The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
  struct SDMMC_RESP4R : Register<0x40012c1c, ReadMode, 0x0>
  {
    // see Table404.
    struct CARDSTATUS4 : RegisterField<SDMMC_RESP4R, 0, 32, ReadMode>
    {
    };
  };

  // The SDMMC_DTIMER register contains the data timeout period, in card bus clock periods. A counter loads the value from the SDMMC_DTIMER register, and starts decrementing when the data path state machine (DPSM) enters the Wait_R or Busy state. If the timer reaches 0 while the DPSM is in either of these states, the timeout status flag is set.
  struct SDMMC_DTIMER : Register<0x40012c24, ReadWriteMode, 0x0>
  {
    // Data and R1b busy timeout period This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). Data and R1b busy timeout period expressed in card bus clock periods.
    struct DATATIME : RegisterField<SDMMC_DTIMER, 0, 32, ReadWriteMode>
    {
    };
  };

  // The SDMMC_DLENR register contains the number of data bytes to be transferred. The value is loaded into the data counter when data transfer starts.
  struct SDMMC_DLENR : Register<0x40012c28, ReadWriteMode, 0x0>
  {
    // Data length value This register can only be written by firmware when DPSM is inactive (DPSMACT = 0). Number of data bytes to be transferred. When DDR = 1 DATALENGTH is truncated to a multiple of 2. (The last odd byte is not transfered) When DATALENGTH = 0 no data will be transfered, when requested by a CPSMEN and CMDTRANS = 1 also no command will be transfered. DTEN and CPSMEN are cleared to 0.
    struct DATALENGTH : RegisterField<SDMMC_DLENR, 0, 25, ReadWriteMode>
    {
    };
  };

  // The SDMMC_DCTRL register control the data path state machine (DPSM).
  struct SDMMC_DCTRL : Register<0x40012c2c, ReadWriteMode, 0x0>
  {
    // FIFO reset, will flush any remaining data. This bit can only be written by firmware when IDMAEN= 0 and DPSM is active (DPSMACT = 1). This bit will only take effect when a transfer error or transfer hold occurs.
    struct FIFORST : RegisterField<SDMMC_DCTRL, 13, 1, ReadWriteMode>
    {
    };
    // Enable the reception of the boot acknowledgment. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).
    struct BOOTACKEN : RegisterField<SDMMC_DCTRL, 12, 1, ReadWriteMode>
    {
    };
    // SD I/O interrupt enable functions This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). If this bit is set, the DPSM enables the SD I/O card specific interrupt operation.
    struct SDIOEN : RegisterField<SDMMC_DCTRL, 11, 1, ReadWriteMode>
    {
    };
    // Read wait mode. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).
    struct RWMOD : RegisterField<SDMMC_DCTRL, 10, 1, ReadWriteMode>
    {
    };
    // Read wait stop This bit is written by firmware and auto cleared by hardware when the DPSM moves from the READ_WAIT state to the WAIT_R or IDLE state.
    struct RWSTOP : RegisterField<SDMMC_DCTRL, 9, 1, ReadWriteMode>
    {
    };
    // Read wait start. If this bit is set, read wait operation starts.
    struct RWSTART : RegisterField<SDMMC_DCTRL, 8, 1, ReadWriteMode>
    {
    };
    // Data block size This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). Define the data block length when the block data transfer mode is selected: When DATALENGTH is not a multiple of DBLOCKSIZE, the transfered data is truncated at a multiple of DBLOCKSIZE. (Any remain data will not be transfered.) When DDR = 1, DBLOCKSIZE = 0000 shall not be used. (No data will be transfered)
    struct DBLOCKSIZE : RegisterField<SDMMC_DCTRL, 4, 4, ReadWriteMode>
    {
    };
    // Data transfer mode selection. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).
    struct DTMODE : RegisterField<SDMMC_DCTRL, 2, 2, ReadWriteMode>
    {
    };
    // Data transfer direction selection This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).
    struct DTDIR : RegisterField<SDMMC_DCTRL, 1, 1, ReadWriteMode>
    {
    };
    // Data transfer enable bit This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). This bit is cleared by Hardware when data transfer completes. This bit shall only be used to transfer data when no associated data transfer command is used, i.e. shall not be used with SD or eMMC cards.
    struct DTEN : RegisterField<SDMMC_DCTRL, 0, 1, ReadWriteMode>
    {
    };
  };

  // The SDMMC_DCNTR register loads the value from the data length register (see SDMMC_DLENR) when the DPSM moves from the Idle state to the Wait_R or Wait_S state. As data is transferred, the counter decrements the value until it reaches 0. The DPSM then moves to the Idle state and when there has been no error, the data status end flag (DATAEND) is set.
  struct SDMMC_DCNTR : Register<0x40012c30, ReadMode, 0x0>
  {
    // Data count value When read, the number of remaining data bytes to be transferred is returned. Write has no effect.
    struct DATACOUNT : RegisterField<SDMMC_DCNTR, 0, 27, ReadMode>
    {
    };
  };

  // The SDMMC_STAR register is a read-only register. It contains two types of flag:Static flags (bits [29,21,11:0]): these bits remain asserted until they are cleared by writing to the SDMMC interrupt Clear register (see SDMMC_ICR)Dynamic flags (bits [20:12]): these bits change state depending on the state of the underlying logic (for example, FIFO full and empty flags are asserted and de-asserted as data while written to the FIFO)
  struct SDMMC_STAR : Register<0x40012c34, ReadMode, 0x0>
  {
    // IDMA buffer transfer complete. interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct IDMABTC : RegisterField<SDMMC_STAR, 28, 1, ReadMode>
    {
    };
    // IDMA transfer error. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct IDMATE : RegisterField<SDMMC_STAR, 27, 1, ReadMode>
    {
    };
    // SDMMC_CK stopped in Voltage switch procedure. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct CKSTOP : RegisterField<SDMMC_STAR, 26, 1, ReadMode>
    {
    };
    // Voltage switch critical timing section completion. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct VSWEND : RegisterField<SDMMC_STAR, 25, 1, ReadMode>
    {
    };
    // Boot acknowledgment timeout. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct ACKTIMEOUT : RegisterField<SDMMC_STAR, 24, 1, ReadMode>
    {
    };
    // Boot acknowledgment received (boot acknowledgment check fail). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct ACKFAIL : RegisterField<SDMMC_STAR, 23, 1, ReadMode>
    {
    };
    // SDIO interrupt received. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct SDIOIT : RegisterField<SDMMC_STAR, 22, 1, ReadMode>
    {
    };
    // end of SDMMC_D0 Busy following a CMD response detected. This indicates only end of busy following a CMD response. This bit does not signal busy due to data transfer. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct BUSYD0END : RegisterField<SDMMC_STAR, 21, 1, ReadMode>
    {
    };
    // Inverted value of SDMMC_D0 line (Busy), sampled at the end of a CMD response and a second time 2 SDMMC_CK cycles after the CMD response. This bit is reset to not busy when the SDMMCD0 line changes from busy to not busy. This bit does not signal busy due to data transfer. This is a hardware status flag only, it does not generate an interrupt.
    struct BUSYD0 : RegisterField<SDMMC_STAR, 20, 1, ReadMode>
    {
    };
    // Receive FIFO empty This is a hardware status flag only, does not generate an interrupt. This bit is cleared when one FIFO location becomes full.
    struct RXFIFOE : RegisterField<SDMMC_STAR, 19, 1, ReadMode>
    {
    };
    // Transmit FIFO empty This bit is cleared when one FIFO location becomes full.
    struct TXFIFOE : RegisterField<SDMMC_STAR, 18, 1, ReadMode>
    {
    };
    // Receive FIFO full This bit is cleared when one FIFO location becomes empty.
    struct RXFIFOF : RegisterField<SDMMC_STAR, 17, 1, ReadMode>
    {
    };
    // Transmit FIFO full This is a hardware status flag only, does not generate an interrupt. This bit is cleared when one FIFO location becomes empty.
    struct TXFIFOF : RegisterField<SDMMC_STAR, 16, 1, ReadMode>
    {
    };
    // Receive FIFO half full There are at least half the number of words in the FIFO. This bit is cleared when the FIFO becomes half+1 empty.
    struct RXFIFOHF : RegisterField<SDMMC_STAR, 15, 1, ReadMode>
    {
    };
    // Transmit FIFO half empty At least half the number of words can be written into the FIFO. This bit is cleared when the FIFO becomes half+1 full.
    struct TXFIFOHE : RegisterField<SDMMC_STAR, 14, 1, ReadMode>
    {
    };
    // Command path state machine active, i.e. not in Idle state. This is a hardware status flag only, does not generate an interrupt.
    struct CPSMACT : RegisterField<SDMMC_STAR, 13, 1, ReadMode>
    {
    };
    // Data path state machine active, i.e. not in Idle state. This is a hardware status flag only, does not generate an interrupt.
    struct DPSMACT : RegisterField<SDMMC_STAR, 12, 1, ReadMode>
    {
    };
    // Data transfer aborted by CMD12. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct DABORT : RegisterField<SDMMC_STAR, 11, 1, ReadMode>
    {
    };
    // Data block sent/received. (CRC check passed) and DPSM moves to the READWAIT state. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct DBCKEND : RegisterField<SDMMC_STAR, 10, 1, ReadMode>
    {
    };
    // Data transfer Hold. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct DHOLD : RegisterField<SDMMC_STAR, 9, 1, ReadMode>
    {
    };
    // Data transfer ended correctly. (data counter, DATACOUNT is zero and no errors occur). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct DATAEND : RegisterField<SDMMC_STAR, 8, 1, ReadMode>
    {
    };
    // Command sent (no response required). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct CMDSENT : RegisterField<SDMMC_STAR, 7, 1, ReadMode>
    {
    };
    // Command response received (CRC check passed, or no CRC). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct CMDREND : RegisterField<SDMMC_STAR, 6, 1, ReadMode>
    {
    };
    // Received FIFO overrun error or IDMA write transfer error. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct RXOVERR : RegisterField<SDMMC_STAR, 5, 1, ReadMode>
    {
    };
    // Transmit FIFO underrun error or IDMA read transfer error. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct TXUNDERR : RegisterField<SDMMC_STAR, 4, 1, ReadMode>
    {
    };
    // Data timeout. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct DTIMEOUT : RegisterField<SDMMC_STAR, 3, 1, ReadMode>
    {
    };
    // Command response timeout. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. The Command Timeout period has a fixed value of 64 SDMMC_CK clock periods.
    struct CTIMEOUT : RegisterField<SDMMC_STAR, 2, 1, ReadMode>
    {
    };
    // Data block sent/received (CRC check failed). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct DCRCFAIL : RegisterField<SDMMC_STAR, 1, 1, ReadMode>
    {
    };
    // Command response received (CRC check failed). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    struct CCRCFAIL : RegisterField<SDMMC_STAR, 0, 1, ReadMode>
    {
    };
  };

  // The SDMMC_ICR register is a write-only register. Writing a bit with 1 clears the corresponding bit in the SDMMC_STAR status register.
  struct SDMMC_ICR : Register<0x40012c38, ReadWriteMode, 0x0>
  {
    // IDMA buffer transfer complete clear bit Set by software to clear the IDMABTC flag.
    struct IDMABTCC : RegisterField<SDMMC_ICR, 28, 1, ReadWriteMode>
    {
    };
    // IDMA transfer error clear bit Set by software to clear the IDMATE flag.
    struct IDMATEC : RegisterField<SDMMC_ICR, 27, 1, ReadWriteMode>
    {
    };
    // CKSTOP flag clear bit Set by software to clear the CKSTOP flag.
    struct CKSTOPC : RegisterField<SDMMC_ICR, 26, 1, ReadWriteMode>
    {
    };
    // VSWEND flag clear bit Set by software to clear the VSWEND flag.
    struct VSWENDC : RegisterField<SDMMC_ICR, 25, 1, ReadWriteMode>
    {
    };
    // ACKTIMEOUT flag clear bit Set by software to clear the ACKTIMEOUT flag.
    struct ACKTIMEOUTC : RegisterField<SDMMC_ICR, 24, 1, ReadWriteMode>
    {
    };
    // ACKFAIL flag clear bit Set by software to clear the ACKFAIL flag.
    struct ACKFAILC : RegisterField<SDMMC_ICR, 23, 1, ReadWriteMode>
    {
    };
    // SDIOIT flag clear bit Set by software to clear the SDIOIT flag.
    struct SDIOITC : RegisterField<SDMMC_ICR, 22, 1, ReadWriteMode>
    {
    };
    // BUSYD0END flag clear bit Set by software to clear the BUSYD0END flag.
    struct BUSYD0ENDC : RegisterField<SDMMC_ICR, 21, 1, ReadWriteMode>
    {
    };
    // DABORT flag clear bit Set by software to clear the DABORT flag.
    struct DABORTC : RegisterField<SDMMC_ICR, 11, 1, ReadWriteMode>
    {
    };
    // DBCKEND flag clear bit Set by software to clear the DBCKEND flag.
    struct DBCKENDC : RegisterField<SDMMC_ICR, 10, 1, ReadWriteMode>
    {
    };
    // DHOLD flag clear bit Set by software to clear the DHOLD flag.
    struct DHOLDC : RegisterField<SDMMC_ICR, 9, 1, ReadWriteMode>
    {
    };
    // DATAEND flag clear bit Set by software to clear the DATAEND flag.
    struct DATAENDC : RegisterField<SDMMC_ICR, 8, 1, ReadWriteMode>
    {
    };
    // CMDSENT flag clear bit Set by software to clear the CMDSENT flag.
    struct CMDSENTC : RegisterField<SDMMC_ICR, 7, 1, ReadWriteMode>
    {
    };
    // CMDREND flag clear bit Set by software to clear the CMDREND flag.
    struct CMDRENDC : RegisterField<SDMMC_ICR, 6, 1, ReadWriteMode>
    {
    };
    // RXOVERR flag clear bit Set by software to clear the RXOVERR flag.
    struct RXOVERRC : RegisterField<SDMMC_ICR, 5, 1, ReadWriteMode>
    {
    };
    // TXUNDERR flag clear bit Set by software to clear TXUNDERR flag.
    struct TXUNDERRC : RegisterField<SDMMC_ICR, 4, 1, ReadWriteMode>
    {
    };
    // DTIMEOUT flag clear bit Set by software to clear the DTIMEOUT flag.
    struct DTIMEOUTC : RegisterField<SDMMC_ICR, 3, 1, ReadWriteMode>
    {
    };
    // CTIMEOUT flag clear bit Set by software to clear the CTIMEOUT flag.
    struct CTIMEOUTC : RegisterField<SDMMC_ICR, 2, 1, ReadWriteMode>
    {
    };
    // DCRCFAIL flag clear bit Set by software to clear the DCRCFAIL flag.
    struct DCRCFAILC : RegisterField<SDMMC_ICR, 1, 1, ReadWriteMode>
    {
    };
    // CCRCFAIL flag clear bit Set by software to clear the CCRCFAIL flag.
    struct CCRCFAILC : RegisterField<SDMMC_ICR, 0, 1, ReadWriteMode>
    {
    };
  };

  // The interrupt mask register determines which status flags generate an interrupt request by setting the corresponding bit to 1.
  struct SDMMC_MASKR : Register<0x40012c3c, ReadWriteMode, 0x0>
  {
    // IDMA buffer transfer complete interrupt enable Set and cleared by software to enable/disable the interrupt generated when the IDMA has transferred all data belonging to a memory buffer.
    struct IDMABTCIE : RegisterField<SDMMC_MASKR, 28, 1, ReadWriteMode>
    {
    };
    // Voltage Switch clock stopped interrupt enable Set and cleared by software to enable/disable interrupt caused by Voltage Switch clock stopped.
    struct CKSTOPIE : RegisterField<SDMMC_MASKR, 26, 1, ReadWriteMode>
    {
    };
    // Voltage switch critical timing section completion interrupt enable Set and cleared by software to enable/disable the interrupt generated when voltage switch critical timing section completion.
    struct VSWENDIE : RegisterField<SDMMC_MASKR, 25, 1, ReadWriteMode>
    {
    };
    // Acknowledgment timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by acknowledgment timeout.
    struct ACKTIMEOUTIE : RegisterField<SDMMC_MASKR, 24, 1, ReadWriteMode>
    {
    };
    // Acknowledgment Fail interrupt enable Set and cleared by software to enable/disable interrupt caused by acknowledgment Fail.
    struct ACKFAILIE : RegisterField<SDMMC_MASKR, 23, 1, ReadWriteMode>
    {
    };
    // SDIO mode interrupt received interrupt enable Set and cleared by software to enable/disable the interrupt generated when receiving the SDIO mode interrupt.
    struct SDIOITIE : RegisterField<SDMMC_MASKR, 22, 1, ReadWriteMode>
    {
    };
    // BUSYD0END interrupt enable Set and cleared by software to enable/disable the interrupt generated when SDMMC_D0 signal changes from busy to NOT busy following a CMD response.
    struct BUSYD0ENDIE : RegisterField<SDMMC_MASKR, 21, 1, ReadWriteMode>
    {
    };
    // Tx FIFO empty interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO empty.
    struct TXFIFOEIE : RegisterField<SDMMC_MASKR, 18, 1, ReadWriteMode>
    {
    };
    // Rx FIFO full interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO full.
    struct RXFIFOFIE : RegisterField<SDMMC_MASKR, 17, 1, ReadWriteMode>
    {
    };
    // Rx FIFO half full interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO half full.
    struct RXFIFOHFIE : RegisterField<SDMMC_MASKR, 15, 1, ReadWriteMode>
    {
    };
    // Tx FIFO half empty interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO half empty.
    struct TXFIFOHEIE : RegisterField<SDMMC_MASKR, 14, 1, ReadWriteMode>
    {
    };
    // Data transfer aborted interrupt enable Set and cleared by software to enable/disable interrupt caused by a data transfer being aborted.
    struct DABORTIE : RegisterField<SDMMC_MASKR, 11, 1, ReadWriteMode>
    {
    };
    // Data block end interrupt enable Set and cleared by software to enable/disable interrupt caused by data block end.
    struct DBCKENDIE : RegisterField<SDMMC_MASKR, 10, 1, ReadWriteMode>
    {
    };
    // Data hold interrupt enable Set and cleared by software to enable/disable the interrupt generated when sending new data is hold in the DPSM Wait_S state.
    struct DHOLDIE : RegisterField<SDMMC_MASKR, 9, 1, ReadWriteMode>
    {
    };
    // Data end interrupt enable Set and cleared by software to enable/disable interrupt caused by data end.
    struct DATAENDIE : RegisterField<SDMMC_MASKR, 8, 1, ReadWriteMode>
    {
    };
    // Command sent interrupt enable Set and cleared by software to enable/disable interrupt caused by sending command.
    struct CMDSENTIE : RegisterField<SDMMC_MASKR, 7, 1, ReadWriteMode>
    {
    };
    // Command response received interrupt enable Set and cleared by software to enable/disable interrupt caused by receiving command response.
    struct CMDRENDIE : RegisterField<SDMMC_MASKR, 6, 1, ReadWriteMode>
    {
    };
    // Rx FIFO overrun error interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO overrun error.
    struct RXOVERRIE : RegisterField<SDMMC_MASKR, 5, 1, ReadWriteMode>
    {
    };
    // Tx FIFO underrun error interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO underrun error.
    struct TXUNDERRIE : RegisterField<SDMMC_MASKR, 4, 1, ReadWriteMode>
    {
    };
    // Data timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by data timeout.
    struct DTIMEOUTIE : RegisterField<SDMMC_MASKR, 3, 1, ReadWriteMode>
    {
    };
    // Command timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by command timeout.
    struct CTIMEOUTIE : RegisterField<SDMMC_MASKR, 2, 1, ReadWriteMode>
    {
    };
    // Data CRC fail interrupt enable Set and cleared by software to enable/disable interrupt caused by data CRC failure.
    struct DCRCFAILIE : RegisterField<SDMMC_MASKR, 1, 1, ReadWriteMode>
    {
    };
    // Command CRC fail interrupt enable Set and cleared by software to enable/disable interrupt caused by command CRC failure.
    struct CCRCFAILIE : RegisterField<SDMMC_MASKR, 0, 1, ReadWriteMode>
    {
    };
  };

  // The SDMMC_ACKTIMER register contains the acknowledgment timeout period, in SDMMC_CK bus clock periods. A counter loads the value from the SDMMC_ACKTIMER register, and starts decrementing when the data path state machine (DPSM) enters the Wait_Ack state. If the timer reaches 0 while the DPSM is in this states, the acknowledgment timeout status flag is set.
  struct SDMMC_ACKTIMER : Register<0x40012c40, ReadWriteMode, 0x0>
  {
    // Boot acknowledgment timeout period This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). Boot acknowledgment timeout period expressed in card bus clock periods.
    struct ACKTIME : RegisterField<SDMMC_ACKTIMER, 0, 25, ReadWriteMode>
    {
    };
  };

  // The receive and transmit FIFOs can be read or written as 32-bit wide registers. The FIFOs contain 32 entries on 32 sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO.
  struct SDMMC_IDMACTRLR : Register<0x40012c50, ReadWriteMode, 0x0>
  {
    // Double buffer mode active buffer indication This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). When IDMA is enabled this bit is toggled by hardware.
    struct IDMABACT : RegisterField<SDMMC_IDMACTRLR, 2, 1, ReadWriteMode>
    {
    };
    // Buffer mode selection. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).
    struct IDMABMODE : RegisterField<SDMMC_IDMACTRLR, 1, 1, ReadWriteMode>
    {
    };
    // IDMA enable This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).
    struct IDMAEN : RegisterField<SDMMC_IDMACTRLR, 0, 1, ReadWriteMode>
    {
    };
  };

  // The SDMMC_IDMABSIZER register contains the buffers size when in double buffer configuration.
  struct SDMMC_IDMABSIZER : Register<0x40012c54, ReadWriteMode, 0x0>
  {
    // Number of transfers per buffer. This 8-bit value shall be multiplied by 8 to get the size of the buffer in 32-bit words and by 32 to get the size of the buffer in bytes. Example: IDMABNDT = 0x01: buffer size = 8 words = 32 bytes. These bits can only be written by firmware when DPSM is inactive (DPSMACT = 0).
    struct IDMABNDT : RegisterField<SDMMC_IDMABSIZER, 5, 8, ReadWriteMode>
    {
    };
  };

  // The SDMMC_IDMABASE0R register contains the memory buffer base address in single buffer configuration and the buffer 0 base address in double buffer configuration.
  struct SDMMC_IDMABASE0R : Register<0x40012c58, ReadWriteMode, 0x0>
  {
    // Buffer 0 memory base address bits [31:2], shall be word aligned (bit [1:0] are always 0 and read only). This register can be written by firmware when DPSM is inactive (DPSMACT = 0), and can dynamically be written by firmware when DPSM active (DPSMACT = 1) and memory buffer 0 is inactive (IDMABACT = 1).
    struct IDMABASE0 : RegisterField<SDMMC_IDMABASE0R, 0, 32, ReadWriteMode>
    {
    };
  };

  // The SDMMC_IDMABASE1R register contains the double buffer configuration second buffer memory base address.
  struct SDMMC_IDMABASE1R : Register<0x40012c5c, ReadWriteMode, 0x0>
  {
    // Buffer 1 memory base address, shall be word aligned (bit [1:0] are always 0 and read only). This register can be written by firmware when DPSM is inactive (DPSMACT = 0), and can dynamically be written by firmware when DPSM active (DPSMACT = 1) and memory buffer 1 is inactive (IDMABACT = 0).
    struct IDMABASE1 : RegisterField<SDMMC_IDMABASE1R, 0, 32, ReadWriteMode>
    {
    };
  };

  // The SDMMC_RESPCMDR register contains the command index field of the last command response received. If the command response transmission does not contain the command index field (long or OCR response), the RESPCMD field is unknown, although it must contain 111111b (the value of the reserved field from the response).
  struct SDMMC_RESPCMDR : Register<0x40012c60, ReadMode, 0x0>
  {
    // Response command index Read-only bit field. Contains the command index of the last command response received.
    struct RESPCMD : RegisterField<SDMMC_RESPCMDR, 0, 6, ReadMode>
    {
    };
  };

  // The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO.When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
  struct SDMMC_FIFOR : Register<0x40012c80, ReadWriteMode, 0x0>
  {
    // Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT=1). The FIFO data occupies 16 entries of 32-bit words.
    struct FIFODATA : RegisterField<SDMMC_FIFOR, 0, 32, ReadWriteMode>
    {
    };
  };

  // SDMMC IP version register
  struct SDMMC_VER : Register<0x40012ff4, ReadMode, 0x10>
  {
    // IP major revision number.
    struct MAJREV : RegisterField<SDMMC_VER, 4, 4, ReadMode>
    {
    };
    // IP minor revision number.
    struct MINREV : RegisterField<SDMMC_VER, 0, 4, ReadMode>
    {
    };
  };

  // SDMMC IP identification register
  struct SDMMC_ID : Register<0x40012ff8, ReadMode, 0x140022>
  {
    // SDMMC IP identification.
    struct IP_ID : RegisterField<SDMMC_ID, 0, 32, ReadMode>
    {
    };
  };

// Large Registers

};


