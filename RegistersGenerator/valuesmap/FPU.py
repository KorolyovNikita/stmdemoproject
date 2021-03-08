from tempvalue import*


def apply(FPU):
    # -------------------------------------------------------------------------
    # FPCCR	(Floating-point context control register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    FPU['FPCCR']['ASPEN'].values = None
    FPU['FPCCR']['LSPEN'].values = None
    FPU['FPCCR']['MONRDY'].values = None
    FPU['FPCCR']['BFRDY'].values = None
    FPU['FPCCR']['MMRDY'].values = None
    FPU['FPCCR']['HFRDY'].values = None
    FPU['FPCCR']['THREAD'].values = None
    FPU['FPCCR']['USER'].values = None
    FPU['FPCCR']['LSPACT'].values = None

    # -------------------------------------------------------------------------
    # FPCAR	(Floating-point context address register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    FPU['FPCAR']['ADDRESS'].values = None

    # -------------------------------------------------------------------------
    # FPSCR	(Floating-point status control register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    FPU['FPSCR']['N'].values = None
    FPU['FPSCR']['Z'].values = None
    FPU['FPSCR']['C'].values = None
    FPU['FPSCR']['V'].values = None
    FPU['FPSCR']['AHP'].values = None
    FPU['FPSCR']['DN'].values = None
    FPU['FPSCR']['FZ'].values = None
    FPU['FPSCR']['RMode'].values = None
    FPU['FPSCR']['IDC'].values = None
    FPU['FPSCR']['IXC'].values = None
    FPU['FPSCR']['UFC'].values = None
    FPU['FPSCR']['OFC'].values = None
    FPU['FPSCR']['DZC'].values = None
    FPU['FPSCR']['IOC'].values = None

