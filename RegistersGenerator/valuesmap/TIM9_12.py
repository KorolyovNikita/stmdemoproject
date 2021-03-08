from tempvalue import*


def apply(TIM9_12):
    # -------------------------------------------------------------------------
    # CR1	(control register 1)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM9_12['CR1']['CKD'].values = None
    TIM9_12['CR1']['ARPE'].values = None
    TIM9_12['CR1']['OPM'].values = None
    TIM9_12['CR1']['URS'].values = None
    TIM9_12['CR1']['UDIS'].values = None
    TIM9_12['CR1']['CEN'].values = None

    # -------------------------------------------------------------------------
    # CR2	(control register 2)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM9_12['CR2']['MMS'].values = None

    # -------------------------------------------------------------------------
    # SMCR	(slave mode control register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM9_12['SMCR']['MSM'].values = None
    TIM9_12['SMCR']['TS'].values = None
    TIM9_12['SMCR']['SMS'].values = None

    # -------------------------------------------------------------------------
    # DIER	(DMA/Interrupt enable register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM9_12['DIER']['TIE'].values = None
    TIM9_12['DIER']['CC2IE'].values = None
    TIM9_12['DIER']['CC1IE'].values = None
    TIM9_12['DIER']['UIE'].values = None

    # -------------------------------------------------------------------------
    # SR	(status register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM9_12['SR']['CC2OF'].values = None
    TIM9_12['SR']['CC1OF'].values = None
    TIM9_12['SR']['TIF'].values = None
    TIM9_12['SR']['CC2IF'].values = None
    TIM9_12['SR']['CC1IF'].values = None
    TIM9_12['SR']['UIF'].values = None

    # -------------------------------------------------------------------------
    # EGR	(event generation register)
    # Offset: 20	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    TIM9_12['EGR']['TG'].values = None
    TIM9_12['EGR']['CC2G'].values = None
    TIM9_12['EGR']['CC1G'].values = None
    TIM9_12['EGR']['UG'].values = None

    # -------------------------------------------------------------------------
    # CCMR1_Output	(capture/compare mode register 1 (output mode))
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM9_12['CCMR1_Output']['OC2M'].values = None
    TIM9_12['CCMR1_Output']['OC2PE'].values = None
    TIM9_12['CCMR1_Output']['OC2FE'].values = None
    TIM9_12['CCMR1_Output']['CC2S'].values = None
    TIM9_12['CCMR1_Output']['OC1M'].values = None
    TIM9_12['CCMR1_Output']['OC1PE'].values = None
    TIM9_12['CCMR1_Output']['OC1FE'].values = None
    TIM9_12['CCMR1_Output']['CC1S'].values = None

    # -------------------------------------------------------------------------
    # CCMR1_Input	(capture/compare mode register 1 (input mode))
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM9_12['CCMR1_Input']['IC2F'].values = None
    TIM9_12['CCMR1_Input']['IC2PCS'].values = None
    TIM9_12['CCMR1_Input']['CC2S'].values = None
    TIM9_12['CCMR1_Input']['IC1F'].values = None
    TIM9_12['CCMR1_Input']['ICPCS'].values = None
    TIM9_12['CCMR1_Input']['CC1S'].values = None

    # -------------------------------------------------------------------------
    # CCER	(capture/compare enable register)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM9_12['CCER']['CC2NP'].values = None
    TIM9_12['CCER']['CC2P'].values = None
    TIM9_12['CCER']['CC2E'].values = None
    TIM9_12['CCER']['CC1NP'].values = None
    TIM9_12['CCER']['CC1P'].values = None
    TIM9_12['CCER']['CC1E'].values = None

    # -------------------------------------------------------------------------
    # CNT	(counter)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM9_12['CNT']['CNT'].values = None

    # -------------------------------------------------------------------------
    # PSC	(prescaler)
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM9_12['PSC']['PSC'].values = None

    # -------------------------------------------------------------------------
    # ARR	(auto-reload register)
    # Offset: 44	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM9_12['ARR']['ARR'].values = None

    # -------------------------------------------------------------------------
    # CCR1	(capture/compare register 1)
    # Offset: 52	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM9_12['CCR1']['CCR1'].values = None

    # -------------------------------------------------------------------------
    # CCR2	(capture/compare register 2)
    # Offset: 56	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM9_12['CCR2']['CCR2'].values = None

