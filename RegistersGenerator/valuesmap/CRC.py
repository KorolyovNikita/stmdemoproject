from tempvalue import*


def apply(CRC):
    # -------------------------------------------------------------------------
    # DR	(Data register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CRC['DR']['DR'].values = None

    # -------------------------------------------------------------------------
    # IDR	(Independent Data register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CRC['IDR']['IDR'].values = None

    # -------------------------------------------------------------------------
    # CR	(Control register)
    # Offset: 8	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    CRC['CR']['CR'].values = None

