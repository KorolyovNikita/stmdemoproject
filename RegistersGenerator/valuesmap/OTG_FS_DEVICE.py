from tempvalue import*


def apply(OTG_FS_DEVICE):
    # -------------------------------------------------------------------------
    # FS_DCFG	(OTG_FS device configuration register (OTG_FS_DCFG))
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['FS_DCFG']['PFIVL'].values = None
    OTG_FS_DEVICE['FS_DCFG']['DAD'].values = None
    OTG_FS_DEVICE['FS_DCFG']['NZLSOHSK'].values = None
    OTG_FS_DEVICE['FS_DCFG']['DSPD'].values = None

    # -------------------------------------------------------------------------
    # FS_DCTL	(OTG_FS device control register (OTG_FS_DCTL))
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['FS_DCTL']['POPRGDNE'].values = None
    OTG_FS_DEVICE['FS_DCTL']['CGONAK'].values = None
    OTG_FS_DEVICE['FS_DCTL']['SGONAK'].values = None
    OTG_FS_DEVICE['FS_DCTL']['CGINAK'].values = None
    OTG_FS_DEVICE['FS_DCTL']['SGINAK'].values = None
    OTG_FS_DEVICE['FS_DCTL']['TCTL'].values = None
    OTG_FS_DEVICE['FS_DCTL']['GONSTS'].values = None
    OTG_FS_DEVICE['FS_DCTL']['GINSTS'].values = None
    OTG_FS_DEVICE['FS_DCTL']['SDIS'].values = None
    OTG_FS_DEVICE['FS_DCTL']['RWUSIG'].values = None

    # -------------------------------------------------------------------------
    # FS_DSTS	(OTG_FS device status register (OTG_FS_DSTS))
    # Offset: 8	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['FS_DSTS']['FNSOF'].values = None
    OTG_FS_DEVICE['FS_DSTS']['EERR'].values = None
    OTG_FS_DEVICE['FS_DSTS']['ENUMSPD'].values = None
    OTG_FS_DEVICE['FS_DSTS']['SUSPSTS'].values = None

    # -------------------------------------------------------------------------
    # FS_DIEPMSK	(OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK))
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['FS_DIEPMSK']['INEPNEM'].values = None
    OTG_FS_DEVICE['FS_DIEPMSK']['INEPNMM'].values = None
    OTG_FS_DEVICE['FS_DIEPMSK']['ITTXFEMSK'].values = None
    OTG_FS_DEVICE['FS_DIEPMSK']['TOM'].values = None
    OTG_FS_DEVICE['FS_DIEPMSK']['EPDM'].values = None
    OTG_FS_DEVICE['FS_DIEPMSK']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # FS_DOEPMSK	(OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK))
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['FS_DOEPMSK']['OTEPDM'].values = None
    OTG_FS_DEVICE['FS_DOEPMSK']['STUPM'].values = None
    OTG_FS_DEVICE['FS_DOEPMSK']['EPDM'].values = None
    OTG_FS_DEVICE['FS_DOEPMSK']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # FS_DAINT	(OTG_FS device all endpoints interrupt register (OTG_FS_DAINT))
    # Offset: 24	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['FS_DAINT']['OEPINT'].values = None
    OTG_FS_DEVICE['FS_DAINT']['IEPINT'].values = None

    # -------------------------------------------------------------------------
    # FS_DAINTMSK	(OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK))
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['FS_DAINTMSK']['OEPINT'].values = None
    OTG_FS_DEVICE['FS_DAINTMSK']['IEPM'].values = None

    # -------------------------------------------------------------------------
    # DVBUSDIS	(OTG_FS device VBUS discharge time register)
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DVBUSDIS']['VBUSDT'].values = None

    # -------------------------------------------------------------------------
    # DVBUSPULSE	(OTG_FS device VBUS pulsing time register)
    # Offset: 44	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DVBUSPULSE']['DVBUSP'].values = None

    # -------------------------------------------------------------------------
    # DIEPEMPMSK	(OTG_FS device IN endpoint FIFO empty interrupt mask register)
    # Offset: 52	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DIEPEMPMSK']['INEPTXFEM'].values = None

    # -------------------------------------------------------------------------
    # FS_DIEPCTL0	(OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0))
    # Offset: 256	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['FS_DIEPCTL0']['EPENA'].values = None
    OTG_FS_DEVICE['FS_DIEPCTL0']['EPDIS'].values = None
    OTG_FS_DEVICE['FS_DIEPCTL0']['SNAK'].values = None
    OTG_FS_DEVICE['FS_DIEPCTL0']['CNAK'].values = None
    OTG_FS_DEVICE['FS_DIEPCTL0']['TXFNUM'].values = None
    OTG_FS_DEVICE['FS_DIEPCTL0']['STALL'].values = None
    OTG_FS_DEVICE['FS_DIEPCTL0']['EPTYP'].values = None
    OTG_FS_DEVICE['FS_DIEPCTL0']['NAKSTS'].values = None
    OTG_FS_DEVICE['FS_DIEPCTL0']['USBAEP'].values = None
    OTG_FS_DEVICE['FS_DIEPCTL0']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # DIEPINT0	(device endpoint-x interrupt register)
    # Offset: 264	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DIEPINT0']['TXFE'].values = None
    OTG_FS_DEVICE['DIEPINT0']['INEPNE'].values = None
    OTG_FS_DEVICE['DIEPINT0']['ITTXFE'].values = None
    OTG_FS_DEVICE['DIEPINT0']['TOC'].values = None
    OTG_FS_DEVICE['DIEPINT0']['EPDISD'].values = None
    OTG_FS_DEVICE['DIEPINT0']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # DIEPTSIZ0	(device endpoint-0 transfer size register)
    # Offset: 272	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DIEPTSIZ0']['PKTCNT'].values = None
    OTG_FS_DEVICE['DIEPTSIZ0']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # DTXFSTS0	(OTG_FS device IN endpoint transmit FIFO status register)
    # Offset: 280	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DTXFSTS0']['INEPTFSAV'].values = None

    # -------------------------------------------------------------------------
    # DIEPCTL1	(OTG device endpoint-1 control register)
    # Offset: 288	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DIEPCTL1']['EPENA'].values = None
    OTG_FS_DEVICE['DIEPCTL1']['EPDIS'].values = None
    OTG_FS_DEVICE['DIEPCTL1']['SODDFRM_SD1PID'].values = None
    OTG_FS_DEVICE['DIEPCTL1']['SD0PID_SEVNFRM'].values = None
    OTG_FS_DEVICE['DIEPCTL1']['SNAK'].values = None
    OTG_FS_DEVICE['DIEPCTL1']['CNAK'].values = None
    OTG_FS_DEVICE['DIEPCTL1']['TXFNUM'].values = None
    OTG_FS_DEVICE['DIEPCTL1']['Stall'].values = None
    OTG_FS_DEVICE['DIEPCTL1']['EPTYP'].values = None
    OTG_FS_DEVICE['DIEPCTL1']['NAKSTS'].values = None
    OTG_FS_DEVICE['DIEPCTL1']['EONUM_DPID'].values = None
    OTG_FS_DEVICE['DIEPCTL1']['USBAEP'].values = None
    OTG_FS_DEVICE['DIEPCTL1']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # DIEPINT1	(device endpoint-1 interrupt register)
    # Offset: 296	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DIEPINT1']['TXFE'].values = None
    OTG_FS_DEVICE['DIEPINT1']['INEPNE'].values = None
    OTG_FS_DEVICE['DIEPINT1']['ITTXFE'].values = None
    OTG_FS_DEVICE['DIEPINT1']['TOC'].values = None
    OTG_FS_DEVICE['DIEPINT1']['EPDISD'].values = None
    OTG_FS_DEVICE['DIEPINT1']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # DIEPTSIZ1	(device endpoint-1 transfer size register)
    # Offset: 304	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DIEPTSIZ1']['MCNT'].values = None
    OTG_FS_DEVICE['DIEPTSIZ1']['PKTCNT'].values = None
    OTG_FS_DEVICE['DIEPTSIZ1']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # DTXFSTS1	(OTG_FS device IN endpoint transmit FIFO status register)
    # Offset: 312	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DTXFSTS1']['INEPTFSAV'].values = None

    # -------------------------------------------------------------------------
    # DIEPCTL2	(OTG device endpoint-2 control register)
    # Offset: 320	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DIEPCTL2']['EPENA'].values = None
    OTG_FS_DEVICE['DIEPCTL2']['EPDIS'].values = None
    OTG_FS_DEVICE['DIEPCTL2']['SODDFRM'].values = None
    OTG_FS_DEVICE['DIEPCTL2']['SD0PID_SEVNFRM'].values = None
    OTG_FS_DEVICE['DIEPCTL2']['SNAK'].values = None
    OTG_FS_DEVICE['DIEPCTL2']['CNAK'].values = None
    OTG_FS_DEVICE['DIEPCTL2']['TXFNUM'].values = None
    OTG_FS_DEVICE['DIEPCTL2']['Stall'].values = None
    OTG_FS_DEVICE['DIEPCTL2']['EPTYP'].values = None
    OTG_FS_DEVICE['DIEPCTL2']['NAKSTS'].values = None
    OTG_FS_DEVICE['DIEPCTL2']['EONUM_DPID'].values = None
    OTG_FS_DEVICE['DIEPCTL2']['USBAEP'].values = None
    OTG_FS_DEVICE['DIEPCTL2']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # DIEPINT2	(device endpoint-2 interrupt register)
    # Offset: 328	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DIEPINT2']['TXFE'].values = None
    OTG_FS_DEVICE['DIEPINT2']['INEPNE'].values = None
    OTG_FS_DEVICE['DIEPINT2']['ITTXFE'].values = None
    OTG_FS_DEVICE['DIEPINT2']['TOC'].values = None
    OTG_FS_DEVICE['DIEPINT2']['EPDISD'].values = None
    OTG_FS_DEVICE['DIEPINT2']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # DIEPTSIZ2	(device endpoint-2 transfer size register)
    # Offset: 336	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DIEPTSIZ2']['MCNT'].values = None
    OTG_FS_DEVICE['DIEPTSIZ2']['PKTCNT'].values = None
    OTG_FS_DEVICE['DIEPTSIZ2']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # DTXFSTS2	(OTG_FS device IN endpoint transmit FIFO status register)
    # Offset: 344	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DTXFSTS2']['INEPTFSAV'].values = None

    # -------------------------------------------------------------------------
    # DIEPCTL3	(OTG device endpoint-3 control register)
    # Offset: 352	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DIEPCTL3']['EPENA'].values = None
    OTG_FS_DEVICE['DIEPCTL3']['EPDIS'].values = None
    OTG_FS_DEVICE['DIEPCTL3']['SODDFRM'].values = None
    OTG_FS_DEVICE['DIEPCTL3']['SD0PID_SEVNFRM'].values = None
    OTG_FS_DEVICE['DIEPCTL3']['SNAK'].values = None
    OTG_FS_DEVICE['DIEPCTL3']['CNAK'].values = None
    OTG_FS_DEVICE['DIEPCTL3']['TXFNUM'].values = None
    OTG_FS_DEVICE['DIEPCTL3']['Stall'].values = None
    OTG_FS_DEVICE['DIEPCTL3']['EPTYP'].values = None
    OTG_FS_DEVICE['DIEPCTL3']['NAKSTS'].values = None
    OTG_FS_DEVICE['DIEPCTL3']['EONUM_DPID'].values = None
    OTG_FS_DEVICE['DIEPCTL3']['USBAEP'].values = None
    OTG_FS_DEVICE['DIEPCTL3']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # DIEPINT3	(device endpoint-3 interrupt register)
    # Offset: 360	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DIEPINT3']['TXFE'].values = None
    OTG_FS_DEVICE['DIEPINT3']['INEPNE'].values = None
    OTG_FS_DEVICE['DIEPINT3']['ITTXFE'].values = None
    OTG_FS_DEVICE['DIEPINT3']['TOC'].values = None
    OTG_FS_DEVICE['DIEPINT3']['EPDISD'].values = None
    OTG_FS_DEVICE['DIEPINT3']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # DIEPTSIZ3	(device endpoint-3 transfer size register)
    # Offset: 368	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DIEPTSIZ3']['MCNT'].values = None
    OTG_FS_DEVICE['DIEPTSIZ3']['PKTCNT'].values = None
    OTG_FS_DEVICE['DIEPTSIZ3']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # DTXFSTS3	(OTG_FS device IN endpoint transmit FIFO status register)
    # Offset: 376	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DTXFSTS3']['INEPTFSAV'].values = None

    # -------------------------------------------------------------------------
    # DOEPCTL0	(device endpoint-0 control register)
    # Offset: 768	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DOEPCTL0']['EPENA'].values = None
    OTG_FS_DEVICE['DOEPCTL0']['EPDIS'].values = None
    OTG_FS_DEVICE['DOEPCTL0']['SNAK'].values = None
    OTG_FS_DEVICE['DOEPCTL0']['CNAK'].values = None
    OTG_FS_DEVICE['DOEPCTL0']['Stall'].values = None
    OTG_FS_DEVICE['DOEPCTL0']['SNPM'].values = None
    OTG_FS_DEVICE['DOEPCTL0']['EPTYP'].values = None
    OTG_FS_DEVICE['DOEPCTL0']['NAKSTS'].values = None
    OTG_FS_DEVICE['DOEPCTL0']['USBAEP'].values = None
    OTG_FS_DEVICE['DOEPCTL0']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # DOEPINT0	(device endpoint-0 interrupt register)
    # Offset: 776	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DOEPINT0']['B2BSTUP'].values = None
    OTG_FS_DEVICE['DOEPINT0']['OTEPDIS'].values = None
    OTG_FS_DEVICE['DOEPINT0']['STUP'].values = None
    OTG_FS_DEVICE['DOEPINT0']['EPDISD'].values = None
    OTG_FS_DEVICE['DOEPINT0']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # DOEPTSIZ0	(device OUT endpoint-0 transfer size register)
    # Offset: 784	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DOEPTSIZ0']['STUPCNT'].values = None
    OTG_FS_DEVICE['DOEPTSIZ0']['PKTCNT'].values = None
    OTG_FS_DEVICE['DOEPTSIZ0']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # DOEPCTL1	(device endpoint-1 control register)
    # Offset: 800	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DOEPCTL1']['EPENA'].values = None
    OTG_FS_DEVICE['DOEPCTL1']['EPDIS'].values = None
    OTG_FS_DEVICE['DOEPCTL1']['SODDFRM'].values = None
    OTG_FS_DEVICE['DOEPCTL1']['SD0PID_SEVNFRM'].values = None
    OTG_FS_DEVICE['DOEPCTL1']['SNAK'].values = None
    OTG_FS_DEVICE['DOEPCTL1']['CNAK'].values = None
    OTG_FS_DEVICE['DOEPCTL1']['Stall'].values = None
    OTG_FS_DEVICE['DOEPCTL1']['SNPM'].values = None
    OTG_FS_DEVICE['DOEPCTL1']['EPTYP'].values = None
    OTG_FS_DEVICE['DOEPCTL1']['NAKSTS'].values = None
    OTG_FS_DEVICE['DOEPCTL1']['EONUM_DPID'].values = None
    OTG_FS_DEVICE['DOEPCTL1']['USBAEP'].values = None
    OTG_FS_DEVICE['DOEPCTL1']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # DOEPINT1	(device endpoint-1 interrupt register)
    # Offset: 808	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DOEPINT1']['B2BSTUP'].values = None
    OTG_FS_DEVICE['DOEPINT1']['OTEPDIS'].values = None
    OTG_FS_DEVICE['DOEPINT1']['STUP'].values = None
    OTG_FS_DEVICE['DOEPINT1']['EPDISD'].values = None
    OTG_FS_DEVICE['DOEPINT1']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # DOEPTSIZ1	(device OUT endpoint-1 transfer size register)
    # Offset: 816	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DOEPTSIZ1']['RXDPID_STUPCNT'].values = None
    OTG_FS_DEVICE['DOEPTSIZ1']['PKTCNT'].values = None
    OTG_FS_DEVICE['DOEPTSIZ1']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # DOEPCTL2	(device endpoint-2 control register)
    # Offset: 832	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DOEPCTL2']['EPENA'].values = None
    OTG_FS_DEVICE['DOEPCTL2']['EPDIS'].values = None
    OTG_FS_DEVICE['DOEPCTL2']['SODDFRM'].values = None
    OTG_FS_DEVICE['DOEPCTL2']['SD0PID_SEVNFRM'].values = None
    OTG_FS_DEVICE['DOEPCTL2']['SNAK'].values = None
    OTG_FS_DEVICE['DOEPCTL2']['CNAK'].values = None
    OTG_FS_DEVICE['DOEPCTL2']['Stall'].values = None
    OTG_FS_DEVICE['DOEPCTL2']['SNPM'].values = None
    OTG_FS_DEVICE['DOEPCTL2']['EPTYP'].values = None
    OTG_FS_DEVICE['DOEPCTL2']['NAKSTS'].values = None
    OTG_FS_DEVICE['DOEPCTL2']['EONUM_DPID'].values = None
    OTG_FS_DEVICE['DOEPCTL2']['USBAEP'].values = None
    OTG_FS_DEVICE['DOEPCTL2']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # DOEPINT2	(device endpoint-2 interrupt register)
    # Offset: 840	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DOEPINT2']['B2BSTUP'].values = None
    OTG_FS_DEVICE['DOEPINT2']['OTEPDIS'].values = None
    OTG_FS_DEVICE['DOEPINT2']['STUP'].values = None
    OTG_FS_DEVICE['DOEPINT2']['EPDISD'].values = None
    OTG_FS_DEVICE['DOEPINT2']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # DOEPTSIZ2	(device OUT endpoint-2 transfer size register)
    # Offset: 848	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DOEPTSIZ2']['RXDPID_STUPCNT'].values = None
    OTG_FS_DEVICE['DOEPTSIZ2']['PKTCNT'].values = None
    OTG_FS_DEVICE['DOEPTSIZ2']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # DOEPCTL3	(device endpoint-3 control register)
    # Offset: 864	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DOEPCTL3']['EPENA'].values = None
    OTG_FS_DEVICE['DOEPCTL3']['EPDIS'].values = None
    OTG_FS_DEVICE['DOEPCTL3']['SODDFRM'].values = None
    OTG_FS_DEVICE['DOEPCTL3']['SD0PID_SEVNFRM'].values = None
    OTG_FS_DEVICE['DOEPCTL3']['SNAK'].values = None
    OTG_FS_DEVICE['DOEPCTL3']['CNAK'].values = None
    OTG_FS_DEVICE['DOEPCTL3']['Stall'].values = None
    OTG_FS_DEVICE['DOEPCTL3']['SNPM'].values = None
    OTG_FS_DEVICE['DOEPCTL3']['EPTYP'].values = None
    OTG_FS_DEVICE['DOEPCTL3']['NAKSTS'].values = None
    OTG_FS_DEVICE['DOEPCTL3']['EONUM_DPID'].values = None
    OTG_FS_DEVICE['DOEPCTL3']['USBAEP'].values = None
    OTG_FS_DEVICE['DOEPCTL3']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # DOEPINT3	(device endpoint-3 interrupt register)
    # Offset: 872	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DOEPINT3']['B2BSTUP'].values = None
    OTG_FS_DEVICE['DOEPINT3']['OTEPDIS'].values = None
    OTG_FS_DEVICE['DOEPINT3']['STUP'].values = None
    OTG_FS_DEVICE['DOEPINT3']['EPDISD'].values = None
    OTG_FS_DEVICE['DOEPINT3']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # DOEPTSIZ3	(device OUT endpoint-3 transfer size register)
    # Offset: 880	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_DEVICE['DOEPTSIZ3']['RXDPID_STUPCNT'].values = None
    OTG_FS_DEVICE['DOEPTSIZ3']['PKTCNT'].values = None
    OTG_FS_DEVICE['DOEPTSIZ3']['XFRSIZ'].values = None

