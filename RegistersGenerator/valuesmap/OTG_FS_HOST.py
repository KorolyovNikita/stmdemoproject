from tempvalue import*


def apply(OTG_FS_HOST):
    # -------------------------------------------------------------------------
    # FS_HCFG	(OTG_FS host configuration register (OTG_FS_HCFG))
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCFG']['FSLSS'].values = None
    OTG_FS_HOST['FS_HCFG']['FSLSPCS'].values = None

    # -------------------------------------------------------------------------
    # HFIR	(OTG_FS Host frame interval register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['HFIR']['FRIVL'].values = None

    # -------------------------------------------------------------------------
    # FS_HFNUM	(OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM))
    # Offset: 8	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HFNUM']['FTREM'].values = None
    OTG_FS_HOST['FS_HFNUM']['FRNUM'].values = None

    # -------------------------------------------------------------------------
    # FS_HPTXSTS	(OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS))
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HPTXSTS']['PTXQTOP'].values = None
    OTG_FS_HOST['FS_HPTXSTS']['PTXQSAV'].values = None
    OTG_FS_HOST['FS_HPTXSTS']['PTXFSAVL'].values = None

    # -------------------------------------------------------------------------
    # HAINT	(OTG_FS Host all channels interrupt register)
    # Offset: 20	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['HAINT']['HAINT'].values = None

    # -------------------------------------------------------------------------
    # HAINTMSK	(OTG_FS host all channels interrupt mask register)
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['HAINTMSK']['HAINTM'].values = None

    # -------------------------------------------------------------------------
    # FS_HPRT	(OTG_FS host port control and status register (OTG_FS_HPRT))
    # Offset: 64	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HPRT']['PSPD'].values = None
    OTG_FS_HOST['FS_HPRT']['PTCTL'].values = None
    OTG_FS_HOST['FS_HPRT']['PPWR'].values = None
    OTG_FS_HOST['FS_HPRT']['PLSTS'].values = None
    OTG_FS_HOST['FS_HPRT']['PRST'].values = None
    OTG_FS_HOST['FS_HPRT']['PSUSP'].values = None
    OTG_FS_HOST['FS_HPRT']['PRES'].values = None
    OTG_FS_HOST['FS_HPRT']['POCCHNG'].values = None
    OTG_FS_HOST['FS_HPRT']['POCA'].values = None
    OTG_FS_HOST['FS_HPRT']['PENCHNG'].values = None
    OTG_FS_HOST['FS_HPRT']['PENA'].values = None
    OTG_FS_HOST['FS_HPRT']['PCDET'].values = None
    OTG_FS_HOST['FS_HPRT']['PCSTS'].values = None

    # -------------------------------------------------------------------------
    # FS_HCCHAR0	(OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0))
    # Offset: 256	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCCHAR0']['CHENA'].values = None
    OTG_FS_HOST['FS_HCCHAR0']['CHDIS'].values = None
    OTG_FS_HOST['FS_HCCHAR0']['ODDFRM'].values = None
    OTG_FS_HOST['FS_HCCHAR0']['DAD'].values = None
    OTG_FS_HOST['FS_HCCHAR0']['MCNT'].values = None
    OTG_FS_HOST['FS_HCCHAR0']['EPTYP'].values = None
    OTG_FS_HOST['FS_HCCHAR0']['LSDEV'].values = None
    OTG_FS_HOST['FS_HCCHAR0']['EPDIR'].values = None
    OTG_FS_HOST['FS_HCCHAR0']['EPNUM'].values = None
    OTG_FS_HOST['FS_HCCHAR0']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINT0	(OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0))
    # Offset: 264	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINT0']['DTERR'].values = None
    OTG_FS_HOST['FS_HCINT0']['FRMOR'].values = None
    OTG_FS_HOST['FS_HCINT0']['BBERR'].values = None
    OTG_FS_HOST['FS_HCINT0']['TXERR'].values = None
    OTG_FS_HOST['FS_HCINT0']['ACK'].values = None
    OTG_FS_HOST['FS_HCINT0']['NAK'].values = None
    OTG_FS_HOST['FS_HCINT0']['STALL'].values = None
    OTG_FS_HOST['FS_HCINT0']['CHH'].values = None
    OTG_FS_HOST['FS_HCINT0']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINTMSK0	(OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0))
    # Offset: 268	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINTMSK0']['DTERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK0']['FRMORM'].values = None
    OTG_FS_HOST['FS_HCINTMSK0']['BBERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK0']['TXERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK0']['NYET'].values = None
    OTG_FS_HOST['FS_HCINTMSK0']['ACKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK0']['NAKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK0']['STALLM'].values = None
    OTG_FS_HOST['FS_HCINTMSK0']['CHHM'].values = None
    OTG_FS_HOST['FS_HCINTMSK0']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # FS_HCTSIZ0	(OTG_FS host channel-0 transfer size register)
    # Offset: 272	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCTSIZ0']['DPID'].values = None
    OTG_FS_HOST['FS_HCTSIZ0']['PKTCNT'].values = None
    OTG_FS_HOST['FS_HCTSIZ0']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCCHAR1	(OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1))
    # Offset: 288	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCCHAR1']['CHENA'].values = None
    OTG_FS_HOST['FS_HCCHAR1']['CHDIS'].values = None
    OTG_FS_HOST['FS_HCCHAR1']['ODDFRM'].values = None
    OTG_FS_HOST['FS_HCCHAR1']['DAD'].values = None
    OTG_FS_HOST['FS_HCCHAR1']['MCNT'].values = None
    OTG_FS_HOST['FS_HCCHAR1']['EPTYP'].values = None
    OTG_FS_HOST['FS_HCCHAR1']['LSDEV'].values = None
    OTG_FS_HOST['FS_HCCHAR1']['EPDIR'].values = None
    OTG_FS_HOST['FS_HCCHAR1']['EPNUM'].values = None
    OTG_FS_HOST['FS_HCCHAR1']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINT1	(OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1))
    # Offset: 296	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINT1']['DTERR'].values = None
    OTG_FS_HOST['FS_HCINT1']['FRMOR'].values = None
    OTG_FS_HOST['FS_HCINT1']['BBERR'].values = None
    OTG_FS_HOST['FS_HCINT1']['TXERR'].values = None
    OTG_FS_HOST['FS_HCINT1']['ACK'].values = None
    OTG_FS_HOST['FS_HCINT1']['NAK'].values = None
    OTG_FS_HOST['FS_HCINT1']['STALL'].values = None
    OTG_FS_HOST['FS_HCINT1']['CHH'].values = None
    OTG_FS_HOST['FS_HCINT1']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINTMSK1	(OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1))
    # Offset: 300	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINTMSK1']['DTERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK1']['FRMORM'].values = None
    OTG_FS_HOST['FS_HCINTMSK1']['BBERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK1']['TXERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK1']['NYET'].values = None
    OTG_FS_HOST['FS_HCINTMSK1']['ACKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK1']['NAKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK1']['STALLM'].values = None
    OTG_FS_HOST['FS_HCINTMSK1']['CHHM'].values = None
    OTG_FS_HOST['FS_HCINTMSK1']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # FS_HCTSIZ1	(OTG_FS host channel-1 transfer size register)
    # Offset: 304	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCTSIZ1']['DPID'].values = None
    OTG_FS_HOST['FS_HCTSIZ1']['PKTCNT'].values = None
    OTG_FS_HOST['FS_HCTSIZ1']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCCHAR2	(OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2))
    # Offset: 320	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCCHAR2']['CHENA'].values = None
    OTG_FS_HOST['FS_HCCHAR2']['CHDIS'].values = None
    OTG_FS_HOST['FS_HCCHAR2']['ODDFRM'].values = None
    OTG_FS_HOST['FS_HCCHAR2']['DAD'].values = None
    OTG_FS_HOST['FS_HCCHAR2']['MCNT'].values = None
    OTG_FS_HOST['FS_HCCHAR2']['EPTYP'].values = None
    OTG_FS_HOST['FS_HCCHAR2']['LSDEV'].values = None
    OTG_FS_HOST['FS_HCCHAR2']['EPDIR'].values = None
    OTG_FS_HOST['FS_HCCHAR2']['EPNUM'].values = None
    OTG_FS_HOST['FS_HCCHAR2']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINT2	(OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2))
    # Offset: 328	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINT2']['DTERR'].values = None
    OTG_FS_HOST['FS_HCINT2']['FRMOR'].values = None
    OTG_FS_HOST['FS_HCINT2']['BBERR'].values = None
    OTG_FS_HOST['FS_HCINT2']['TXERR'].values = None
    OTG_FS_HOST['FS_HCINT2']['ACK'].values = None
    OTG_FS_HOST['FS_HCINT2']['NAK'].values = None
    OTG_FS_HOST['FS_HCINT2']['STALL'].values = None
    OTG_FS_HOST['FS_HCINT2']['CHH'].values = None
    OTG_FS_HOST['FS_HCINT2']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINTMSK2	(OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2))
    # Offset: 332	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINTMSK2']['DTERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK2']['FRMORM'].values = None
    OTG_FS_HOST['FS_HCINTMSK2']['BBERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK2']['TXERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK2']['NYET'].values = None
    OTG_FS_HOST['FS_HCINTMSK2']['ACKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK2']['NAKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK2']['STALLM'].values = None
    OTG_FS_HOST['FS_HCINTMSK2']['CHHM'].values = None
    OTG_FS_HOST['FS_HCINTMSK2']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # FS_HCTSIZ2	(OTG_FS host channel-2 transfer size register)
    # Offset: 336	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCTSIZ2']['DPID'].values = None
    OTG_FS_HOST['FS_HCTSIZ2']['PKTCNT'].values = None
    OTG_FS_HOST['FS_HCTSIZ2']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCCHAR3	(OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3))
    # Offset: 352	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCCHAR3']['CHENA'].values = None
    OTG_FS_HOST['FS_HCCHAR3']['CHDIS'].values = None
    OTG_FS_HOST['FS_HCCHAR3']['ODDFRM'].values = None
    OTG_FS_HOST['FS_HCCHAR3']['DAD'].values = None
    OTG_FS_HOST['FS_HCCHAR3']['MCNT'].values = None
    OTG_FS_HOST['FS_HCCHAR3']['EPTYP'].values = None
    OTG_FS_HOST['FS_HCCHAR3']['LSDEV'].values = None
    OTG_FS_HOST['FS_HCCHAR3']['EPDIR'].values = None
    OTG_FS_HOST['FS_HCCHAR3']['EPNUM'].values = None
    OTG_FS_HOST['FS_HCCHAR3']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINT3	(OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3))
    # Offset: 360	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINT3']['DTERR'].values = None
    OTG_FS_HOST['FS_HCINT3']['FRMOR'].values = None
    OTG_FS_HOST['FS_HCINT3']['BBERR'].values = None
    OTG_FS_HOST['FS_HCINT3']['TXERR'].values = None
    OTG_FS_HOST['FS_HCINT3']['ACK'].values = None
    OTG_FS_HOST['FS_HCINT3']['NAK'].values = None
    OTG_FS_HOST['FS_HCINT3']['STALL'].values = None
    OTG_FS_HOST['FS_HCINT3']['CHH'].values = None
    OTG_FS_HOST['FS_HCINT3']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINTMSK3	(OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3))
    # Offset: 364	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINTMSK3']['DTERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK3']['FRMORM'].values = None
    OTG_FS_HOST['FS_HCINTMSK3']['BBERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK3']['TXERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK3']['NYET'].values = None
    OTG_FS_HOST['FS_HCINTMSK3']['ACKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK3']['NAKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK3']['STALLM'].values = None
    OTG_FS_HOST['FS_HCINTMSK3']['CHHM'].values = None
    OTG_FS_HOST['FS_HCINTMSK3']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # FS_HCTSIZ3	(OTG_FS host channel-3 transfer size register)
    # Offset: 368	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCTSIZ3']['DPID'].values = None
    OTG_FS_HOST['FS_HCTSIZ3']['PKTCNT'].values = None
    OTG_FS_HOST['FS_HCTSIZ3']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCCHAR4	(OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4))
    # Offset: 384	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCCHAR4']['CHENA'].values = None
    OTG_FS_HOST['FS_HCCHAR4']['CHDIS'].values = None
    OTG_FS_HOST['FS_HCCHAR4']['ODDFRM'].values = None
    OTG_FS_HOST['FS_HCCHAR4']['DAD'].values = None
    OTG_FS_HOST['FS_HCCHAR4']['MCNT'].values = None
    OTG_FS_HOST['FS_HCCHAR4']['EPTYP'].values = None
    OTG_FS_HOST['FS_HCCHAR4']['LSDEV'].values = None
    OTG_FS_HOST['FS_HCCHAR4']['EPDIR'].values = None
    OTG_FS_HOST['FS_HCCHAR4']['EPNUM'].values = None
    OTG_FS_HOST['FS_HCCHAR4']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINT4	(OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4))
    # Offset: 392	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINT4']['DTERR'].values = None
    OTG_FS_HOST['FS_HCINT4']['FRMOR'].values = None
    OTG_FS_HOST['FS_HCINT4']['BBERR'].values = None
    OTG_FS_HOST['FS_HCINT4']['TXERR'].values = None
    OTG_FS_HOST['FS_HCINT4']['ACK'].values = None
    OTG_FS_HOST['FS_HCINT4']['NAK'].values = None
    OTG_FS_HOST['FS_HCINT4']['STALL'].values = None
    OTG_FS_HOST['FS_HCINT4']['CHH'].values = None
    OTG_FS_HOST['FS_HCINT4']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINTMSK4	(OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4))
    # Offset: 396	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINTMSK4']['DTERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK4']['FRMORM'].values = None
    OTG_FS_HOST['FS_HCINTMSK4']['BBERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK4']['TXERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK4']['NYET'].values = None
    OTG_FS_HOST['FS_HCINTMSK4']['ACKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK4']['NAKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK4']['STALLM'].values = None
    OTG_FS_HOST['FS_HCINTMSK4']['CHHM'].values = None
    OTG_FS_HOST['FS_HCINTMSK4']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # FS_HCTSIZ4	(OTG_FS host channel-x transfer size register)
    # Offset: 400	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCTSIZ4']['DPID'].values = None
    OTG_FS_HOST['FS_HCTSIZ4']['PKTCNT'].values = None
    OTG_FS_HOST['FS_HCTSIZ4']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCCHAR5	(OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5))
    # Offset: 416	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCCHAR5']['CHENA'].values = None
    OTG_FS_HOST['FS_HCCHAR5']['CHDIS'].values = None
    OTG_FS_HOST['FS_HCCHAR5']['ODDFRM'].values = None
    OTG_FS_HOST['FS_HCCHAR5']['DAD'].values = None
    OTG_FS_HOST['FS_HCCHAR5']['MCNT'].values = None
    OTG_FS_HOST['FS_HCCHAR5']['EPTYP'].values = None
    OTG_FS_HOST['FS_HCCHAR5']['LSDEV'].values = None
    OTG_FS_HOST['FS_HCCHAR5']['EPDIR'].values = None
    OTG_FS_HOST['FS_HCCHAR5']['EPNUM'].values = None
    OTG_FS_HOST['FS_HCCHAR5']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINT5	(OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5))
    # Offset: 424	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINT5']['DTERR'].values = None
    OTG_FS_HOST['FS_HCINT5']['FRMOR'].values = None
    OTG_FS_HOST['FS_HCINT5']['BBERR'].values = None
    OTG_FS_HOST['FS_HCINT5']['TXERR'].values = None
    OTG_FS_HOST['FS_HCINT5']['ACK'].values = None
    OTG_FS_HOST['FS_HCINT5']['NAK'].values = None
    OTG_FS_HOST['FS_HCINT5']['STALL'].values = None
    OTG_FS_HOST['FS_HCINT5']['CHH'].values = None
    OTG_FS_HOST['FS_HCINT5']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINTMSK5	(OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5))
    # Offset: 428	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINTMSK5']['DTERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK5']['FRMORM'].values = None
    OTG_FS_HOST['FS_HCINTMSK5']['BBERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK5']['TXERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK5']['NYET'].values = None
    OTG_FS_HOST['FS_HCINTMSK5']['ACKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK5']['NAKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK5']['STALLM'].values = None
    OTG_FS_HOST['FS_HCINTMSK5']['CHHM'].values = None
    OTG_FS_HOST['FS_HCINTMSK5']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # FS_HCTSIZ5	(OTG_FS host channel-5 transfer size register)
    # Offset: 432	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCTSIZ5']['DPID'].values = None
    OTG_FS_HOST['FS_HCTSIZ5']['PKTCNT'].values = None
    OTG_FS_HOST['FS_HCTSIZ5']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCCHAR6	(OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6))
    # Offset: 448	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCCHAR6']['CHENA'].values = None
    OTG_FS_HOST['FS_HCCHAR6']['CHDIS'].values = None
    OTG_FS_HOST['FS_HCCHAR6']['ODDFRM'].values = None
    OTG_FS_HOST['FS_HCCHAR6']['DAD'].values = None
    OTG_FS_HOST['FS_HCCHAR6']['MCNT'].values = None
    OTG_FS_HOST['FS_HCCHAR6']['EPTYP'].values = None
    OTG_FS_HOST['FS_HCCHAR6']['LSDEV'].values = None
    OTG_FS_HOST['FS_HCCHAR6']['EPDIR'].values = None
    OTG_FS_HOST['FS_HCCHAR6']['EPNUM'].values = None
    OTG_FS_HOST['FS_HCCHAR6']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINT6	(OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6))
    # Offset: 456	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINT6']['DTERR'].values = None
    OTG_FS_HOST['FS_HCINT6']['FRMOR'].values = None
    OTG_FS_HOST['FS_HCINT6']['BBERR'].values = None
    OTG_FS_HOST['FS_HCINT6']['TXERR'].values = None
    OTG_FS_HOST['FS_HCINT6']['ACK'].values = None
    OTG_FS_HOST['FS_HCINT6']['NAK'].values = None
    OTG_FS_HOST['FS_HCINT6']['STALL'].values = None
    OTG_FS_HOST['FS_HCINT6']['CHH'].values = None
    OTG_FS_HOST['FS_HCINT6']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINTMSK6	(OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6))
    # Offset: 460	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINTMSK6']['DTERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK6']['FRMORM'].values = None
    OTG_FS_HOST['FS_HCINTMSK6']['BBERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK6']['TXERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK6']['NYET'].values = None
    OTG_FS_HOST['FS_HCINTMSK6']['ACKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK6']['NAKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK6']['STALLM'].values = None
    OTG_FS_HOST['FS_HCINTMSK6']['CHHM'].values = None
    OTG_FS_HOST['FS_HCINTMSK6']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # FS_HCTSIZ6	(OTG_FS host channel-6 transfer size register)
    # Offset: 464	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCTSIZ6']['DPID'].values = None
    OTG_FS_HOST['FS_HCTSIZ6']['PKTCNT'].values = None
    OTG_FS_HOST['FS_HCTSIZ6']['XFRSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCCHAR7	(OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7))
    # Offset: 480	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCCHAR7']['CHENA'].values = None
    OTG_FS_HOST['FS_HCCHAR7']['CHDIS'].values = None
    OTG_FS_HOST['FS_HCCHAR7']['ODDFRM'].values = None
    OTG_FS_HOST['FS_HCCHAR7']['DAD'].values = None
    OTG_FS_HOST['FS_HCCHAR7']['MCNT'].values = None
    OTG_FS_HOST['FS_HCCHAR7']['EPTYP'].values = None
    OTG_FS_HOST['FS_HCCHAR7']['LSDEV'].values = None
    OTG_FS_HOST['FS_HCCHAR7']['EPDIR'].values = None
    OTG_FS_HOST['FS_HCCHAR7']['EPNUM'].values = None
    OTG_FS_HOST['FS_HCCHAR7']['MPSIZ'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINT7	(OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7))
    # Offset: 488	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINT7']['DTERR'].values = None
    OTG_FS_HOST['FS_HCINT7']['FRMOR'].values = None
    OTG_FS_HOST['FS_HCINT7']['BBERR'].values = None
    OTG_FS_HOST['FS_HCINT7']['TXERR'].values = None
    OTG_FS_HOST['FS_HCINT7']['ACK'].values = None
    OTG_FS_HOST['FS_HCINT7']['NAK'].values = None
    OTG_FS_HOST['FS_HCINT7']['STALL'].values = None
    OTG_FS_HOST['FS_HCINT7']['CHH'].values = None
    OTG_FS_HOST['FS_HCINT7']['XFRC'].values = None

    # -------------------------------------------------------------------------
    # FS_HCINTMSK7	(OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7))
    # Offset: 492	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCINTMSK7']['DTERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK7']['FRMORM'].values = None
    OTG_FS_HOST['FS_HCINTMSK7']['BBERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK7']['TXERRM'].values = None
    OTG_FS_HOST['FS_HCINTMSK7']['NYET'].values = None
    OTG_FS_HOST['FS_HCINTMSK7']['ACKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK7']['NAKM'].values = None
    OTG_FS_HOST['FS_HCINTMSK7']['STALLM'].values = None
    OTG_FS_HOST['FS_HCINTMSK7']['CHHM'].values = None
    OTG_FS_HOST['FS_HCINTMSK7']['XFRCM'].values = None

    # -------------------------------------------------------------------------
    # FS_HCTSIZ7	(OTG_FS host channel-7 transfer size register)
    # Offset: 496	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_HOST['FS_HCTSIZ7']['DPID'].values = None
    OTG_FS_HOST['FS_HCTSIZ7']['PKTCNT'].values = None
    OTG_FS_HOST['FS_HCTSIZ7']['XFRSIZ'].values = None

