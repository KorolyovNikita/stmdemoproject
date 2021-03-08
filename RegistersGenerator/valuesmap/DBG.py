from tempvalue import*


def apply(DBG):
    # -------------------------------------------------------------------------
    # DBGMCU_IDCODE	(IDCODE)
    # Offset: 0	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    DBG['DBGMCU_IDCODE']['REV_ID'].values = None
    DBG['DBGMCU_IDCODE']['DEV_ID'].values = None

    # -------------------------------------------------------------------------
    # DBGMCU_CR	(Control Register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DBG['DBGMCU_CR']['TRACE_MODE'].values = None
    DBG['DBGMCU_CR']['TRACE_IOEN'].values = None
    DBG['DBGMCU_CR']['DBG_STANDBY'].values = None
    DBG['DBGMCU_CR']['DBG_STOP'].values = None
    DBG['DBGMCU_CR']['DBG_SLEEP'].values = None

    # -------------------------------------------------------------------------
    # DBGMCU_APB1_FZ	(Debug MCU APB1 Freeze registe)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DBG['DBGMCU_APB1_FZ']['DBG_CAN2_STOP'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_CAN1_STOP'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_I2CFMP_SMBUS_TIMEOUT'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_J2C3SMBUS_TIMEOUT'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_J2C2_SMBUS_TIMEOUT'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_J2C1_SMBUS_TIMEOUT'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_IWDEG_STOP'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_WWDG_STOP'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_RTC_STOP'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_TIM14_STOP'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_TIM13_STOP'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_TIM12_STOP'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_TIM7_STOP'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_TIM6_STOP'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_TIM5_STOP'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_TIM4_STOP'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_TIM3_STOP'].values = None
    DBG['DBGMCU_APB1_FZ']['DBG_TIM2_STOP'].values = None

    # -------------------------------------------------------------------------
    # DBGMCU_APB2_FZ	(Debug MCU APB2 Freeze registe)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DBG['DBGMCU_APB2_FZ']['DBG_TIM11_STOP'].values = None
    DBG['DBGMCU_APB2_FZ']['DBG_TIM10_STOP'].values = None
    DBG['DBGMCU_APB2_FZ']['DBG_TIM9_STOP'].values = None
    DBG['DBGMCU_APB2_FZ']['DBG_TIM8_STOP'].values = None
    DBG['DBGMCU_APB2_FZ']['DBG_TIM1_STOP'].values = None

