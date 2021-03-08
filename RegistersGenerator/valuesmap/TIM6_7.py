from tempvalue import*


def apply(TIM6_7):
    # -------------------------------------------------------------------------
    # CR1	(control register 1)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM6_7['CR1']['ARPE'].values = None
    TIM6_7['CR1']['OPM'].values = None
    TIM6_7['CR1']['URS'].values = None
    TIM6_7['CR1']['UDIS'].values = None
    TIM6_7['CR1']['CEN'].values = None

    # -------------------------------------------------------------------------
    # CR2	(control register 2)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM6_7['CR2']['MMS'].values = None

    # -------------------------------------------------------------------------
    # DIER	(DMA/Interrupt enable register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM6_7['DIER']['UDE'].values = None
    TIM6_7['DIER']['UIE'].values = None

    # -------------------------------------------------------------------------
    # SR	(status register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM6_7['SR']['UIF'].values = None

    # -------------------------------------------------------------------------
    # EGR	(event generation register)
    # Offset: 20	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    TIM6_7['EGR']['UG'].values = None

    # -------------------------------------------------------------------------
    # CNT	(counter)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM6_7['CNT']['CNT'].values = None

    # -------------------------------------------------------------------------
    # PSC	(prescaler)
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM6_7['PSC']['PSC'].values = None

    # -------------------------------------------------------------------------
    # ARR	(auto-reload register)
    # Offset: 44	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM6_7['ARR']['ARR'].values = None

