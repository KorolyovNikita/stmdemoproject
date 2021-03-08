from tempvalue import*


def apply(DAC):
    # -------------------------------------------------------------------------
    # CR	(control register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DAC['CR']['DMAUDRIE2'].values = None
    DAC['CR']['DMAEN2'].values = None
    DAC['CR']['MAMP2'].values = None
    DAC['CR']['WAVE2'].values = None
    DAC['CR']['TSEL2'].values = None
    DAC['CR']['TEN2'].values = None
    DAC['CR']['BOFF2'].values = None
    DAC['CR']['EN2'].values = None
    DAC['CR']['DMAUDRIE1'].values = None
    DAC['CR']['DMAEN1'].values = None
    DAC['CR']['MAMP1'].values = None
    DAC['CR']['WAVE1'].values = None
    DAC['CR']['TSEL1'].values = None
    DAC['CR']['TEN1'].values = None
    DAC['CR']['BOFF1'].values = None
    DAC['CR']['EN1'].values = None

    # -------------------------------------------------------------------------
    # SWTRIGR	(software trigger register)
    # Offset: 4	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    DAC['SWTRIGR']['SWTRIG2'].values = None
    DAC['SWTRIGR']['SWTRIG1'].values = None

    # -------------------------------------------------------------------------
    # DHR12R1	(channel1 12-bit right-aligned data holding register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DAC['DHR12R1']['DACC1DHR'].values = None

    # -------------------------------------------------------------------------
    # DHR12L1	(channel1 12-bit left aligned data holding register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DAC['DHR12L1']['DACC1DHR'].values = None

    # -------------------------------------------------------------------------
    # DHR8R1	(channel1 8-bit right aligned data holding register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DAC['DHR8R1']['DACC1DHR'].values = None

    # -------------------------------------------------------------------------
    # DHR12R2	(channel2 12-bit right aligned data holding register)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DAC['DHR12R2']['DACC2DHR'].values = None

    # -------------------------------------------------------------------------
    # DHR12L2	(channel2 12-bit left aligned data holding register)
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DAC['DHR12L2']['DACC2DHR'].values = None

    # -------------------------------------------------------------------------
    # DHR8R2	(channel2 8-bit right-aligned data holding register)
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DAC['DHR8R2']['DACC2DHR'].values = None

    # -------------------------------------------------------------------------
    # DHR12RD	(Dual DAC 12-bit right-aligned data holding register)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DAC['DHR12RD']['DACC2DHR'].values = None
    DAC['DHR12RD']['DACC1DHR'].values = None

    # -------------------------------------------------------------------------
    # DHR12LD	(DUAL DAC 12-bit left aligned data holding register)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DAC['DHR12LD']['DACC2DHR'].values = None
    DAC['DHR12LD']['DACC1DHR'].values = None

    # -------------------------------------------------------------------------
    # DHR8RD	(DUAL DAC 8-bit right aligned data holding register)
    # Offset: 40	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DAC['DHR8RD']['DACC2DHR'].values = None
    DAC['DHR8RD']['DACC1DHR'].values = None

    # -------------------------------------------------------------------------
    # DOR1	(channel1 data output register)
    # Offset: 44	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    DAC['DOR1']['DACC1DOR'].values = None

    # -------------------------------------------------------------------------
    # DOR2	(channel2 data output register)
    # Offset: 48	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    DAC['DOR2']['DACC2DOR'].values = None

    # -------------------------------------------------------------------------
    # SR	(status register)
    # Offset: 52	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DAC['SR']['DMAUDR2'].values = None
    DAC['SR']['DMAUDR1'].values = None

