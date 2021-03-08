from tempvalue import*


def apply(STK):
    # -------------------------------------------------------------------------
    # CTRL	(SysTick control and status register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    STK['CTRL']['COUNTFLAG'].values = None
    STK['CTRL']['CLKSOURCE'].values = None
    STK['CTRL']['TICKINT'].values = None
    STK['CTRL']['ENABLE'].values = None

    # -------------------------------------------------------------------------
    # LOAD	(SysTick reload value register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    STK['LOAD']['RELOAD'].values = None

    # -------------------------------------------------------------------------
    # VAL	(SysTick current value register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    STK['VAL']['CURRENT'].values = None

    # -------------------------------------------------------------------------
    # CALIB	(SysTick calibration value register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    STK['CALIB']['NOREF'].values = None
    STK['CALIB']['SKEW'].values = None
    STK['CALIB']['TENMS'].values = None

