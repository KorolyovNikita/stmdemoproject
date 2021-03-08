from tempvalue import*


def apply(NVIC):

    NVIC.addLargeReg('ISER_SETENA', NVIC['ISER0'], [('Enable', 1)], number_of_fields=32)
    # -------------------------------------------------------------------------
    # ISER0	(Interrupt Set-Enable Register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['ISER0']['SETENA'].values = None

    # -------------------------------------------------------------------------
    # ISER1	(Interrupt Set-Enable Register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['ISER1']['SETENA'].values = None

    # -------------------------------------------------------------------------
    # ISER2	(Interrupt Set-Enable Register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['ISER2']['SETENA'].values = None


    NVIC.addLargeReg('ICER_CLRENA', NVIC['ICER0'], [('Clear', 1)], number_of_fields=32)
    # -------------------------------------------------------------------------
    # ICER0	(Interrupt Clear-Enable Register)
    # Offset: 128	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['ICER0']['CLRENA'].values = None

    # -------------------------------------------------------------------------
    # ICER1	(Interrupt Clear-Enable Register)
    # Offset: 132	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['ICER1']['CLRENA'].values = None

    # -------------------------------------------------------------------------
    # ICER2	(Interrupt Clear-Enable Register)
    # Offset: 136	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['ICER2']['CLRENA'].values = None


    # -------------------------------------------------------------------------
    # ISPR0	(Interrupt Set-Pending Register)
    # Offset: 256	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['ISPR0']['SETPEND'].values = None

    # -------------------------------------------------------------------------
    # ISPR1	(Interrupt Set-Pending Register)
    # Offset: 260	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['ISPR1']['SETPEND'].values = None

    # -------------------------------------------------------------------------
    # ISPR2	(Interrupt Set-Pending Register)
    # Offset: 264	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['ISPR2']['SETPEND'].values = None


    # -------------------------------------------------------------------------
    # ICPR0	(Interrupt Clear-Pending Register)
    # Offset: 384	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['ICPR0']['CLRPEND'].values = None

    # -------------------------------------------------------------------------
    # ICPR1	(Interrupt Clear-Pending Register)
    # Offset: 388	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['ICPR1']['CLRPEND'].values = None

    # -------------------------------------------------------------------------
    # ICPR2	(Interrupt Clear-Pending Register)
    # Offset: 392	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['ICPR2']['CLRPEND'].values = None


    # -------------------------------------------------------------------------
    # IABR0	(Interrupt Active Bit Register)
    # Offset: 512	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    NVIC['IABR0']['ACTIVE'].values = None

    # -------------------------------------------------------------------------
    # IABR1	(Interrupt Active Bit Register)
    # Offset: 516	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    NVIC['IABR1']['ACTIVE'].values = None

    # -------------------------------------------------------------------------
    # IABR2	(Interrupt Active Bit Register)
    # Offset: 520	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    NVIC['IABR2']['ACTIVE'].values = None

    values = [tempvalue('Priority', start=0, end=15, offset=4)]
    NVIC.addLargeReg('IPR', NVIC['IPR0'], values)
    # -------------------------------------------------------------------------
    # IPR0	(Interrupt Priority Register)
    # Offset: 768	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR0']['IPR_N3'].values = None
    NVIC['IPR0']['IPR_N2'].values = None
    NVIC['IPR0']['IPR_N1'].values = None
    NVIC['IPR0']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR1	(Interrupt Priority Register)
    # Offset: 772	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR1']['IPR_N3'].values = None
    NVIC['IPR1']['IPR_N2'].values = None
    NVIC['IPR1']['IPR_N1'].values = None
    NVIC['IPR1']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR2	(Interrupt Priority Register)
    # Offset: 776	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR2']['IPR_N3'].values = None
    NVIC['IPR2']['IPR_N2'].values = None
    NVIC['IPR2']['IPR_N1'].values = None
    NVIC['IPR2']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR3	(Interrupt Priority Register)
    # Offset: 780	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR3']['IPR_N3'].values = None
    NVIC['IPR3']['IPR_N2'].values = None
    NVIC['IPR3']['IPR_N1'].values = None
    NVIC['IPR3']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR4	(Interrupt Priority Register)
    # Offset: 784	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR4']['IPR_N3'].values = None
    NVIC['IPR4']['IPR_N2'].values = None
    NVIC['IPR4']['IPR_N1'].values = None
    NVIC['IPR4']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR5	(Interrupt Priority Register)
    # Offset: 788	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR5']['IPR_N3'].values = None
    NVIC['IPR5']['IPR_N2'].values = None
    NVIC['IPR5']['IPR_N1'].values = None
    NVIC['IPR5']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR6	(Interrupt Priority Register)
    # Offset: 792	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR6']['IPR_N3'].values = None
    NVIC['IPR6']['IPR_N2'].values = None
    NVIC['IPR6']['IPR_N1'].values = None
    NVIC['IPR6']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR7	(Interrupt Priority Register)
    # Offset: 796	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR7']['IPR_N3'].values = None
    NVIC['IPR7']['IPR_N2'].values = None
    NVIC['IPR7']['IPR_N1'].values = None
    NVIC['IPR7']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR8	(Interrupt Priority Register)
    # Offset: 800	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR8']['IPR_N3'].values = None
    NVIC['IPR8']['IPR_N2'].values = None
    NVIC['IPR8']['IPR_N1'].values = None
    NVIC['IPR8']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR9	(Interrupt Priority Register)
    # Offset: 804	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR9']['IPR_N3'].values = None
    NVIC['IPR9']['IPR_N2'].values = None
    NVIC['IPR9']['IPR_N1'].values = None
    NVIC['IPR9']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR10	(Interrupt Priority Register)
    # Offset: 808	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR10']['IPR_N3'].values = None
    NVIC['IPR10']['IPR_N2'].values = None
    NVIC['IPR10']['IPR_N1'].values = None
    NVIC['IPR10']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR11	(Interrupt Priority Register)
    # Offset: 812	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR11']['IPR_N3'].values = None
    NVIC['IPR11']['IPR_N2'].values = None
    NVIC['IPR11']['IPR_N1'].values = None
    NVIC['IPR11']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR12	(Interrupt Priority Register)
    # Offset: 816	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR12']['IPR_N3'].values = None
    NVIC['IPR12']['IPR_N2'].values = None
    NVIC['IPR12']['IPR_N1'].values = None
    NVIC['IPR12']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR13	(Interrupt Priority Register)
    # Offset: 820	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR13']['IPR_N3'].values = None
    NVIC['IPR13']['IPR_N2'].values = None
    NVIC['IPR13']['IPR_N1'].values = None
    NVIC['IPR13']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR14	(Interrupt Priority Register)
    # Offset: 824	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR14']['IPR_N3'].values = None
    NVIC['IPR14']['IPR_N2'].values = None
    NVIC['IPR14']['IPR_N1'].values = None
    NVIC['IPR14']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR15	(Interrupt Priority Register)
    # Offset: 828	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR15']['IPR_N3'].values = None
    NVIC['IPR15']['IPR_N2'].values = None
    NVIC['IPR15']['IPR_N1'].values = None
    NVIC['IPR15']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR16	(Interrupt Priority Register)
    # Offset: 832	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR16']['IPR_N3'].values = None
    NVIC['IPR16']['IPR_N2'].values = None
    NVIC['IPR16']['IPR_N1'].values = None
    NVIC['IPR16']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR17	(Interrupt Priority Register)
    # Offset: 836	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR17']['IPR_N3'].values = None
    NVIC['IPR17']['IPR_N2'].values = None
    NVIC['IPR17']['IPR_N1'].values = None
    NVIC['IPR17']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR18	(Interrupt Priority Register)
    # Offset: 840	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR18']['IPR_N3'].values = None
    NVIC['IPR18']['IPR_N2'].values = None
    NVIC['IPR18']['IPR_N1'].values = None
    NVIC['IPR18']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR19	(Interrupt Priority Register)
    # Offset: 844	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR19']['IPR_N3'].values = None
    NVIC['IPR19']['IPR_N2'].values = None
    NVIC['IPR19']['IPR_N1'].values = None
    NVIC['IPR19']['IPR_N0'].values = None

    # -------------------------------------------------------------------------
    # IPR20	(Interrupt Priority Register)
    # Offset: 848	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    NVIC['IPR20']['IPR_N3'].values = None
    NVIC['IPR20']['IPR_N2'].values = None
    NVIC['IPR20']['IPR_N1'].values = None
    NVIC['IPR20']['IPR_N0'].values = None

