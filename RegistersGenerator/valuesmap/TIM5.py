from tempvalue import*


def apply(TIM5):
    # -------------------------------------------------------------------------
    # CR1	(control register 1)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['CR1']['CKD'].values = None
    TIM5['CR1']['ARPE'].values = None
    TIM5['CR1']['CMS'].values = None
    TIM5['CR1']['DIR'].values = None
    TIM5['CR1']['OPM'].values = None
    TIM5['CR1']['URS'].values = None
    TIM5['CR1']['UDIS'].values = None
    TIM5['CR1']['CEN'].values = None

    # -------------------------------------------------------------------------
    # CR2	(control register 2)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['CR2']['TI1S'].values = None
    TIM5['CR2']['MMS'].values = None
    TIM5['CR2']['CCDS'].values = None

    # -------------------------------------------------------------------------
    # SMCR	(slave mode control register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['SMCR']['ETP'].values = None
    TIM5['SMCR']['ECE'].values = None
    TIM5['SMCR']['ETPS'].values = None
    TIM5['SMCR']['ETF'].values = None
    TIM5['SMCR']['MSM'].values = None
    TIM5['SMCR']['TS'].values = None
    TIM5['SMCR']['SMS'].values = None

    # -------------------------------------------------------------------------
    # DIER	(DMA/Interrupt enable register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['DIER']['TDE'].values = None
    TIM5['DIER']['CC4DE'].values = None
    TIM5['DIER']['CC3DE'].values = None
    TIM5['DIER']['CC2DE'].values = None
    TIM5['DIER']['CC1DE'].values = None
    TIM5['DIER']['UDE'].values = None
    TIM5['DIER']['TIE'].values = None
    TIM5['DIER']['CC4IE'].values = None
    TIM5['DIER']['CC3IE'].values = None
    TIM5['DIER']['CC2IE'].values = None
    TIM5['DIER']['CC1IE'].values = None
    TIM5['DIER']['UIE'].values = None

    # -------------------------------------------------------------------------
    # SR	(status register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['SR']['CC4OF'].values = None
    TIM5['SR']['CC3OF'].values = None
    TIM5['SR']['CC2OF'].values = None
    TIM5['SR']['CC1OF'].values = None
    TIM5['SR']['TIF'].values = None
    TIM5['SR']['CC4IF'].values = None
    TIM5['SR']['CC3IF'].values = None
    TIM5['SR']['CC2IF'].values = None
    TIM5['SR']['CC1IF'].values = None
    TIM5['SR']['UIF'].values = None

    # -------------------------------------------------------------------------
    # EGR	(event generation register)
    # Offset: 20	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    TIM5['EGR']['TG'].values = None
    TIM5['EGR']['CC4G'].values = None
    TIM5['EGR']['CC3G'].values = None
    TIM5['EGR']['CC2G'].values = None
    TIM5['EGR']['CC1G'].values = None
    TIM5['EGR']['UG'].values = None

    # -------------------------------------------------------------------------
    # CCMR1_Output	(capture/compare mode register 1 (output mode))
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['CCMR1_Output']['OC2CE'].values = None
    TIM5['CCMR1_Output']['OC2M'].values = None
    TIM5['CCMR1_Output']['OC2PE'].values = None
    TIM5['CCMR1_Output']['OC2FE'].values = None
    TIM5['CCMR1_Output']['CC2S'].values = None
    TIM5['CCMR1_Output']['OC1CE'].values = None
    TIM5['CCMR1_Output']['OC1M'].values = None
    TIM5['CCMR1_Output']['OC1PE'].values = None
    TIM5['CCMR1_Output']['OC1FE'].values = None
    TIM5['CCMR1_Output']['CC1S'].values = None

    # -------------------------------------------------------------------------
    # CCMR1_Input	(capture/compare mode register 1 (input mode))
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['CCMR1_Input']['IC2F'].values = None
    TIM5['CCMR1_Input']['IC2PCS'].values = None
    TIM5['CCMR1_Input']['CC2S'].values = None
    TIM5['CCMR1_Input']['IC1F'].values = None
    TIM5['CCMR1_Input']['ICPCS'].values = None
    TIM5['CCMR1_Input']['CC1S'].values = None

    # -------------------------------------------------------------------------
    # CCMR2_Output	(capture/compare mode register 2 (output mode))
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['CCMR2_Output']['O24CE'].values = None
    TIM5['CCMR2_Output']['OC4M'].values = None
    TIM5['CCMR2_Output']['OC4PE'].values = None
    TIM5['CCMR2_Output']['OC4FE'].values = None
    TIM5['CCMR2_Output']['CC4S'].values = None
    TIM5['CCMR2_Output']['OC3CE'].values = None
    TIM5['CCMR2_Output']['OC3M'].values = None
    TIM5['CCMR2_Output']['OC3PE'].values = None
    TIM5['CCMR2_Output']['OC3FE'].values = None
    TIM5['CCMR2_Output']['CC3S'].values = None

    # -------------------------------------------------------------------------
    # CCMR2_Input	(capture/compare mode register 2 (input mode))
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['CCMR2_Input']['IC4F'].values = None
    TIM5['CCMR2_Input']['IC4PSC'].values = None
    TIM5['CCMR2_Input']['CC4S'].values = None
    TIM5['CCMR2_Input']['IC3F'].values = None
    TIM5['CCMR2_Input']['IC3PSC'].values = None
    TIM5['CCMR2_Input']['CC3S'].values = None

    # -------------------------------------------------------------------------
    # CCER	(capture/compare enable register)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['CCER']['CC4NP'].values = None
    TIM5['CCER']['CC4P'].values = None
    TIM5['CCER']['CC4E'].values = None
    TIM5['CCER']['CC3NP'].values = None
    TIM5['CCER']['CC3P'].values = None
    TIM5['CCER']['CC3E'].values = None
    TIM5['CCER']['CC2NP'].values = None
    TIM5['CCER']['CC2P'].values = None
    TIM5['CCER']['CC2E'].values = None
    TIM5['CCER']['CC1NP'].values = None
    TIM5['CCER']['CC1P'].values = None
    TIM5['CCER']['CC1E'].values = None

    # -------------------------------------------------------------------------
    # CNT	(counter)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['CNT']['CNT_H'].values = None
    TIM5['CNT']['CNT_L'].values = None

    # -------------------------------------------------------------------------
    # PSC	(prescaler)
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['PSC']['PSC'].values = None

    # -------------------------------------------------------------------------
    # ARR	(auto-reload register)
    # Offset: 44	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['ARR']['ARR_H'].values = None
    TIM5['ARR']['ARR_L'].values = None

    # -------------------------------------------------------------------------
    # CCR1	(capture/compare register 1)
    # Offset: 52	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['CCR1']['CCR1_H'].values = None
    TIM5['CCR1']['CCR1_L'].values = None

    # -------------------------------------------------------------------------
    # CCR2	(capture/compare register 2)
    # Offset: 56	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['CCR2']['CCR2_H'].values = None
    TIM5['CCR2']['CCR2_L'].values = None

    # -------------------------------------------------------------------------
    # CCR3	(capture/compare register 3)
    # Offset: 60	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['CCR3']['CCR3_H'].values = None
    TIM5['CCR3']['CCR3_L'].values = None

    # -------------------------------------------------------------------------
    # CCR4	(capture/compare register 4)
    # Offset: 64	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['CCR4']['CCR4_H'].values = None
    TIM5['CCR4']['CCR4_L'].values = None

    # -------------------------------------------------------------------------
    # DCR	(DMA control register)
    # Offset: 72	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['DCR']['DBL'].values = None
    TIM5['DCR']['DBA'].values = None

    # -------------------------------------------------------------------------
    # DMAR	(DMA address for full transfer)
    # Offset: 76	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['DMAR']['DMAB'].values = None

    # -------------------------------------------------------------------------
    # OR	(TIM5 option register)
    # Offset: 80	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM5['OR']['IT4_RMP'].values = None

