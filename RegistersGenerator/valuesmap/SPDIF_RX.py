from tempvalue import*


def apply(SPDIF_RX):
    # -------------------------------------------------------------------------
    # CR	(Control register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SPDIF_RX['CR']['INSEL'].values = None
    SPDIF_RX['CR']['WFA'].values = None
    SPDIF_RX['CR']['NBTR'].values = None
    SPDIF_RX['CR']['CHSEL'].values = None
    SPDIF_RX['CR']['CBDMAEN'].values = None
    SPDIF_RX['CR']['PTMSK'].values = None
    SPDIF_RX['CR']['CUMSK'].values = None
    SPDIF_RX['CR']['VMSK'].values = None
    SPDIF_RX['CR']['PMSK'].values = None
    SPDIF_RX['CR']['DRFMT'].values = None
    SPDIF_RX['CR']['RXSTEO'].values = None
    SPDIF_RX['CR']['RXDMAEN'].values = None
    SPDIF_RX['CR']['SPDIFEN'].values = None

    # -------------------------------------------------------------------------
    # IMR	(Interrupt mask register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SPDIF_RX['IMR']['IFEIE'].values = None
    SPDIF_RX['IMR']['SYNCDIE'].values = None
    SPDIF_RX['IMR']['SBLKIE'].values = None
    SPDIF_RX['IMR']['OVRIE'].values = None
    SPDIF_RX['IMR']['PERRIE'].values = None
    SPDIF_RX['IMR']['CSRNEIE'].values = None
    SPDIF_RX['IMR']['RXNEIE'].values = None

    # -------------------------------------------------------------------------
    # SR	(Status register)
    # Offset: 8	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SPDIF_RX['SR']['WIDTH5'].values = None
    SPDIF_RX['SR']['TERR'].values = None
    SPDIF_RX['SR']['SERR'].values = None
    SPDIF_RX['SR']['FERR'].values = None
    SPDIF_RX['SR']['SYNCD'].values = None
    SPDIF_RX['SR']['SBD'].values = None
    SPDIF_RX['SR']['OVR'].values = None
    SPDIF_RX['SR']['PERR'].values = None
    SPDIF_RX['SR']['CSRNE'].values = None
    SPDIF_RX['SR']['RXNE'].values = None

    # -------------------------------------------------------------------------
    # IFCR	(Interrupt Flag Clear register)
    # Offset: 12	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    SPDIF_RX['IFCR']['SYNCDCF'].values = None
    SPDIF_RX['IFCR']['SBDCF'].values = None
    SPDIF_RX['IFCR']['OVRCF'].values = None
    SPDIF_RX['IFCR']['PERRCF'].values = None

    # -------------------------------------------------------------------------
    # DR	(Data input register)
    # Offset: 16	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SPDIF_RX['DR']['PT'].values = None
    SPDIF_RX['DR']['C'].values = None
    SPDIF_RX['DR']['U'].values = None
    SPDIF_RX['DR']['V'].values = None
    SPDIF_RX['DR']['PE'].values = None
    SPDIF_RX['DR']['DR'].values = None

    # -------------------------------------------------------------------------
    # CSR	(Channel Status register)
    # Offset: 20	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SPDIF_RX['CSR']['SOB'].values = None
    SPDIF_RX['CSR']['CS'].values = None
    SPDIF_RX['CSR']['USR'].values = None

    # -------------------------------------------------------------------------
    # DIR	(Debug Information register)
    # Offset: 24	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SPDIF_RX['DIR']['TLO'].values = None
    SPDIF_RX['DIR']['THI'].values = None

