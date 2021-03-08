from tempvalue import*


def apply(OTG_HS_PWRCLK):
    # -------------------------------------------------------------------------
    # OTG_HS_PCGCR	(Power and clock gating control register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    OTG_HS_PWRCLK['OTG_HS_PCGCR']['PHYSUSP'].values = None
    OTG_HS_PWRCLK['OTG_HS_PCGCR']['GATEHCLK'].values = None
    OTG_HS_PWRCLK['OTG_HS_PCGCR']['STPPCLK'].values = None

