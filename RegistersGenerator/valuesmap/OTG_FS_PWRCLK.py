from tempvalue import*


def apply(OTG_FS_PWRCLK):
    # -------------------------------------------------------------------------
    # FS_PCGCCTL	(OTG_FS power and clock gating control register (OTG_FS_PCGCCTL))
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_FS_PWRCLK['FS_PCGCCTL']['PHYSUSP'].values = None
    OTG_FS_PWRCLK['FS_PCGCCTL']['GATEHCLK'].values = None
    OTG_FS_PWRCLK['FS_PCGCCTL']['STPPCLK'].values = None

