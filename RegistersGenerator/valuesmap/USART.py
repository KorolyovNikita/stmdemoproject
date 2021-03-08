from tempvalue import*


def apply(USART):
    # -------------------------------------------------------------------------
    # SR	(Status register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    USART['SR']['CTS'].values = None
    USART['SR']['LBD'].values = None
    USART['SR']['TXE'].values = ['notEmpty', 'Empty']
    USART['SR']['TC'].values = ['Clear', 'Complete']
    USART['SR']['RXNE'].values = ['Empty', 'notEmpty']
    USART['SR']['IDLE'].values = ['notDetected', 'Detected']
    USART['SR']['ORE'].values = None
    USART['SR']['NF'].values = None
    USART['SR']['FE'].values = None
    USART['SR']['PE'].values = None

    # -------------------------------------------------------------------------
    # DR	(Data register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    USART['DR']['DR'].values = None

    # -------------------------------------------------------------------------
    # BRR	(Baud rate register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    USART['BRR']['DIV_Mantissa'].values = [tempvalue('Value')]
    USART['BRR']['DIV_Fraction'].values = [tempvalue('Value')]

    # -------------------------------------------------------------------------
    # CR1	(Control register 1)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    USART['CR1']['OVER8'].values = None
    USART['CR1']['UE'].values = ['Disable', 'Enable']
    USART['CR1']['M'].values = None
    USART['CR1']['WAKE'].values = None
    USART['CR1']['PCE'].values = None
    USART['CR1']['PS'].values = None
    USART['CR1']['PEIE'].values = None
    USART['CR1']['TXEIE'].values = ['Disable', 'Enable']
    USART['CR1']['TCIE'].values = ['Disable', 'Enable']
    USART['CR1']['RXNEIE'].values = ['Disable', 'Enable']
    USART['CR1']['IDLEIE'].values = ['Disable', 'Enable']
    USART['CR1']['TE'].values = ['Disable', 'Enable']
    USART['CR1']['RE'].values = ['Disable', 'Enable']
    USART['CR1']['RWU'].values = None
    USART['CR1']['SBK'].values = None

    # -------------------------------------------------------------------------
    # CR2	(Control register 2)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    USART['CR2']['LINEN'].values = None
    USART['CR2']['STOP'].values = None
    USART['CR2']['CLKEN'].values = None
    USART['CR2']['CPOL'].values = None
    USART['CR2']['CPHA'].values = None
    USART['CR2']['LBCL'].values = None
    USART['CR2']['LBDIE'].values = None
    USART['CR2']['LBDL'].values = None
    USART['CR2']['ADD'].values = None

    # -------------------------------------------------------------------------
    # CR3	(Control register 3)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    USART['CR3']['ONEBIT'].values = None
    USART['CR3']['CTSIE'].values = None
    USART['CR3']['CTSE'].values = ['Disable', 'Enable']
    USART['CR3']['RTSE'].values = ['Disable', 'Enable']
    USART['CR3']['DMAT'].values = ['Disable', 'Enable']
    USART['CR3']['DMAR'].values = ['Disable', 'Enable']
    USART['CR3']['SCEN'].values = None
    USART['CR3']['NACK'].values = None
    USART['CR3']['HDSEL'].values = None
    USART['CR3']['IRLP'].values = None
    USART['CR3']['IREN'].values = None
    USART['CR3']['EIE'].values = None

    # -------------------------------------------------------------------------
    # GTPR	(Guard time and prescaler register)
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    USART['GTPR']['GT'].values = None
    USART['GTPR']['PSC'].values = None

