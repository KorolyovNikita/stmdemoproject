from tempvalue import*


def apply(C_ADC):
    # -------------------------------------------------------------------------
    # CSR	(ADC Common status register)
    # Offset: 0	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    C_ADC['CSR']['OVR3'].values = None
    C_ADC['CSR']['STRT3'].values = None
    C_ADC['CSR']['JSTRT3'].values = None
    C_ADC['CSR']['JEOC3'].values = None
    C_ADC['CSR']['EOC3'].values = None
    C_ADC['CSR']['AWD3'].values = None
    C_ADC['CSR']['OVR2'].values = None
    C_ADC['CSR']['STRT2'].values = None
    C_ADC['CSR']['JSTRT2'].values = None
    C_ADC['CSR']['JEOC2'].values = None
    C_ADC['CSR']['EOC2'].values = None
    C_ADC['CSR']['AWD2'].values = None
    C_ADC['CSR']['OVR1'].values = None
    C_ADC['CSR']['STRT1'].values = None
    C_ADC['CSR']['JSTRT1'].values = None
    C_ADC['CSR']['JEOC1'].values = None
    C_ADC['CSR']['EOC1'].values = None
    C_ADC['CSR']['AWD1'].values = None

    # -------------------------------------------------------------------------
    # CCR	(ADC common control register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    C_ADC['CCR']['TSVREFE'].values = None
    C_ADC['CCR']['VBATE'].values = None
    C_ADC['CCR']['ADCPRE'].values = None
    C_ADC['CCR']['DMA'].values = None
    C_ADC['CCR']['DDS'].values = None
    C_ADC['CCR']['DELAY'].values = None
    C_ADC['CCR']['MULT'].values = None

    # -------------------------------------------------------------------------
    # CDR	(ADC common regular data register for dual and triple modes)
    # Offset: 8	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    C_ADC['CDR']['DATA2'].values = None
    C_ADC['CDR']['DATA1'].values = None

