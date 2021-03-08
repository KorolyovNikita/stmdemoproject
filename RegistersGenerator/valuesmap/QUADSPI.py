from tempvalue import*


def apply(QUADSPI):
    # -------------------------------------------------------------------------
    # CR	(control register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    QUADSPI['CR']['PRESCALER'].values = None
    QUADSPI['CR']['PMM'].values = None
    QUADSPI['CR']['APMS'].values = None
    QUADSPI['CR']['TOIE'].values = None
    QUADSPI['CR']['SMIE'].values = None
    QUADSPI['CR']['FTIE'].values = None
    QUADSPI['CR']['TCIE'].values = None
    QUADSPI['CR']['TEIE'].values = None
    QUADSPI['CR']['FTHRES'].values = None
    QUADSPI['CR']['FSEL'].values = None
    QUADSPI['CR']['DFM'].values = None
    QUADSPI['CR']['SSHIFT'].values = None
    QUADSPI['CR']['TCEN'].values = None
    QUADSPI['CR']['DMAEN'].values = None
    QUADSPI['CR']['ABORT'].values = None
    QUADSPI['CR']['EN'].values = None

    # -------------------------------------------------------------------------
    # DCR	(device configuration register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    QUADSPI['DCR']['FSIZE'].values = None
    QUADSPI['DCR']['CSHT'].values = None
    QUADSPI['DCR']['CKMODE'].values = None

    # -------------------------------------------------------------------------
    # SR	(status register)
    # Offset: 8	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    QUADSPI['SR']['FLEVEL'].values = None
    QUADSPI['SR']['BUSY'].values = None
    QUADSPI['SR']['TOF'].values = None
    QUADSPI['SR']['SMF'].values = None
    QUADSPI['SR']['FTF'].values = None
    QUADSPI['SR']['TCF'].values = None
    QUADSPI['SR']['TEF'].values = None

    # -------------------------------------------------------------------------
    # FCR	(flag clear register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    QUADSPI['FCR']['CTOF'].values = None
    QUADSPI['FCR']['CSMF'].values = None
    QUADSPI['FCR']['CTCF'].values = None
    QUADSPI['FCR']['CTEF'].values = None

    # -------------------------------------------------------------------------
    # DLR	(data length register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    QUADSPI['DLR']['DL'].values = None

    # -------------------------------------------------------------------------
    # CCR	(communication configuration register)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    QUADSPI['CCR']['DDRM'].values = None
    QUADSPI['CCR']['DHHC'].values = None
    QUADSPI['CCR']['SIOO'].values = None
    QUADSPI['CCR']['FMODE'].values = None
    QUADSPI['CCR']['DMODE'].values = None
    QUADSPI['CCR']['DCYC'].values = None
    QUADSPI['CCR']['ABSIZE'].values = None
    QUADSPI['CCR']['ABMODE'].values = None
    QUADSPI['CCR']['ADSIZE'].values = None
    QUADSPI['CCR']['ADMODE'].values = None
    QUADSPI['CCR']['IMODE'].values = None
    QUADSPI['CCR']['INSTRUCTION'].values = None

    # -------------------------------------------------------------------------
    # AR	(address register)
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    QUADSPI['AR']['ADDRESS'].values = None

    # -------------------------------------------------------------------------
    # ABR	(ABR)
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    QUADSPI['ABR']['ALTERNATE'].values = None

    # -------------------------------------------------------------------------
    # DR	(data register)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    QUADSPI['DR']['DATA'].values = None

    # -------------------------------------------------------------------------
    # PSMKR	(polling status mask register)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    QUADSPI['PSMKR']['MASK'].values = None

    # -------------------------------------------------------------------------
    # PSMAR	(polling status match register)
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    QUADSPI['PSMAR']['MATCH'].values = None

    # -------------------------------------------------------------------------
    # PIR	(polling interval register)
    # Offset: 44	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    QUADSPI['PIR']['INTERVAL'].values = None

    # -------------------------------------------------------------------------
    # LPTR	(low-power timeout register)
    # Offset: 48	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    QUADSPI['LPTR']['TIMEOUT'].values = None

