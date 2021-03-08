from tempvalue import*


def apply(RTC):
    # -------------------------------------------------------------------------
    # TR	(time register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['TR']['PM'].values = None
    RTC['TR']['HT'].values = None
    RTC['TR']['HU'].values = None
    RTC['TR']['MNT'].values = None
    RTC['TR']['MNU'].values = None
    RTC['TR']['ST'].values = None
    RTC['TR']['SU'].values = None

    # -------------------------------------------------------------------------
    # DR	(date register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['DR']['YT'].values = None
    RTC['DR']['YU'].values = None
    RTC['DR']['WDU'].values = None
    RTC['DR']['MT'].values = None
    RTC['DR']['MU'].values = None
    RTC['DR']['DT'].values = None
    RTC['DR']['DU'].values = None

    # -------------------------------------------------------------------------
    # CR	(control register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['CR']['COE'].values = None
    RTC['CR']['OSEL'].values = None
    RTC['CR']['POL'].values = None
    RTC['CR']['BKP'].values = None
    RTC['CR']['SUB1H'].values = None
    RTC['CR']['ADD1H'].values = None
    RTC['CR']['TSIE'].values = None
    RTC['CR']['WUTIE'].values = None
    RTC['CR']['ALRBIE'].values = None
    RTC['CR']['ALRAIE'].values = None
    RTC['CR']['TSE'].values = None
    RTC['CR']['WUTE'].values = None
    RTC['CR']['ALRBE'].values = None
    RTC['CR']['ALRAE'].values = None
    RTC['CR']['DCE'].values = None
    RTC['CR']['FMT'].values = None
    RTC['CR']['REFCKON'].values = None
    RTC['CR']['TSEDGE'].values = None
    RTC['CR']['WCKSEL'].values = None

    # -------------------------------------------------------------------------
    # ISR	(initialization and status register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['ISR']['RECALPF'].values = None
    RTC['ISR']['TAMP2F'].values = None
    RTC['ISR']['TAMP1F'].values = None
    RTC['ISR']['TSOVF'].values = None
    RTC['ISR']['TSF'].values = None
    RTC['ISR']['WUTF'].values = None
    RTC['ISR']['ALRBF'].values = None
    RTC['ISR']['ALRAF'].values = None
    RTC['ISR']['INIT'].values = None
    RTC['ISR']['INITF'].values = None
    RTC['ISR']['RSF'].values = None
    RTC['ISR']['INITS'].values = None
    RTC['ISR']['SHPF'].values = None
    RTC['ISR']['WUTWF'].values = None
    RTC['ISR']['ALRBWF'].values = None
    RTC['ISR']['ALRAWF'].values = None

    # -------------------------------------------------------------------------
    # PRER	(prescaler register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['PRER']['PREDIV_A'].values = None
    RTC['PRER']['PREDIV_S'].values = None

    # -------------------------------------------------------------------------
    # WUTR	(wakeup timer register)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['WUTR']['WUT'].values = None

    # -------------------------------------------------------------------------
    # CALIBR	(calibration register)
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['CALIBR']['DCS'].values = None
    RTC['CALIBR']['DC'].values = None

    # -------------------------------------------------------------------------
    # ALRMAR	(alarm A register)
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['ALRMAR']['MSK4'].values = None
    RTC['ALRMAR']['WDSEL'].values = None
    RTC['ALRMAR']['DT'].values = None
    RTC['ALRMAR']['DU'].values = None
    RTC['ALRMAR']['MSK3'].values = None
    RTC['ALRMAR']['PM'].values = None
    RTC['ALRMAR']['HT'].values = None
    RTC['ALRMAR']['HU'].values = None
    RTC['ALRMAR']['MSK2'].values = None
    RTC['ALRMAR']['MNT'].values = None
    RTC['ALRMAR']['MNU'].values = None
    RTC['ALRMAR']['MSK1'].values = None
    RTC['ALRMAR']['ST'].values = None
    RTC['ALRMAR']['SU'].values = None

    # -------------------------------------------------------------------------
    # ALRMBR	(alarm B register)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['ALRMBR']['MSK4'].values = None
    RTC['ALRMBR']['WDSEL'].values = None
    RTC['ALRMBR']['DT'].values = None
    RTC['ALRMBR']['DU'].values = None
    RTC['ALRMBR']['MSK3'].values = None
    RTC['ALRMBR']['PM'].values = None
    RTC['ALRMBR']['HT'].values = None
    RTC['ALRMBR']['HU'].values = None
    RTC['ALRMBR']['MSK2'].values = None
    RTC['ALRMBR']['MNT'].values = None
    RTC['ALRMBR']['MNU'].values = None
    RTC['ALRMBR']['MSK1'].values = None
    RTC['ALRMBR']['ST'].values = None
    RTC['ALRMBR']['SU'].values = None

    # -------------------------------------------------------------------------
    # WPR	(write protection register)
    # Offset: 36	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    RTC['WPR']['KEY'].values = None

    # -------------------------------------------------------------------------
    # SSR	(sub second register)
    # Offset: 40	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    RTC['SSR']['SS'].values = None

    # -------------------------------------------------------------------------
    # SHIFTR	(shift control register)
    # Offset: 44	Size: 32	Access: WriteMode
    # -------------------------------------------------------------------------
    RTC['SHIFTR']['ADD1S'].values = None
    RTC['SHIFTR']['SUBFS'].values = None

    # -------------------------------------------------------------------------
    # TSTR	(time stamp time register)
    # Offset: 48	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    RTC['TSTR']['ALARMOUTTYPE'].values = None
    RTC['TSTR']['TSINSEL'].values = None
    RTC['TSTR']['TAMP1INSEL'].values = None
    RTC['TSTR']['TAMPIE'].values = None
    RTC['TSTR']['TAMP1TRG'].values = None
    RTC['TSTR']['TAMP1E'].values = None

    # -------------------------------------------------------------------------
    # TSDR	(time stamp date register)
    # Offset: 52	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    RTC['TSDR']['WDU'].values = None
    RTC['TSDR']['MT'].values = None
    RTC['TSDR']['MU'].values = None
    RTC['TSDR']['DT'].values = None
    RTC['TSDR']['DU'].values = None

    # -------------------------------------------------------------------------
    # TSSSR	(timestamp sub second register)
    # Offset: 56	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    RTC['TSSSR']['SS'].values = None

    # -------------------------------------------------------------------------
    # CALR	(calibration register)
    # Offset: 60	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['CALR']['CALP'].values = None
    RTC['CALR']['CALW8'].values = None
    RTC['CALR']['CALW16'].values = None
    RTC['CALR']['CALM'].values = None

    # -------------------------------------------------------------------------
    # TAFCR	(tamper and alternate function configuration register)
    # Offset: 64	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['TAFCR']['ALARMOUTTYPE'].values = None
    RTC['TAFCR']['TSINSEL'].values = None
    RTC['TAFCR']['TAMP1INSEL'].values = None
    RTC['TAFCR']['TAMPPUDIS'].values = None
    RTC['TAFCR']['TAMPPRCH'].values = None
    RTC['TAFCR']['TAMPFLT'].values = None
    RTC['TAFCR']['TAMPFREQ'].values = None
    RTC['TAFCR']['TAMPTS'].values = None
    RTC['TAFCR']['TAMP2TRG'].values = None
    RTC['TAFCR']['TAMP2E'].values = None
    RTC['TAFCR']['TAMPIE'].values = None
    RTC['TAFCR']['TAMP1TRG'].values = None
    RTC['TAFCR']['TAMP1E'].values = None

    # -------------------------------------------------------------------------
    # ALRMASSR	(alarm A sub second register)
    # Offset: 68	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['ALRMASSR']['MASKSS'].values = None
    RTC['ALRMASSR']['SS'].values = None

    # -------------------------------------------------------------------------
    # ALRMBSSR	(alarm B sub second register)
    # Offset: 72	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['ALRMBSSR']['MASKSS'].values = None
    RTC['ALRMBSSR']['SS'].values = None

    # -------------------------------------------------------------------------
    # BKP0R	(backup register)
    # Offset: 80	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP0R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP1R	(backup register)
    # Offset: 84	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP1R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP2R	(backup register)
    # Offset: 88	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP2R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP3R	(backup register)
    # Offset: 92	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP3R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP4R	(backup register)
    # Offset: 96	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP4R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP5R	(backup register)
    # Offset: 100	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP5R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP6R	(backup register)
    # Offset: 104	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP6R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP7R	(backup register)
    # Offset: 108	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP7R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP8R	(backup register)
    # Offset: 112	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP8R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP9R	(backup register)
    # Offset: 116	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP9R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP10R	(backup register)
    # Offset: 120	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP10R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP11R	(backup register)
    # Offset: 124	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP11R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP12R	(backup register)
    # Offset: 128	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP12R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP13R	(backup register)
    # Offset: 132	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP13R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP14R	(backup register)
    # Offset: 136	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP14R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP15R	(backup register)
    # Offset: 140	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP15R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP16R	(backup register)
    # Offset: 144	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP16R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP17R	(backup register)
    # Offset: 148	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP17R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP18R	(backup register)
    # Offset: 152	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP18R']['BKP'].values = None

    # -------------------------------------------------------------------------
    # BKP19R	(backup register)
    # Offset: 156	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    RTC['BKP19R']['BKP'].values = None

