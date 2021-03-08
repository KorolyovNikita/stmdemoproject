from tempvalue import*


def apply(MPU):
    # -------------------------------------------------------------------------
    # MPU_TYPER	(MPU type register)
    # Offset: 0	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    MPU['MPU_TYPER']['IREGION'].values = None
    MPU['MPU_TYPER']['DREGION'].values = None
    MPU['MPU_TYPER']['SEPARATE'].values = None

    # -------------------------------------------------------------------------
    # MPU_CTRL	(MPU control register)
    # Offset: 4	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    MPU['MPU_CTRL']['PRIVDEFENA'].values = None
    MPU['MPU_CTRL']['HFNMIENA'].values = None
    MPU['MPU_CTRL']['ENABLE'].values = None

    # -------------------------------------------------------------------------
    # MPU_RNR	(MPU region number register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    MPU['MPU_RNR']['REGION'].values = None

    # -------------------------------------------------------------------------
    # MPU_RBAR	(MPU region base address register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    MPU['MPU_RBAR']['ADDR'].values = None
    MPU['MPU_RBAR']['VALID'].values = None
    MPU['MPU_RBAR']['REGION'].values = None

    # -------------------------------------------------------------------------
    # MPU_RASR	(MPU region attribute and size register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    MPU['MPU_RASR']['XN'].values = None
    MPU['MPU_RASR']['AP'].values = None
    MPU['MPU_RASR']['TEX'].values = None
    MPU['MPU_RASR']['S'].values = None
    MPU['MPU_RASR']['C'].values = None
    MPU['MPU_RASR']['B'].values = None
    MPU['MPU_RASR']['SRD'].values = None
    MPU['MPU_RASR']['SIZE'].values = None
    MPU['MPU_RASR']['ENABLE'].values = None

