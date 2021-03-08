from tempvalue import*


def apply(SCB_ACTRL):
    # -------------------------------------------------------------------------
    # ACTRL	(Auxiliary control register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB_ACTRL['ACTRL']['DISOOFP'].values = None
    SCB_ACTRL['ACTRL']['DISFPCA'].values = None
    SCB_ACTRL['ACTRL']['DISFOLD'].values = None
    SCB_ACTRL['ACTRL']['DISDEFWBUF'].values = None
    SCB_ACTRL['ACTRL']['DISMCYCINT'].values = None

