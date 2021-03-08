from tempvalue import*


def apply(FPU_CPACR):
    # -------------------------------------------------------------------------
    # CPACR	(Coprocessor access control register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    FPU_CPACR['CPACR']['CP'].values = None

