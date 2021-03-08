from tempvalue import*


def apply(OTG_HS_DEVICE):
    # -------------------------------------------------------------------------
    # OTG_HS_DCFG	(OTG_HS device configuration register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DCFG']['PERSCHIVL'].values = None
    OTG_HS_DEVICE['OTG_HS_DCFG']['PFIVL'].values = None
    OTG_HS_DEVICE['OTG_HS_DCFG']['DAD'].values = None
    OTG_HS_DEVICE['OTG_HS_DCFG']['NZLSOHSK'].values = None
    OTG_HS_DEVICE['OTG_HS_DCFG']['DSPD'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DCTL	(OTG_HS device control register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DCTL']['POPRGDNE'].values = None
    OTG_HS_DEVICE['OTG_HS_DCTL']['CGONAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DCTL']['SGONAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DCTL']['CGINAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DCTL']['SGINAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DCTL']['TCTL'].values = None
    OTG_HS_DEVICE['OTG_HS_DCTL']['GONSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DCTL']['GINSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DCTL']['SDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DCTL']['RWUSIG'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DSTS	(OTG_HS device status register)
    # Offset: 8	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DSTS']['FNSOF'].values = None
    OTG_HS_DEVICE['OTG_HS_DSTS']['EERR'].values = None
    OTG_HS_DEVICE['OTG_HS_DSTS']['ENUMSPD'].values = None
    OTG_HS_DEVICE['OTG_HS_DSTS']['SUSPSTS'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPMSK	(OTG_HS device IN endpoint common interrupt mask register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPMSK']['BIM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPMSK']['TXFURM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPMSK']['INEPNEM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPMSK']['INEPNMM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPMSK']['ITTXFEMSK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPMSK']['TOM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPMSK']['EPDM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPMSK']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPMSK	(OTG_HS device OUT endpoint common interrupt mask register)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPMSK']['BOIM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPMSK']['OPEM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPMSK']['B2BSTUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPMSK']['OTEPDM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPMSK']['STUPM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPMSK']['EPDM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPMSK']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DAINT	(OTG_HS device all endpoints interrupt register)
    # Offset: 24	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DAINT']['OEPINT'].values = None
    OTG_HS_DEVICE['OTG_HS_DAINT']['IEPINT'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DAINTMSK	(OTG_HS all endpoints interrupt mask register)
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DAINTMSK']['OEPM'].values = None
    OTG_HS_DEVICE['OTG_HS_DAINTMSK']['IEPM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DVBUSDIS	(OTG_HS device VBUS discharge time register)
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DVBUSDIS']['VBUSDT'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DVBUSPULSE	(OTG_HS device VBUS pulsing time register)
    # Offset: 44	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DVBUSPULSE']['DVBUSP'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DTHRCTL	(OTG_HS Device threshold control register)
    # Offset: 48	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DTHRCTL']['ARPEN'].values = None
    OTG_HS_DEVICE['OTG_HS_DTHRCTL']['RXTHRLEN'].values = None
    OTG_HS_DEVICE['OTG_HS_DTHRCTL']['RXTHREN'].values = None
    OTG_HS_DEVICE['OTG_HS_DTHRCTL']['TXTHRLEN'].values = None
    OTG_HS_DEVICE['OTG_HS_DTHRCTL']['ISOTHREN'].values = None
    OTG_HS_DEVICE['OTG_HS_DTHRCTL']['NONISOTHREN'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPEMPMSK	(OTG_HS device IN endpoint FIFO empty interrupt mask register)
    # Offset: 52	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPEMPMSK']['INEPTXFEM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DEACHINT	(OTG_HS device each endpoint interrupt register)
    # Offset: 56	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DEACHINT']['OEP1INT'].values = None
    OTG_HS_DEVICE['OTG_HS_DEACHINT']['IEP1INT'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DEACHINTMSK	(OTG_HS device each endpoint interrupt register mask)
    # Offset: 60	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DEACHINTMSK']['OEP1INTM'].values = None
    OTG_HS_DEVICE['OTG_HS_DEACHINTMSK']['IEP1INTM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPEACHMSK1	(OTG_HS device each in endpoint-1 interrupt register)
    # Offset: 64	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPEACHMSK1']['NAKM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPEACHMSK1']['BIM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPEACHMSK1']['TXFURM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPEACHMSK1']['INEPNEM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPEACHMSK1']['INEPNMM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPEACHMSK1']['ITTXFEMSK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPEACHMSK1']['TOM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPEACHMSK1']['EPDM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPEACHMSK1']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPEACHMSK1	(OTG_HS device each OUT endpoint-1 interrupt register)
    # Offset: 128	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPEACHMSK1']['NYETM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPEACHMSK1']['NAKM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPEACHMSK1']['BERRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPEACHMSK1']['BIM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPEACHMSK1']['TXFURM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPEACHMSK1']['INEPNEM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPEACHMSK1']['INEPNMM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPEACHMSK1']['ITTXFEMSK'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPEACHMSK1']['TOM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPEACHMSK1']['EPDM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPEACHMSK1']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPCTL0	(OTG device endpoint-0 control register)
    # Offset: 256	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPCTL0']['EPENA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL0']['EPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL0']['SODDFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL0']['SD0PID_SEVNFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL0']['SNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL0']['CNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL0']['TXFNUM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL0']['Stall'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL0']['EPTYP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL0']['NAKSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL0']['EONUM_DPID'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL0']['USBAEP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL0']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPINT0	(OTG device endpoint-0 interrupt register)
    # Offset: 264	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPINT0']['NAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT0']['BERR'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT0']['PKTDRPSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT0']['BNA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT0']['TXFIFOUDRN'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT0']['TXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT0']['INEPNE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT0']['ITTXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT0']['TOC'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT0']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT0']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPTSIZ0	(OTG_HS device IN endpoint 0 transfer size register)
    # Offset: 272	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ0']['PKTCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ0']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPDMA1	(OTG_HS device endpoint-1 DMA address register)
    # Offset: 276	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPDMA1']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DTXFSTS0	(OTG_HS device IN endpoint transmit FIFO status register)
    # Offset: 280	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DTXFSTS0']['INEPTFSAV'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPCTL1	(OTG device endpoint-1 control register)
    # Offset: 288	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPCTL1']['EPENA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL1']['EPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL1']['SODDFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL1']['SD0PID_SEVNFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL1']['SNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL1']['CNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL1']['TXFNUM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL1']['Stall'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL1']['EPTYP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL1']['NAKSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL1']['EONUM_DPID'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL1']['USBAEP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL1']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPINT1	(OTG device endpoint-1 interrupt register)
    # Offset: 296	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPINT1']['NAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT1']['BERR'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT1']['PKTDRPSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT1']['BNA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT1']['TXFIFOUDRN'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT1']['TXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT1']['INEPNE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT1']['ITTXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT1']['TOC'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT1']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT1']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPTSIZ1	(OTG_HS device endpoint transfer size register)
    # Offset: 304	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ1']['MCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ1']['PKTCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ1']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPDMA2	(OTG_HS device endpoint-2 DMA address register)
    # Offset: 308	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPDMA2']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DTXFSTS1	(OTG_HS device IN endpoint transmit FIFO status register)
    # Offset: 312	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DTXFSTS1']['INEPTFSAV'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPCTL2	(OTG device endpoint-2 control register)
    # Offset: 320	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPCTL2']['EPENA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL2']['EPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL2']['SODDFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL2']['SD0PID_SEVNFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL2']['SNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL2']['CNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL2']['TXFNUM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL2']['Stall'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL2']['EPTYP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL2']['NAKSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL2']['EONUM_DPID'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL2']['USBAEP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL2']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPINT2	(OTG device endpoint-2 interrupt register)
    # Offset: 328	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPINT2']['NAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT2']['BERR'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT2']['PKTDRPSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT2']['BNA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT2']['TXFIFOUDRN'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT2']['TXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT2']['INEPNE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT2']['ITTXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT2']['TOC'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT2']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT2']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPTSIZ2	(OTG_HS device endpoint transfer size register)
    # Offset: 336	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ2']['MCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ2']['PKTCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ2']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPDMA3	(OTG_HS device endpoint-3 DMA address register)
    # Offset: 340	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPDMA3']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DTXFSTS2	(OTG_HS device IN endpoint transmit FIFO status register)
    # Offset: 344	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DTXFSTS2']['INEPTFSAV'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPCTL3	(OTG device endpoint-3 control register)
    # Offset: 352	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPCTL3']['EPENA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL3']['EPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL3']['SODDFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL3']['SD0PID_SEVNFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL3']['SNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL3']['CNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL3']['TXFNUM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL3']['Stall'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL3']['EPTYP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL3']['NAKSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL3']['EONUM_DPID'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL3']['USBAEP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL3']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPINT3	(OTG device endpoint-3 interrupt register)
    # Offset: 360	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPINT3']['NAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT3']['BERR'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT3']['PKTDRPSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT3']['BNA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT3']['TXFIFOUDRN'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT3']['TXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT3']['INEPNE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT3']['ITTXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT3']['TOC'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT3']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT3']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPTSIZ3	(OTG_HS device endpoint transfer size register)
    # Offset: 368	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ3']['MCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ3']['PKTCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ3']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPDMA4	(OTG_HS device endpoint-4 DMA address register)
    # Offset: 372	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPDMA4']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DTXFSTS3	(OTG_HS device IN endpoint transmit FIFO status register)
    # Offset: 376	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DTXFSTS3']['INEPTFSAV'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPCTL4	(OTG device endpoint-4 control register)
    # Offset: 384	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPCTL4']['EPENA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL4']['EPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL4']['SODDFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL4']['SD0PID_SEVNFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL4']['SNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL4']['CNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL4']['TXFNUM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL4']['Stall'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL4']['EPTYP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL4']['NAKSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL4']['EONUM_DPID'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL4']['USBAEP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL4']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPINT4	(OTG device endpoint-4 interrupt register)
    # Offset: 392	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPINT4']['NAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT4']['BERR'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT4']['PKTDRPSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT4']['BNA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT4']['TXFIFOUDRN'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT4']['TXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT4']['INEPNE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT4']['ITTXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT4']['TOC'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT4']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT4']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPTSIZ4	(OTG_HS device endpoint transfer size register)
    # Offset: 400	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ4']['MCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ4']['PKTCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ4']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPDMA5	(OTG_HS device endpoint-5 DMA address register)
    # Offset: 404	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPDMA5']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DTXFSTS4	(OTG_HS device IN endpoint transmit FIFO status register)
    # Offset: 408	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DTXFSTS4']['INEPTFSAV'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPCTL5	(OTG device endpoint-5 control register)
    # Offset: 416	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPCTL5']['EPENA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL5']['EPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL5']['SODDFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL5']['SD0PID_SEVNFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL5']['SNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL5']['CNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL5']['TXFNUM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL5']['Stall'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL5']['EPTYP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL5']['NAKSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL5']['EONUM_DPID'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL5']['USBAEP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL5']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPINT5	(OTG device endpoint-5 interrupt register)
    # Offset: 424	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPINT5']['NAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT5']['BERR'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT5']['PKTDRPSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT5']['BNA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT5']['TXFIFOUDRN'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT5']['TXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT5']['INEPNE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT5']['ITTXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT5']['TOC'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT5']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT5']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPTSIZ5	(OTG_HS device endpoint transfer size register)
    # Offset: 432	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ5']['MCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ5']['PKTCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPTSIZ5']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DTXFSTS5	(OTG_HS device IN endpoint transmit FIFO status register)
    # Offset: 440	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DTXFSTS5']['INEPTFSAV'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPCTL6	(OTG device endpoint-6 control register)
    # Offset: 448	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPCTL6']['EPENA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL6']['EPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL6']['SODDFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL6']['SD0PID_SEVNFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL6']['SNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL6']['CNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL6']['TXFNUM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL6']['Stall'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL6']['EPTYP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL6']['NAKSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL6']['EONUM_DPID'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL6']['USBAEP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL6']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPINT6	(OTG device endpoint-6 interrupt register)
    # Offset: 456	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPINT6']['NAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT6']['BERR'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT6']['PKTDRPSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT6']['BNA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT6']['TXFIFOUDRN'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT6']['TXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT6']['INEPNE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT6']['ITTXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT6']['TOC'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT6']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT6']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPCTL7	(OTG device endpoint-7 control register)
    # Offset: 480	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPCTL7']['EPENA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL7']['EPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL7']['SODDFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL7']['SD0PID_SEVNFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL7']['SNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL7']['CNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL7']['TXFNUM'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL7']['Stall'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL7']['EPTYP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL7']['NAKSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL7']['EONUM_DPID'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL7']['USBAEP'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPCTL7']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DIEPINT7	(OTG device endpoint-7 interrupt register)
    # Offset: 488	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DIEPINT7']['NAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT7']['BERR'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT7']['PKTDRPSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT7']['BNA'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT7']['TXFIFOUDRN'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT7']['TXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT7']['INEPNE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT7']['ITTXFE'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT7']['TOC'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT7']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DIEPINT7']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPCTL0	(OTG_HS device control OUT endpoint 0 control register)
    # Offset: 768	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPCTL0']['EPENA'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL0']['EPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL0']['SNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL0']['CNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL0']['Stall'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL0']['SNPM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL0']['EPTYP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL0']['NAKSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL0']['USBAEP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL0']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPINT0	(OTG_HS device endpoint-0 interrupt register)
    # Offset: 776	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPINT0']['NYET'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT0']['B2BSTUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT0']['OTEPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT0']['STUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT0']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT0']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPTSIZ0	(OTG_HS device endpoint-1 transfer size register)
    # Offset: 784	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ0']['STUPCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ0']['PKTCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ0']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPCTL1	(OTG device endpoint-1 control register)
    # Offset: 800	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPCTL1']['EPENA'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL1']['EPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL1']['SODDFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL1']['SD0PID_SEVNFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL1']['SNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL1']['CNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL1']['Stall'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL1']['SNPM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL1']['EPTYP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL1']['NAKSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL1']['EONUM_DPID'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL1']['USBAEP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL1']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPINT1	(OTG_HS device endpoint-1 interrupt register)
    # Offset: 808	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPINT1']['NYET'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT1']['B2BSTUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT1']['OTEPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT1']['STUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT1']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT1']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPTSIZ1	(OTG_HS device endpoint-2 transfer size register)
    # Offset: 816	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ1']['RXDPID_STUPCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ1']['PKTCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ1']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPCTL2	(OTG device endpoint-2 control register)
    # Offset: 832	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPCTL2']['EPENA'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL2']['EPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL2']['SODDFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL2']['SD0PID_SEVNFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL2']['SNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL2']['CNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL2']['Stall'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL2']['SNPM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL2']['EPTYP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL2']['NAKSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL2']['EONUM_DPID'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL2']['USBAEP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL2']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPINT2	(OTG_HS device endpoint-2 interrupt register)
    # Offset: 840	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPINT2']['NYET'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT2']['B2BSTUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT2']['OTEPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT2']['STUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT2']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT2']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPTSIZ2	(OTG_HS device endpoint-3 transfer size register)
    # Offset: 848	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ2']['RXDPID_STUPCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ2']['PKTCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ2']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPCTL3	(OTG device endpoint-3 control register)
    # Offset: 864	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPCTL3']['EPENA'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL3']['EPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL3']['SODDFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL3']['SD0PID_SEVNFRM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL3']['SNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL3']['CNAK'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL3']['Stall'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL3']['SNPM'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL3']['EPTYP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL3']['NAKSTS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL3']['EONUM_DPID'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL3']['USBAEP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPCTL3']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPINT3	(OTG_HS device endpoint-3 interrupt register)
    # Offset: 872	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPINT3']['NYET'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT3']['B2BSTUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT3']['OTEPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT3']['STUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT3']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT3']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPTSIZ3	(OTG_HS device endpoint-4 transfer size register)
    # Offset: 880	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ3']['RXDPID_STUPCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ3']['PKTCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ3']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPINT4	(OTG_HS device endpoint-4 interrupt register)
    # Offset: 904	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPINT4']['NYET'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT4']['B2BSTUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT4']['OTEPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT4']['STUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT4']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT4']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPTSIZ4	(OTG_HS device endpoint-5 transfer size register)
    # Offset: 912	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ4']['RXDPID_STUPCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ4']['PKTCNT'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPTSIZ4']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPINT5	(OTG_HS device endpoint-5 interrupt register)
    # Offset: 936	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPINT5']['NYET'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT5']['B2BSTUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT5']['OTEPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT5']['STUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT5']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT5']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPINT6	(OTG_HS device endpoint-6 interrupt register)
    # Offset: 968	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPINT6']['NYET'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT6']['B2BSTUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT6']['OTEPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT6']['STUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT6']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT6']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_DOEPINT7	(OTG_HS device endpoint-7 interrupt register)
    # Offset: 1000	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_DEVICE['OTG_HS_DOEPINT7']['NYET'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT7']['B2BSTUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT7']['OTEPDIS'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT7']['STUP'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT7']['EPDISD'].values = None
    OTG_HS_DEVICE['OTG_HS_DOEPINT7']['XFRC'].values = None

