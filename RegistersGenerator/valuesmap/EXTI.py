from tempvalue import*


def apply(EXTI):
    # -------------------------------------------------------------------------
    # IMR	(Interrupt mask register (EXTI_IMR))
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    EXTI['IMR'].add(['Disable', 'Enable']).to_all_fields()
    EXTI['IMR'].addTemplateField('MRx', EXTI['IMR']['MR0'])


    # -------------------------------------------------------------------------
    # EMR	(Event mask register (EXTI_EMR))
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    EXTI['EMR'].add(['Disable', 'Enable']).to_all_fields()


    # -------------------------------------------------------------------------
    # RTSR	(Rising Trigger selection register (EXTI_RTSR))
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    EXTI['RTSR'].add(['Disable', 'Enable', tempvalue('Value')]).to_all_fields()
    EXTI['RTSR'].addTemplateField('TRx', EXTI['RTSR']['TR0'])

    # -------------------------------------------------------------------------
    # FTSR	(Falling Trigger selection register (EXTI_FTSR))
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    EXTI['FTSR'].add(['Disable', 'Enable', tempvalue('Value')]).to_all_fields()
    EXTI['FTSR'].addTemplateField('TRx', EXTI['FTSR']['TR0'])

    # -------------------------------------------------------------------------
    # SWIER	(Software interrupt event register (EXTI_SWIER))
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    EXTI['SWIER']['SWIER22'].values = None
    EXTI['SWIER']['SWIER21'].values = None
    EXTI['SWIER']['SWIER20'].values = None
    EXTI['SWIER']['SWIER19'].values = None
    EXTI['SWIER']['SWIER18'].values = None
    EXTI['SWIER']['SWIER17'].values = None
    EXTI['SWIER']['SWIER16'].values = None
    EXTI['SWIER']['SWIER15'].values = None
    EXTI['SWIER']['SWIER14'].values = None
    EXTI['SWIER']['SWIER13'].values = None
    EXTI['SWIER']['SWIER12'].values = None
    EXTI['SWIER']['SWIER11'].values = None
    EXTI['SWIER']['SWIER10'].values = None
    EXTI['SWIER']['SWIER9'].values = None
    EXTI['SWIER']['SWIER8'].values = None
    EXTI['SWIER']['SWIER7'].values = None
    EXTI['SWIER']['SWIER6'].values = None
    EXTI['SWIER']['SWIER5'].values = None
    EXTI['SWIER']['SWIER4'].values = None
    EXTI['SWIER']['SWIER3'].values = None
    EXTI['SWIER']['SWIER2'].values = None
    EXTI['SWIER']['SWIER1'].values = None
    EXTI['SWIER']['SWIER0'].values = None

    # -------------------------------------------------------------------------
    # PR	(Pending register (EXTI_PR))
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    EXTI['PR'].add([('Clear', 1)]).to_all_fields()
    EXTI['PR'].addTemplateField('PRx', EXTI['PR']['PR0'])
