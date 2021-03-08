from tempvalue import*


def apply(RCC):
    # -------------------------------------------------------------------------
    # CR	(clock control register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['CR']['PLLI2SRDY'].values = None
    RCC['CR']['PLLI2SON'].values = None
    RCC['CR']['PLLRDY'].values = ['notReady', 'Ready']
    RCC['CR']['PLLON'].values = None
    RCC['CR']['CSSON'].values = None
    RCC['CR']['HSEBYP'].values = None
    RCC['CR']['HSERDY'].values = ['notReady', 'Ready']
    RCC['CR']['HSEON'].values = None
    RCC['CR']['HSICAL'].values = None
    RCC['CR']['HSITRIM'].values = None
    RCC['CR']['HSIRDY'].values = None
    RCC['CR']['HSION'].values = None

    # -------------------------------------------------------------------------
    # PLLCFGR	(PLL configuration register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    
    RCC['PLLCFGR']['PLLQ'].values = [(f'DIV_{x}', x) for x in range(2, 15 + 1)]
    RCC['PLLCFGR']['PLLSRC'].values = ['HSI', 'HSE']
    RCC['PLLCFGR']['PLLP'].values = ['DIV_2', 'DIV_4', 'DIV_6', 'DIV_8']    
    RCC['PLLCFGR']['PLLN'].values = [tempvalue('MULT', start=50, end=432)]
    RCC['PLLCFGR']['PLLM'].values = [tempvalue('DIV', start=2)]

    # -------------------------------------------------------------------------
    # CFGR	(clock configuration register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['CFGR']['MCO2'].values = ['SYSCLK', 'PLLI2S', 'HSE', 'PLL']

    RCC['CFGR'].add(['noDIV', ('DIV_2', 0b100),
                     'DIV_3', 'DIV_4', 'DIV_5']
                     ).to(['MCO2PRE', 'MCO1PRE'])

    RCC['CFGR']['I2SSRC'].values = None

    RCC['CFGR']['MCO1'].values = ['HSI', 'LSE', 'HSE', 'PLL']

    tmp = ['noclock'] + [(f'HSE_{x}', x) for x in range(2, 31 + 1)]
    RCC['CFGR']['RTCPRE'].values = tmp

    RCC['CFGR'].add(['noDIV', ('DIV_2', 0b100),
                     'DIV_4', 'DIV_8', 'DIV_16']
                     ).to(['PPRE2', 'PPRE1'])

    RCC['CFGR']['HPRE'].values = ['noDIV', ('DIV_2', 0b1000), 'DIV_4', 'DIV_8',
                                  'DIV_16', 'DIV_64', 'DIV_128', 'DIV_256',
                                  'DIV_512']
    RCC['CFGR']['SWS'].values = ['HSI', 'HSE', 'PLL', 'PLL_R']
    RCC['CFGR']['SW'].values = ['HSI', 'HSE', 'PLL', 'PLL_R']

    # -------------------------------------------------------------------------
    # CIR	(clock interrupt register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['CIR']['CSSC'].values = None
    RCC['CIR']['PLLSAIRDYC'].values = None
    RCC['CIR']['PLLI2SRDYC'].values = None
    RCC['CIR']['PLLRDYC'].values = None
    RCC['CIR']['HSERDYC'].values = None
    RCC['CIR']['HSIRDYC'].values = None
    RCC['CIR']['LSERDYC'].values = None
    RCC['CIR']['LSIRDYC'].values = None
    RCC['CIR']['PLLSAIRDYIE'].values = None
    RCC['CIR']['PLLI2SRDYIE'].values = None
    RCC['CIR']['PLLRDYIE'].values = None
    RCC['CIR']['HSERDYIE'].values = None
    RCC['CIR']['HSIRDYIE'].values = None
    RCC['CIR']['LSERDYIE'].values = None
    RCC['CIR']['LSIRDYIE'].values = None
    RCC['CIR']['CSSF'].values = None
    RCC['CIR']['PLLSAIRDYF'].values = None
    RCC['CIR']['PLLI2SRDYF'].values = None
    RCC['CIR']['PLLRDYF'].values = None
    RCC['CIR']['HSERDYF'].values = None
    RCC['CIR']['HSIRDYF'].values = None
    RCC['CIR']['LSERDYF'].values = None
    RCC['CIR']['LSIRDYF'].values = None

    # -------------------------------------------------------------------------
    # AHB1RSTR	(AHB1 peripheral reset register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['AHB1RSTR']['OTGHSRST'].values = None
    RCC['AHB1RSTR']['DMA2RST'].values = None
    RCC['AHB1RSTR']['DMA1RST'].values = None
    RCC['AHB1RSTR']['CRCRST'].values = None
    RCC['AHB1RSTR']['GPIOHRST'].values = None
    RCC['AHB1RSTR']['GPIOGRST'].values = None
    RCC['AHB1RSTR']['GPIOFRST'].values = None
    RCC['AHB1RSTR']['GPIOERST'].values = None
    RCC['AHB1RSTR']['GPIODRST'].values = None
    RCC['AHB1RSTR']['GPIOCRST'].values = None
    RCC['AHB1RSTR']['GPIOBRST'].values = None
    RCC['AHB1RSTR']['GPIOARST'].values = None

    # -------------------------------------------------------------------------
    # AHB2RSTR	(AHB2 peripheral reset register)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['AHB2RSTR']['OTGFSRST'].values = None
    RCC['AHB2RSTR']['DCMIRST'].values = None

    # -------------------------------------------------------------------------
    # AHB3RSTR	(AHB3 peripheral reset register)
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['AHB3RSTR']['QSPIRST'].values = None
    RCC['AHB3RSTR']['FMCRST'].values = None

    # -------------------------------------------------------------------------
    # APB1RSTR	(APB1 peripheral reset register)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------   
    RCC['APB1RSTR']['DACRST'].values = None
    RCC['APB1RSTR']['PWRRST'].values = None
    RCC['APB1RSTR']['CAN2RST'].values = None
    RCC['APB1RSTR']['CAN1RST'].values = None
    RCC['APB1RSTR']['I2CFMP1RST'].values = None
    RCC['APB1RSTR']['I2C3RST'].values = None
    RCC['APB1RSTR']['I2C2RST'].values = None
    RCC['APB1RSTR']['I2C1RST'].values = None
    RCC['APB1RSTR']['UART5RST'].values = None
    RCC['APB1RSTR']['UART4RST'].values = None
    RCC['APB1RSTR']['UART3RST'].values = None
    RCC['APB1RSTR']['UART2RST'].values = None
    RCC['APB1RSTR']['SPDIFRST'].values = None
    RCC['APB1RSTR']['SPI3RST'].values = None
    RCC['APB1RSTR']['SPI2RST'].values = None
    RCC['APB1RSTR']['WWDGRST'].values = None
    RCC['APB1RSTR']['TIM14RST'].values = None
    RCC['APB1RSTR']['TIM13RST'].values = None
    RCC['APB1RSTR']['TIM12RST'].values = None
    RCC['APB1RSTR']['TIM7RST'].values = None
    RCC['APB1RSTR']['TIM6RST'].values = None
    RCC['APB1RSTR']['TIM5RST'].values = None
    RCC['APB1RSTR']['TIM4RST'].values = None
    RCC['APB1RSTR']['TIM3RST'].values = None
    RCC['APB1RSTR']['TIM2RST'].values = None

    # -------------------------------------------------------------------------
    # APB2RSTR	(APB2 peripheral reset register)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['APB2RSTR']['SAI2RST'].values = None
    RCC['APB2RSTR']['SAI1RST'].values = None
    RCC['APB2RSTR']['TIM11RST'].values = None
    RCC['APB2RSTR']['TIM10RST'].values = None
    RCC['APB2RSTR']['TIM9RST'].values = None
    RCC['APB2RSTR']['SYSCFGRST'].values = None
    RCC['APB2RSTR']['SPI4RST'].values = None
    RCC['APB2RSTR']['SPI1RST'].values = None
    RCC['APB2RSTR']['SDIORST'].values = None
    RCC['APB2RSTR']['ADCRST'].values = None
    RCC['APB2RSTR']['USART6RST'].values = None
    RCC['APB2RSTR']['USART1RST'].values = None
    RCC['APB2RSTR']['TIM8RST'].values = None
    RCC['APB2RSTR']['TIM1RST'].values = None

    # -------------------------------------------------------------------------
    # AHB1ENR	(AHB1 peripheral clock register)
    # Offset: 48	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['AHB1ENR'].add(['Disable', 'Enable']).to_all_fields()
    RCC['AHB1ENR'].addTemplateField('DMA', RCC['AHB1ENR']['DMA1EN'])
    RCC['AHB1ENR'].addTemplateField('GPIO', RCC['AHB1ENR']['GPIOAEN'])

    # RCC['AHB1ENR']['OTGHSULPIEN'].values = None
    # RCC['AHB1ENR']['OTGHSEN'].values = None
    # RCC['AHB1ENR']['DMA2EN'].values = None
    # RCC['AHB1ENR']['DMA1EN'].values = None
    # RCC['AHB1ENR']['BKPSRAMEN'].values = None
    # RCC['AHB1ENR']['CRCEN'].values = None
    # RCC['AHB1ENR']['GPIOHEN'].values = None
    # RCC['AHB1ENR']['GPIOGEN'].values = None
    # RCC['AHB1ENR']['GPIOFEN'].values = None
    # RCC['AHB1ENR']['GPIOEEN'].values = None
    # RCC['AHB1ENR']['GPIODEN'].values = None
    # RCC['AHB1ENR']['GPIOCEN'].values = None
    # RCC['AHB1ENR']['GPIOBEN'].values = None
    # RCC['AHB1ENR']['GPIOAEN'].values = None

    # -------------------------------------------------------------------------
    # AHB2ENR	(AHB2 peripheral clock enable register)
    # Offset: 52	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['AHB2ENR']['OTGFSEN'].values = None
    RCC['AHB2ENR']['DCMIEN'].values = None

    # -------------------------------------------------------------------------
    # AHB3ENR	(AHB3 peripheral clock enable register)
    # Offset: 56	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['AHB3ENR']['QSPIEN'].values = None
    RCC['AHB3ENR']['FMCEN'].values = None

    # -------------------------------------------------------------------------
    # APB1ENR	(APB1 peripheral clock enable register)
    # Offset: 64	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['APB1ENR'].add([('Enable', 1)]).to_all_fields()
    RCC['APB1ENR'].addTemplateField('I2C', RCC['APB1ENR']['I2C1EN'])
    
    # RCC['APB1ENR']['DACEN'].values = None
    # RCC['APB1ENR']['PWREN'].values = None
    # RCC['APB1ENR']['CEC'].values = None
    # RCC['APB1ENR']['CAN2EN'].values = None
    # RCC['APB1ENR']['CAN1EN'].values = None
    # RCC['APB1ENR']['I2CFMP1EN'].values = None
    # RCC['APB1ENR']['I2C3EN'].values = None
    # RCC['APB1ENR']['I2C2EN'].values = None
    # RCC['APB1ENR']['I2C1EN'].values = None
    # RCC['APB1ENR']['UART5EN'].values = None
    # RCC['APB1ENR']['UART4EN'].values = None
    # RCC['APB1ENR']['USART3EN'].values = None
    # RCC['APB1ENR']['USART2EN'].values = None
    # RCC['APB1ENR']['SPDIFEN'].values = None
    # RCC['APB1ENR']['SPI3EN'].values = None
    # RCC['APB1ENR']['SPI2EN'].values = None
    # RCC['APB1ENR']['WWDGEN'].values = None
    # RCC['APB1ENR']['TIM14EN'].values = None
    # RCC['APB1ENR']['TIM13EN'].values = None
    # RCC['APB1ENR']['TIM12EN'].values = None
    # RCC['APB1ENR']['TIM7EN'].values = None
    # RCC['APB1ENR']['TIM6EN'].values = None
    # RCC['APB1ENR']['TIM5EN'].values = None
    # RCC['APB1ENR']['TIM4EN'].values = None
    # RCC['APB1ENR']['TIM3EN'].values = None
    # RCC['APB1ENR']['TIM2EN'].values = None

    RCC['APB2ENR'].add([('Enable', 1)]).to_all_fields()
    # -------------------------------------------------------------------------
    # APB2ENR	(APB2 peripheral clock enable register)
    # Offset: 68	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    # RCC['APB2ENR']['SAI2EN'].values = None
    # RCC['APB2ENR']['SAI1EN'].values = None
    # RCC['APB2ENR']['TIM11EN'].values = None
    # RCC['APB2ENR']['TIM10EN'].values = None
    # RCC['APB2ENR']['TIM9EN'].values = None
    # RCC['APB2ENR']['SYSCFGEN'].values = None
    # RCC['APB2ENR']['SPI4ENR'].values = None
    # RCC['APB2ENR']['SPI1EN'].values = None
    # RCC['APB2ENR']['SDIOEN'].values = None
    # RCC['APB2ENR']['ADC3EN'].values = None
    # RCC['APB2ENR']['ADC2EN'].values = None
    # RCC['APB2ENR']['ADC1EN'].values = None
    # RCC['APB2ENR']['USART6EN'].values = None
    # RCC['APB2ENR']['USART1EN'].values = None
    # RCC['APB2ENR']['TIM8EN'].values = None
    # RCC['APB2ENR']['TIM1EN'].values = None

    # -------------------------------------------------------------------------
    # AHB1LPENR	(AHB1 peripheral clock enable in low power mode register)
    # Offset: 80	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['AHB1LPENR']['OTGHSULPILPEN'].values = None
    RCC['AHB1LPENR']['OTGHSLPEN'].values = None
    RCC['AHB1LPENR']['DMA2LPEN'].values = None
    RCC['AHB1LPENR']['DMA1LPEN'].values = None
    RCC['AHB1LPENR']['BKPSRAMLPEN'].values = None
    RCC['AHB1LPENR']['SRAM2LPEN'].values = None
    RCC['AHB1LPENR']['SRAM1LPEN'].values = None
    RCC['AHB1LPENR']['FLITFLPEN'].values = None
    RCC['AHB1LPENR']['CRCLPEN'].values = None
    RCC['AHB1LPENR']['GPIOHLPEN'].values = None
    RCC['AHB1LPENR']['GPIOGLPEN'].values = None
    RCC['AHB1LPENR']['GPIOFLPEN'].values = None
    RCC['AHB1LPENR']['GPIOELPEN'].values = None
    RCC['AHB1LPENR']['GPIODLPEN'].values = None
    RCC['AHB1LPENR']['GPIOCLPEN'].values = None
    RCC['AHB1LPENR']['GPIOBLPEN'].values = None
    RCC['AHB1LPENR']['GPIOALPEN'].values = None

    # -------------------------------------------------------------------------
    # AHB2LPENR	(AHB2 peripheral clock enable in low power mode register)
    # Offset: 84	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['AHB2LPENR']['OTGFSLPEN'].values = None
    RCC['AHB2LPENR']['DCMILPEN'].values = None

    # -------------------------------------------------------------------------
    # AHB3LPENR	(AHB3 peripheral clock enable in low power mode register)
    # Offset: 88	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['AHB3LPENR']['QSPILPEN'].values = None
    RCC['AHB3LPENR']['FMCLPEN'].values = None

    # -------------------------------------------------------------------------
    # APB1LPENR	(APB1 peripheral clock enable in low power mode register)
    # Offset: 96	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['APB1LPENR']['DACLPEN'].values = None
    RCC['APB1LPENR']['PWRLPEN'].values = None
    RCC['APB1LPENR']['CECLPEN'].values = None
    RCC['APB1LPENR']['CAN2LPEN'].values = None
    RCC['APB1LPENR']['CAN1LPEN'].values = None
    RCC['APB1LPENR']['I2CFMP1LPEN'].values = None
    RCC['APB1LPENR']['I2C3LPEN'].values = None
    RCC['APB1LPENR']['I2C2LPEN'].values = None
    RCC['APB1LPENR']['I2C1LPEN'].values = None
    RCC['APB1LPENR']['UART5LPEN'].values = None
    RCC['APB1LPENR']['UART4LPEN'].values = None
    RCC['APB1LPENR']['USART3LPEN'].values = None
    RCC['APB1LPENR']['USART2LPEN'].values = None
    RCC['APB1LPENR']['SPDIFLPEN'].values = None
    RCC['APB1LPENR']['SPI3LPEN'].values = None
    RCC['APB1LPENR']['SPI2LPEN'].values = None
    RCC['APB1LPENR']['WWDGLPEN'].values = None
    RCC['APB1LPENR']['TIM14LPEN'].values = None
    RCC['APB1LPENR']['TIM13LPEN'].values = None
    RCC['APB1LPENR']['TIM12LPEN'].values = None
    RCC['APB1LPENR']['TIM7LPEN'].values = None
    RCC['APB1LPENR']['TIM6LPEN'].values = None
    RCC['APB1LPENR']['TIM5LPEN'].values = None
    RCC['APB1LPENR']['TIM4LPEN'].values = None
    RCC['APB1LPENR']['TIM3LPEN'].values = None
    RCC['APB1LPENR']['TIM2LPEN'].values = None

    # -------------------------------------------------------------------------
    # APB2LPENR	(APB2 peripheral clock enabled in low power mode register)
    # Offset: 100	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['APB2LPENR']['SAI2LPEN'].values = None
    RCC['APB2LPENR']['SAI1LPEN'].values = None
    RCC['APB2LPENR']['TIM11LPEN'].values = None
    RCC['APB2LPENR']['TIM10LPEN'].values = None
    RCC['APB2LPENR']['TIM9LPEN'].values = None
    RCC['APB2LPENR']['SYSCFGLPEN'].values = None
    RCC['APB2LPENR']['SPI4LPEN'].values = None
    RCC['APB2LPENR']['SPI1LPEN'].values = None
    RCC['APB2LPENR']['SDIOLPEN'].values = None
    RCC['APB2LPENR']['ADC3LPEN'].values = None
    RCC['APB2LPENR']['ADC2LPEN'].values = None
    RCC['APB2LPENR']['ADC1LPEN'].values = None
    RCC['APB2LPENR']['USART6LPEN'].values = None
    RCC['APB2LPENR']['USART1LPEN'].values = None
    RCC['APB2LPENR']['TIM8LPEN'].values = None
    RCC['APB2LPENR']['TIM1LPEN'].values = None

    # -------------------------------------------------------------------------
    # BDCR	(Backup domain control register)
    # Offset: 112	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['BDCR']['BDRST'].values = None
    RCC['BDCR']['RTCEN'].values = None
    RCC['BDCR']['RTCSEL'].values = None
    RCC['BDCR']['LSEMOD'].values = None
    RCC['BDCR']['LSEBYP'].values = None
    RCC['BDCR']['LSERDY'].values = None
    RCC['BDCR']['LSEON'].values = None

    # -------------------------------------------------------------------------
    # CSR	(clock control & status register)
    # Offset: 116	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['CSR']['LPWRRSTF'].values = None
    RCC['CSR']['WWDGRSTF'].values = None
    RCC['CSR']['WDGRSTF'].values = None
    RCC['CSR']['SFTRSTF'].values = None
    RCC['CSR']['PORRSTF'].values = None
    RCC['CSR']['PADRSTF'].values = None
    RCC['CSR']['BORRSTF'].values = None
    RCC['CSR']['RMVF'].values = None
    RCC['CSR']['LSIRDY'].values = None
    RCC['CSR']['LSION'].values = None

    # -------------------------------------------------------------------------
    # SSCGR	(spread spectrum clock generation register)
    # Offset: 128	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['SSCGR']['SSCGEN'].values = None
    RCC['SSCGR']['SPREADSEL'].values = None
    RCC['SSCGR']['INCSTEP'].values = None
    RCC['SSCGR']['MODPER'].values = None

    # -------------------------------------------------------------------------
    # PLLI2SCFGR	(PLLI2S configuration register)
    # Offset: 132	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['PLLI2SCFGR']['PLLI2SR'].values = None
    RCC['PLLI2SCFGR']['PLLI2SQ'].values = None
    RCC['PLLI2SCFGR']['PLLI2SP'].values = None
    RCC['PLLI2SCFGR']['PLLI2SN'].values = None
    RCC['PLLI2SCFGR']['PLLI2SM'].values = None

    # -------------------------------------------------------------------------
    # PLLSAICFGR	(PLL configuration register)
    # Offset: 136	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['PLLSAICFGR']['PLLSAIQ'].values = None
    RCC['PLLSAICFGR']['PLLSAIP'].values = None
    RCC['PLLSAICFGR']['PLLSAIN'].values = None
    RCC['PLLSAICFGR']['PLLSAIM'].values = None

    # -------------------------------------------------------------------------
    # DCKCFGR	(Dedicated Clock Configuration Register)
    # Offset: 140	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['DCKCFGR']['I2S2SRC'].values = None
    RCC['DCKCFGR']['I2S1SRC'].values = None
    RCC['DCKCFGR']['TIMPRE'].values = None
    RCC['DCKCFGR']['SAI2SRC'].values = None
    RCC['DCKCFGR']['SAI1SRC'].values = None
    RCC['DCKCFGR']['PLLSAIDIVQ'].values = None
    RCC['DCKCFGR']['PLLI2SDIVQ'].values = None

    # -------------------------------------------------------------------------
    # CKGATENR	(clocks gated enable register)
    # Offset: 144	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['CKGATENR']['RCC_CKEN'].values = None
    RCC['CKGATENR']['FLITF_CKEN'].values = None
    RCC['CKGATENR']['SRAM_CKEN'].values = None
    RCC['CKGATENR']['SPARE_CKEN'].values = None
    RCC['CKGATENR']['CM4DBG_CKEN'].values = None
    RCC['CKGATENR']['AHB2APB2_CKEN'].values = None
    RCC['CKGATENR']['AHB2APB1_CKEN'].values = None

    # -------------------------------------------------------------------------
    # DCKCFGR2	(dedicated clocks configuration register 2)
    # Offset: 148	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RCC['DCKCFGR2']['SPDIFSEL'].values = None
    RCC['DCKCFGR2']['SDIOSEL'].values = None
    RCC['DCKCFGR2']['CK48MSEL'].values = None
    RCC['DCKCFGR2']['CECSEL'].values = None
    RCC['DCKCFGR2']['FMPI2C1SEL'].values = None

