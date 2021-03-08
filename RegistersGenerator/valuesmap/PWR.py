from tempvalue import*


def apply(PWR):
    # -------------------------------------------------------------------------
    # CR	(power control register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    PWR['CR']['FISSR'].values = None
    PWR['CR']['FMSSR'].values = None
    PWR['CR']['UDEN'].values = None
    PWR['CR']['ODSWEN'].values = None
    PWR['CR']['ODEN'].values = None
    PWR['CR']['VOS'].values = None
    PWR['CR']['ADCDC1'].values = None
    PWR['CR']['MRLVDS'].values = None
    PWR['CR']['LPLVDS'].values = None
    PWR['CR']['FPDS'].values = None
    PWR['CR']['DBP'].values = None
    PWR['CR']['PLS'].values = None
    PWR['CR']['PVDE'].values = None
    PWR['CR']['CSBF'].values = None
    PWR['CR']['CWUF'].values = None
    PWR['CR']['PDDS'].values = None
    PWR['CR']['LPDS'].values = None

    # -------------------------------------------------------------------------
    # CSR	(power control/status register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    PWR['CSR']['UDRDY'].values = None
    PWR['CSR']['ODSWRDY'].values = None
    PWR['CSR']['ODRDY'].values = None
    PWR['CSR']['VOSRDY'].values = None
    PWR['CSR']['BRE'].values = None
    PWR['CSR']['EWUP'].values = None
    PWR['CSR']['EWUP2'].values = None
    PWR['CSR']['BRR'].values = None
    PWR['CSR']['PVDO'].values = None
    PWR['CSR']['SBF'].values = None
    PWR['CSR']['WUF'].values = None

