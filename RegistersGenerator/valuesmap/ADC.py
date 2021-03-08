from tempvalue import*


def apply(ADC):
    # -------------------------------------------------------------------------
    # SR	(status register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['SR']['OVR'].values = None
    ADC['SR']['STRT'].values = None
    ADC['SR']['JSTRT'].values = None
    ADC['SR']['JEOC'].values = None
    ADC['SR']['EOC'].values = None
    ADC['SR']['AWD'].values = None

    # -------------------------------------------------------------------------
    # CR1	(control register 1)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['CR1']['OVRIE'].values = None
    ADC['CR1']['RES'].values = None
    ADC['CR1']['AWDEN'].values = None
    ADC['CR1']['JAWDEN'].values = None
    ADC['CR1']['DISCNUM'].values = None
    ADC['CR1']['JDISCEN'].values = None
    ADC['CR1']['DISCEN'].values = None
    ADC['CR1']['JAUTO'].values = None
    ADC['CR1']['AWDSGL'].values = None
    ADC['CR1']['SCAN'].values = None
    ADC['CR1']['JEOCIE'].values = None
    ADC['CR1']['AWDIE'].values = None
    ADC['CR1']['EOCIE'].values = None
    ADC['CR1']['AWDCH'].values = None

    # -------------------------------------------------------------------------
    # CR2	(control register 2)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['CR2']['SWSTART'].values = None
    ADC['CR2']['EXTEN'].values = None
    ADC['CR2']['EXTSEL'].values = None
    ADC['CR2']['JSWSTART'].values = None
    ADC['CR2']['JEXTEN'].values = None
    ADC['CR2']['JEXTSEL'].values = None
    ADC['CR2']['ALIGN'].values = None
    ADC['CR2']['EOCS'].values = None
    ADC['CR2']['DDS'].values = None
    ADC['CR2']['DMA'].values = None
    ADC['CR2']['CONT'].values = None
    ADC['CR2']['ADON'].values = None

    # -------------------------------------------------------------------------
    # SMPR1	(sample time register 1)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['SMPR1']['SMPx_x'].values = None

    # -------------------------------------------------------------------------
    # SMPR2	(sample time register 2)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['SMPR2']['SMPx_x'].values = None

    # -------------------------------------------------------------------------
    # JOFR1	(injected channel data offset register x)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['JOFR1']['JOFFSET1'].values = None

    # -------------------------------------------------------------------------
    # JOFR2	(injected channel data offset register x)
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['JOFR2']['JOFFSET2'].values = None

    # -------------------------------------------------------------------------
    # JOFR3	(injected channel data offset register x)
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['JOFR3']['JOFFSET3'].values = None

    # -------------------------------------------------------------------------
    # JOFR4	(injected channel data offset register x)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['JOFR4']['JOFFSET4'].values = None

    # -------------------------------------------------------------------------
    # HTR	(watchdog higher threshold register)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['HTR']['HT'].values = None

    # -------------------------------------------------------------------------
    # LTR	(watchdog lower threshold register)
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['LTR']['LT'].values = None

    # -------------------------------------------------------------------------
    # SQR1	(regular sequence register 1)
    # Offset: 44	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['SQR1']['L'].values = None
    ADC['SQR1']['SQ16'].values = None
    ADC['SQR1']['SQ15'].values = None
    ADC['SQR1']['SQ14'].values = None
    ADC['SQR1']['SQ13'].values = None

    # -------------------------------------------------------------------------
    # SQR2	(regular sequence register 2)
    # Offset: 48	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['SQR2']['SQ12'].values = None
    ADC['SQR2']['SQ11'].values = None
    ADC['SQR2']['SQ10'].values = None
    ADC['SQR2']['SQ9'].values = None
    ADC['SQR2']['SQ8'].values = None
    ADC['SQR2']['SQ7'].values = None

    # -------------------------------------------------------------------------
    # SQR3	(regular sequence register 3)
    # Offset: 52	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['SQR3']['SQ6'].values = None
    ADC['SQR3']['SQ5'].values = None
    ADC['SQR3']['SQ4'].values = None
    ADC['SQR3']['SQ3'].values = None
    ADC['SQR3']['SQ2'].values = None
    ADC['SQR3']['SQ1'].values = None

    # -------------------------------------------------------------------------
    # JSQR	(injected sequence register)
    # Offset: 56	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    ADC['JSQR']['JL'].values = None
    ADC['JSQR']['JSQ4'].values = None
    ADC['JSQR']['JSQ3'].values = None
    ADC['JSQR']['JSQ2'].values = None
    ADC['JSQR']['JSQ1'].values = None

    # -------------------------------------------------------------------------
    # JDR1	(injected data register x)
    # Offset: 60	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    ADC['JDR1']['JDATA'].values = None

    # -------------------------------------------------------------------------
    # JDR2	(injected data register x)
    # Offset: 64	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    ADC['JDR2']['JDATA'].values = None

    # -------------------------------------------------------------------------
    # JDR3	(injected data register x)
    # Offset: 68	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    ADC['JDR3']['JDATA'].values = None

    # -------------------------------------------------------------------------
    # JDR4	(injected data register x)
    # Offset: 72	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    ADC['JDR4']['JDATA'].values = None

    # -------------------------------------------------------------------------
    # DR	(regular data register)
    # Offset: 76	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    ADC['DR']['DATA'].values = None

