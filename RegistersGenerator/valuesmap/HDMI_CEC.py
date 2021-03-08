from tempvalue import*


def apply(HDMI_CEC):
    # -------------------------------------------------------------------------
    # CEC_CR	(CEC control register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    HDMI_CEC['CEC_CR']['TXEOM'].values = None
    HDMI_CEC['CEC_CR']['TXSOM'].values = None
    HDMI_CEC['CEC_CR']['CECEN'].values = None

    # -------------------------------------------------------------------------
    # CEC_CFGR	(CEC configuration register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    HDMI_CEC['CEC_CFGR']['LSTN'].values = None
    HDMI_CEC['CEC_CFGR']['OAR'].values = None
    HDMI_CEC['CEC_CFGR']['SFTOP'].values = None
    HDMI_CEC['CEC_CFGR']['BRDNOGEN'].values = None
    HDMI_CEC['CEC_CFGR']['LBPEGEN'].values = None
    HDMI_CEC['CEC_CFGR']['BREGEN'].values = None
    HDMI_CEC['CEC_CFGR']['BRESTP'].values = None
    HDMI_CEC['CEC_CFGR']['RXTOL'].values = None
    HDMI_CEC['CEC_CFGR']['SFT'].values = None

    # -------------------------------------------------------------------------
    # CEC_TXDR	(CEC Tx data register)
    # Offset: 8	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    HDMI_CEC['CEC_TXDR']['TXD'].values = None

    # -------------------------------------------------------------------------
    # CEC_RXDR	(CEC Rx Data Register)
    # Offset: 12	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    HDMI_CEC['CEC_RXDR']['RXD'].values = None

    # -------------------------------------------------------------------------
    # CEC_ISR	(CEC Interrupt and Status Register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    HDMI_CEC['CEC_ISR']['TXACKE'].values = None
    HDMI_CEC['CEC_ISR']['TXERR'].values = None
    HDMI_CEC['CEC_ISR']['TXUDR'].values = None
    HDMI_CEC['CEC_ISR']['TXEND'].values = None
    HDMI_CEC['CEC_ISR']['TXBR'].values = None
    HDMI_CEC['CEC_ISR']['ARBLST'].values = None
    HDMI_CEC['CEC_ISR']['RXACKE'].values = None
    HDMI_CEC['CEC_ISR']['LBPE'].values = None
    HDMI_CEC['CEC_ISR']['SBPE'].values = None
    HDMI_CEC['CEC_ISR']['BRE'].values = None
    HDMI_CEC['CEC_ISR']['RXOVR'].values = None
    HDMI_CEC['CEC_ISR']['RXEND'].values = None
    HDMI_CEC['CEC_ISR']['RXBR'].values = None

    # -------------------------------------------------------------------------
    # CEC_IER	(CEC interrupt enable register)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    HDMI_CEC['CEC_IER']['TXACKIE'].values = None
    HDMI_CEC['CEC_IER']['TXERRIE'].values = None
    HDMI_CEC['CEC_IER']['TXUDRIE'].values = None
    HDMI_CEC['CEC_IER']['TXENDIE'].values = None
    HDMI_CEC['CEC_IER']['TXBRIE'].values = None
    HDMI_CEC['CEC_IER']['ARBLSTIE'].values = None
    HDMI_CEC['CEC_IER']['RXACKIE'].values = None
    HDMI_CEC['CEC_IER']['LBPEIE'].values = None
    HDMI_CEC['CEC_IER']['SBPEIE'].values = None
    HDMI_CEC['CEC_IER']['BREIE'].values = None
    HDMI_CEC['CEC_IER']['RXOVRIE'].values = None
    HDMI_CEC['CEC_IER']['RXENDIE'].values = None
    HDMI_CEC['CEC_IER']['RXBRIE'].values = None

