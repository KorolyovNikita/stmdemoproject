from tempvalue import*


def apply(UART):
    # -------------------------------------------------------------------------
    # SR	(Status register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    UART['SR']['LBD'].values = None
    UART['SR']['TXE'].values = ['notEmpty', 'Empty']
    UART['SR']['TC'].values = ['Clear', 'Complete']
    UART['SR']['RXNE'].values = ['Empty', 'notEmpty']
    UART['SR']['IDLE'].values = ['notDetected', 'Detected']
    UART['SR']['ORE'].values = None
    UART['SR']['NF'].values = None
    UART['SR']['FE'].values = None
    UART['SR']['PE'].values = None

    # -------------------------------------------------------------------------
    # DR	(Data register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    UART['DR']['DR'].values = None

    # -------------------------------------------------------------------------
    # BRR	(Baud rate register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    UART['BRR']['DIV_Mantissa'].values = [tempvalue('Value')]
    UART['BRR']['DIV_Fraction'].values = [tempvalue('Value')]

    # -------------------------------------------------------------------------
    # CR1	(Control register 1)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    UART['CR1']['OVER8'].values = None
    UART['CR1']['UE'].values = ['Disable', 'Enable']
    UART['CR1']['M'].values = None
    UART['CR1']['WAKE'].values = None
    UART['CR1']['PCE'].values = None
    UART['CR1']['PS'].values = None
    UART['CR1']['PEIE'].values = None
    UART['CR1']['TXEIE'].values = ['Disable', 'Enable']
    UART['CR1']['TCIE'].values = ['Disable', 'Enable']
    UART['CR1']['RXNEIE'].values = ['Disable', 'Enable']
    UART['CR1']['IDLEIE'].values = ['Disable', 'Enable']
    UART['CR1']['TE'].values = ['Disable', 'Enable']
    UART['CR1']['RE'].values = ['Disable', 'Enable']
    UART['CR1']['RWU'].values = None
    UART['CR1']['SBK'].values = None

    # -------------------------------------------------------------------------
    # CR2	(Control register 2)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    UART['CR2']['LINEN'].values = None
    UART['CR2']['STOP'].values = None
    UART['CR2']['LBDIE'].values = None
    UART['CR2']['LBDL'].values = None
    UART['CR2']['ADD'].values = None

    # -------------------------------------------------------------------------
    # CR3	(Control register 3)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    UART['CR3']['ONEBIT'].values = None
    UART['CR3']['DMAT'].values = ['Disable', 'Enable']
    UART['CR3']['DMAR'].values = ['Disable', 'Enable']
    UART['CR3']['HDSEL'].values = None
    UART['CR3']['IRLP'].values = None
    UART['CR3']['IREN'].values = None
    UART['CR3']['EIE'].values = None

