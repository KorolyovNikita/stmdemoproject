from tempvalue import*


def apply(GPIO):
    # -------------------------------------------------------------------------
    # MODER	(GPIO port mode register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    tmp = ['Input', 'Output', 'Alternate', 'Analog']    
    GPIO['MODER'].add(tmp).to_all_fields()
    GPIO['MODER'].addTemplateField('MODERx', GPIO['MODER']['MODER0'])


    # -------------------------------------------------------------------------
    # OTYPER	(GPIO port output type register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    GPIO['OTYPER'].add(['Push_pull', 'Open_drain']).to_all_fields()
    GPIO['OTYPER'].addTemplateField('OTx', GPIO['OTYPER']['OT0'])

    # -------------------------------------------------------------------------
    # OSPEEDR	(GPIO port output speed register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    GPIO['OSPEEDR'].add(['Low', 'Medium',
                         'Fast', 'High']).to_all_fields()
    GPIO['OSPEEDR'].addTemplateField('OSPEEDRx', GPIO['OSPEEDR']['OSPEEDR0'])

    # -------------------------------------------------------------------------
    # PUPDR	(GPIO port pull-up/pull-down register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    GPIO['PUPDR'].add(['noPull', 'Pull_up', 'Pull_down']).to_all_fields()
    GPIO['PUPDR'].addTemplateField('PUPDRx', GPIO['PUPDR']['PUPDR0'])

    # -------------------------------------------------------------------------
    # IDR	(GPIO port input data register)
    # Offset: 16	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    GPIO['IDR']['IDR15'].values = None
    GPIO['IDR']['IDR14'].values = None
    GPIO['IDR']['IDR13'].values = None
    GPIO['IDR']['IDR12'].values = None
    GPIO['IDR']['IDR11'].values = None
    GPIO['IDR']['IDR10'].values = None
    GPIO['IDR']['IDR9'].values = None
    GPIO['IDR']['IDR8'].values = None
    GPIO['IDR']['IDR7'].values = None
    GPIO['IDR']['IDR6'].values = None
    GPIO['IDR']['IDR5'].values = None
    GPIO['IDR']['IDR4'].values = None
    GPIO['IDR']['IDR3'].values = None
    GPIO['IDR']['IDR2'].values = None
    GPIO['IDR']['IDR1'].values = None
    GPIO['IDR']['IDR0'].values = None

    # -------------------------------------------------------------------------
    # ODR	(GPIO port output data register)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    GPIO['ODR']['ODR15'].values = None
    GPIO['ODR']['ODR14'].values = None
    GPIO['ODR']['ODR13'].values = None
    GPIO['ODR']['ODR12'].values = None
    GPIO['ODR']['ODR11'].values = None
    GPIO['ODR']['ODR10'].values = None
    GPIO['ODR']['ODR9'].values = None
    GPIO['ODR']['ODR8'].values = None
    GPIO['ODR']['ODR7'].values = None
    GPIO['ODR']['ODR6'].values = None
    GPIO['ODR']['ODR5'].values = None
    GPIO['ODR']['ODR4'].values = None
    GPIO['ODR']['ODR3'].values = None
    GPIO['ODR']['ODR2'].values = None
    GPIO['ODR']['ODR1'].values = None
    GPIO['ODR']['ODR0'].values = None

    # -------------------------------------------------------------------------
    # BSRR	(GPIO port bit set/reset register)
    # Offset: 24	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    GPIO['BSRR']['BR15'].values = None
    GPIO['BSRR']['BR14'].values = None
    GPIO['BSRR']['BR13'].values = None
    GPIO['BSRR']['BR12'].values = None
    GPIO['BSRR']['BR11'].values = None
    GPIO['BSRR']['BR10'].values = None
    GPIO['BSRR']['BR9'].values = None
    GPIO['BSRR']['BR8'].values = None
    GPIO['BSRR']['BR7'].values = None
    GPIO['BSRR']['BR6'].values = None
    GPIO['BSRR']['BR5'].values = None
    GPIO['BSRR']['BR4'].values = None
    GPIO['BSRR']['BR3'].values = None
    GPIO['BSRR']['BR2'].values = None
    GPIO['BSRR']['BR1'].values = None
    GPIO['BSRR']['BR0'].values = None
    GPIO['BSRR']['BS15'].values = None
    GPIO['BSRR']['BS14'].values = None
    GPIO['BSRR']['BS13'].values = None
    GPIO['BSRR']['BS12'].values = None
    GPIO['BSRR']['BS11'].values = None
    GPIO['BSRR']['BS10'].values = None
    GPIO['BSRR']['BS9'].values = None
    GPIO['BSRR']['BS8'].values = None
    GPIO['BSRR']['BS7'].values = None
    GPIO['BSRR']['BS6'].values = None
    GPIO['BSRR']['BS5'].values = None
    GPIO['BSRR']['BS4'].values = None
    GPIO['BSRR']['BS3'].values = None
    GPIO['BSRR']['BS2'].values = None
    GPIO['BSRR']['BS1'].values = None
    GPIO['BSRR']['BS0'].values = None

    # -------------------------------------------------------------------------
    # LCKR	(GPIO port configuration lock register)
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    GPIO['LCKR']['LCKK'].values = None
    GPIO['LCKR']['LCK15'].values = None
    GPIO['LCKR']['LCK14'].values = None
    GPIO['LCKR']['LCK13'].values = None
    GPIO['LCKR']['LCK12'].values = None
    GPIO['LCKR']['LCK11'].values = None
    GPIO['LCKR']['LCK10'].values = None
    GPIO['LCKR']['LCK9'].values = None
    GPIO['LCKR']['LCK8'].values = None
    GPIO['LCKR']['LCK7'].values = None
    GPIO['LCKR']['LCK6'].values = None
    GPIO['LCKR']['LCK5'].values = None
    GPIO['LCKR']['LCK4'].values = None
    GPIO['LCKR']['LCK3'].values = None
    GPIO['LCKR']['LCK2'].values = None
    GPIO['LCKR']['LCK1'].values = None
    GPIO['LCKR']['LCK0'].values = None

    # -------------------------------------------------------------------------
    # AFRL	(GPIO alternate function low register)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    values = [f'AF{x}' for x in range(15 + 1)]
    GPIO.addLargeReg('AFR_AF', GPIO['AFRL'], values)
    GPIO['AFRL'].add(values).to_all_fields()

    # -------------------------------------------------------------------------
    # AFRH	(GPIO alternate function high register)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    GPIO['AFRH'].add(values).to_all_fields()
