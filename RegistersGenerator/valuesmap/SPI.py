from tempvalue import*


def apply(SPI):
    # -------------------------------------------------------------------------
    # CR1	(control register 1)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SPI['CR1']['BIDIMODE'].values = None
    SPI['CR1']['BIDIOE'].values = None
    SPI['CR1']['CRCEN'].values = None
    SPI['CR1']['CRCNEXT'].values = None
    SPI['CR1']['DFF'].values = None
    SPI['CR1']['RXONLY'].values = None
    SPI['CR1']['SSM'].values = None
    SPI['CR1']['SSI'].values = None
    SPI['CR1']['LSBFIRST'].values = None
    SPI['CR1']['SPE'].values = None
    SPI['CR1']['BR'].values = None
    SPI['CR1']['MSTR'].values = None
    SPI['CR1']['CPOL'].values = None
    SPI['CR1']['CPHA'].values = None

    # -------------------------------------------------------------------------
    # CR2	(control register 2)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SPI['CR2']['TXEIE'].values = None
    SPI['CR2']['RXNEIE'].values = None
    SPI['CR2']['ERRIE'].values = None
    SPI['CR2']['FRF'].values = None
    SPI['CR2']['SSOE'].values = None
    SPI['CR2']['TXDMAEN'].values = None
    SPI['CR2']['RXDMAEN'].values = None

    # -------------------------------------------------------------------------
    # SR	(status register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SPI['SR']['TIFRFE'].values = None
    SPI['SR']['BSY'].values = None
    SPI['SR']['OVR'].values = None
    SPI['SR']['MODF'].values = None
    SPI['SR']['CRCERR'].values = None
    SPI['SR']['UDR'].values = None
    SPI['SR']['CHSIDE'].values = None
    SPI['SR']['TXE'].values = None
    SPI['SR']['RXNE'].values = None

    # -------------------------------------------------------------------------
    # DR	(data register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SPI['DR']['DR'].values = None

    # -------------------------------------------------------------------------
    # CRCPR	(CRC polynomial register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SPI['CRCPR']['CRCPOLY'].values = None

    # -------------------------------------------------------------------------
    # RXCRCR	(RX CRC register)
    # Offset: 20	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SPI['RXCRCR']['RxCRC'].values = None

    # -------------------------------------------------------------------------
    # TXCRCR	(TX CRC register)
    # Offset: 24	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SPI['TXCRCR']['TxCRC'].values = None

    # -------------------------------------------------------------------------
    # I2SCFGR	(I2S configuration register)
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SPI['I2SCFGR']['I2SMOD'].values = None
    SPI['I2SCFGR']['I2SE'].values = None
    SPI['I2SCFGR']['I2SCFG'].values = None
    SPI['I2SCFGR']['PCMSYNC'].values = None
    SPI['I2SCFGR']['I2SSTD'].values = None
    SPI['I2SCFGR']['CKPOL'].values = None
    SPI['I2SCFGR']['DATLEN'].values = None
    SPI['I2SCFGR']['CHLEN'].values = None

    # -------------------------------------------------------------------------
    # I2SPR	(I2S prescaler register)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SPI['I2SPR']['MCKOE'].values = None
    SPI['I2SPR']['ODD'].values = None
    SPI['I2SPR']['I2SDIV'].values = None

