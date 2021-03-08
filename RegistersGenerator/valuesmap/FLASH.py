from tempvalue import*


def apply(FLASH):
    # -------------------------------------------------------------------------
    # ACR	(Flash access control register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    FLASH['ACR']['DCRST'].values = None
    FLASH['ACR']['ICRST'].values = None
    FLASH['ACR']['DCEN'].values = None
    FLASH['ACR']['ICEN'].values = None
    FLASH['ACR']['PRFTEN'].values = ['Disable', 'Enable']
    FLASH['ACR']['LATENCY'].values = [tempvalue('Value')]

    # -------------------------------------------------------------------------
    # KEYR	(Flash key register)
    # Offset: 4	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    FLASH['KEYR']['KEY'].values = None

    # -------------------------------------------------------------------------
    # OPTKEYR	(Flash option key register)
    # Offset: 8	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    FLASH['OPTKEYR']['OPTKEY'].values = None

    # -------------------------------------------------------------------------
    # SR	(Status register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    FLASH['SR']['BSY'].values = None
    FLASH['SR']['RDERR'].values = None
    FLASH['SR']['PGSERR'].values = None
    FLASH['SR']['PGPERR'].values = None
    FLASH['SR']['PGAERR'].values = None
    FLASH['SR']['WRPERR'].values = None
    FLASH['SR']['OPERR'].values = None
    FLASH['SR']['EOP'].values = None

    # -------------------------------------------------------------------------
    # CR	(Control register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    FLASH['CR']['LOCK'].values = None
    FLASH['CR']['ERRIE'].values = None
    FLASH['CR']['EOPIE'].values = None
    FLASH['CR']['STRT'].values = None
    FLASH['CR']['PSIZE'].values = None
    FLASH['CR']['SNB'].values = None
    FLASH['CR']['MER'].values = None
    FLASH['CR']['SER'].values = None
    FLASH['CR']['PG'].values = None

    # -------------------------------------------------------------------------
    # OPTCR	(Flash option control register)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    FLASH['OPTCR']['SPRMOD'].values = None
    FLASH['OPTCR']['nWRP'].values = None
    FLASH['OPTCR']['RDP'].values = None
    FLASH['OPTCR']['nRST_STDBY'].values = None
    FLASH['OPTCR']['nRST_STOP'].values = None
    FLASH['OPTCR']['WDG_SW'].values = None
    FLASH['OPTCR']['BOR_LEV'].values = None
    FLASH['OPTCR']['OPTSTRT'].values = None
    FLASH['OPTCR']['OPTLOCK'].values = None

