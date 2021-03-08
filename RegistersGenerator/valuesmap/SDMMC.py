from tempvalue import*


def apply(SDMMC):
    # -------------------------------------------------------------------------
    # SDMMC_POWER	(SDMMC power control register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_POWER']['DIRPOL'].values = None
    SDMMC['SDMMC_POWER']['VSWITCHEN'].values = None
    SDMMC['SDMMC_POWER']['VSWITCH'].values = None
    SDMMC['SDMMC_POWER']['PWRCTRL'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_CLKCR	(The SDMMC_CLKCR register controls the SDMMC_CK output clock, the SDMMC_RX_CLK receive clock, and the bus width.)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_CLKCR']['SELCLKRX'].values = None
    SDMMC['SDMMC_CLKCR']['BUSSPEED'].values = None
    SDMMC['SDMMC_CLKCR']['DDR'].values = None
    SDMMC['SDMMC_CLKCR']['HWFC_EN'].values = None
    SDMMC['SDMMC_CLKCR']['NEGEDGE'].values = None
    SDMMC['SDMMC_CLKCR']['WIDBUS'].values = None
    SDMMC['SDMMC_CLKCR']['PWRSAV'].values = None
    SDMMC['SDMMC_CLKCR']['CLKDIV'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_ARGR	(The SDMMC_ARGR register contains a 32-bit command argument, which is sent to a card as part of a command message.)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_ARGR']['CMDARG'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_CMDR	(The SDMMC_CMDR register contains the command index and command type bits. The command index is sent to a card as part of a command message. The command type bits control the command path state machine (CPSM).)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_CMDR']['CMDSUSPEND'].values = None
    SDMMC['SDMMC_CMDR']['BOOTEN'].values = None
    SDMMC['SDMMC_CMDR']['BOOTMODE'].values = None
    SDMMC['SDMMC_CMDR']['DTHOLD'].values = None
    SDMMC['SDMMC_CMDR']['CPSMEN'].values = None
    SDMMC['SDMMC_CMDR']['WAITPEND'].values = None
    SDMMC['SDMMC_CMDR']['WAITINT'].values = None
    SDMMC['SDMMC_CMDR']['WAITRESP'].values = None
    SDMMC['SDMMC_CMDR']['CMDSTOP'].values = None
    SDMMC['SDMMC_CMDR']['CMDTRANS'].values = None
    SDMMC['SDMMC_CMDR']['CMDINDEX'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_RESP1R	(The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.)
    # Offset: 16	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_RESP1R']['CARDSTATUS1'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_RESP2R	(The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.)
    # Offset: 20	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_RESP2R']['CARDSTATUS2'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_RESP3R	(The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.)
    # Offset: 24	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_RESP3R']['CARDSTATUS3'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_RESP4R	(The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.)
    # Offset: 28	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_RESP4R']['CARDSTATUS4'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_DTIMER	(The SDMMC_DTIMER register contains the data timeout period, in card bus clock periods. A counter loads the value from the SDMMC_DTIMER register, and starts decrementing when the data path state machine (DPSM) enters the Wait_R or Busy state. If the timer reaches 0 while the DPSM is in either of these states, the timeout status flag is set.)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_DTIMER']['DATATIME'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_DLENR	(The SDMMC_DLENR register contains the number of data bytes to be transferred. The value is loaded into the data counter when data transfer starts.)
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_DLENR']['DATALENGTH'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_DCTRL	(The SDMMC_DCTRL register control the data path state machine (DPSM).)
    # Offset: 44	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_DCTRL']['FIFORST'].values = None
    SDMMC['SDMMC_DCTRL']['BOOTACKEN'].values = None
    SDMMC['SDMMC_DCTRL']['SDIOEN'].values = None
    SDMMC['SDMMC_DCTRL']['RWMOD'].values = None
    SDMMC['SDMMC_DCTRL']['RWSTOP'].values = None
    SDMMC['SDMMC_DCTRL']['RWSTART'].values = None
    SDMMC['SDMMC_DCTRL']['DBLOCKSIZE'].values = None
    SDMMC['SDMMC_DCTRL']['DTMODE'].values = None
    SDMMC['SDMMC_DCTRL']['DTDIR'].values = None
    SDMMC['SDMMC_DCTRL']['DTEN'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_DCNTR	(The SDMMC_DCNTR register loads the value from the data length register (see SDMMC_DLENR) when the DPSM moves from the Idle state to the Wait_R or Wait_S state. As data is transferred, the counter decrements the value until it reaches 0. The DPSM then moves to the Idle state and when there has been no error, the data status end flag (DATAEND) is set.)
    # Offset: 48	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_DCNTR']['DATACOUNT'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_STAR	(The SDMMC_STAR register is a read-only register. It contains two types of flag:Static flags (bits [29,21,11:0]): these bits remain asserted until they are cleared by writing to the SDMMC interrupt Clear register (see SDMMC_ICR)Dynamic flags (bits [20:12]): these bits change state depending on the state of the underlying logic (for example, FIFO full and empty flags are asserted and de-asserted as data while written to the FIFO))
    # Offset: 52	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_STAR']['IDMABTC'].values = None
    SDMMC['SDMMC_STAR']['IDMATE'].values = None
    SDMMC['SDMMC_STAR']['CKSTOP'].values = None
    SDMMC['SDMMC_STAR']['VSWEND'].values = None
    SDMMC['SDMMC_STAR']['ACKTIMEOUT'].values = None
    SDMMC['SDMMC_STAR']['ACKFAIL'].values = None
    SDMMC['SDMMC_STAR']['SDIOIT'].values = None
    SDMMC['SDMMC_STAR']['BUSYD0END'].values = None
    SDMMC['SDMMC_STAR']['BUSYD0'].values = None
    SDMMC['SDMMC_STAR']['RXFIFOE'].values = None
    SDMMC['SDMMC_STAR']['TXFIFOE'].values = None
    SDMMC['SDMMC_STAR']['RXFIFOF'].values = None
    SDMMC['SDMMC_STAR']['TXFIFOF'].values = None
    SDMMC['SDMMC_STAR']['RXFIFOHF'].values = None
    SDMMC['SDMMC_STAR']['TXFIFOHE'].values = None
    SDMMC['SDMMC_STAR']['CPSMACT'].values = None
    SDMMC['SDMMC_STAR']['DPSMACT'].values = None
    SDMMC['SDMMC_STAR']['DABORT'].values = None
    SDMMC['SDMMC_STAR']['DBCKEND'].values = None
    SDMMC['SDMMC_STAR']['DHOLD'].values = None
    SDMMC['SDMMC_STAR']['DATAEND'].values = None
    SDMMC['SDMMC_STAR']['CMDSENT'].values = None
    SDMMC['SDMMC_STAR']['CMDREND'].values = None
    SDMMC['SDMMC_STAR']['RXOVERR'].values = None
    SDMMC['SDMMC_STAR']['TXUNDERR'].values = None
    SDMMC['SDMMC_STAR']['DTIMEOUT'].values = None
    SDMMC['SDMMC_STAR']['CTIMEOUT'].values = None
    SDMMC['SDMMC_STAR']['DCRCFAIL'].values = None
    SDMMC['SDMMC_STAR']['CCRCFAIL'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_ICR	(The SDMMC_ICR register is a write-only register. Writing a bit with 1 clears the corresponding bit in the SDMMC_STAR status register.)
    # Offset: 56	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_ICR']['IDMABTCC'].values = None
    SDMMC['SDMMC_ICR']['IDMATEC'].values = None
    SDMMC['SDMMC_ICR']['CKSTOPC'].values = None
    SDMMC['SDMMC_ICR']['VSWENDC'].values = None
    SDMMC['SDMMC_ICR']['ACKTIMEOUTC'].values = None
    SDMMC['SDMMC_ICR']['ACKFAILC'].values = None
    SDMMC['SDMMC_ICR']['SDIOITC'].values = None
    SDMMC['SDMMC_ICR']['BUSYD0ENDC'].values = None
    SDMMC['SDMMC_ICR']['DABORTC'].values = None
    SDMMC['SDMMC_ICR']['DBCKENDC'].values = None
    SDMMC['SDMMC_ICR']['DHOLDC'].values = None
    SDMMC['SDMMC_ICR']['DATAENDC'].values = None
    SDMMC['SDMMC_ICR']['CMDSENTC'].values = None
    SDMMC['SDMMC_ICR']['CMDRENDC'].values = None
    SDMMC['SDMMC_ICR']['RXOVERRC'].values = None
    SDMMC['SDMMC_ICR']['TXUNDERRC'].values = None
    SDMMC['SDMMC_ICR']['DTIMEOUTC'].values = None
    SDMMC['SDMMC_ICR']['CTIMEOUTC'].values = None
    SDMMC['SDMMC_ICR']['DCRCFAILC'].values = None
    SDMMC['SDMMC_ICR']['CCRCFAILC'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_MASKR	(The interrupt mask register determines which status flags generate an interrupt request by setting the corresponding bit to 1.)
    # Offset: 60	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_MASKR']['IDMABTCIE'].values = None
    SDMMC['SDMMC_MASKR']['CKSTOPIE'].values = None
    SDMMC['SDMMC_MASKR']['VSWENDIE'].values = None
    SDMMC['SDMMC_MASKR']['ACKTIMEOUTIE'].values = None
    SDMMC['SDMMC_MASKR']['ACKFAILIE'].values = None
    SDMMC['SDMMC_MASKR']['SDIOITIE'].values = None
    SDMMC['SDMMC_MASKR']['BUSYD0ENDIE'].values = None
    SDMMC['SDMMC_MASKR']['TXFIFOEIE'].values = None
    SDMMC['SDMMC_MASKR']['RXFIFOFIE'].values = None
    SDMMC['SDMMC_MASKR']['RXFIFOHFIE'].values = None
    SDMMC['SDMMC_MASKR']['TXFIFOHEIE'].values = None
    SDMMC['SDMMC_MASKR']['DABORTIE'].values = None
    SDMMC['SDMMC_MASKR']['DBCKENDIE'].values = None
    SDMMC['SDMMC_MASKR']['DHOLDIE'].values = None
    SDMMC['SDMMC_MASKR']['DATAENDIE'].values = None
    SDMMC['SDMMC_MASKR']['CMDSENTIE'].values = None
    SDMMC['SDMMC_MASKR']['CMDRENDIE'].values = None
    SDMMC['SDMMC_MASKR']['RXOVERRIE'].values = None
    SDMMC['SDMMC_MASKR']['TXUNDERRIE'].values = None
    SDMMC['SDMMC_MASKR']['DTIMEOUTIE'].values = None
    SDMMC['SDMMC_MASKR']['CTIMEOUTIE'].values = None
    SDMMC['SDMMC_MASKR']['DCRCFAILIE'].values = None
    SDMMC['SDMMC_MASKR']['CCRCFAILIE'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_ACKTIMER	(The SDMMC_ACKTIMER register contains the acknowledgment timeout period, in SDMMC_CK bus clock periods. A counter loads the value from the SDMMC_ACKTIMER register, and starts decrementing when the data path state machine (DPSM) enters the Wait_Ack state. If the timer reaches 0 while the DPSM is in this states, the acknowledgment timeout status flag is set.)
    # Offset: 64	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_ACKTIMER']['ACKTIME'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_IDMACTRLR	(The receive and transmit FIFOs can be read or written as 32-bit wide registers. The FIFOs contain 32 entries on 32 sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO.)
    # Offset: 80	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_IDMACTRLR']['IDMABACT'].values = None
    SDMMC['SDMMC_IDMACTRLR']['IDMABMODE'].values = None
    SDMMC['SDMMC_IDMACTRLR']['IDMAEN'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_IDMABSIZER	(The SDMMC_IDMABSIZER register contains the buffers size when in double buffer configuration.)
    # Offset: 84	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_IDMABSIZER']['IDMABNDT'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_IDMABASE0R	(The SDMMC_IDMABASE0R register contains the memory buffer base address in single buffer configuration and the buffer 0 base address in double buffer configuration.)
    # Offset: 88	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_IDMABASE0R']['IDMABASE0'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_IDMABASE1R	(The SDMMC_IDMABASE1R register contains the double buffer configuration second buffer memory base address.)
    # Offset: 92	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_IDMABASE1R']['IDMABASE1'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_RESPCMDR	(The SDMMC_RESPCMDR register contains the command index field of the last command response received. If the command response transmission does not contain the command index field (long or OCR response), the RESPCMD field is unknown, although it must contain 111111b (the value of the reserved field from the response).)
    # Offset: 96	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_RESPCMDR']['RESPCMD'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_FIFOR	(The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO.When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.)
    # Offset: 128	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_FIFOR']['FIFODATA'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_VER	(SDMMC IP version register)
    # Offset: 1012	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_VER']['MAJREV'].values = None
    SDMMC['SDMMC_VER']['MINREV'].values = None

    # -------------------------------------------------------------------------
    # SDMMC_ID	(SDMMC IP identification register)
    # Offset: 1016	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SDMMC['SDMMC_ID']['IP_ID'].values = None

