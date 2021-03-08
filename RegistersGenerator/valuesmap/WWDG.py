from tempvalue import*


def apply(WWDG):
    # -------------------------------------------------------------------------
    # CR	(Control register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    WWDG['CR']['WDGA'].values = None
    WWDG['CR']['T'].values = None

    # -------------------------------------------------------------------------
    # CFR	(Configuration register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    WWDG['CFR']['EWI'].values = None
    WWDG['CFR']['WDGTB1'].values = None
    WWDG['CFR']['WDGTB0'].values = None
    WWDG['CFR']['W'].values = None

    # -------------------------------------------------------------------------
    # SR	(Status register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    WWDG['SR']['EWIF'].values = None

