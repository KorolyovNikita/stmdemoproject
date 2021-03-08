from tempvalue import*


def apply(SCB):
    # -------------------------------------------------------------------------
    # CPUID	(CPUID base register)
    # Offset: 0	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    SCB['CPUID']['Implementer'].values = None
    SCB['CPUID']['Variant'].values = None
    SCB['CPUID']['Constant'].values = None
    SCB['CPUID']['PartNo'].values = None
    SCB['CPUID']['Revision'].values = None

    # -------------------------------------------------------------------------
    # ICSR	(Interrupt control and state register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB['ICSR']['NMIPENDSET'].values = None
    SCB['ICSR']['PENDSVSET'].values = None
    SCB['ICSR']['PENDSVCLR'].values = None
    SCB['ICSR']['PENDSTSET'].values = None
    SCB['ICSR']['PENDSTCLR'].values = None
    SCB['ICSR']['ISRPENDING'].values = None
    SCB['ICSR']['VECTPENDING'].values = None
    SCB['ICSR']['RETTOBASE'].values = None
    SCB['ICSR']['VECTACTIVE'].values = None

    # -------------------------------------------------------------------------
    # VTOR	(Vector table offset register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB['VTOR']['TBLOFF'].values = None

    # -------------------------------------------------------------------------
    # AIRCR	(Application interrupt and reset control register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB['AIRCR']['VECTKEYSTAT'].values = [('Key0x5FA', 0x5FA)]
    SCB['AIRCR']['ENDIANESS'].values = None
    SCB['AIRCR']['PRIGROUP'].values = [tempvalue('Group', start=3, end=7)]
    SCB['AIRCR']['SYSRESETREQ'].values = None
    SCB['AIRCR']['VECTCLRACTIVE'].values = None
    SCB['AIRCR']['VECTRESET'].values = None

    # -------------------------------------------------------------------------
    # SCR	(System control register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB['SCR']['SEVEONPEND'].values = None
    SCB['SCR']['SLEEPDEEP'].values = None
    SCB['SCR']['SLEEPONEXIT'].values = None

    # -------------------------------------------------------------------------
    # CCR	(Configuration and control register)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB['CCR']['STKALIGN'].values = None
    SCB['CCR']['BFHFNMIGN'].values = None
    SCB['CCR']['DIV_0_TRP'].values = None
    SCB['CCR']['UNALIGN__TRP'].values = None
    SCB['CCR']['USERSETMPEND'].values = None
    SCB['CCR']['NONBASETHRDENA'].values = None


    values = [tempvalue('Priority', start=0, end=15, offset=4)]
    SCB.addLargeReg('SHP_PRI', SCB['SHPR1'], values, number_of_fields=4)
    # -------------------------------------------------------------------------
    # SHPR1	(System handler priority registers)
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB['SHPR1']['PRI_6'].values = None
    SCB['SHPR1']['PRI_5'].values = None
    SCB['SHPR1']['PRI_4'].values = None

    # -------------------------------------------------------------------------
    # SHPR2	(System handler priority registers)
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB['SHPR2']['PRI_11'].values = None

    # -------------------------------------------------------------------------
    # SHPR3	(System handler priority registers)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB['SHPR3']['PRI_15'].values = None
    SCB['SHPR3']['PRI_14'].values = None

    # -------------------------------------------------------------------------
    # SHCRS	(System handler control and state register)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB['SHCRS']['USGFAULTENA'].values = None
    SCB['SHCRS']['BUSFAULTENA'].values = None
    SCB['SHCRS']['MEMFAULTENA'].values = None
    SCB['SHCRS']['SVCALLPENDED'].values = None
    SCB['SHCRS']['BUSFAULTPENDED'].values = None
    SCB['SHCRS']['MEMFAULTPENDED'].values = None
    SCB['SHCRS']['USGFAULTPENDED'].values = None
    SCB['SHCRS']['SYSTICKACT'].values = None
    SCB['SHCRS']['PENDSVACT'].values = None
    SCB['SHCRS']['MONITORACT'].values = None
    SCB['SHCRS']['SVCALLACT'].values = None
    SCB['SHCRS']['USGFAULTACT'].values = None
    SCB['SHCRS']['BUSFAULTACT'].values = None
    SCB['SHCRS']['MEMFAULTACT'].values = None

    # -------------------------------------------------------------------------
    # CFSR_UFSR_BFSR_MMFSR	(Configurable fault status register)
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB['CFSR_UFSR_BFSR_MMFSR']['DIVBYZERO'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['UNALIGNED'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['NOCP'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['INVPC'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['INVSTATE'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['UNDEFINSTR'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['BFARVALID'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['LSPERR'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['STKERR'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['UNSTKERR'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['IMPRECISERR'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['PRECISERR'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['IBUSERR'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['MMARVALID'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['MLSPERR'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['MSTKERR'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['MUNSTKERR'].values = None
    SCB['CFSR_UFSR_BFSR_MMFSR']['IACCVIOL'].values = None

    # -------------------------------------------------------------------------
    # HFSR	(Hard fault status register)
    # Offset: 44	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB['HFSR']['DEBUG_VT'].values = None
    SCB['HFSR']['FORCED'].values = None
    SCB['HFSR']['VECTTBL'].values = None

    # -------------------------------------------------------------------------
    # MMFAR	(Memory management fault address register)
    # Offset: 52	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB['MMFAR']['MMFAR'].values = None

    # -------------------------------------------------------------------------
    # BFAR	(Bus fault address register)
    # Offset: 56	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB['BFAR']['BFAR'].values = None

    # -------------------------------------------------------------------------
    # AFSR	(Auxiliary fault status register)
    # Offset: 60	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    SCB['AFSR']['IMPDEF'].values = None

