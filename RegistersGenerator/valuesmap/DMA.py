from tempvalue import*


def apply(DMA):

    DMA.addLargeReg('ISR_FEIF', DMA['LISR'], step_rules='0 + (6 * (num%4) + 4 * ((num%4) == 2))', number_of_fields=4)
    DMA.addLargeReg('ISR_DMEIF', DMA['LISR'], step_rules='2 + (6 * (num%4) + 4 * ((num%4) == 2))', number_of_fields=4)
    DMA.addLargeReg('ISR_TEIF', DMA['LISR'], step_rules='3 + (6 * (num%4) + 4 * ((num%4) == 2))', number_of_fields=4)
    DMA.addLargeReg('ISR_HTIF', DMA['LISR'], step_rules='4 + (6 * (num%4) + 4 * ((num%4) == 2))', number_of_fields=4)
    DMA.addLargeReg('ISR_TCIF', DMA['LISR'], step_rules='5 + (6 * (num%4) + 4 * ((num%4) == 2))', number_of_fields=4)
    # -------------------------------------------------------------------------
    # LISR	(low interrupt status register)
    # Offset: 0	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    DMA['LISR']['TCIF3'].values = None
    DMA['LISR']['HTIF3'].values = None
    DMA['LISR']['TEIF3'].values = None
    DMA['LISR']['DMEIF3'].values = None
    DMA['LISR']['FEIF3'].values = None
    DMA['LISR']['TCIF2'].values = None
    DMA['LISR']['HTIF2'].values = None
    DMA['LISR']['TEIF2'].values = None
    DMA['LISR']['DMEIF2'].values = None
    DMA['LISR']['FEIF2'].values = None
    DMA['LISR']['TCIF1'].values = None
    DMA['LISR']['HTIF1'].values = None
    DMA['LISR']['TEIF1'].values = None
    DMA['LISR']['DMEIF1'].values = None
    DMA['LISR']['FEIF1'].values = None
    DMA['LISR']['TCIF0'].values = None
    DMA['LISR']['HTIF0'].values = None
    DMA['LISR']['TEIF0'].values = None
    DMA['LISR']['DMEIF0'].values = None
    DMA['LISR']['FEIF0'].values = None

    # -------------------------------------------------------------------------
    # HISR	(high interrupt status register)
    # Offset: 4	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    DMA['HISR']['TCIF7'].values = None
    DMA['HISR']['HTIF7'].values = None
    DMA['HISR']['TEIF7'].values = None
    DMA['HISR']['DMEIF7'].values = None
    DMA['HISR']['FEIF7'].values = None
    DMA['HISR']['TCIF6'].values = None
    DMA['HISR']['HTIF6'].values = None
    DMA['HISR']['TEIF6'].values = None
    DMA['HISR']['DMEIF6'].values = None
    DMA['HISR']['FEIF6'].values = None
    DMA['HISR']['TCIF5'].values = None
    DMA['HISR']['HTIF5'].values = None
    DMA['HISR']['TEIF5'].values = None
    DMA['HISR']['DMEIF5'].values = None
    DMA['HISR']['FEIF5'].values = None
    DMA['HISR']['TCIF4'].values = None
    DMA['HISR']['HTIF4'].values = None
    DMA['HISR']['TEIF4'].values = None
    DMA['HISR']['DMEIF4'].values = None
    DMA['HISR']['FEIF4'].values = None

    # -------------------------------------------------------------------------
    # LIFCR	(low interrupt flag clear register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA.addLargeReg('IFCR_CFEIF', DMA['LIFCR'], step_rules='0 + (6 * (num%4) + 4 * ((num%4) == 2))', number_of_fields=4)
    DMA.addLargeReg('IFCR_CDMEIF', DMA['LIFCR'], step_rules='2 + (6 * (num%4) + 4 * ((num%4) == 2))', number_of_fields=4)
    DMA.addLargeReg('IFCR_CTEIF', DMA['LIFCR'], step_rules='3 + (6 * (num%4) + 4 * ((num%4) == 2))', number_of_fields=4)
    DMA.addLargeReg('IFCR_CHTIF', DMA['LIFCR'], step_rules='4 + (6 * (num%4) + 4 * ((num%4) == 2))', number_of_fields=4)
    DMA.addLargeReg('IFCR_CTCIF', DMA['LIFCR'], step_rules='5 + (6 * (num%4) + 4 * ((num%4) == 2))', number_of_fields=4)


    DMA['LIFCR']['CTCIF3'].values = None
    DMA['LIFCR']['CHTIF3'].values = None
    DMA['LIFCR']['CTEIF3'].values = None
    DMA['LIFCR']['CDMEIF3'].values = None
    DMA['LIFCR']['CFEIF3'].values = None
    DMA['LIFCR']['CTCIF2'].values = None
    DMA['LIFCR']['CHTIF2'].values = None
    DMA['LIFCR']['CTEIF2'].values = None
    DMA['LIFCR']['CDMEIF2'].values = None
    DMA['LIFCR']['CFEIF2'].values = None
    DMA['LIFCR']['CTCIF1'].values = None
    DMA['LIFCR']['CHTIF1'].values = None
    DMA['LIFCR']['CTEIF1'].values = None
    DMA['LIFCR']['CDMEIF1'].values = None
    DMA['LIFCR']['CFEIF1'].values = None
    DMA['LIFCR']['CTCIF0'].values = None
    DMA['LIFCR']['CHTIF0'].values = None
    DMA['LIFCR']['CTEIF0'].values = None
    DMA['LIFCR']['CDMEIF0'].values = None
    DMA['LIFCR']['CFEIF0'].values = None

    # -------------------------------------------------------------------------
    # HIFCR	(high interrupt flag clear register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------

    DMA['HIFCR']['CTCIF7'].values = None
    DMA['HIFCR']['CHTIF7'].values = None
    DMA['HIFCR']['CTEIF7'].values = None
    DMA['HIFCR']['CDMEIF7'].values = None
    DMA['HIFCR']['CFEIF7'].values = None
    DMA['HIFCR']['CTCIF6'].values = None
    DMA['HIFCR']['CHTIF6'].values = None
    DMA['HIFCR']['CTEIF6'].values = None
    DMA['HIFCR']['CDMEIF6'].values = None
    DMA['HIFCR']['CFEIF6'].values = None
    DMA['HIFCR']['CTCIF5'].values = None
    DMA['HIFCR']['CHTIF5'].values = None
    DMA['HIFCR']['CTEIF5'].values = None
    DMA['HIFCR']['CDMEIF5'].values = None
    DMA['HIFCR']['CFEIF5'].values = None
    DMA['HIFCR']['CTCIF4'].values = None
    DMA['HIFCR']['CHTIF4'].values = None
    DMA['HIFCR']['CTEIF4'].values = None
    DMA['HIFCR']['CDMEIF4'].values = None
    DMA['HIFCR']['CFEIF4'].values = None


    # -------------------------------------------------------------------------
    # S0CR	(stream x configuration register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S0CR']['CHSEL'].values = [tempvalue('Channel')]
    DMA['S0CR']['MBURST'].values = None
    DMA['S0CR']['PBURST'].values = None
    DMA['S0CR']['CT'].values = None
    DMA['S0CR']['DBM'].values = None
    DMA['S0CR']['PL'].values = ['Low','Medium','High','Very_high', tempvalue('Priority')]
    DMA['S0CR']['PINCOS'].values = None
    DMA['S0CR']['MSIZE'].values = ['Byte', 'Half_Word', 'Word']
    DMA['S0CR']['PSIZE'].values = ['Byte', 'Half_Word', 'Word']
    DMA['S0CR']['MINC'].values = ['Fixed', 'Incremented']
    DMA['S0CR']['PINC'].values = ['Fixed', 'Incremented']
    DMA['S0CR']['CIRC'].values = ['Disable', 'Enable']
    DMA['S0CR']['DIR'].values = ['peripheral_to_memory', 
                                 'memory_to_peripheral', 
                                 'memory_to_memory']
    DMA['S0CR']['PFCTRL'].values = ['DMA', 'Peripheral']
    DMA['S0CR']['TCIE'].values = ['Disable', 'Enable']
    DMA['S0CR']['HTIE'].values = ['Disable', 'Enable']
    DMA['S0CR']['TEIE'].values = ['Disable', 'Enable']
    DMA['S0CR']['DMEIE'].values = ['Disable', 'Enable']
    DMA['S0CR']['EN'].values = ['Disable', 'Enable']

    DMA.addTemplateReg('SxCR', DMA['S0CR'], reg_step_offset=24)


    # -------------------------------------------------------------------------
    # S0NDTR	(stream x number of data register)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA.addLargeReg('SxNDTR', DMA['S0NDTR'], reg_step_offset=24)
    DMA['S0NDTR']['NDT'].values = None

    
    # -------------------------------------------------------------------------
    # S0PAR	(stream x peripheral address register)
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA.addLargeReg('SxPAR', DMA['S0PAR'], values=[tempvalue('Address')],reg_step_offset=24)
    DMA['S0PAR']['PA'].values = [tempvalue('Address')]

    # -------------------------------------------------------------------------
    # S0M0AR	(stream x memory 0 address register)
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA.addLargeReg('SxM0AR', DMA['S0M0AR'], reg_step_offset=24)
    DMA['S0M0AR']['M0A'].values = None

    # -------------------------------------------------------------------------
    # S0M1AR	(stream x memory 1 address register)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA.addLargeReg('SxM1AR', DMA['S0M1AR'], reg_step_offset=24)
    DMA['S0M1AR']['M1A'].values = None

    # -------------------------------------------------------------------------
    # S0FCR	(stream x FIFO control register)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S0FCR']['FEIE'].values = None
    DMA['S0FCR']['FS'].values = None
    DMA['S0FCR']['DMDIS'].values = None
    DMA['S0FCR']['FTH'].values = None

    # -------------------------------------------------------------------------
    # S1CR	(stream x configuration register)
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S1CR']['CHSEL'].values = None
    DMA['S1CR']['MBURST'].values = None
    DMA['S1CR']['PBURST'].values = None
    DMA['S1CR']['ACK'].values = None
    DMA['S1CR']['CT'].values = None
    DMA['S1CR']['DBM'].values = None
    DMA['S1CR']['PL'].values = None
    DMA['S1CR']['PINCOS'].values = None
    DMA['S1CR']['MSIZE'].values = None
    DMA['S1CR']['PSIZE'].values = None
    DMA['S1CR']['MINC'].values = None
    DMA['S1CR']['PINC'].values = None
    DMA['S1CR']['CIRC'].values = None
    DMA['S1CR']['DIR'].values = None
    DMA['S1CR']['PFCTRL'].values = None
    DMA['S1CR']['TCIE'].values = None
    DMA['S1CR']['HTIE'].values = None
    DMA['S1CR']['TEIE'].values = None
    DMA['S1CR']['DMEIE'].values = None
    DMA['S1CR']['EN'].values = None

    # -------------------------------------------------------------------------
    # S1NDTR	(stream x number of data register)
    # Offset: 44	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S1NDTR']['NDT'].values = None

    # -------------------------------------------------------------------------
    # S1PAR	(stream x peripheral address register)
    # Offset: 48	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S1PAR']['PA'].values = None

    # -------------------------------------------------------------------------
    # S1M0AR	(stream x memory 0 address register)
    # Offset: 52	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S1M0AR']['M0A'].values = None

    # -------------------------------------------------------------------------
    # S1M1AR	(stream x memory 1 address register)
    # Offset: 56	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S1M1AR']['M1A'].values = None

    # -------------------------------------------------------------------------
    # S1FCR	(stream x FIFO control register)
    # Offset: 60	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S1FCR']['FEIE'].values = None
    DMA['S1FCR']['FS'].values = None
    DMA['S1FCR']['DMDIS'].values = None
    DMA['S1FCR']['FTH'].values = None

    # -------------------------------------------------------------------------
    # S2CR	(stream x configuration register)
    # Offset: 64	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S2CR']['CHSEL'].values = None
    DMA['S2CR']['MBURST'].values = None
    DMA['S2CR']['PBURST'].values = None
    DMA['S2CR']['ACK'].values = None
    DMA['S2CR']['CT'].values = None
    DMA['S2CR']['DBM'].values = None
    DMA['S2CR']['PL'].values = None
    DMA['S2CR']['PINCOS'].values = None
    DMA['S2CR']['MSIZE'].values = None
    DMA['S2CR']['PSIZE'].values = None
    DMA['S2CR']['MINC'].values = None
    DMA['S2CR']['PINC'].values = None
    DMA['S2CR']['CIRC'].values = None
    DMA['S2CR']['DIR'].values = None
    DMA['S2CR']['PFCTRL'].values = None
    DMA['S2CR']['TCIE'].values = None
    DMA['S2CR']['HTIE'].values = None
    DMA['S2CR']['TEIE'].values = None
    DMA['S2CR']['DMEIE'].values = None
    DMA['S2CR']['EN'].values = None

    # -------------------------------------------------------------------------
    # S2NDTR	(stream x number of data register)
    # Offset: 68	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S2NDTR']['NDT'].values = None

    # -------------------------------------------------------------------------
    # S2PAR	(stream x peripheral address register)
    # Offset: 72	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S2PAR']['PA'].values = None

    # -------------------------------------------------------------------------
    # S2M0AR	(stream x memory 0 address register)
    # Offset: 76	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S2M0AR']['M0A'].values = None

    # -------------------------------------------------------------------------
    # S2M1AR	(stream x memory 1 address register)
    # Offset: 80	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S2M1AR']['M1A'].values = None

    # -------------------------------------------------------------------------
    # S2FCR	(stream x FIFO control register)
    # Offset: 84	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S2FCR']['FEIE'].values = None
    DMA['S2FCR']['FS'].values = None
    DMA['S2FCR']['DMDIS'].values = None
    DMA['S2FCR']['FTH'].values = None

    # -------------------------------------------------------------------------
    # S3CR	(stream x configuration register)
    # Offset: 88	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S3CR']['CHSEL'].values = None
    DMA['S3CR']['MBURST'].values = None
    DMA['S3CR']['PBURST'].values = None
    DMA['S3CR']['ACK'].values = None
    DMA['S3CR']['CT'].values = None
    DMA['S3CR']['DBM'].values = None
    DMA['S3CR']['PL'].values = None
    DMA['S3CR']['PINCOS'].values = None
    DMA['S3CR']['MSIZE'].values = None
    DMA['S3CR']['PSIZE'].values = None
    DMA['S3CR']['MINC'].values = None
    DMA['S3CR']['PINC'].values = None
    DMA['S3CR']['CIRC'].values = None
    DMA['S3CR']['DIR'].values = None
    DMA['S3CR']['PFCTRL'].values = None
    DMA['S3CR']['TCIE'].values = None
    DMA['S3CR']['HTIE'].values = None
    DMA['S3CR']['TEIE'].values = None
    DMA['S3CR']['DMEIE'].values = None
    DMA['S3CR']['EN'].values = None

    # -------------------------------------------------------------------------
    # S3NDTR	(stream x number of data register)
    # Offset: 92	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S3NDTR']['NDT'].values = None

    # -------------------------------------------------------------------------
    # S3PAR	(stream x peripheral address register)
    # Offset: 96	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S3PAR']['PA'].values = None

    # -------------------------------------------------------------------------
    # S3M0AR	(stream x memory 0 address register)
    # Offset: 100	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S3M0AR']['M0A'].values = None

    # -------------------------------------------------------------------------
    # S3M1AR	(stream x memory 1 address register)
    # Offset: 104	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S3M1AR']['M1A'].values = None

    # -------------------------------------------------------------------------
    # S3FCR	(stream x FIFO control register)
    # Offset: 108	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S3FCR']['FEIE'].values = None
    DMA['S3FCR']['FS'].values = None
    DMA['S3FCR']['DMDIS'].values = None
    DMA['S3FCR']['FTH'].values = None

    # -------------------------------------------------------------------------
    # S4CR	(stream x configuration register)
    # Offset: 112	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S4CR']['CHSEL'].values = None
    DMA['S4CR']['MBURST'].values = None
    DMA['S4CR']['PBURST'].values = None
    DMA['S4CR']['ACK'].values = None
    DMA['S4CR']['CT'].values = None
    DMA['S4CR']['DBM'].values = None
    DMA['S4CR']['PL'].values = None
    DMA['S4CR']['PINCOS'].values = None
    DMA['S4CR']['MSIZE'].values = None
    DMA['S4CR']['PSIZE'].values = None
    DMA['S4CR']['MINC'].values = None
    DMA['S4CR']['PINC'].values = None
    DMA['S4CR']['CIRC'].values = None
    DMA['S4CR']['DIR'].values = None
    DMA['S4CR']['PFCTRL'].values = None
    DMA['S4CR']['TCIE'].values = None
    DMA['S4CR']['HTIE'].values = None
    DMA['S4CR']['TEIE'].values = None
    DMA['S4CR']['DMEIE'].values = None
    DMA['S4CR']['EN'].values = None

    # -------------------------------------------------------------------------
    # S4NDTR	(stream x number of data register)
    # Offset: 116	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S4NDTR']['NDT'].values = None

    # -------------------------------------------------------------------------
    # S4PAR	(stream x peripheral address register)
    # Offset: 120	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S4PAR']['PA'].values = None

    # -------------------------------------------------------------------------
    # S4M0AR	(stream x memory 0 address register)
    # Offset: 124	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S4M0AR']['M0A'].values = None

    # -------------------------------------------------------------------------
    # S4M1AR	(stream x memory 1 address register)
    # Offset: 128	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S4M1AR']['M1A'].values = None

    # -------------------------------------------------------------------------
    # S4FCR	(stream x FIFO control register)
    # Offset: 132	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S4FCR']['FEIE'].values = None
    DMA['S4FCR']['FS'].values = None
    DMA['S4FCR']['DMDIS'].values = None
    DMA['S4FCR']['FTH'].values = None

    # -------------------------------------------------------------------------
    # S5CR	(stream x configuration register)
    # Offset: 136	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S5CR']['CHSEL'].values = None
    DMA['S5CR']['MBURST'].values = None
    DMA['S5CR']['PBURST'].values = None
    DMA['S5CR']['ACK'].values = None
    DMA['S5CR']['CT'].values = None
    DMA['S5CR']['DBM'].values = None
    DMA['S5CR']['PL'].values = None
    DMA['S5CR']['PINCOS'].values = None
    DMA['S5CR']['MSIZE'].values = None
    DMA['S5CR']['PSIZE'].values = None
    DMA['S5CR']['MINC'].values = None
    DMA['S5CR']['PINC'].values = None
    DMA['S5CR']['CIRC'].values = None
    DMA['S5CR']['DIR'].values = None
    DMA['S5CR']['PFCTRL'].values = None
    DMA['S5CR']['TCIE'].values = None
    DMA['S5CR']['HTIE'].values = None
    DMA['S5CR']['TEIE'].values = None
    DMA['S5CR']['DMEIE'].values = None
    DMA['S5CR']['EN'].values = None

    # -------------------------------------------------------------------------
    # S5NDTR	(stream x number of data register)
    # Offset: 140	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S5NDTR']['NDT'].values = None

    # -------------------------------------------------------------------------
    # S5PAR	(stream x peripheral address register)
    # Offset: 144	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S5PAR']['PA'].values = None

    # -------------------------------------------------------------------------
    # S5M0AR	(stream x memory 0 address register)
    # Offset: 148	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S5M0AR']['M0A'].values = None

    # -------------------------------------------------------------------------
    # S5M1AR	(stream x memory 1 address register)
    # Offset: 152	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S5M1AR']['M1A'].values = None

    # -------------------------------------------------------------------------
    # S5FCR	(stream x FIFO control register)
    # Offset: 156	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S5FCR']['FEIE'].values = None
    DMA['S5FCR']['FS'].values = None
    DMA['S5FCR']['DMDIS'].values = None
    DMA['S5FCR']['FTH'].values = None

    # -------------------------------------------------------------------------
    # S6CR	(stream x configuration register)
    # Offset: 160	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S6CR']['CHSEL'].values = None
    DMA['S6CR']['MBURST'].values = None
    DMA['S6CR']['PBURST'].values = None
    DMA['S6CR']['ACK'].values = None
    DMA['S6CR']['CT'].values = None
    DMA['S6CR']['DBM'].values = None
    DMA['S6CR']['PL'].values = None
    DMA['S6CR']['PINCOS'].values = None
    DMA['S6CR']['MSIZE'].values = None
    DMA['S6CR']['PSIZE'].values = None
    DMA['S6CR']['MINC'].values = None
    DMA['S6CR']['PINC'].values = None
    DMA['S6CR']['CIRC'].values = None
    DMA['S6CR']['DIR'].values = None
    DMA['S6CR']['PFCTRL'].values = None
    DMA['S6CR']['TCIE'].values = None
    DMA['S6CR']['HTIE'].values = None
    DMA['S6CR']['TEIE'].values = None
    DMA['S6CR']['DMEIE'].values = None
    DMA['S6CR']['EN'].values = None

    # -------------------------------------------------------------------------
    # S6NDTR	(stream x number of data register)
    # Offset: 164	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S6NDTR']['NDT'].values = None

    # -------------------------------------------------------------------------
    # S6PAR	(stream x peripheral address register)
    # Offset: 168	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S6PAR']['PA'].values = None

    # -------------------------------------------------------------------------
    # S6M0AR	(stream x memory 0 address register)
    # Offset: 172	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S6M0AR']['M0A'].values = None

    # -------------------------------------------------------------------------
    # S6M1AR	(stream x memory 1 address register)
    # Offset: 176	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S6M1AR']['M1A'].values = None

    # -------------------------------------------------------------------------
    # S6FCR	(stream x FIFO control register)
    # Offset: 180	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S6FCR']['FEIE'].values = None
    DMA['S6FCR']['FS'].values = None
    DMA['S6FCR']['DMDIS'].values = None
    DMA['S6FCR']['FTH'].values = None

    # -------------------------------------------------------------------------
    # S7CR	(stream x configuration register)
    # Offset: 184	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S7CR']['CHSEL'].values = None
    DMA['S7CR']['MBURST'].values = None
    DMA['S7CR']['PBURST'].values = None
    DMA['S7CR']['ACK'].values = None
    DMA['S7CR']['CT'].values = None
    DMA['S7CR']['DBM'].values = None
    DMA['S7CR']['PL'].values = None
    DMA['S7CR']['PINCOS'].values = None
    DMA['S7CR']['MSIZE'].values = None
    DMA['S7CR']['PSIZE'].values = None
    DMA['S7CR']['MINC'].values = None
    DMA['S7CR']['PINC'].values = None
    DMA['S7CR']['CIRC'].values = None
    DMA['S7CR']['DIR'].values = None
    DMA['S7CR']['PFCTRL'].values = None
    DMA['S7CR']['TCIE'].values = None
    DMA['S7CR']['HTIE'].values = None
    DMA['S7CR']['TEIE'].values = None
    DMA['S7CR']['DMEIE'].values = None
    DMA['S7CR']['EN'].values = None

    # -------------------------------------------------------------------------
    # S7NDTR	(stream x number of data register)
    # Offset: 188	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S7NDTR']['NDT'].values = None

    # -------------------------------------------------------------------------
    # S7PAR	(stream x peripheral address register)
    # Offset: 192	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S7PAR']['PA'].values = None

    # -------------------------------------------------------------------------
    # S7M0AR	(stream x memory 0 address register)
    # Offset: 196	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S7M0AR']['M0A'].values = None

    # -------------------------------------------------------------------------
    # S7M1AR	(stream x memory 1 address register)
    # Offset: 200	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S7M1AR']['M1A'].values = None

    # -------------------------------------------------------------------------
    # S7FCR	(stream x FIFO control register)
    # Offset: 204	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DMA['S7FCR']['FEIE'].values = None
    DMA['S7FCR']['FS'].values = None
    DMA['S7FCR']['DMDIS'].values = None
    DMA['S7FCR']['FTH'].values = None

