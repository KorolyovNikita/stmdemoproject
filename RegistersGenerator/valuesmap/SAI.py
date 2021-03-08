from tempvalue import*


def apply(SAI):
    # -------------------------------------------------------------------------
    # GCR	(Global configuration register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['GCR']['SYNCOUT'].values = None
    SAI['GCR']['SYNCIN'].values = None

    # -------------------------------------------------------------------------
    # ACR1	(AConfiguration register 1)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['ACR1']['MCJDIV'].values = None
    SAI['ACR1']['NODIV'].values = None
    SAI['ACR1']['DMAEN'].values = None
    SAI['ACR1']['SAIAEN'].values = None
    SAI['ACR1']['OutDri'].values = None
    SAI['ACR1']['MONO'].values = None
    SAI['ACR1']['SYNCEN'].values = None
    SAI['ACR1']['CKSTR'].values = None
    SAI['ACR1']['LSBFIRST'].values = None
    SAI['ACR1']['DS'].values = None
    SAI['ACR1']['PRTCFG'].values = None
    SAI['ACR1']['MODE'].values = None

    # -------------------------------------------------------------------------
    # ACR2	(AConfiguration register 2)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['ACR2']['COMP'].values = None
    SAI['ACR2']['CPL'].values = None
    SAI['ACR2']['MUTECN'].values = None
    SAI['ACR2']['MUTEVAL'].values = None
    SAI['ACR2']['MUTE'].values = None
    SAI['ACR2']['TRIS'].values = None
    SAI['ACR2']['FFLUS'].values = None
    SAI['ACR2']['FTH'].values = None

    # -------------------------------------------------------------------------
    # AFRCR	(AFRCR)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['AFRCR']['FSOFF'].values = None
    SAI['AFRCR']['FSPOL'].values = None
    SAI['AFRCR']['FSDEF'].values = None
    SAI['AFRCR']['FSALL'].values = None
    SAI['AFRCR']['FRL'].values = None

    # -------------------------------------------------------------------------
    # ASLOTR	(ASlot register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['ASLOTR']['SLOTEN'].values = None
    SAI['ASLOTR']['NBSLOT'].values = None
    SAI['ASLOTR']['SLOTSZ'].values = None
    SAI['ASLOTR']['FBOFF'].values = None

    # -------------------------------------------------------------------------
    # AIM	(AInterrupt mask register2)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['AIM']['LFSDET'].values = None
    SAI['AIM']['AFSDETIE'].values = None
    SAI['AIM']['CNRDYIE'].values = None
    SAI['AIM']['FREQIE'].values = None
    SAI['AIM']['WCKCFG'].values = None
    SAI['AIM']['MUTEDET'].values = None
    SAI['AIM']['OVRUDRIE'].values = None

    # -------------------------------------------------------------------------
    # ASR	(AStatus register)
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['ASR']['FLVL'].values = None
    SAI['ASR']['LFSDET'].values = None
    SAI['ASR']['AFSDET'].values = None
    SAI['ASR']['CNRDY'].values = None
    SAI['ASR']['FREQ'].values = None
    SAI['ASR']['WCKCFG'].values = None
    SAI['ASR']['MUTEDET'].values = None
    SAI['ASR']['OVRUDR'].values = None

    # -------------------------------------------------------------------------
    # ACLRFR	(AClear flag register)
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['ACLRFR']['LFSDET'].values = None
    SAI['ACLRFR']['CAFSDET'].values = None
    SAI['ACLRFR']['CNRDY'].values = None
    SAI['ACLRFR']['WCKCFG'].values = None
    SAI['ACLRFR']['MUTEDET'].values = None
    SAI['ACLRFR']['OVRUDR'].values = None

    # -------------------------------------------------------------------------
    # ADR	(AData register)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['ADR']['DATA'].values = None

    # -------------------------------------------------------------------------
    # BCR1	(BConfiguration register 1)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['BCR1']['MCJDIV'].values = None
    SAI['BCR1']['NODIV'].values = None
    SAI['BCR1']['DMAEN'].values = None
    SAI['BCR1']['SAIBEN'].values = None
    SAI['BCR1']['OutDri'].values = None
    SAI['BCR1']['MONO'].values = None
    SAI['BCR1']['SYNCEN'].values = None
    SAI['BCR1']['CKSTR'].values = None
    SAI['BCR1']['LSBFIRST'].values = None
    SAI['BCR1']['DS'].values = None
    SAI['BCR1']['PRTCFG'].values = None
    SAI['BCR1']['MODE'].values = None

    # -------------------------------------------------------------------------
    # BCR2	(BConfiguration register 2)
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['BCR2']['COMP'].values = None
    SAI['BCR2']['CPL'].values = None
    SAI['BCR2']['MUTECN'].values = None
    SAI['BCR2']['MUTEVAL'].values = None
    SAI['BCR2']['MUTE'].values = None
    SAI['BCR2']['TRIS'].values = None
    SAI['BCR2']['FFLUS'].values = None
    SAI['BCR2']['FTH'].values = None

    # -------------------------------------------------------------------------
    # BFRCR	(BFRCR)
    # Offset: 44	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['BFRCR']['FSOFF'].values = None
    SAI['BFRCR']['FSPOL'].values = None
    SAI['BFRCR']['FSDEF'].values = None
    SAI['BFRCR']['FSALL'].values = None
    SAI['BFRCR']['FRL'].values = None

    # -------------------------------------------------------------------------
    # BSLOTR	(BSlot register)
    # Offset: 48	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['BSLOTR']['SLOTEN'].values = None
    SAI['BSLOTR']['NBSLOT'].values = None
    SAI['BSLOTR']['SLOTSZ'].values = None
    SAI['BSLOTR']['FBOFF'].values = None

    # -------------------------------------------------------------------------
    # BIM	(BInterrupt mask register2)
    # Offset: 52	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['BIM']['LFSDETIE'].values = None
    SAI['BIM']['AFSDETIE'].values = None
    SAI['BIM']['CNRDYIE'].values = None
    SAI['BIM']['FREQIE'].values = None
    SAI['BIM']['WCKCFG'].values = None
    SAI['BIM']['MUTEDET'].values = None
    SAI['BIM']['OVRUDRIE'].values = None

    # -------------------------------------------------------------------------
    # BSR	(BStatus register)
    # Offset: 56	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SAI['BSR']['FLVL'].values = None
    SAI['BSR']['LFSDET'].values = None
    SAI['BSR']['AFSDET'].values = None
    SAI['BSR']['CNRDY'].values = None
    SAI['BSR']['FREQ'].values = None
    SAI['BSR']['WCKCFG'].values = None
    SAI['BSR']['MUTEDET'].values = None
    SAI['BSR']['OVRUDR'].values = None

    # -------------------------------------------------------------------------
    # BCLRFR	(BClear flag register)
    # Offset: 60	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    SAI['BCLRFR']['LFSDET'].values = None
    SAI['BCLRFR']['CAFSDET'].values = None
    SAI['BCLRFR']['CNRDY'].values = None
    SAI['BCLRFR']['WCKCFG'].values = None
    SAI['BCLRFR']['MUTEDET'].values = None
    SAI['BCLRFR']['OVRUDR'].values = None

    # -------------------------------------------------------------------------
    # BDR	(BData register)
    # Offset: 64	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SAI['BDR']['DATA'].values = None

