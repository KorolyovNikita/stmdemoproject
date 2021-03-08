from tempvalue import*


def apply(SYSCFG):
    # -------------------------------------------------------------------------
    # MEMRM	(memory remap register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SYSCFG['MEMRM']['SWP_FMC'].values = None
    SYSCFG['MEMRM']['FB_MODE'].values = None
    SYSCFG['MEMRM']['MEM_MODE'].values = None

    # -------------------------------------------------------------------------
    # PMC	(peripheral mode configuration register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SYSCFG['PMC']['MII_RMII_SEL'].values = None
    SYSCFG['PMC']['ADC3DC2'].values = None
    SYSCFG['PMC']['ADC2DC2'].values = None
    SYSCFG['PMC']['ADC1DC2'].values = None

    values = ['PortA', 'PortB', 'PortC', 'PortD', 
              'PortE', 'PortF', 'PortG', 'PortH',
              tempvalue('Value')]
    SYSCFG.addLargeReg('EXTICR_EXTI', SYSCFG['EXTICR1'], values)
    # -------------------------------------------------------------------------
    # EXTICR1	(external interrupt configuration register 1)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SYSCFG['EXTICR1'].add(values).to_all_fields()


    # -------------------------------------------------------------------------
    # EXTICR2	(external interrupt configuration register 2)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SYSCFG['EXTICR2'].add(values).to_all_fields()


    # -------------------------------------------------------------------------
    # EXTICR3	(external interrupt configuration register 3)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SYSCFG['EXTICR3'].add(values).to_all_fields()


    # -------------------------------------------------------------------------
    # EXTICR4	(external interrupt configuration register 4)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SYSCFG['EXTICR4'].add(values).to_all_fields()


    # -------------------------------------------------------------------------
    # CMPCR	(Compensation cell control register)
    # Offset: 32	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SYSCFG['CMPCR']['READY'].values = None
    SYSCFG['CMPCR']['CMP_PD'].values = None

