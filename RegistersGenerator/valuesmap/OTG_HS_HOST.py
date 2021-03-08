from tempvalue import*


def apply(OTG_HS_HOST):
    # -------------------------------------------------------------------------
    # OTG_HS_HCFG	(OTG_HS host configuration register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCFG']['FSLSS'].values = None
    OTG_HS_HOST['OTG_HS_HCFG']['FSLSPCS'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HFIR	(OTG_HS Host frame interval register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HFIR']['FRIVL'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HFNUM	(OTG_HS host frame number/frame time remaining register)
    # Offset: 8	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HFNUM']['FTREM'].values = None
    OTG_HS_HOST['OTG_HS_HFNUM']['FRNUM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HPTXSTS	(OTG_HS_Host periodic transmit FIFO/queue status register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HPTXSTS']['PTXQTOP'].values = None
    OTG_HS_HOST['OTG_HS_HPTXSTS']['PTXQSAV'].values = None
    OTG_HS_HOST['OTG_HS_HPTXSTS']['PTXFSAVL'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HAINT	(OTG_HS Host all channels interrupt register)
    # Offset: 20	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HAINT']['HAINT'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HAINTMSK	(OTG_HS host all channels interrupt mask register)
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HAINTMSK']['HAINTM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HPRT	(OTG_HS host port control and status register)
    # Offset: 64	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HPRT']['PSPD'].values = None
    OTG_HS_HOST['OTG_HS_HPRT']['PTCTL'].values = None
    OTG_HS_HOST['OTG_HS_HPRT']['PPWR'].values = None
    OTG_HS_HOST['OTG_HS_HPRT']['PLSTS'].values = None
    OTG_HS_HOST['OTG_HS_HPRT']['PRST'].values = None
    OTG_HS_HOST['OTG_HS_HPRT']['PSUSP'].values = None
    OTG_HS_HOST['OTG_HS_HPRT']['PRES'].values = None
    OTG_HS_HOST['OTG_HS_HPRT']['POCCHNG'].values = None
    OTG_HS_HOST['OTG_HS_HPRT']['POCA'].values = None
    OTG_HS_HOST['OTG_HS_HPRT']['PENCHNG'].values = None
    OTG_HS_HOST['OTG_HS_HPRT']['PENA'].values = None
    OTG_HS_HOST['OTG_HS_HPRT']['PCDET'].values = None
    OTG_HS_HOST['OTG_HS_HPRT']['PCSTS'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCCHAR0	(OTG_HS host channel-0 characteristics register)
    # Offset: 256	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCCHAR0']['CHENA'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR0']['CHDIS'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR0']['ODDFRM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR0']['DAD'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR0']['MC'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR0']['EPTYP'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR0']['LSDEV'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR0']['EPDIR'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR0']['EPNUM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR0']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCSPLT0	(OTG_HS host channel-0 split control register)
    # Offset: 260	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCSPLT0']['SPLITEN'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT0']['COMPLSPLT'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT0']['XACTPOS'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT0']['HUBADDR'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT0']['PRTADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINT0	(OTG_HS host channel-11 interrupt register)
    # Offset: 264	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINT0']['DTERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT0']['FRMOR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT0']['BBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT0']['TXERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT0']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINT0']['ACK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT0']['NAK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT0']['STALL'].values = None
    OTG_HS_HOST['OTG_HS_HCINT0']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT0']['CHH'].values = None
    OTG_HS_HOST['OTG_HS_HCINT0']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINTMSK0	(OTG_HS host channel-11 interrupt mask register)
    # Offset: 268	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINTMSK0']['DTERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK0']['FRMORM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK0']['BBERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK0']['TXERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK0']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK0']['ACKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK0']['NAKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK0']['STALLM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK0']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK0']['CHHM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK0']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCTSIZ0	(OTG_HS host channel-11 transfer size register)
    # Offset: 272	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCTSIZ0']['DPID'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ0']['PKTCNT'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ0']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCDMA0	(OTG_HS host channel-0 DMA address register)
    # Offset: 276	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCDMA0']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCCHAR1	(OTG_HS host channel-1 characteristics register)
    # Offset: 288	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCCHAR1']['CHENA'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR1']['CHDIS'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR1']['ODDFRM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR1']['DAD'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR1']['MC'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR1']['EPTYP'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR1']['LSDEV'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR1']['EPDIR'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR1']['EPNUM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR1']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCSPLT1	(OTG_HS host channel-1 split control register)
    # Offset: 292	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCSPLT1']['SPLITEN'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT1']['COMPLSPLT'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT1']['XACTPOS'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT1']['HUBADDR'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT1']['PRTADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINT1	(OTG_HS host channel-1 interrupt register)
    # Offset: 296	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINT1']['DTERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT1']['FRMOR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT1']['BBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT1']['TXERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT1']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINT1']['ACK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT1']['NAK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT1']['STALL'].values = None
    OTG_HS_HOST['OTG_HS_HCINT1']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT1']['CHH'].values = None
    OTG_HS_HOST['OTG_HS_HCINT1']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINTMSK1	(OTG_HS host channel-1 interrupt mask register)
    # Offset: 300	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINTMSK1']['DTERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK1']['FRMORM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK1']['BBERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK1']['TXERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK1']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK1']['ACKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK1']['NAKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK1']['STALLM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK1']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK1']['CHHM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK1']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCTSIZ1	(OTG_HS host channel-1 transfer size register)
    # Offset: 304	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCTSIZ1']['DPID'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ1']['PKTCNT'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ1']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCDMA1	(OTG_HS host channel-1 DMA address register)
    # Offset: 308	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCDMA1']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCCHAR2	(OTG_HS host channel-2 characteristics register)
    # Offset: 320	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCCHAR2']['CHENA'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR2']['CHDIS'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR2']['ODDFRM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR2']['DAD'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR2']['MC'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR2']['EPTYP'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR2']['LSDEV'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR2']['EPDIR'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR2']['EPNUM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR2']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCSPLT2	(OTG_HS host channel-2 split control register)
    # Offset: 324	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCSPLT2']['SPLITEN'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT2']['COMPLSPLT'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT2']['XACTPOS'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT2']['HUBADDR'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT2']['PRTADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINT2	(OTG_HS host channel-2 interrupt register)
    # Offset: 328	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINT2']['DTERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT2']['FRMOR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT2']['BBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT2']['TXERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT2']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINT2']['ACK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT2']['NAK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT2']['STALL'].values = None
    OTG_HS_HOST['OTG_HS_HCINT2']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT2']['CHH'].values = None
    OTG_HS_HOST['OTG_HS_HCINT2']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINTMSK2	(OTG_HS host channel-2 interrupt mask register)
    # Offset: 332	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINTMSK2']['DTERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK2']['FRMORM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK2']['BBERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK2']['TXERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK2']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK2']['ACKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK2']['NAKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK2']['STALLM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK2']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK2']['CHHM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK2']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCTSIZ2	(OTG_HS host channel-2 transfer size register)
    # Offset: 336	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCTSIZ2']['DPID'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ2']['PKTCNT'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ2']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCDMA2	(OTG_HS host channel-2 DMA address register)
    # Offset: 340	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCDMA2']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCCHAR3	(OTG_HS host channel-3 characteristics register)
    # Offset: 352	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCCHAR3']['CHENA'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR3']['CHDIS'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR3']['ODDFRM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR3']['DAD'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR3']['MC'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR3']['EPTYP'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR3']['LSDEV'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR3']['EPDIR'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR3']['EPNUM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR3']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCSPLT3	(OTG_HS host channel-3 split control register)
    # Offset: 356	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCSPLT3']['SPLITEN'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT3']['COMPLSPLT'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT3']['XACTPOS'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT3']['HUBADDR'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT3']['PRTADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINT3	(OTG_HS host channel-3 interrupt register)
    # Offset: 360	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINT3']['DTERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT3']['FRMOR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT3']['BBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT3']['TXERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT3']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINT3']['ACK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT3']['NAK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT3']['STALL'].values = None
    OTG_HS_HOST['OTG_HS_HCINT3']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT3']['CHH'].values = None
    OTG_HS_HOST['OTG_HS_HCINT3']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINTMSK3	(OTG_HS host channel-3 interrupt mask register)
    # Offset: 364	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINTMSK3']['DTERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK3']['FRMORM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK3']['BBERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK3']['TXERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK3']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK3']['ACKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK3']['NAKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK3']['STALLM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK3']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK3']['CHHM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK3']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCTSIZ3	(OTG_HS host channel-3 transfer size register)
    # Offset: 368	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCTSIZ3']['DPID'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ3']['PKTCNT'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ3']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCDMA3	(OTG_HS host channel-3 DMA address register)
    # Offset: 372	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCDMA3']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCCHAR4	(OTG_HS host channel-4 characteristics register)
    # Offset: 384	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCCHAR4']['CHENA'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR4']['CHDIS'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR4']['ODDFRM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR4']['DAD'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR4']['MC'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR4']['EPTYP'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR4']['LSDEV'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR4']['EPDIR'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR4']['EPNUM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR4']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCSPLT4	(OTG_HS host channel-4 split control register)
    # Offset: 388	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCSPLT4']['SPLITEN'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT4']['COMPLSPLT'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT4']['XACTPOS'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT4']['HUBADDR'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT4']['PRTADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINT4	(OTG_HS host channel-4 interrupt register)
    # Offset: 392	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINT4']['DTERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT4']['FRMOR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT4']['BBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT4']['TXERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT4']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINT4']['ACK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT4']['NAK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT4']['STALL'].values = None
    OTG_HS_HOST['OTG_HS_HCINT4']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT4']['CHH'].values = None
    OTG_HS_HOST['OTG_HS_HCINT4']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINTMSK4	(OTG_HS host channel-4 interrupt mask register)
    # Offset: 396	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINTMSK4']['DTERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK4']['FRMORM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK4']['BBERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK4']['TXERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK4']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK4']['ACKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK4']['NAKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK4']['STALLM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK4']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK4']['CHHM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK4']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCTSIZ4	(OTG_HS host channel-4 transfer size register)
    # Offset: 400	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCTSIZ4']['DPID'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ4']['PKTCNT'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ4']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCDMA4	(OTG_HS host channel-4 DMA address register)
    # Offset: 404	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCDMA4']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCCHAR5	(OTG_HS host channel-5 characteristics register)
    # Offset: 416	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCCHAR5']['CHENA'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR5']['CHDIS'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR5']['ODDFRM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR5']['DAD'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR5']['MC'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR5']['EPTYP'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR5']['LSDEV'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR5']['EPDIR'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR5']['EPNUM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR5']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCSPLT5	(OTG_HS host channel-5 split control register)
    # Offset: 420	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCSPLT5']['SPLITEN'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT5']['COMPLSPLT'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT5']['XACTPOS'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT5']['HUBADDR'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT5']['PRTADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINT5	(OTG_HS host channel-5 interrupt register)
    # Offset: 424	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINT5']['DTERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT5']['FRMOR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT5']['BBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT5']['TXERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT5']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINT5']['ACK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT5']['NAK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT5']['STALL'].values = None
    OTG_HS_HOST['OTG_HS_HCINT5']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT5']['CHH'].values = None
    OTG_HS_HOST['OTG_HS_HCINT5']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINTMSK5	(OTG_HS host channel-5 interrupt mask register)
    # Offset: 428	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINTMSK5']['DTERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK5']['FRMORM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK5']['BBERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK5']['TXERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK5']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK5']['ACKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK5']['NAKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK5']['STALLM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK5']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK5']['CHHM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK5']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCTSIZ5	(OTG_HS host channel-5 transfer size register)
    # Offset: 432	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCTSIZ5']['DPID'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ5']['PKTCNT'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ5']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCDMA5	(OTG_HS host channel-5 DMA address register)
    # Offset: 436	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCDMA5']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCCHAR6	(OTG_HS host channel-6 characteristics register)
    # Offset: 448	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCCHAR6']['CHENA'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR6']['CHDIS'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR6']['ODDFRM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR6']['DAD'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR6']['MC'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR6']['EPTYP'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR6']['LSDEV'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR6']['EPDIR'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR6']['EPNUM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR6']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCSPLT6	(OTG_HS host channel-6 split control register)
    # Offset: 452	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCSPLT6']['SPLITEN'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT6']['COMPLSPLT'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT6']['XACTPOS'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT6']['HUBADDR'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT6']['PRTADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINT6	(OTG_HS host channel-6 interrupt register)
    # Offset: 456	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINT6']['DTERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT6']['FRMOR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT6']['BBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT6']['TXERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT6']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINT6']['ACK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT6']['NAK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT6']['STALL'].values = None
    OTG_HS_HOST['OTG_HS_HCINT6']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT6']['CHH'].values = None
    OTG_HS_HOST['OTG_HS_HCINT6']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINTMSK6	(OTG_HS host channel-6 interrupt mask register)
    # Offset: 460	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINTMSK6']['DTERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK6']['FRMORM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK6']['BBERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK6']['TXERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK6']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK6']['ACKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK6']['NAKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK6']['STALLM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK6']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK6']['CHHM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK6']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCTSIZ6	(OTG_HS host channel-6 transfer size register)
    # Offset: 464	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCTSIZ6']['DPID'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ6']['PKTCNT'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ6']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCDMA6	(OTG_HS host channel-6 DMA address register)
    # Offset: 468	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCDMA6']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCCHAR7	(OTG_HS host channel-7 characteristics register)
    # Offset: 480	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCCHAR7']['CHENA'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR7']['CHDIS'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR7']['ODDFRM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR7']['DAD'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR7']['MC'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR7']['EPTYP'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR7']['LSDEV'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR7']['EPDIR'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR7']['EPNUM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR7']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCSPLT7	(OTG_HS host channel-7 split control register)
    # Offset: 484	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCSPLT7']['SPLITEN'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT7']['COMPLSPLT'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT7']['XACTPOS'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT7']['HUBADDR'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT7']['PRTADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINT7	(OTG_HS host channel-7 interrupt register)
    # Offset: 488	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINT7']['DTERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT7']['FRMOR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT7']['BBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT7']['TXERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT7']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINT7']['ACK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT7']['NAK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT7']['STALL'].values = None
    OTG_HS_HOST['OTG_HS_HCINT7']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT7']['CHH'].values = None
    OTG_HS_HOST['OTG_HS_HCINT7']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINTMSK7	(OTG_HS host channel-7 interrupt mask register)
    # Offset: 492	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINTMSK7']['DTERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK7']['FRMORM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK7']['BBERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK7']['TXERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK7']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK7']['ACKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK7']['NAKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK7']['STALLM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK7']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK7']['CHHM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK7']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCTSIZ7	(OTG_HS host channel-7 transfer size register)
    # Offset: 496	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCTSIZ7']['DPID'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ7']['PKTCNT'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ7']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCDMA7	(OTG_HS host channel-7 DMA address register)
    # Offset: 500	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCDMA7']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCCHAR8	(OTG_HS host channel-8 characteristics register)
    # Offset: 512	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCCHAR8']['CHENA'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR8']['CHDIS'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR8']['ODDFRM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR8']['DAD'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR8']['MC'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR8']['EPTYP'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR8']['LSDEV'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR8']['EPDIR'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR8']['EPNUM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR8']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCSPLT8	(OTG_HS host channel-8 split control register)
    # Offset: 516	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCSPLT8']['SPLITEN'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT8']['COMPLSPLT'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT8']['XACTPOS'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT8']['HUBADDR'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT8']['PRTADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINT8	(OTG_HS host channel-8 interrupt register)
    # Offset: 520	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINT8']['DTERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT8']['FRMOR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT8']['BBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT8']['TXERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT8']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINT8']['ACK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT8']['NAK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT8']['STALL'].values = None
    OTG_HS_HOST['OTG_HS_HCINT8']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT8']['CHH'].values = None
    OTG_HS_HOST['OTG_HS_HCINT8']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINTMSK8	(OTG_HS host channel-8 interrupt mask register)
    # Offset: 524	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINTMSK8']['DTERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK8']['FRMORM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK8']['BBERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK8']['TXERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK8']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK8']['ACKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK8']['NAKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK8']['STALLM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK8']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK8']['CHHM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK8']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCTSIZ8	(OTG_HS host channel-8 transfer size register)
    # Offset: 528	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCTSIZ8']['DPID'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ8']['PKTCNT'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ8']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCDMA8	(OTG_HS host channel-8 DMA address register)
    # Offset: 532	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCDMA8']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCCHAR9	(OTG_HS host channel-9 characteristics register)
    # Offset: 544	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCCHAR9']['CHENA'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR9']['CHDIS'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR9']['ODDFRM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR9']['DAD'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR9']['MC'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR9']['EPTYP'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR9']['LSDEV'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR9']['EPDIR'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR9']['EPNUM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR9']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCSPLT9	(OTG_HS host channel-9 split control register)
    # Offset: 548	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCSPLT9']['SPLITEN'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT9']['COMPLSPLT'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT9']['XACTPOS'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT9']['HUBADDR'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT9']['PRTADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINT9	(OTG_HS host channel-9 interrupt register)
    # Offset: 552	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINT9']['DTERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT9']['FRMOR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT9']['BBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT9']['TXERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT9']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINT9']['ACK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT9']['NAK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT9']['STALL'].values = None
    OTG_HS_HOST['OTG_HS_HCINT9']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT9']['CHH'].values = None
    OTG_HS_HOST['OTG_HS_HCINT9']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINTMSK9	(OTG_HS host channel-9 interrupt mask register)
    # Offset: 556	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINTMSK9']['DTERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK9']['FRMORM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK9']['BBERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK9']['TXERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK9']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK9']['ACKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK9']['NAKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK9']['STALLM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK9']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK9']['CHHM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK9']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCTSIZ9	(OTG_HS host channel-9 transfer size register)
    # Offset: 560	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCTSIZ9']['DPID'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ9']['PKTCNT'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ9']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCDMA9	(OTG_HS host channel-9 DMA address register)
    # Offset: 564	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCDMA9']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCCHAR10	(OTG_HS host channel-10 characteristics register)
    # Offset: 576	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCCHAR10']['CHENA'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR10']['CHDIS'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR10']['ODDFRM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR10']['DAD'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR10']['MC'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR10']['EPTYP'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR10']['LSDEV'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR10']['EPDIR'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR10']['EPNUM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR10']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCSPLT10	(OTG_HS host channel-10 split control register)
    # Offset: 580	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCSPLT10']['SPLITEN'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT10']['COMPLSPLT'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT10']['XACTPOS'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT10']['HUBADDR'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT10']['PRTADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINT10	(OTG_HS host channel-10 interrupt register)
    # Offset: 584	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINT10']['DTERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT10']['FRMOR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT10']['BBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT10']['TXERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT10']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINT10']['ACK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT10']['NAK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT10']['STALL'].values = None
    OTG_HS_HOST['OTG_HS_HCINT10']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT10']['CHH'].values = None
    OTG_HS_HOST['OTG_HS_HCINT10']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINTMSK10	(OTG_HS host channel-10 interrupt mask register)
    # Offset: 588	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINTMSK10']['DTERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK10']['FRMORM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK10']['BBERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK10']['TXERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK10']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK10']['ACKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK10']['NAKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK10']['STALLM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK10']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK10']['CHHM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK10']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCTSIZ10	(OTG_HS host channel-10 transfer size register)
    # Offset: 592	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCTSIZ10']['DPID'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ10']['PKTCNT'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ10']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCDMA10	(OTG_HS host channel-10 DMA address register)
    # Offset: 596	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCDMA10']['DMAADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCCHAR11	(OTG_HS host channel-11 characteristics register)
    # Offset: 608	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCCHAR11']['CHENA'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR11']['CHDIS'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR11']['ODDFRM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR11']['DAD'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR11']['MC'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR11']['EPTYP'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR11']['LSDEV'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR11']['EPDIR'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR11']['EPNUM'].values = None
    OTG_HS_HOST['OTG_HS_HCCHAR11']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCSPLT11	(OTG_HS host channel-11 split control register)
    # Offset: 612	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCSPLT11']['SPLITEN'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT11']['COMPLSPLT'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT11']['XACTPOS'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT11']['HUBADDR'].values = None
    OTG_HS_HOST['OTG_HS_HCSPLT11']['PRTADDR'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINT11	(OTG_HS host channel-11 interrupt register)
    # Offset: 616	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINT11']['DTERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT11']['FRMOR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT11']['BBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT11']['TXERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT11']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINT11']['ACK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT11']['NAK'].values = None
    OTG_HS_HOST['OTG_HS_HCINT11']['STALL'].values = None
    OTG_HS_HOST['OTG_HS_HCINT11']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINT11']['CHH'].values = None
    OTG_HS_HOST['OTG_HS_HCINT11']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCINTMSK11	(OTG_HS host channel-11 interrupt mask register)
    # Offset: 620	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCINTMSK11']['DTERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK11']['FRMORM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK11']['BBERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK11']['TXERRM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK11']['NYET'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK11']['ACKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK11']['NAKM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK11']['STALLM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK11']['AHBERR'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK11']['CHHM'].values = None
    OTG_HS_HOST['OTG_HS_HCINTMSK11']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCTSIZ11	(OTG_HS host channel-11 transfer size register)
    # Offset: 624	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCTSIZ11']['DPID'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ11']['PKTCNT'].values = None
    OTG_HS_HOST['OTG_HS_HCTSIZ11']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # OTG_HS_HCDMA11	(OTG_HS host channel-11 DMA address register)
    # Offset: 628	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_HOST['OTG_HS_HCDMA11']['DMAADDR'].values = None

