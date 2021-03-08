from .import DCMI
from .import FMC
from .import DBG
from .import RCC
from .import SYSCFG
from .import DAC
from .import IWDG
from .import WWDG
from .import RTC
from .import C_ADC
from .import TIM2
from .import TIM5
from .import TIM11
from .import CRC
from .import OTG_FS_GLOBAL
from .import OTG_FS_HOST
from .import OTG_FS_DEVICE
from .import OTG_FS_PWRCLK
from .import NVIC
from .import FLASH
from .import EXTI
from .import OTG_HS_GLOBAL
from .import OTG_HS_HOST
from .import OTG_HS_DEVICE
from .import OTG_HS_PWRCLK
from .import PWR
from .import QUADSPI
from .import SPDIF_RX
from .import SDMMC
from .import HDMI_CEC
from .import FPU
from .import MPU
from .import STK
from .import SCB
from .import NVIC_STIR
from .import FPU_CPACR
from .import SCB_ACTRL
from .import SAI
from .import DMA
from .import GPIO
from .import SPI
from .import ADC
from .import USART
from .import CAN
from .import I2C
from .import UART
from .import TIM1_8
from .import TIM3_4
from .import TIM9_12
from .import TIM10_13_14
from .import TIM6_7


def apply(device):
    DCMI.apply(device['DCMI'])
    FMC.apply(device['FMC'])
    DBG.apply(device['DBG'])
    RCC.apply(device['RCC'])
    SYSCFG.apply(device['SYSCFG'])
    DAC.apply(device['DAC'])
    IWDG.apply(device['IWDG'])
    WWDG.apply(device['WWDG'])
    RTC.apply(device['RTC'])
    C_ADC.apply(device['C_ADC'])
    TIM2.apply(device['TIM2'])
    TIM5.apply(device['TIM5'])
    TIM11.apply(device['TIM11'])
    CRC.apply(device['CRC'])
    OTG_FS_GLOBAL.apply(device['OTG_FS_GLOBAL'])
    OTG_FS_HOST.apply(device['OTG_FS_HOST'])
    OTG_FS_DEVICE.apply(device['OTG_FS_DEVICE'])
    OTG_FS_PWRCLK.apply(device['OTG_FS_PWRCLK'])
    NVIC.apply(device['NVIC'])
    FLASH.apply(device['FLASH'])
    EXTI.apply(device['EXTI'])
    OTG_HS_GLOBAL.apply(device['OTG_HS_GLOBAL'])
    OTG_HS_HOST.apply(device['OTG_HS_HOST'])
    OTG_HS_DEVICE.apply(device['OTG_HS_DEVICE'])
    OTG_HS_PWRCLK.apply(device['OTG_HS_PWRCLK'])
    PWR.apply(device['PWR'])
    QUADSPI.apply(device['QUADSPI'])
    SPDIF_RX.apply(device['SPDIF_RX'])
    SDMMC.apply(device['SDMMC'])
    HDMI_CEC.apply(device['HDMI_CEC'])
    FPU.apply(device['FPU'])
    MPU.apply(device['MPU'])
    STK.apply(device['STK'])
    SCB.apply(device['SCB'])
    NVIC_STIR.apply(device['NVIC_STIR'])
    FPU_CPACR.apply(device['FPU_CPACR'])
    SCB_ACTRL.apply(device['SCB_ACTRL'])
    SAI.apply(device['SAI'])
    DMA.apply(device['DMA'])
    GPIO.apply(device['GPIO'])
    SPI.apply(device['SPI'])
    ADC.apply(device['ADC'])
    USART.apply(device['USART'])
    CAN.apply(device['CAN'])
    I2C.apply(device['I2C'])
    UART.apply(device['UART'])
    TIM1_8.apply(device['TIM1_8'])
    TIM3_4.apply(device['TIM3_4'])
    TIM9_12.apply(device['TIM9_12'])
    TIM10_13_14.apply(device['TIM10_13_14'])
    TIM6_7.apply(device['TIM6_7'])
