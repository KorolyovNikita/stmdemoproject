from tempvalue import*


def apply(DCMI):
    # -------------------------------------------------------------------------
    # CR	(control register 1)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DCMI['CR']['OELS'].values = None
    DCMI['CR']['LSM'].values = None
    DCMI['CR']['OEBS'].values = None
    DCMI['CR']['BSM'].values = None
    DCMI['CR']['ENABLE'].values = None
    DCMI['CR']['EDM'].values = None
    DCMI['CR']['FCRC'].values = None
    DCMI['CR']['VSPOL'].values = None
    DCMI['CR']['HSPOL'].values = None
    DCMI['CR']['PCKPOL'].values = None
    DCMI['CR']['ESS'].values = None
    DCMI['CR']['JPEG'].values = None
    DCMI['CR']['CROP'].values = None
    DCMI['CR']['CM'].values = None
    DCMI['CR']['CAPTURE'].values = None

    # -------------------------------------------------------------------------
    # SR	(status register)
    # Offset: 4	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    DCMI['SR']['FNE'].values = None
    DCMI['SR']['VSYNC'].values = None
    DCMI['SR']['HSYNC'].values = None

    # -------------------------------------------------------------------------
    # RIS	(raw interrupt status register)
    # Offset: 8	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    DCMI['RIS']['LINE_RIS'].values = None
    DCMI['RIS']['VSYNC_RIS'].values = None
    DCMI['RIS']['ERR_RIS'].values = None
    DCMI['RIS']['OVR_RIS'].values = None
    DCMI['RIS']['FRAME_RIS'].values = None

    # -------------------------------------------------------------------------
    # IER	(interrupt enable register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DCMI['IER']['LINE_IE'].values = None
    DCMI['IER']['VSYNC_IE'].values = None
    DCMI['IER']['ERR_IE'].values = None
    DCMI['IER']['OVR_IE'].values = None
    DCMI['IER']['FRAME_IE'].values = None

    # -------------------------------------------------------------------------
    # MIS	(masked interrupt status register)
    # Offset: 16	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    DCMI['MIS']['LINE_MIS'].values = None
    DCMI['MIS']['VSYNC_MIS'].values = None
    DCMI['MIS']['ERR_MIS'].values = None
    DCMI['MIS']['OVR_MIS'].values = None
    DCMI['MIS']['FRAME_MIS'].values = None

    # -------------------------------------------------------------------------
    # ICR	(interrupt clear register)
    # Offset: 20	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    DCMI['ICR']['LINE_ISC'].values = None
    DCMI['ICR']['VSYNC_ISC'].values = None
    DCMI['ICR']['ERR_ISC'].values = None
    DCMI['ICR']['OVR_ISC'].values = None
    DCMI['ICR']['FRAME_ISC'].values = None

    # -------------------------------------------------------------------------
    # ESCR	(embedded synchronization code register)
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DCMI['ESCR']['FEC'].values = None
    DCMI['ESCR']['LEC'].values = None
    DCMI['ESCR']['LSC'].values = None
    DCMI['ESCR']['FSC'].values = None

    # -------------------------------------------------------------------------
    # ESUR	(embedded synchronization unmask register)
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DCMI['ESUR']['FEU'].values = None
    DCMI['ESUR']['LEU'].values = None
    DCMI['ESUR']['LSU'].values = None
    DCMI['ESUR']['FSU'].values = None

    # -------------------------------------------------------------------------
    # CWSTRT	(crop window start)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DCMI['CWSTRT']['VST'].values = None
    DCMI['CWSTRT']['HOFFCNT'].values = None

    # -------------------------------------------------------------------------
    # CWSIZE	(crop window size)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    DCMI['CWSIZE']['VLINE'].values = None
    DCMI['CWSIZE']['CAPCNT'].values = None

    # -------------------------------------------------------------------------
    # DR	(data register)
    # Offset: 40	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    DCMI['DR']['Byte3'].values = None
    DCMI['DR']['Byte2'].values = None
    DCMI['DR']['Byte1'].values = None
    DCMI['DR']['Byte0'].values = None

