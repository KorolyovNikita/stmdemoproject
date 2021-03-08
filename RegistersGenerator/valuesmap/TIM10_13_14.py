from tempvalue import*


def apply(TIM10_13_14):
    # -------------------------------------------------------------------------
    # CR1	(control register 1)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM10_13_14['CR1']['CKD'].values = None
    TIM10_13_14['CR1']['ARPE'].values = None
    TIM10_13_14['CR1']['URS'].values = None
    TIM10_13_14['CR1']['UDIS'].values = None
    TIM10_13_14['CR1']['CEN'].values = None

    # -------------------------------------------------------------------------
    # DIER	(DMA/Interrupt enable register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM10_13_14['DIER']['CC1IE'].values = None
    TIM10_13_14['DIER']['UIE'].values = None

    # -------------------------------------------------------------------------
    # SR	(status register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM10_13_14['SR']['CC1OF'].values = None
    TIM10_13_14['SR']['CC1IF'].values = None
    TIM10_13_14['SR']['UIF'].values = None

    # -------------------------------------------------------------------------
    # EGR	(event generation register)
    # Offset: 20	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    TIM10_13_14['EGR']['CC1G'].values = None
    TIM10_13_14['EGR']['UG'].values = None

    # -------------------------------------------------------------------------
    # CCMR1_Output	(capture/compare mode register 1 (output mode))
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM10_13_14['CCMR1_Output']['OC1M'].values = None
    TIM10_13_14['CCMR1_Output']['OC1PE'].values = None
    TIM10_13_14['CCMR1_Output']['OC1FE'].values = None
    TIM10_13_14['CCMR1_Output']['CC1S'].values = None

    # -------------------------------------------------------------------------
    # CCMR1_Input	(capture/compare mode register 1 (input mode))
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM10_13_14['CCMR1_Input']['IC1F'].values = None
    TIM10_13_14['CCMR1_Input']['ICPCS'].values = None
    TIM10_13_14['CCMR1_Input']['CC1S'].values = None

    # -------------------------------------------------------------------------
    # CCER	(capture/compare enable register)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM10_13_14['CCER']['CC1NP'].values = None
    TIM10_13_14['CCER']['CC1P'].values = None
    TIM10_13_14['CCER']['CC1E'].values = None

    # -------------------------------------------------------------------------
    # CNT	(counter)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM10_13_14['CNT']['CNT'].values = None

    # -------------------------------------------------------------------------
    # PSC	(prescaler)
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM10_13_14['PSC']['PSC'].values = None

    # -------------------------------------------------------------------------
    # ARR	(auto-reload register)
    # Offset: 44	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM10_13_14['ARR']['ARR'].values = None

    # -------------------------------------------------------------------------
    # CCR1	(capture/compare register 1)
    # Offset: 52	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM10_13_14['CCR1']['CCR1'].values = None

