from tempvalue import*


def apply(NVIC_STIR):
    # -------------------------------------------------------------------------
    # STIR	(Software trigger interrupt register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC_STIR['STIR']['INTID'].values = None

