from tempvalue import*


def apply(IWDG):
    # -------------------------------------------------------------------------
    # KR	(Key register)
    # Offset: 0	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    IWDG['KR']['KEY'].values = None

    # -------------------------------------------------------------------------
    # PR	(Prescaler register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    IWDG['PR']['PR'].values = None

    # -------------------------------------------------------------------------
    # RLR	(Reload register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    IWDG['RLR']['RL'].values = None

    # -------------------------------------------------------------------------
    # SR	(Status register)
    # Offset: 12	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    IWDG['SR']['RVU'].values = None
    IWDG['SR']['PVU'].values = None

