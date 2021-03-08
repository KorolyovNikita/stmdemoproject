from tempvalue import*


def apply(OTG_HS_GLOBAL):
    # -------------------------------------------------------------------------
    # OTG_HS_GOTGCTL	(OTG_HS control and status register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GOTGCTL']['BSVLD'].values = None
    OTG_HS_GLOBAL['OTG_HS_GOTGCTL']['ASVLD'].values = None
    OTG_HS_GLOBAL['OTG_HS_GOTGCTL']['DBCT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GOTGCTL']['CIDSTS'].values = None
    OTG_HS_GLOBAL['OTG_HS_GOTGCTL']['DHNPEN'].values = None
    OTG_HS_GLOBAL['OTG_HS_GOTGCTL']['HSHNPEN'].values = None
    OTG_HS_GLOBAL['OTG_HS_GOTGCTL']['HNPRQ'].values = None
    OTG_HS_GLOBAL['OTG_HS_GOTGCTL']['HNGSCS'].values = None
    OTG_HS_GLOBAL['OTG_HS_GOTGCTL']['SRQ'].values = None
    OTG_HS_GLOBAL['OTG_HS_GOTGCTL']['SRQSCS'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_GOTGINT	(OTG_HS interrupt register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GOTGINT']['DBCDNE'].values = None
    OTG_HS_GLOBAL['OTG_HS_GOTGINT']['ADTOCHG'].values = None
    OTG_HS_GLOBAL['OTG_HS_GOTGINT']['HNGDET'].values = None
    OTG_HS_GLOBAL['OTG_HS_GOTGINT']['HNSSCHG'].values = None
    OTG_HS_GLOBAL['OTG_HS_GOTGINT']['SRSSCHG'].values = None
    OTG_HS_GLOBAL['OTG_HS_GOTGINT']['SEDET'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_GAHBCFG	(OTG_HS AHB configuration register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GAHBCFG']['PTXFELVL'].values = None
    OTG_HS_GLOBAL['OTG_HS_GAHBCFG']['TXFELVL'].values = None
    OTG_HS_GLOBAL['OTG_HS_GAHBCFG']['DMAEN'].values = None
    OTG_HS_GLOBAL['OTG_HS_GAHBCFG']['HBSTLEN'].values = None
    OTG_HS_GLOBAL['OTG_HS_GAHBCFG']['GINT'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_GUSBCFG	(OTG_HS USB configuration register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['CTXPKT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['FDMOD'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['FHMOD'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['ULPIIPD'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['PTCI'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['PCCI'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['TSDPS'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['ULPIEVBUSI'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['ULPIEVBUSD'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['ULPICSM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['ULPIAR'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['ULPIFSLS'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['PHYLPCS'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['TRDT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['HNPCAP'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['SRPCAP'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['PHYSEL'].values = None
    OTG_HS_GLOBAL['OTG_HS_GUSBCFG']['TOCAL'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_GRSTCTL	(OTG_HS reset register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GRSTCTL']['AHBIDL'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRSTCTL']['DMAREQ'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRSTCTL']['TXFNUM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRSTCTL']['TXFFLSH'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRSTCTL']['RXFFLSH'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRSTCTL']['FCRST'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRSTCTL']['HSRST'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRSTCTL']['CSRST'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_GINTSTS	(OTG_HS core interrupt register)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['WKUINT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['SRQINT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['DISCINT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['CIDSCHG'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['PTXFE'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['HCINT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['HPRTINT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['DATAFSUSP'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['PXFR_INCOMPISOOUT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['IISOIXFR'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['OEPINT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['IEPINT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['EOPF'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['ISOODRP'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['ENUMDNE'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['USBRST'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['USBSUSP'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['ESUSP'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['BOUTNAKEFF'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['GINAKEFF'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['NPTXFE'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['RXFLVL'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['SOF'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['OTGINT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['MMIS'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTSTS']['CMOD'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_GINTMSK	(OTG_HS interrupt mask register)
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['WUIM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['SRQIM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['DISCINT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['CIDSCHGM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['PTXFEM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['HCIM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['PRTIM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['FSUSPM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['PXFRM_IISOOXFRM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['IISOIXFRM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['OEPINT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['IEPINT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['EPMISM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['EOPFM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['ISOODRPM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['ENUMDNEM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['USBRST'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['USBSUSPM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['ESUSPM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['GONAKEFFM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['GINAKEFFM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['NPTXFEM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['RXFLVLM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['SOFM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['OTGINT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GINTMSK']['MMISM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_GRXSTSR_Host	(OTG_HS Receive status debug read register (host mode))
    # Offset: 28	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GRXSTSR_Host']['PKTSTS'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRXSTSR_Host']['DPID'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRXSTSR_Host']['BCNT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRXSTSR_Host']['CHNUM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_GRXSTSR_Peripheral	(OTG_HS Receive status debug read register (peripheral mode mode))
    # Offset: 28	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GRXSTSR_Peripheral']['FRMNUM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRXSTSR_Peripheral']['PKTSTS'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRXSTSR_Peripheral']['DPID'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRXSTSR_Peripheral']['BCNT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRXSTSR_Peripheral']['EPNUM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_GRXSTSP_Host	(OTG_HS status read and pop register (host mode))
    # Offset: 32	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GRXSTSP_Host']['PKTSTS'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRXSTSP_Host']['DPID'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRXSTSP_Host']['BCNT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRXSTSP_Host']['CHNUM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_GRXSTSP_Peripheral	(OTG_HS status read and pop register (peripheral mode))
    # Offset: 32	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GRXSTSP_Peripheral']['FRMNUM'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRXSTSP_Peripheral']['PKTSTS'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRXSTSP_Peripheral']['DPID'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRXSTSP_Peripheral']['BCNT'].values = None
    OTG_HS_GLOBAL['OTG_HS_GRXSTSP_Peripheral']['EPNUM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_GRXFSIZ	(OTG_HS Receive FIFO size register)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GRXFSIZ']['RXFD'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_GNPTXFSIZ_Host	(OTG_HS nonperiodic transmit FIFO size register (host mode))
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GNPTXFSIZ_Host']['NPTXFD'].values = None
    OTG_HS_GLOBAL['OTG_HS_GNPTXFSIZ_Host']['NPTXFSA'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_TX0FSIZ_Peripheral	(Endpoint 0 transmit FIFO size (peripheral mode))
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_TX0FSIZ_Peripheral']['TX0FD'].values = None
    OTG_HS_GLOBAL['OTG_HS_TX0FSIZ_Peripheral']['TX0FSA'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_GNPTXSTS	(OTG_HS nonperiodic transmit FIFO/queue status register)
    # Offset: 44	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GNPTXSTS']['NPTXQTOP'].values = None
    OTG_HS_GLOBAL['OTG_HS_GNPTXSTS']['NPTQXSAV'].values = None
    OTG_HS_GLOBAL['OTG_HS_GNPTXSTS']['NPTXFSAV'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_GCCFG	(OTG_HS general core configuration register)
    # Offset: 56	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_GCCFG']['NOVBUSSENS'].values = None
    OTG_HS_GLOBAL['OTG_HS_GCCFG']['SOFOUTEN'].values = None
    OTG_HS_GLOBAL['OTG_HS_GCCFG']['VBUSBSEN'].values = None
    OTG_HS_GLOBAL['OTG_HS_GCCFG']['VBUSASEN'].values = None
    OTG_HS_GLOBAL['OTG_HS_GCCFG']['I2CPADEN'].values = None
    OTG_HS_GLOBAL['OTG_HS_GCCFG']['PWRDWN'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_CID	(OTG_HS core ID register)
    # Offset: 60	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_CID']['PRODUCT_ID'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HPTXFSIZ	(OTG_HS Host periodic transmit FIFO size register)
    # Offset: 256	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_HPTXFSIZ']['PTXFD'].values = None
    OTG_HS_GLOBAL['OTG_HS_HPTXFSIZ']['PTXSA'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPTXF1	(OTG_HS device IN endpoint transmit FIFO size register)
    # Offset: 260	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_DIEPTXF1']['INEPTXFD'].values = None
    OTG_HS_GLOBAL['OTG_HS_DIEPTXF1']['INEPTXSA'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPTXF2	(OTG_HS device IN endpoint transmit FIFO size register)
    # Offset: 264	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_DIEPTXF2']['INEPTXFD'].values = None
    OTG_HS_GLOBAL['OTG_HS_DIEPTXF2']['INEPTXSA'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPTXF3	(OTG_HS device IN endpoint transmit FIFO size register)
    # Offset: 284	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_DIEPTXF3']['INEPTXFD'].values = None
    OTG_HS_GLOBAL['OTG_HS_DIEPTXF3']['INEPTXSA'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPTXF4	(OTG_HS device IN endpoint transmit FIFO size register)
    # Offset: 288	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_DIEPTXF4']['INEPTXFD'].values = None
    OTG_HS_GLOBAL['OTG_HS_DIEPTXF4']['INEPTXSA'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPTXF5	(OTG_HS device IN endpoint transmit FIFO size register)
    # Offset: 292	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_DIEPTXF5']['INEPTXFD'].values = None
    OTG_HS_GLOBAL['OTG_HS_DIEPTXF5']['INEPTXSA'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPTXF6	(OTG_HS device IN endpoint transmit FIFO size register)
    # Offset: 296	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_DIEPTXF6']['INEPTXFD'].values = None
    OTG_HS_GLOBAL['OTG_HS_DIEPTXF6']['INEPTXSA'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPTXF7	(OTG_HS device IN endpoint transmit FIFO size register)
    # Offset: 300	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_GLOBAL['OTG_HS_DIEPTXF7']['INEPTXFD'].values = None
    OTG_HS_GLOBAL['OTG_HS_DIEPTXF7']['INEPTXSA'].values = None

