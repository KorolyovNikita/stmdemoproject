def apply(device):
    device['SAI1_SAI2'].rename('SAI')
    device['DMA2_DMA1'].rename('DMA')
    device['GPIOH_GPIOG_GPIOF_GPIOE_GPIOD_GPIOC'].rename('GPIO')
    device['SPI1_SPI2_SPI3_SPI4'].rename('SPI')
    device['ADC1_ADC2_ADC3'].rename('ADC')
    device['USART6_USART1_USART2_USART3'].rename('USART')
    device['CAN1_CAN2'].rename('CAN')
    device['I2C3_I2C2_I2C1'].rename('I2C')
    device['UART4_UART5'].rename('UART')
    device['TIM1_TIM8'].rename('TIM1_8')
    device['TIM3_TIM4'].rename('TIM3_4')
    device['TIM9_TIM12'].rename('TIM9_12')
    device['TIM10_TIM13_TIM14'].rename('TIM10_13_14')
    device['TIM6_TIM7'].rename('TIM6_7')

    device['GPIOB'].transfer_to(device['GPIO'])
    device['GPIOA'].transfer_to(device['GPIO'])

    device['RCC']['PLLCFGR'].fields_concat(['PLLN0', 'PLLN1', 'PLLN2', 'PLLN3',
                                            'PLLN4', 'PLLN5', 'PLLN6', 'PLLN7',
                                            'PLLN8'], 'PLLN')
    device['RCC']['PLLCFGR'].fields_concat(['PLLM0', 'PLLM1', 'PLLM2', 'PLLM3',
                                            'PLLM4', 'PLLM5'], 'PLLM')
    device['RCC']['PLLCFGR'].fields_concat(['PLLQ0', 'PLLQ1', 'PLLQ2',
                                            'PLLQ3'], 'PLLQ')
    device['RCC']['PLLCFGR'].fields_concat(['PLLP0', 'PLLP1'], 'PLLP')

    device['RCC']['CFGR'].fields_concat(['SWS0', 'SWS1'], 'SWS')
    device['RCC']['CFGR'].fields_concat(['SW0', 'SW1'], 'SW')
