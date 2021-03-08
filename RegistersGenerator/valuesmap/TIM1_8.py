from tempvalue import*


def apply(TIM1_8):
    # -------------------------------------------------------------------------
    # CR1	(control register 1)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['CR1']['CKD'].values = None
    TIM1_8['CR1']['ARPE'].values = None
    TIM1_8['CR1']['CMS'].values = None
    TIM1_8['CR1']['DIR'].values = None
    TIM1_8['CR1']['OPM'].values = None
    TIM1_8['CR1']['URS'].values = None
    TIM1_8['CR1']['UDIS'].values = None
    TIM1_8['CR1']['CEN'].values = None

    # -------------------------------------------------------------------------
    # CR2	(control register 2)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['CR2']['OIS4'].values = None
    TIM1_8['CR2']['OIS3N'].values = None
    TIM1_8['CR2']['OIS3'].values = None
    TIM1_8['CR2']['OIS2N'].values = None
    TIM1_8['CR2']['OIS2'].values = None
    TIM1_8['CR2']['OIS1N'].values = None
    TIM1_8['CR2']['OIS1'].values = None
    TIM1_8['CR2']['TI1S'].values = None
    TIM1_8['CR2']['MMS'].values = None
    TIM1_8['CR2']['CCDS'].values = None
    TIM1_8['CR2']['CCUS'].values = None
    TIM1_8['CR2']['CCPC'].values = None

    # -------------------------------------------------------------------------
    # SMCR	(slave mode control register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['SMCR']['ETP'].values = None
    TIM1_8['SMCR']['ECE'].values = None
    TIM1_8['SMCR']['ETPS'].values = None
    TIM1_8['SMCR']['ETF'].values = None
    TIM1_8['SMCR']['MSM'].values = None
    TIM1_8['SMCR']['TS'].values = None
    TIM1_8['SMCR']['SMS'].values = None

    # -------------------------------------------------------------------------
    # DIER	(DMA/Interrupt enable register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['DIER']['TDE'].values = None
    TIM1_8['DIER']['COMDE'].values = None
    TIM1_8['DIER']['CC4DE'].values = None
    TIM1_8['DIER']['CC3DE'].values = None
    TIM1_8['DIER']['CC2DE'].values = None
    TIM1_8['DIER']['CC1DE'].values = None
    TIM1_8['DIER']['UDE'].values = None
    TIM1_8['DIER']['BIE'].values = None
    TIM1_8['DIER']['TIE'].values = None
    TIM1_8['DIER']['COMIE'].values = None
    TIM1_8['DIER']['CC4IE'].values = None
    TIM1_8['DIER']['CC3IE'].values = None
    TIM1_8['DIER']['CC2IE'].values = None
    TIM1_8['DIER']['CC1IE'].values = None
    TIM1_8['DIER']['UIE'].values = None

    # -------------------------------------------------------------------------
    # SR	(status register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['SR']['CC4OF'].values = None
    TIM1_8['SR']['CC3OF'].values = None
    TIM1_8['SR']['CC2OF'].values = None
    TIM1_8['SR']['CC1OF'].values = None
    TIM1_8['SR']['BIF'].values = None
    TIM1_8['SR']['TIF'].values = None
    TIM1_8['SR']['COMIF'].values = None
    TIM1_8['SR']['CC4IF'].values = None
    TIM1_8['SR']['CC3IF'].values = None
    TIM1_8['SR']['CC2IF'].values = None
    TIM1_8['SR']['CC1IF'].values = None
    TIM1_8['SR']['UIF'].values = None

    # -------------------------------------------------------------------------
    # EGR	(event generation register)
    # Offset: 20	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    TIM1_8['EGR']['BG'].values = None
    TIM1_8['EGR']['TG'].values = None
    TIM1_8['EGR']['COMG'].values = None
    TIM1_8['EGR']['CC4G'].values = None
    TIM1_8['EGR']['CC3G'].values = None
    TIM1_8['EGR']['CC2G'].values = None
    TIM1_8['EGR']['CC1G'].values = None
    TIM1_8['EGR']['UG'].values = None

    # -------------------------------------------------------------------------
    # CCMR1_Output	(capture/compare mode register 1 (output mode))
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['CCMR1_Output']['OC2CE'].values = None
    TIM1_8['CCMR1_Output']['OC2M'].values = None
    TIM1_8['CCMR1_Output']['OC2PE'].values = None
    TIM1_8['CCMR1_Output']['OC2FE'].values = None
    TIM1_8['CCMR1_Output']['CC2S'].values = None
    TIM1_8['CCMR1_Output']['OC1CE'].values = None
    TIM1_8['CCMR1_Output']['OC1M'].values = None
    TIM1_8['CCMR1_Output']['OC1PE'].values = None
    TIM1_8['CCMR1_Output']['OC1FE'].values = None
    TIM1_8['CCMR1_Output']['CC1S'].values = None

    # -------------------------------------------------------------------------
    # CCMR1_Input	(capture/compare mode register 1 (input mode))
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['CCMR1_Input']['IC2F'].values = None
    TIM1_8['CCMR1_Input']['IC2PCS'].values = None
    TIM1_8['CCMR1_Input']['CC2S'].values = None
    TIM1_8['CCMR1_Input']['IC1F'].values = None
    TIM1_8['CCMR1_Input']['ICPCS'].values = None
    TIM1_8['CCMR1_Input']['CC1S'].values = None

    # -------------------------------------------------------------------------
    # CCMR2_Output	(capture/compare mode register 2 (output mode))
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['CCMR2_Output']['OC4CE'].values = None
    TIM1_8['CCMR2_Output']['OC4M'].values = None
    TIM1_8['CCMR2_Output']['OC4PE'].values = None
    TIM1_8['CCMR2_Output']['OC4FE'].values = None
    TIM1_8['CCMR2_Output']['CC4S'].values = None
    TIM1_8['CCMR2_Output']['OC3CE'].values = None
    TIM1_8['CCMR2_Output']['OC3M'].values = None
    TIM1_8['CCMR2_Output']['OC3PE'].values = None
    TIM1_8['CCMR2_Output']['OC3FE'].values = None
    TIM1_8['CCMR2_Output']['CC3S'].values = None

    # -------------------------------------------------------------------------
    # CCMR2_Input	(capture/compare mode register 2 (input mode))
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['CCMR2_Input']['IC4F'].values = None
    TIM1_8['CCMR2_Input']['IC4PSC'].values = None
    TIM1_8['CCMR2_Input']['CC4S'].values = None
    TIM1_8['CCMR2_Input']['IC3F'].values = None
    TIM1_8['CCMR2_Input']['IC3PSC'].values = None
    TIM1_8['CCMR2_Input']['CC3S'].values = None

    # -------------------------------------------------------------------------
    # CCER	(capture/compare enable register)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['CCER']['CC4P'].values = None
    TIM1_8['CCER']['CC4E'].values = None
    TIM1_8['CCER']['CC3NP'].values = None
    TIM1_8['CCER']['CC3NE'].values = None
    TIM1_8['CCER']['CC3P'].values = None
    TIM1_8['CCER']['CC3E'].values = None
    TIM1_8['CCER']['CC2NP'].values = None
    TIM1_8['CCER']['CC2NE'].values = None
    TIM1_8['CCER']['CC2P'].values = None
    TIM1_8['CCER']['CC2E'].values = None
    TIM1_8['CCER']['CC1NP'].values = None
    TIM1_8['CCER']['CC1NE'].values = None
    TIM1_8['CCER']['CC1P'].values = None
    TIM1_8['CCER']['CC1E'].values = None

    # -------------------------------------------------------------------------
    # CNT	(counter)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['CNT']['CNT'].values = None

    # -------------------------------------------------------------------------
    # PSC	(prescaler)
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['PSC']['PSC'].values = None

    # -------------------------------------------------------------------------
    # ARR	(auto-reload register)
    # Offset: 44	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['ARR']['ARR'].values = None

    # -------------------------------------------------------------------------
    # RCR	(repetition counter register)
    # Offset: 48	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['RCR']['REP'].values = None

    # -------------------------------------------------------------------------
    # CCR1	(capture/compare register 1)
    # Offset: 52	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['CCR1']['CCR1'].values = None

    # -------------------------------------------------------------------------
    # CCR2	(capture/compare register 2)
    # Offset: 56	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['CCR2']['CCR2'].values = None

    # -------------------------------------------------------------------------
    # CCR3	(capture/compare register 3)
    # Offset: 60	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['CCR3']['CCR3'].values = None

    # -------------------------------------------------------------------------
    # CCR4	(capture/compare register 4)
    # Offset: 64	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['CCR4']['CCR4'].values = None

    # -------------------------------------------------------------------------
    # BDTR	(break and dead-time register)
    # Offset: 68	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['BDTR']['MOE'].values = None
    TIM1_8['BDTR']['AOE'].values = None
    TIM1_8['BDTR']['BKP'].values = None
    TIM1_8['BDTR']['BKE'].values = None
    TIM1_8['BDTR']['OSSR'].values = None
    TIM1_8['BDTR']['OSSI'].values = None
    TIM1_8['BDTR']['LOCK'].values = None
    TIM1_8['BDTR']['DTG'].values = None

    # -------------------------------------------------------------------------
    # DCR	(DMA control register)
    # Offset: 72	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['DCR']['DBL'].values = None
    TIM1_8['DCR']['DBA'].values = None

    # -------------------------------------------------------------------------
    # DMAR	(DMA address for full transfer)
    # Offset: 76	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    TIM1_8['DMAR']['DMAB'].values = None

