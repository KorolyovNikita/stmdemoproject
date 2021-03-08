from tempvalue import*


def apply(OTG_FS_GLOBAL):
    # -------------------------------------------------------------------------
    # FS_GOTGCTL	(OTG_FS control and status register (OTG_FS_GOTGCTL))
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_GOTGCTL']['BSVLD'].values = None
    OTG_FS_GLOBAL['FS_GOTGCTL']['ASVLD'].values = None
    OTG_FS_GLOBAL['FS_GOTGCTL']['DBCT'].values = None
    OTG_FS_GLOBAL['FS_GOTGCTL']['CIDSTS'].values = None
    OTG_FS_GLOBAL['FS_GOTGCTL']['DHNPEN'].values = None
    OTG_FS_GLOBAL['FS_GOTGCTL']['HSHNPEN'].values = None
    OTG_FS_GLOBAL['FS_GOTGCTL']['HNPRQ'].values = None
    OTG_FS_GLOBAL['FS_GOTGCTL']['HNGSCS'].values = None
    OTG_FS_GLOBAL['FS_GOTGCTL']['SRQ'].values = None
    OTG_FS_GLOBAL['FS_GOTGCTL']['SRQSCS'].values = None

    # -------------------------------------------------------------------------
    # FS_GOTGINT	(OTG_FS interrupt register (OTG_FS_GOTGINT))
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_GOTGINT']['DBCDNE'].values = None
    OTG_FS_GLOBAL['FS_GOTGINT']['ADTOCHG'].values = None
    OTG_FS_GLOBAL['FS_GOTGINT']['HNGDET'].values = None
    OTG_FS_GLOBAL['FS_GOTGINT']['HNSSCHG'].values = None
    OTG_FS_GLOBAL['FS_GOTGINT']['SRSSCHG'].values = None
    OTG_FS_GLOBAL['FS_GOTGINT']['SEDET'].values = None

    # -------------------------------------------------------------------------
    # FS_GAHBCFG	(OTG_FS AHB configuration register (OTG_FS_GAHBCFG))
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_GAHBCFG']['PTXFELVL'].values = None
    OTG_FS_GLOBAL['FS_GAHBCFG']['TXFELVL'].values = None
    OTG_FS_GLOBAL['FS_GAHBCFG']['GINT'].values = None

    # -------------------------------------------------------------------------
    # FS_GUSBCFG	(OTG_FS USB configuration register (OTG_FS_GUSBCFG))
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_GUSBCFG']['CTXPKT'].values = None
    OTG_FS_GLOBAL['FS_GUSBCFG']['FDMOD'].values = None
    OTG_FS_GLOBAL['FS_GUSBCFG']['FHMOD'].values = None
    OTG_FS_GLOBAL['FS_GUSBCFG']['TRDT'].values = None
    OTG_FS_GLOBAL['FS_GUSBCFG']['HNPCAP'].values = None
    OTG_FS_GLOBAL['FS_GUSBCFG']['SRPCAP'].values = None
    OTG_FS_GLOBAL['FS_GUSBCFG']['PHYSEL'].values = None
    OTG_FS_GLOBAL['FS_GUSBCFG']['TOCAL'].values = None

    # -------------------------------------------------------------------------
    # FS_GRSTCTL	(OTG_FS reset register (OTG_FS_GRSTCTL))
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_GRSTCTL']['AHBIDL'].values = None
    OTG_FS_GLOBAL['FS_GRSTCTL']['TXFNUM'].values = None
    OTG_FS_GLOBAL['FS_GRSTCTL']['TXFFLSH'].values = None
    OTG_FS_GLOBAL['FS_GRSTCTL']['RXFFLSH'].values = None
    OTG_FS_GLOBAL['FS_GRSTCTL']['FCRST'].values = None
    OTG_FS_GLOBAL['FS_GRSTCTL']['HSRST'].values = None
    OTG_FS_GLOBAL['FS_GRSTCTL']['CSRST'].values = None

    # -------------------------------------------------------------------------
    # FS_GINTSTS	(OTG_FS core interrupt register (OTG_FS_GINTSTS))
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_GINTSTS']['WKUPINT'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['SRQINT'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['DISCINT'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['CIDSCHG'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['PTXFE'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['HCINT'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['HPRTINT'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['IPXFR_INCOMPISOOUT'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['IISOIXFR'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['OEPINT'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['IEPINT'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['EOPF'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['ISOODRP'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['ENUMDNE'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['USBRST'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['USBSUSP'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['ESUSP'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['GOUTNAKEFF'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['GINAKEFF'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['NPTXFE'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['RXFLVL'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['SOF'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['OTGINT'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['MMIS'].values = None
    OTG_FS_GLOBAL['FS_GINTSTS']['CMOD'].values = None

    # -------------------------------------------------------------------------
    # FS_GINTMSK	(OTG_FS interrupt mask register (OTG_FS_GINTMSK))
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_GINTMSK']['WUIM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['SRQIM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['DISCINT'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['CIDSCHGM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['PTXFEM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['HCIM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['PRTIM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['IPXFRM_IISOOXFRM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['IISOIXFRM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['OEPINT'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['IEPINT'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['EPMISM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['EOPFM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['ISOODRPM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['ENUMDNEM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['USBRST'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['USBSUSPM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['ESUSPM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['GONAKEFFM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['GINAKEFFM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['NPTXFEM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['RXFLVLM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['SOFM'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['OTGINT'].values = None
    OTG_FS_GLOBAL['FS_GINTMSK']['MMISM'].values = None

    # -------------------------------------------------------------------------
    # FS_GRXSTSR_Device	(OTG_FS Receive status debug read(Device mode))
    # Offset: 28	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_GRXSTSR_Device']['FRMNUM'].values = None
    OTG_FS_GLOBAL['FS_GRXSTSR_Device']['PKTSTS'].values = None
    OTG_FS_GLOBAL['FS_GRXSTSR_Device']['DPID'].values = None
    OTG_FS_GLOBAL['FS_GRXSTSR_Device']['BCNT'].values = None
    OTG_FS_GLOBAL['FS_GRXSTSR_Device']['EPNUM'].values = None

    # -------------------------------------------------------------------------
    # FS_GRXSTSR_Host	(OTG_FS Receive status debug read(Host mode))
    # Offset: 28	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_GRXSTSR_Host']['FRMNUM'].values = None
    OTG_FS_GLOBAL['FS_GRXSTSR_Host']['PKTSTS'].values = None
    OTG_FS_GLOBAL['FS_GRXSTSR_Host']['DPID'].values = None
    OTG_FS_GLOBAL['FS_GRXSTSR_Host']['BCNT'].values = None
    OTG_FS_GLOBAL['FS_GRXSTSR_Host']['EPNUM'].values = None

    # -------------------------------------------------------------------------
    # FS_GRXFSIZ	(OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ))
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_GRXFSIZ']['RXFD'].values = None

    # -------------------------------------------------------------------------
    # FS_GNPTXFSIZ_Device	(OTG_FS non-periodic transmit FIFO size register (Device mode))
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_GNPTXFSIZ_Device']['TX0FD'].values = None
    OTG_FS_GLOBAL['FS_GNPTXFSIZ_Device']['TX0FSA'].values = None

    # -------------------------------------------------------------------------
    # FS_GNPTXFSIZ_Host	(OTG_FS non-periodic transmit FIFO size register (Host mode))
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_GNPTXFSIZ_Host']['NPTXFD'].values = None
    OTG_FS_GLOBAL['FS_GNPTXFSIZ_Host']['NPTXFSA'].values = None

    # -------------------------------------------------------------------------
    # FS_GNPTXSTS	(OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS))
    # Offset: 44	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_GNPTXSTS']['NPTXQTOP'].values = None
    OTG_FS_GLOBAL['FS_GNPTXSTS']['NPTQXSAV'].values = None
    OTG_FS_GLOBAL['FS_GNPTXSTS']['NPTXFSAV'].values = None

    # -------------------------------------------------------------------------
    # FS_GCCFG	(OTG_FS general core configuration register (OTG_FS_GCCFG))
    # Offset: 56	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_GCCFG']['SOFOUTEN'].values = None
    OTG_FS_GLOBAL['FS_GCCFG']['VBUSBSEN'].values = None
    OTG_FS_GLOBAL['FS_GCCFG']['VBUSASEN'].values = None
    OTG_FS_GLOBAL['FS_GCCFG']['PWRDWN'].values = None

    # -------------------------------------------------------------------------
    # FS_CID	(core ID register)
    # Offset: 60	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_CID']['PRODUCT_ID'].values = None

    # -------------------------------------------------------------------------
    # FS_HPTXFSIZ	(OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ))
    # Offset: 256	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_HPTXFSIZ']['PTXFSIZ'].values = None
    OTG_FS_GLOBAL['FS_HPTXFSIZ']['PTXSA'].values = None

    # -------------------------------------------------------------------------
    # FS_DIEPTXF1	(OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2))
    # Offset: 260	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_DIEPTXF1']['INEPTXFD'].values = None
    OTG_FS_GLOBAL['FS_DIEPTXF1']['INEPTXSA'].values = None

    # -------------------------------------------------------------------------
    # FS_DIEPTXF2	(OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3))
    # Offset: 264	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_DIEPTXF2']['INEPTXFD'].values = None
    OTG_FS_GLOBAL['FS_DIEPTXF2']['INEPTXSA'].values = None

    # -------------------------------------------------------------------------
    # FS_DIEPTXF3	(OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4))
    # Offset: 268	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_GLOBAL['FS_DIEPTXF3']['INEPTXFD'].values = None
    OTG_FS_GLOBAL['FS_DIEPTXF3']['INEPTXSA'].values = None

