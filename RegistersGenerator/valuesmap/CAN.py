from tempvalue import*


def apply(CAN):
    # -------------------------------------------------------------------------
    # MCR	(master control register)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['MCR']['DBF'].values = None
    CAN['MCR']['RESET'].values = None
    CAN['MCR']['TTCM'].values = None
    CAN['MCR']['ABOM'].values = None
    CAN['MCR']['AWUM'].values = None
    CAN['MCR']['NART'].values = None
    CAN['MCR']['RFLM'].values = None
    CAN['MCR']['TXFP'].values = None
    CAN['MCR']['SLEEP'].values = None
    CAN['MCR']['INRQ'].values = None

    # -------------------------------------------------------------------------
    # MSR	(master status register)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['MSR']['RX'].values = None
    CAN['MSR']['SAMP'].values = None
    CAN['MSR']['RXM'].values = None
    CAN['MSR']['TXM'].values = None
    CAN['MSR']['SLAKI'].values = None
    CAN['MSR']['WKUI'].values = None
    CAN['MSR']['ERRI'].values = None
    CAN['MSR']['SLAK'].values = None
    CAN['MSR']['INAK'].values = None

    # -------------------------------------------------------------------------
    # TSR	(transmit status register)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['TSR']['LOW2'].values = None
    CAN['TSR']['LOW1'].values = None
    CAN['TSR']['LOW0'].values = None
    CAN['TSR']['TME2'].values = None
    CAN['TSR']['TME1'].values = None
    CAN['TSR']['TME0'].values = None
    CAN['TSR']['CODE'].values = None
    CAN['TSR']['ABRQ2'].values = None
    CAN['TSR']['TERR2'].values = None
    CAN['TSR']['ALST2'].values = None
    CAN['TSR']['TXOK2'].values = None
    CAN['TSR']['RQCP2'].values = None
    CAN['TSR']['ABRQ1'].values = None
    CAN['TSR']['TERR1'].values = None
    CAN['TSR']['ALST1'].values = None
    CAN['TSR']['TXOK1'].values = None
    CAN['TSR']['RQCP1'].values = None
    CAN['TSR']['ABRQ0'].values = None
    CAN['TSR']['TERR0'].values = None
    CAN['TSR']['ALST0'].values = None
    CAN['TSR']['TXOK0'].values = None
    CAN['TSR']['RQCP0'].values = None

    # -------------------------------------------------------------------------
    # RF0R	(receive FIFO 0 register)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['RF0R']['RFOM0'].values = None
    CAN['RF0R']['FOVR0'].values = None
    CAN['RF0R']['FULL0'].values = None
    CAN['RF0R']['FMP0'].values = None

    # -------------------------------------------------------------------------
    # RF1R	(receive FIFO 1 register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['RF1R']['RFOM1'].values = None
    CAN['RF1R']['FOVR1'].values = None
    CAN['RF1R']['FULL1'].values = None
    CAN['RF1R']['FMP1'].values = None

    # -------------------------------------------------------------------------
    # IER	(interrupt enable register)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['IER']['SLKIE'].values = None
    CAN['IER']['WKUIE'].values = None
    CAN['IER']['ERRIE'].values = None
    CAN['IER']['LECIE'].values = None
    CAN['IER']['BOFIE'].values = None
    CAN['IER']['EPVIE'].values = None
    CAN['IER']['EWGIE'].values = None
    CAN['IER']['FOVIE1'].values = None
    CAN['IER']['FFIE1'].values = None
    CAN['IER']['FMPIE1'].values = None
    CAN['IER']['FOVIE0'].values = None
    CAN['IER']['FFIE0'].values = None
    CAN['IER']['FMPIE0'].values = None
    CAN['IER']['TMEIE'].values = None

    # -------------------------------------------------------------------------
    # ESR	(interrupt enable register)
    # Offset: 24	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['ESR']['REC'].values = None
    CAN['ESR']['TEC'].values = None
    CAN['ESR']['LEC'].values = None
    CAN['ESR']['BOFF'].values = None
    CAN['ESR']['EPVF'].values = None
    CAN['ESR']['EWGF'].values = None

    # -------------------------------------------------------------------------
    # BTR	(bit timing register)
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['BTR']['SILM'].values = None
    CAN['BTR']['LBKM'].values = None
    CAN['BTR']['SJW'].values = None
    CAN['BTR']['TS2'].values = None
    CAN['BTR']['TS1'].values = None
    CAN['BTR']['BRP'].values = None

    # -------------------------------------------------------------------------
    # TI0R	(TX mailbox identifier register)
    # Offset: 384	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['TI0R']['STID'].values = None
    CAN['TI0R']['EXID'].values = None
    CAN['TI0R']['IDE'].values = None
    CAN['TI0R']['RTR'].values = None
    CAN['TI0R']['TXRQ'].values = None

    # -------------------------------------------------------------------------
    # TDT0R	(mailbox data length control and time stamp register)
    # Offset: 388	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['TDT0R']['TIME'].values = None
    CAN['TDT0R']['TGT'].values = None
    CAN['TDT0R']['DLC'].values = None

    # -------------------------------------------------------------------------
    # TDL0R	(mailbox data low register)
    # Offset: 392	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['TDL0R']['DATA3'].values = None
    CAN['TDL0R']['DATA2'].values = None
    CAN['TDL0R']['DATA1'].values = None
    CAN['TDL0R']['DATA0'].values = None

    # -------------------------------------------------------------------------
    # TDH0R	(mailbox data high register)
    # Offset: 396	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['TDH0R']['DATA7'].values = None
    CAN['TDH0R']['DATA6'].values = None
    CAN['TDH0R']['DATA5'].values = None
    CAN['TDH0R']['DATA4'].values = None

    # -------------------------------------------------------------------------
    # TI1R	(mailbox identifier register)
    # Offset: 400	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['TI1R']['STID'].values = None
    CAN['TI1R']['EXID'].values = None
    CAN['TI1R']['IDE'].values = None
    CAN['TI1R']['RTR'].values = None
    CAN['TI1R']['TXRQ'].values = None

    # -------------------------------------------------------------------------
    # TDT1R	(mailbox data length control and time stamp register)
    # Offset: 404	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['TDT1R']['TIME'].values = None
    CAN['TDT1R']['TGT'].values = None
    CAN['TDT1R']['DLC'].values = None

    # -------------------------------------------------------------------------
    # TDL1R	(mailbox data low register)
    # Offset: 408	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['TDL1R']['DATA3'].values = None
    CAN['TDL1R']['DATA2'].values = None
    CAN['TDL1R']['DATA1'].values = None
    CAN['TDL1R']['DATA0'].values = None

    # -------------------------------------------------------------------------
    # TDH1R	(mailbox data high register)
    # Offset: 412	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['TDH1R']['DATA7'].values = None
    CAN['TDH1R']['DATA6'].values = None
    CAN['TDH1R']['DATA5'].values = None
    CAN['TDH1R']['DATA4'].values = None

    # -------------------------------------------------------------------------
    # TI2R	(mailbox identifier register)
    # Offset: 416	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['TI2R']['STID'].values = None
    CAN['TI2R']['EXID'].values = None
    CAN['TI2R']['IDE'].values = None
    CAN['TI2R']['RTR'].values = None
    CAN['TI2R']['TXRQ'].values = None

    # -------------------------------------------------------------------------
    # TDT2R	(mailbox data length control and time stamp register)
    # Offset: 420	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['TDT2R']['TIME'].values = None
    CAN['TDT2R']['TGT'].values = None
    CAN['TDT2R']['DLC'].values = None

    # -------------------------------------------------------------------------
    # TDL2R	(mailbox data low register)
    # Offset: 424	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['TDL2R']['DATA3'].values = None
    CAN['TDL2R']['DATA2'].values = None
    CAN['TDL2R']['DATA1'].values = None
    CAN['TDL2R']['DATA0'].values = None

    # -------------------------------------------------------------------------
    # TDH2R	(mailbox data high register)
    # Offset: 428	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['TDH2R']['DATA7'].values = None
    CAN['TDH2R']['DATA6'].values = None
    CAN['TDH2R']['DATA5'].values = None
    CAN['TDH2R']['DATA4'].values = None

    # -------------------------------------------------------------------------
    # RI0R	(receive FIFO mailbox identifier register)
    # Offset: 432	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    CAN['RI0R']['STID'].values = None
    CAN['RI0R']['EXID'].values = None
    CAN['RI0R']['IDE'].values = None
    CAN['RI0R']['RTR'].values = None

    # -------------------------------------------------------------------------
    # RDT0R	(mailbox data high register)
    # Offset: 436	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    CAN['RDT0R']['TIME'].values = None
    CAN['RDT0R']['FMI'].values = None
    CAN['RDT0R']['DLC'].values = None

    # -------------------------------------------------------------------------
    # RDL0R	(mailbox data high register)
    # Offset: 440	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    CAN['RDL0R']['DATA3'].values = None
    CAN['RDL0R']['DATA2'].values = None
    CAN['RDL0R']['DATA1'].values = None
    CAN['RDL0R']['DATA0'].values = None

    # -------------------------------------------------------------------------
    # RDH0R	(receive FIFO mailbox data high register)
    # Offset: 444	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    CAN['RDH0R']['DATA7'].values = None
    CAN['RDH0R']['DATA6'].values = None
    CAN['RDH0R']['DATA5'].values = None
    CAN['RDH0R']['DATA4'].values = None

    # -------------------------------------------------------------------------
    # RI1R	(mailbox data high register)
    # Offset: 448	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    CAN['RI1R']['STID'].values = None
    CAN['RI1R']['EXID'].values = None
    CAN['RI1R']['IDE'].values = None
    CAN['RI1R']['RTR'].values = None

    # -------------------------------------------------------------------------
    # RDT1R	(mailbox data high register)
    # Offset: 452	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    CAN['RDT1R']['TIME'].values = None
    CAN['RDT1R']['FMI'].values = None
    CAN['RDT1R']['DLC'].values = None

    # -------------------------------------------------------------------------
    # RDL1R	(mailbox data high register)
    # Offset: 456	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    CAN['RDL1R']['DATA3'].values = None
    CAN['RDL1R']['DATA2'].values = None
    CAN['RDL1R']['DATA1'].values = None
    CAN['RDL1R']['DATA0'].values = None

    # -------------------------------------------------------------------------
    # RDH1R	(mailbox data high register)
    # Offset: 460	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    CAN['RDH1R']['DATA7'].values = None
    CAN['RDH1R']['DATA6'].values = None
    CAN['RDH1R']['DATA5'].values = None
    CAN['RDH1R']['DATA4'].values = None

    # -------------------------------------------------------------------------
    # FMR	(filter master register)
    # Offset: 512	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['FMR']['CAN2SB'].values = None
    CAN['FMR']['FINIT'].values = None

    # -------------------------------------------------------------------------
    # FM1R	(filter mode register)
    # Offset: 516	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['FM1R']['FBM27'].values = None
    CAN['FM1R']['FBM26'].values = None
    CAN['FM1R']['FBM25'].values = None
    CAN['FM1R']['FBM24'].values = None
    CAN['FM1R']['FBM23'].values = None
    CAN['FM1R']['FBM22'].values = None
    CAN['FM1R']['FBM21'].values = None
    CAN['FM1R']['FBM20'].values = None
    CAN['FM1R']['FBM19'].values = None
    CAN['FM1R']['FBM18'].values = None
    CAN['FM1R']['FBM17'].values = None
    CAN['FM1R']['FBM16'].values = None
    CAN['FM1R']['FBM15'].values = None
    CAN['FM1R']['FBM14'].values = None
    CAN['FM1R']['FBM13'].values = None
    CAN['FM1R']['FBM12'].values = None
    CAN['FM1R']['FBM11'].values = None
    CAN['FM1R']['FBM10'].values = None
    CAN['FM1R']['FBM9'].values = None
    CAN['FM1R']['FBM8'].values = None
    CAN['FM1R']['FBM7'].values = None
    CAN['FM1R']['FBM6'].values = None
    CAN['FM1R']['FBM5'].values = None
    CAN['FM1R']['FBM4'].values = None
    CAN['FM1R']['FBM3'].values = None
    CAN['FM1R']['FBM2'].values = None
    CAN['FM1R']['FBM1'].values = None
    CAN['FM1R']['FBM0'].values = None

    # -------------------------------------------------------------------------
    # FS1R	(filter scale register)
    # Offset: 524	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['FS1R']['FSC27'].values = None
    CAN['FS1R']['FSC26'].values = None
    CAN['FS1R']['FSC25'].values = None
    CAN['FS1R']['FSC24'].values = None
    CAN['FS1R']['FSC23'].values = None
    CAN['FS1R']['FSC22'].values = None
    CAN['FS1R']['FSC21'].values = None
    CAN['FS1R']['FSC20'].values = None
    CAN['FS1R']['FSC19'].values = None
    CAN['FS1R']['FSC18'].values = None
    CAN['FS1R']['FSC17'].values = None
    CAN['FS1R']['FSC16'].values = None
    CAN['FS1R']['FSC15'].values = None
    CAN['FS1R']['FSC14'].values = None
    CAN['FS1R']['FSC13'].values = None
    CAN['FS1R']['FSC12'].values = None
    CAN['FS1R']['FSC11'].values = None
    CAN['FS1R']['FSC10'].values = None
    CAN['FS1R']['FSC9'].values = None
    CAN['FS1R']['FSC8'].values = None
    CAN['FS1R']['FSC7'].values = None
    CAN['FS1R']['FSC6'].values = None
    CAN['FS1R']['FSC5'].values = None
    CAN['FS1R']['FSC4'].values = None
    CAN['FS1R']['FSC3'].values = None
    CAN['FS1R']['FSC2'].values = None
    CAN['FS1R']['FSC1'].values = None
    CAN['FS1R']['FSC0'].values = None

    # -------------------------------------------------------------------------
    # FFA1R	(filter FIFO assignment register)
    # Offset: 532	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['FFA1R']['FFA27'].values = None
    CAN['FFA1R']['FFA26'].values = None
    CAN['FFA1R']['FFA25'].values = None
    CAN['FFA1R']['FFA24'].values = None
    CAN['FFA1R']['FFA23'].values = None
    CAN['FFA1R']['FFA22'].values = None
    CAN['FFA1R']['FFA21'].values = None
    CAN['FFA1R']['FFA20'].values = None
    CAN['FFA1R']['FFA19'].values = None
    CAN['FFA1R']['FFA18'].values = None
    CAN['FFA1R']['FFA17'].values = None
    CAN['FFA1R']['FFA16'].values = None
    CAN['FFA1R']['FFA15'].values = None
    CAN['FFA1R']['FFA14'].values = None
    CAN['FFA1R']['FFA13'].values = None
    CAN['FFA1R']['FFA12'].values = None
    CAN['FFA1R']['FFA11'].values = None
    CAN['FFA1R']['FFA10'].values = None
    CAN['FFA1R']['FFA9'].values = None
    CAN['FFA1R']['FFA8'].values = None
    CAN['FFA1R']['FFA7'].values = None
    CAN['FFA1R']['FFA6'].values = None
    CAN['FFA1R']['FFA5'].values = None
    CAN['FFA1R']['FFA4'].values = None
    CAN['FFA1R']['FFA3'].values = None
    CAN['FFA1R']['FFA2'].values = None
    CAN['FFA1R']['FFA1'].values = None
    CAN['FFA1R']['FFA0'].values = None

    # -------------------------------------------------------------------------
    # FA1R	(filter activation register)
    # Offset: 540	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['FA1R']['FACT27'].values = None
    CAN['FA1R']['FACT26'].values = None
    CAN['FA1R']['FACT25'].values = None
    CAN['FA1R']['FACT24'].values = None
    CAN['FA1R']['FACT23'].values = None
    CAN['FA1R']['FACT22'].values = None
    CAN['FA1R']['FACT21'].values = None
    CAN['FA1R']['FACT20'].values = None
    CAN['FA1R']['FACT19'].values = None
    CAN['FA1R']['FACT18'].values = None
    CAN['FA1R']['FACT17'].values = None
    CAN['FA1R']['FACT16'].values = None
    CAN['FA1R']['FACT15'].values = None
    CAN['FA1R']['FACT14'].values = None
    CAN['FA1R']['FACT13'].values = None
    CAN['FA1R']['FACT12'].values = None
    CAN['FA1R']['FACT11'].values = None
    CAN['FA1R']['FACT10'].values = None
    CAN['FA1R']['FACT9'].values = None
    CAN['FA1R']['FACT8'].values = None
    CAN['FA1R']['FACT7'].values = None
    CAN['FA1R']['FACT6'].values = None
    CAN['FA1R']['FACT5'].values = None
    CAN['FA1R']['FACT4'].values = None
    CAN['FA1R']['FACT3'].values = None
    CAN['FA1R']['FACT2'].values = None
    CAN['FA1R']['FACT1'].values = None
    CAN['FA1R']['FACT0'].values = None

    # -------------------------------------------------------------------------
    # F0R1	(Filter bank 0 register 1)
    # Offset: 576	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F0R1']['FB31'].values = None
    CAN['F0R1']['FB30'].values = None
    CAN['F0R1']['FB29'].values = None
    CAN['F0R1']['FB28'].values = None
    CAN['F0R1']['FB27'].values = None
    CAN['F0R1']['FB26'].values = None
    CAN['F0R1']['FB25'].values = None
    CAN['F0R1']['FB24'].values = None
    CAN['F0R1']['FB23'].values = None
    CAN['F0R1']['FB22'].values = None
    CAN['F0R1']['FB21'].values = None
    CAN['F0R1']['FB20'].values = None
    CAN['F0R1']['FB19'].values = None
    CAN['F0R1']['FB18'].values = None
    CAN['F0R1']['FB17'].values = None
    CAN['F0R1']['FB16'].values = None
    CAN['F0R1']['FB15'].values = None
    CAN['F0R1']['FB14'].values = None
    CAN['F0R1']['FB13'].values = None
    CAN['F0R1']['FB12'].values = None
    CAN['F0R1']['FB11'].values = None
    CAN['F0R1']['FB10'].values = None
    CAN['F0R1']['FB9'].values = None
    CAN['F0R1']['FB8'].values = None
    CAN['F0R1']['FB7'].values = None
    CAN['F0R1']['FB6'].values = None
    CAN['F0R1']['FB5'].values = None
    CAN['F0R1']['FB4'].values = None
    CAN['F0R1']['FB3'].values = None
    CAN['F0R1']['FB2'].values = None
    CAN['F0R1']['FB1'].values = None
    CAN['F0R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F0R2	(Filter bank 0 register 2)
    # Offset: 580	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F0R2']['FB31'].values = None
    CAN['F0R2']['FB30'].values = None
    CAN['F0R2']['FB29'].values = None
    CAN['F0R2']['FB28'].values = None
    CAN['F0R2']['FB27'].values = None
    CAN['F0R2']['FB26'].values = None
    CAN['F0R2']['FB25'].values = None
    CAN['F0R2']['FB24'].values = None
    CAN['F0R2']['FB23'].values = None
    CAN['F0R2']['FB22'].values = None
    CAN['F0R2']['FB21'].values = None
    CAN['F0R2']['FB20'].values = None
    CAN['F0R2']['FB19'].values = None
    CAN['F0R2']['FB18'].values = None
    CAN['F0R2']['FB17'].values = None
    CAN['F0R2']['FB16'].values = None
    CAN['F0R2']['FB15'].values = None
    CAN['F0R2']['FB14'].values = None
    CAN['F0R2']['FB13'].values = None
    CAN['F0R2']['FB12'].values = None
    CAN['F0R2']['FB11'].values = None
    CAN['F0R2']['FB10'].values = None
    CAN['F0R2']['FB9'].values = None
    CAN['F0R2']['FB8'].values = None
    CAN['F0R2']['FB7'].values = None
    CAN['F0R2']['FB6'].values = None
    CAN['F0R2']['FB5'].values = None
    CAN['F0R2']['FB4'].values = None
    CAN['F0R2']['FB3'].values = None
    CAN['F0R2']['FB2'].values = None
    CAN['F0R2']['FB1'].values = None
    CAN['F0R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F1R1	(Filter bank 1 register 1)
    # Offset: 584	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F1R1']['FB31'].values = None
    CAN['F1R1']['FB30'].values = None
    CAN['F1R1']['FB29'].values = None
    CAN['F1R1']['FB28'].values = None
    CAN['F1R1']['FB27'].values = None
    CAN['F1R1']['FB26'].values = None
    CAN['F1R1']['FB25'].values = None
    CAN['F1R1']['FB24'].values = None
    CAN['F1R1']['FB23'].values = None
    CAN['F1R1']['FB22'].values = None
    CAN['F1R1']['FB21'].values = None
    CAN['F1R1']['FB20'].values = None
    CAN['F1R1']['FB19'].values = None
    CAN['F1R1']['FB18'].values = None
    CAN['F1R1']['FB17'].values = None
    CAN['F1R1']['FB16'].values = None
    CAN['F1R1']['FB15'].values = None
    CAN['F1R1']['FB14'].values = None
    CAN['F1R1']['FB13'].values = None
    CAN['F1R1']['FB12'].values = None
    CAN['F1R1']['FB11'].values = None
    CAN['F1R1']['FB10'].values = None
    CAN['F1R1']['FB9'].values = None
    CAN['F1R1']['FB8'].values = None
    CAN['F1R1']['FB7'].values = None
    CAN['F1R1']['FB6'].values = None
    CAN['F1R1']['FB5'].values = None
    CAN['F1R1']['FB4'].values = None
    CAN['F1R1']['FB3'].values = None
    CAN['F1R1']['FB2'].values = None
    CAN['F1R1']['FB1'].values = None
    CAN['F1R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F1R2	(Filter bank 1 register 2)
    # Offset: 588	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F1R2']['FB31'].values = None
    CAN['F1R2']['FB30'].values = None
    CAN['F1R2']['FB29'].values = None
    CAN['F1R2']['FB28'].values = None
    CAN['F1R2']['FB27'].values = None
    CAN['F1R2']['FB26'].values = None
    CAN['F1R2']['FB25'].values = None
    CAN['F1R2']['FB24'].values = None
    CAN['F1R2']['FB23'].values = None
    CAN['F1R2']['FB22'].values = None
    CAN['F1R2']['FB21'].values = None
    CAN['F1R2']['FB20'].values = None
    CAN['F1R2']['FB19'].values = None
    CAN['F1R2']['FB18'].values = None
    CAN['F1R2']['FB17'].values = None
    CAN['F1R2']['FB16'].values = None
    CAN['F1R2']['FB15'].values = None
    CAN['F1R2']['FB14'].values = None
    CAN['F1R2']['FB13'].values = None
    CAN['F1R2']['FB12'].values = None
    CAN['F1R2']['FB11'].values = None
    CAN['F1R2']['FB10'].values = None
    CAN['F1R2']['FB9'].values = None
    CAN['F1R2']['FB8'].values = None
    CAN['F1R2']['FB7'].values = None
    CAN['F1R2']['FB6'].values = None
    CAN['F1R2']['FB5'].values = None
    CAN['F1R2']['FB4'].values = None
    CAN['F1R2']['FB3'].values = None
    CAN['F1R2']['FB2'].values = None
    CAN['F1R2']['FB1'].values = None
    CAN['F1R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F2R1	(Filter bank 2 register 1)
    # Offset: 592	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F2R1']['FB31'].values = None
    CAN['F2R1']['FB30'].values = None
    CAN['F2R1']['FB29'].values = None
    CAN['F2R1']['FB28'].values = None
    CAN['F2R1']['FB27'].values = None
    CAN['F2R1']['FB26'].values = None
    CAN['F2R1']['FB25'].values = None
    CAN['F2R1']['FB24'].values = None
    CAN['F2R1']['FB23'].values = None
    CAN['F2R1']['FB22'].values = None
    CAN['F2R1']['FB21'].values = None
    CAN['F2R1']['FB20'].values = None
    CAN['F2R1']['FB19'].values = None
    CAN['F2R1']['FB18'].values = None
    CAN['F2R1']['FB17'].values = None
    CAN['F2R1']['FB16'].values = None
    CAN['F2R1']['FB15'].values = None
    CAN['F2R1']['FB14'].values = None
    CAN['F2R1']['FB13'].values = None
    CAN['F2R1']['FB12'].values = None
    CAN['F2R1']['FB11'].values = None
    CAN['F2R1']['FB10'].values = None
    CAN['F2R1']['FB9'].values = None
    CAN['F2R1']['FB8'].values = None
    CAN['F2R1']['FB7'].values = None
    CAN['F2R1']['FB6'].values = None
    CAN['F2R1']['FB5'].values = None
    CAN['F2R1']['FB4'].values = None
    CAN['F2R1']['FB3'].values = None
    CAN['F2R1']['FB2'].values = None
    CAN['F2R1']['FB1'].values = None
    CAN['F2R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F2R2	(Filter bank 2 register 2)
    # Offset: 596	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F2R2']['FB31'].values = None
    CAN['F2R2']['FB30'].values = None
    CAN['F2R2']['FB29'].values = None
    CAN['F2R2']['FB28'].values = None
    CAN['F2R2']['FB27'].values = None
    CAN['F2R2']['FB26'].values = None
    CAN['F2R2']['FB25'].values = None
    CAN['F2R2']['FB24'].values = None
    CAN['F2R2']['FB23'].values = None
    CAN['F2R2']['FB22'].values = None
    CAN['F2R2']['FB21'].values = None
    CAN['F2R2']['FB20'].values = None
    CAN['F2R2']['FB19'].values = None
    CAN['F2R2']['FB18'].values = None
    CAN['F2R2']['FB17'].values = None
    CAN['F2R2']['FB16'].values = None
    CAN['F2R2']['FB15'].values = None
    CAN['F2R2']['FB14'].values = None
    CAN['F2R2']['FB13'].values = None
    CAN['F2R2']['FB12'].values = None
    CAN['F2R2']['FB11'].values = None
    CAN['F2R2']['FB10'].values = None
    CAN['F2R2']['FB9'].values = None
    CAN['F2R2']['FB8'].values = None
    CAN['F2R2']['FB7'].values = None
    CAN['F2R2']['FB6'].values = None
    CAN['F2R2']['FB5'].values = None
    CAN['F2R2']['FB4'].values = None
    CAN['F2R2']['FB3'].values = None
    CAN['F2R2']['FB2'].values = None
    CAN['F2R2']['FB1'].values = None
    CAN['F2R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F3R1	(Filter bank 3 register 1)
    # Offset: 600	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F3R1']['FB31'].values = None
    CAN['F3R1']['FB30'].values = None
    CAN['F3R1']['FB29'].values = None
    CAN['F3R1']['FB28'].values = None
    CAN['F3R1']['FB27'].values = None
    CAN['F3R1']['FB26'].values = None
    CAN['F3R1']['FB25'].values = None
    CAN['F3R1']['FB24'].values = None
    CAN['F3R1']['FB23'].values = None
    CAN['F3R1']['FB22'].values = None
    CAN['F3R1']['FB21'].values = None
    CAN['F3R1']['FB20'].values = None
    CAN['F3R1']['FB19'].values = None
    CAN['F3R1']['FB18'].values = None
    CAN['F3R1']['FB17'].values = None
    CAN['F3R1']['FB16'].values = None
    CAN['F3R1']['FB15'].values = None
    CAN['F3R1']['FB14'].values = None
    CAN['F3R1']['FB13'].values = None
    CAN['F3R1']['FB12'].values = None
    CAN['F3R1']['FB11'].values = None
    CAN['F3R1']['FB10'].values = None
    CAN['F3R1']['FB9'].values = None
    CAN['F3R1']['FB8'].values = None
    CAN['F3R1']['FB7'].values = None
    CAN['F3R1']['FB6'].values = None
    CAN['F3R1']['FB5'].values = None
    CAN['F3R1']['FB4'].values = None
    CAN['F3R1']['FB3'].values = None
    CAN['F3R1']['FB2'].values = None
    CAN['F3R1']['FB1'].values = None
    CAN['F3R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F3R2	(Filter bank 3 register 2)
    # Offset: 604	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F3R2']['FB31'].values = None
    CAN['F3R2']['FB30'].values = None
    CAN['F3R2']['FB29'].values = None
    CAN['F3R2']['FB28'].values = None
    CAN['F3R2']['FB27'].values = None
    CAN['F3R2']['FB26'].values = None
    CAN['F3R2']['FB25'].values = None
    CAN['F3R2']['FB24'].values = None
    CAN['F3R2']['FB23'].values = None
    CAN['F3R2']['FB22'].values = None
    CAN['F3R2']['FB21'].values = None
    CAN['F3R2']['FB20'].values = None
    CAN['F3R2']['FB19'].values = None
    CAN['F3R2']['FB18'].values = None
    CAN['F3R2']['FB17'].values = None
    CAN['F3R2']['FB16'].values = None
    CAN['F3R2']['FB15'].values = None
    CAN['F3R2']['FB14'].values = None
    CAN['F3R2']['FB13'].values = None
    CAN['F3R2']['FB12'].values = None
    CAN['F3R2']['FB11'].values = None
    CAN['F3R2']['FB10'].values = None
    CAN['F3R2']['FB9'].values = None
    CAN['F3R2']['FB8'].values = None
    CAN['F3R2']['FB7'].values = None
    CAN['F3R2']['FB6'].values = None
    CAN['F3R2']['FB5'].values = None
    CAN['F3R2']['FB4'].values = None
    CAN['F3R2']['FB3'].values = None
    CAN['F3R2']['FB2'].values = None
    CAN['F3R2']['FB1'].values = None
    CAN['F3R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F4R1	(Filter bank 4 register 1)
    # Offset: 608	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F4R1']['FB31'].values = None
    CAN['F4R1']['FB30'].values = None
    CAN['F4R1']['FB29'].values = None
    CAN['F4R1']['FB28'].values = None
    CAN['F4R1']['FB27'].values = None
    CAN['F4R1']['FB26'].values = None
    CAN['F4R1']['FB25'].values = None
    CAN['F4R1']['FB24'].values = None
    CAN['F4R1']['FB23'].values = None
    CAN['F4R1']['FB22'].values = None
    CAN['F4R1']['FB21'].values = None
    CAN['F4R1']['FB20'].values = None
    CAN['F4R1']['FB19'].values = None
    CAN['F4R1']['FB18'].values = None
    CAN['F4R1']['FB17'].values = None
    CAN['F4R1']['FB16'].values = None
    CAN['F4R1']['FB15'].values = None
    CAN['F4R1']['FB14'].values = None
    CAN['F4R1']['FB13'].values = None
    CAN['F4R1']['FB12'].values = None
    CAN['F4R1']['FB11'].values = None
    CAN['F4R1']['FB10'].values = None
    CAN['F4R1']['FB9'].values = None
    CAN['F4R1']['FB8'].values = None
    CAN['F4R1']['FB7'].values = None
    CAN['F4R1']['FB6'].values = None
    CAN['F4R1']['FB5'].values = None
    CAN['F4R1']['FB4'].values = None
    CAN['F4R1']['FB3'].values = None
    CAN['F4R1']['FB2'].values = None
    CAN['F4R1']['FB1'].values = None
    CAN['F4R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F4R2	(Filter bank 4 register 2)
    # Offset: 612	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F4R2']['FB31'].values = None
    CAN['F4R2']['FB30'].values = None
    CAN['F4R2']['FB29'].values = None
    CAN['F4R2']['FB28'].values = None
    CAN['F4R2']['FB27'].values = None
    CAN['F4R2']['FB26'].values = None
    CAN['F4R2']['FB25'].values = None
    CAN['F4R2']['FB24'].values = None
    CAN['F4R2']['FB23'].values = None
    CAN['F4R2']['FB22'].values = None
    CAN['F4R2']['FB21'].values = None
    CAN['F4R2']['FB20'].values = None
    CAN['F4R2']['FB19'].values = None
    CAN['F4R2']['FB18'].values = None
    CAN['F4R2']['FB17'].values = None
    CAN['F4R2']['FB16'].values = None
    CAN['F4R2']['FB15'].values = None
    CAN['F4R2']['FB14'].values = None
    CAN['F4R2']['FB13'].values = None
    CAN['F4R2']['FB12'].values = None
    CAN['F4R2']['FB11'].values = None
    CAN['F4R2']['FB10'].values = None
    CAN['F4R2']['FB9'].values = None
    CAN['F4R2']['FB8'].values = None
    CAN['F4R2']['FB7'].values = None
    CAN['F4R2']['FB6'].values = None
    CAN['F4R2']['FB5'].values = None
    CAN['F4R2']['FB4'].values = None
    CAN['F4R2']['FB3'].values = None
    CAN['F4R2']['FB2'].values = None
    CAN['F4R2']['FB1'].values = None
    CAN['F4R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F5R1	(Filter bank 5 register 1)
    # Offset: 616	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F5R1']['FB31'].values = None
    CAN['F5R1']['FB30'].values = None
    CAN['F5R1']['FB29'].values = None
    CAN['F5R1']['FB28'].values = None
    CAN['F5R1']['FB27'].values = None
    CAN['F5R1']['FB26'].values = None
    CAN['F5R1']['FB25'].values = None
    CAN['F5R1']['FB24'].values = None
    CAN['F5R1']['FB23'].values = None
    CAN['F5R1']['FB22'].values = None
    CAN['F5R1']['FB21'].values = None
    CAN['F5R1']['FB20'].values = None
    CAN['F5R1']['FB19'].values = None
    CAN['F5R1']['FB18'].values = None
    CAN['F5R1']['FB17'].values = None
    CAN['F5R1']['FB16'].values = None
    CAN['F5R1']['FB15'].values = None
    CAN['F5R1']['FB14'].values = None
    CAN['F5R1']['FB13'].values = None
    CAN['F5R1']['FB12'].values = None
    CAN['F5R1']['FB11'].values = None
    CAN['F5R1']['FB10'].values = None
    CAN['F5R1']['FB9'].values = None
    CAN['F5R1']['FB8'].values = None
    CAN['F5R1']['FB7'].values = None
    CAN['F5R1']['FB6'].values = None
    CAN['F5R1']['FB5'].values = None
    CAN['F5R1']['FB4'].values = None
    CAN['F5R1']['FB3'].values = None
    CAN['F5R1']['FB2'].values = None
    CAN['F5R1']['FB1'].values = None
    CAN['F5R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F5R2	(Filter bank 5 register 2)
    # Offset: 620	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F5R2']['FB31'].values = None
    CAN['F5R2']['FB30'].values = None
    CAN['F5R2']['FB29'].values = None
    CAN['F5R2']['FB28'].values = None
    CAN['F5R2']['FB27'].values = None
    CAN['F5R2']['FB26'].values = None
    CAN['F5R2']['FB25'].values = None
    CAN['F5R2']['FB24'].values = None
    CAN['F5R2']['FB23'].values = None
    CAN['F5R2']['FB22'].values = None
    CAN['F5R2']['FB21'].values = None
    CAN['F5R2']['FB20'].values = None
    CAN['F5R2']['FB19'].values = None
    CAN['F5R2']['FB18'].values = None
    CAN['F5R2']['FB17'].values = None
    CAN['F5R2']['FB16'].values = None
    CAN['F5R2']['FB15'].values = None
    CAN['F5R2']['FB14'].values = None
    CAN['F5R2']['FB13'].values = None
    CAN['F5R2']['FB12'].values = None
    CAN['F5R2']['FB11'].values = None
    CAN['F5R2']['FB10'].values = None
    CAN['F5R2']['FB9'].values = None
    CAN['F5R2']['FB8'].values = None
    CAN['F5R2']['FB7'].values = None
    CAN['F5R2']['FB6'].values = None
    CAN['F5R2']['FB5'].values = None
    CAN['F5R2']['FB4'].values = None
    CAN['F5R2']['FB3'].values = None
    CAN['F5R2']['FB2'].values = None
    CAN['F5R2']['FB1'].values = None
    CAN['F5R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F6R1	(Filter bank 6 register 1)
    # Offset: 624	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F6R1']['FB31'].values = None
    CAN['F6R1']['FB30'].values = None
    CAN['F6R1']['FB29'].values = None
    CAN['F6R1']['FB28'].values = None
    CAN['F6R1']['FB27'].values = None
    CAN['F6R1']['FB26'].values = None
    CAN['F6R1']['FB25'].values = None
    CAN['F6R1']['FB24'].values = None
    CAN['F6R1']['FB23'].values = None
    CAN['F6R1']['FB22'].values = None
    CAN['F6R1']['FB21'].values = None
    CAN['F6R1']['FB20'].values = None
    CAN['F6R1']['FB19'].values = None
    CAN['F6R1']['FB18'].values = None
    CAN['F6R1']['FB17'].values = None
    CAN['F6R1']['FB16'].values = None
    CAN['F6R1']['FB15'].values = None
    CAN['F6R1']['FB14'].values = None
    CAN['F6R1']['FB13'].values = None
    CAN['F6R1']['FB12'].values = None
    CAN['F6R1']['FB11'].values = None
    CAN['F6R1']['FB10'].values = None
    CAN['F6R1']['FB9'].values = None
    CAN['F6R1']['FB8'].values = None
    CAN['F6R1']['FB7'].values = None
    CAN['F6R1']['FB6'].values = None
    CAN['F6R1']['FB5'].values = None
    CAN['F6R1']['FB4'].values = None
    CAN['F6R1']['FB3'].values = None
    CAN['F6R1']['FB2'].values = None
    CAN['F6R1']['FB1'].values = None
    CAN['F6R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F6R2	(Filter bank 6 register 2)
    # Offset: 628	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F6R2']['FB31'].values = None
    CAN['F6R2']['FB30'].values = None
    CAN['F6R2']['FB29'].values = None
    CAN['F6R2']['FB28'].values = None
    CAN['F6R2']['FB27'].values = None
    CAN['F6R2']['FB26'].values = None
    CAN['F6R2']['FB25'].values = None
    CAN['F6R2']['FB24'].values = None
    CAN['F6R2']['FB23'].values = None
    CAN['F6R2']['FB22'].values = None
    CAN['F6R2']['FB21'].values = None
    CAN['F6R2']['FB20'].values = None
    CAN['F6R2']['FB19'].values = None
    CAN['F6R2']['FB18'].values = None
    CAN['F6R2']['FB17'].values = None
    CAN['F6R2']['FB16'].values = None
    CAN['F6R2']['FB15'].values = None
    CAN['F6R2']['FB14'].values = None
    CAN['F6R2']['FB13'].values = None
    CAN['F6R2']['FB12'].values = None
    CAN['F6R2']['FB11'].values = None
    CAN['F6R2']['FB10'].values = None
    CAN['F6R2']['FB9'].values = None
    CAN['F6R2']['FB8'].values = None
    CAN['F6R2']['FB7'].values = None
    CAN['F6R2']['FB6'].values = None
    CAN['F6R2']['FB5'].values = None
    CAN['F6R2']['FB4'].values = None
    CAN['F6R2']['FB3'].values = None
    CAN['F6R2']['FB2'].values = None
    CAN['F6R2']['FB1'].values = None
    CAN['F6R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F7R1	(Filter bank 7 register 1)
    # Offset: 632	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F7R1']['FB31'].values = None
    CAN['F7R1']['FB30'].values = None
    CAN['F7R1']['FB29'].values = None
    CAN['F7R1']['FB28'].values = None
    CAN['F7R1']['FB27'].values = None
    CAN['F7R1']['FB26'].values = None
    CAN['F7R1']['FB25'].values = None
    CAN['F7R1']['FB24'].values = None
    CAN['F7R1']['FB23'].values = None
    CAN['F7R1']['FB22'].values = None
    CAN['F7R1']['FB21'].values = None
    CAN['F7R1']['FB20'].values = None
    CAN['F7R1']['FB19'].values = None
    CAN['F7R1']['FB18'].values = None
    CAN['F7R1']['FB17'].values = None
    CAN['F7R1']['FB16'].values = None
    CAN['F7R1']['FB15'].values = None
    CAN['F7R1']['FB14'].values = None
    CAN['F7R1']['FB13'].values = None
    CAN['F7R1']['FB12'].values = None
    CAN['F7R1']['FB11'].values = None
    CAN['F7R1']['FB10'].values = None
    CAN['F7R1']['FB9'].values = None
    CAN['F7R1']['FB8'].values = None
    CAN['F7R1']['FB7'].values = None
    CAN['F7R1']['FB6'].values = None
    CAN['F7R1']['FB5'].values = None
    CAN['F7R1']['FB4'].values = None
    CAN['F7R1']['FB3'].values = None
    CAN['F7R1']['FB2'].values = None
    CAN['F7R1']['FB1'].values = None
    CAN['F7R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F7R2	(Filter bank 7 register 2)
    # Offset: 636	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F7R2']['FB31'].values = None
    CAN['F7R2']['FB30'].values = None
    CAN['F7R2']['FB29'].values = None
    CAN['F7R2']['FB28'].values = None
    CAN['F7R2']['FB27'].values = None
    CAN['F7R2']['FB26'].values = None
    CAN['F7R2']['FB25'].values = None
    CAN['F7R2']['FB24'].values = None
    CAN['F7R2']['FB23'].values = None
    CAN['F7R2']['FB22'].values = None
    CAN['F7R2']['FB21'].values = None
    CAN['F7R2']['FB20'].values = None
    CAN['F7R2']['FB19'].values = None
    CAN['F7R2']['FB18'].values = None
    CAN['F7R2']['FB17'].values = None
    CAN['F7R2']['FB16'].values = None
    CAN['F7R2']['FB15'].values = None
    CAN['F7R2']['FB14'].values = None
    CAN['F7R2']['FB13'].values = None
    CAN['F7R2']['FB12'].values = None
    CAN['F7R2']['FB11'].values = None
    CAN['F7R2']['FB10'].values = None
    CAN['F7R2']['FB9'].values = None
    CAN['F7R2']['FB8'].values = None
    CAN['F7R2']['FB7'].values = None
    CAN['F7R2']['FB6'].values = None
    CAN['F7R2']['FB5'].values = None
    CAN['F7R2']['FB4'].values = None
    CAN['F7R2']['FB3'].values = None
    CAN['F7R2']['FB2'].values = None
    CAN['F7R2']['FB1'].values = None
    CAN['F7R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F8R1	(Filter bank 8 register 1)
    # Offset: 640	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F8R1']['FB31'].values = None
    CAN['F8R1']['FB30'].values = None
    CAN['F8R1']['FB29'].values = None
    CAN['F8R1']['FB28'].values = None
    CAN['F8R1']['FB27'].values = None
    CAN['F8R1']['FB26'].values = None
    CAN['F8R1']['FB25'].values = None
    CAN['F8R1']['FB24'].values = None
    CAN['F8R1']['FB23'].values = None
    CAN['F8R1']['FB22'].values = None
    CAN['F8R1']['FB21'].values = None
    CAN['F8R1']['FB20'].values = None
    CAN['F8R1']['FB19'].values = None
    CAN['F8R1']['FB18'].values = None
    CAN['F8R1']['FB17'].values = None
    CAN['F8R1']['FB16'].values = None
    CAN['F8R1']['FB15'].values = None
    CAN['F8R1']['FB14'].values = None
    CAN['F8R1']['FB13'].values = None
    CAN['F8R1']['FB12'].values = None
    CAN['F8R1']['FB11'].values = None
    CAN['F8R1']['FB10'].values = None
    CAN['F8R1']['FB9'].values = None
    CAN['F8R1']['FB8'].values = None
    CAN['F8R1']['FB7'].values = None
    CAN['F8R1']['FB6'].values = None
    CAN['F8R1']['FB5'].values = None
    CAN['F8R1']['FB4'].values = None
    CAN['F8R1']['FB3'].values = None
    CAN['F8R1']['FB2'].values = None
    CAN['F8R1']['FB1'].values = None
    CAN['F8R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F8R2	(Filter bank 8 register 2)
    # Offset: 644	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F8R2']['FB31'].values = None
    CAN['F8R2']['FB30'].values = None
    CAN['F8R2']['FB29'].values = None
    CAN['F8R2']['FB28'].values = None
    CAN['F8R2']['FB27'].values = None
    CAN['F8R2']['FB26'].values = None
    CAN['F8R2']['FB25'].values = None
    CAN['F8R2']['FB24'].values = None
    CAN['F8R2']['FB23'].values = None
    CAN['F8R2']['FB22'].values = None
    CAN['F8R2']['FB21'].values = None
    CAN['F8R2']['FB20'].values = None
    CAN['F8R2']['FB19'].values = None
    CAN['F8R2']['FB18'].values = None
    CAN['F8R2']['FB17'].values = None
    CAN['F8R2']['FB16'].values = None
    CAN['F8R2']['FB15'].values = None
    CAN['F8R2']['FB14'].values = None
    CAN['F8R2']['FB13'].values = None
    CAN['F8R2']['FB12'].values = None
    CAN['F8R2']['FB11'].values = None
    CAN['F8R2']['FB10'].values = None
    CAN['F8R2']['FB9'].values = None
    CAN['F8R2']['FB8'].values = None
    CAN['F8R2']['FB7'].values = None
    CAN['F8R2']['FB6'].values = None
    CAN['F8R2']['FB5'].values = None
    CAN['F8R2']['FB4'].values = None
    CAN['F8R2']['FB3'].values = None
    CAN['F8R2']['FB2'].values = None
    CAN['F8R2']['FB1'].values = None
    CAN['F8R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F9R1	(Filter bank 9 register 1)
    # Offset: 648	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F9R1']['FB31'].values = None
    CAN['F9R1']['FB30'].values = None
    CAN['F9R1']['FB29'].values = None
    CAN['F9R1']['FB28'].values = None
    CAN['F9R1']['FB27'].values = None
    CAN['F9R1']['FB26'].values = None
    CAN['F9R1']['FB25'].values = None
    CAN['F9R1']['FB24'].values = None
    CAN['F9R1']['FB23'].values = None
    CAN['F9R1']['FB22'].values = None
    CAN['F9R1']['FB21'].values = None
    CAN['F9R1']['FB20'].values = None
    CAN['F9R1']['FB19'].values = None
    CAN['F9R1']['FB18'].values = None
    CAN['F9R1']['FB17'].values = None
    CAN['F9R1']['FB16'].values = None
    CAN['F9R1']['FB15'].values = None
    CAN['F9R1']['FB14'].values = None
    CAN['F9R1']['FB13'].values = None
    CAN['F9R1']['FB12'].values = None
    CAN['F9R1']['FB11'].values = None
    CAN['F9R1']['FB10'].values = None
    CAN['F9R1']['FB9'].values = None
    CAN['F9R1']['FB8'].values = None
    CAN['F9R1']['FB7'].values = None
    CAN['F9R1']['FB6'].values = None
    CAN['F9R1']['FB5'].values = None
    CAN['F9R1']['FB4'].values = None
    CAN['F9R1']['FB3'].values = None
    CAN['F9R1']['FB2'].values = None
    CAN['F9R1']['FB1'].values = None
    CAN['F9R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F9R2	(Filter bank 9 register 2)
    # Offset: 652	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F9R2']['FB31'].values = None
    CAN['F9R2']['FB30'].values = None
    CAN['F9R2']['FB29'].values = None
    CAN['F9R2']['FB28'].values = None
    CAN['F9R2']['FB27'].values = None
    CAN['F9R2']['FB26'].values = None
    CAN['F9R2']['FB25'].values = None
    CAN['F9R2']['FB24'].values = None
    CAN['F9R2']['FB23'].values = None
    CAN['F9R2']['FB22'].values = None
    CAN['F9R2']['FB21'].values = None
    CAN['F9R2']['FB20'].values = None
    CAN['F9R2']['FB19'].values = None
    CAN['F9R2']['FB18'].values = None
    CAN['F9R2']['FB17'].values = None
    CAN['F9R2']['FB16'].values = None
    CAN['F9R2']['FB15'].values = None
    CAN['F9R2']['FB14'].values = None
    CAN['F9R2']['FB13'].values = None
    CAN['F9R2']['FB12'].values = None
    CAN['F9R2']['FB11'].values = None
    CAN['F9R2']['FB10'].values = None
    CAN['F9R2']['FB9'].values = None
    CAN['F9R2']['FB8'].values = None
    CAN['F9R2']['FB7'].values = None
    CAN['F9R2']['FB6'].values = None
    CAN['F9R2']['FB5'].values = None
    CAN['F9R2']['FB4'].values = None
    CAN['F9R2']['FB3'].values = None
    CAN['F9R2']['FB2'].values = None
    CAN['F9R2']['FB1'].values = None
    CAN['F9R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F10R1	(Filter bank 10 register 1)
    # Offset: 656	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F10R1']['FB31'].values = None
    CAN['F10R1']['FB30'].values = None
    CAN['F10R1']['FB29'].values = None
    CAN['F10R1']['FB28'].values = None
    CAN['F10R1']['FB27'].values = None
    CAN['F10R1']['FB26'].values = None
    CAN['F10R1']['FB25'].values = None
    CAN['F10R1']['FB24'].values = None
    CAN['F10R1']['FB23'].values = None
    CAN['F10R1']['FB22'].values = None
    CAN['F10R1']['FB21'].values = None
    CAN['F10R1']['FB20'].values = None
    CAN['F10R1']['FB19'].values = None
    CAN['F10R1']['FB18'].values = None
    CAN['F10R1']['FB17'].values = None
    CAN['F10R1']['FB16'].values = None
    CAN['F10R1']['FB15'].values = None
    CAN['F10R1']['FB14'].values = None
    CAN['F10R1']['FB13'].values = None
    CAN['F10R1']['FB12'].values = None
    CAN['F10R1']['FB11'].values = None
    CAN['F10R1']['FB10'].values = None
    CAN['F10R1']['FB9'].values = None
    CAN['F10R1']['FB8'].values = None
    CAN['F10R1']['FB7'].values = None
    CAN['F10R1']['FB6'].values = None
    CAN['F10R1']['FB5'].values = None
    CAN['F10R1']['FB4'].values = None
    CAN['F10R1']['FB3'].values = None
    CAN['F10R1']['FB2'].values = None
    CAN['F10R1']['FB1'].values = None
    CAN['F10R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F10R2	(Filter bank 10 register 2)
    # Offset: 660	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F10R2']['FB31'].values = None
    CAN['F10R2']['FB30'].values = None
    CAN['F10R2']['FB29'].values = None
    CAN['F10R2']['FB28'].values = None
    CAN['F10R2']['FB27'].values = None
    CAN['F10R2']['FB26'].values = None
    CAN['F10R2']['FB25'].values = None
    CAN['F10R2']['FB24'].values = None
    CAN['F10R2']['FB23'].values = None
    CAN['F10R2']['FB22'].values = None
    CAN['F10R2']['FB21'].values = None
    CAN['F10R2']['FB20'].values = None
    CAN['F10R2']['FB19'].values = None
    CAN['F10R2']['FB18'].values = None
    CAN['F10R2']['FB17'].values = None
    CAN['F10R2']['FB16'].values = None
    CAN['F10R2']['FB15'].values = None
    CAN['F10R2']['FB14'].values = None
    CAN['F10R2']['FB13'].values = None
    CAN['F10R2']['FB12'].values = None
    CAN['F10R2']['FB11'].values = None
    CAN['F10R2']['FB10'].values = None
    CAN['F10R2']['FB9'].values = None
    CAN['F10R2']['FB8'].values = None
    CAN['F10R2']['FB7'].values = None
    CAN['F10R2']['FB6'].values = None
    CAN['F10R2']['FB5'].values = None
    CAN['F10R2']['FB4'].values = None
    CAN['F10R2']['FB3'].values = None
    CAN['F10R2']['FB2'].values = None
    CAN['F10R2']['FB1'].values = None
    CAN['F10R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F11R1	(Filter bank 11 register 1)
    # Offset: 664	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F11R1']['FB31'].values = None
    CAN['F11R1']['FB30'].values = None
    CAN['F11R1']['FB29'].values = None
    CAN['F11R1']['FB28'].values = None
    CAN['F11R1']['FB27'].values = None
    CAN['F11R1']['FB26'].values = None
    CAN['F11R1']['FB25'].values = None
    CAN['F11R1']['FB24'].values = None
    CAN['F11R1']['FB23'].values = None
    CAN['F11R1']['FB22'].values = None
    CAN['F11R1']['FB21'].values = None
    CAN['F11R1']['FB20'].values = None
    CAN['F11R1']['FB19'].values = None
    CAN['F11R1']['FB18'].values = None
    CAN['F11R1']['FB17'].values = None
    CAN['F11R1']['FB16'].values = None
    CAN['F11R1']['FB15'].values = None
    CAN['F11R1']['FB14'].values = None
    CAN['F11R1']['FB13'].values = None
    CAN['F11R1']['FB12'].values = None
    CAN['F11R1']['FB11'].values = None
    CAN['F11R1']['FB10'].values = None
    CAN['F11R1']['FB9'].values = None
    CAN['F11R1']['FB8'].values = None
    CAN['F11R1']['FB7'].values = None
    CAN['F11R1']['FB6'].values = None
    CAN['F11R1']['FB5'].values = None
    CAN['F11R1']['FB4'].values = None
    CAN['F11R1']['FB3'].values = None
    CAN['F11R1']['FB2'].values = None
    CAN['F11R1']['FB1'].values = None
    CAN['F11R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F11R2	(Filter bank 11 register 2)
    # Offset: 668	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F11R2']['FB31'].values = None
    CAN['F11R2']['FB30'].values = None
    CAN['F11R2']['FB29'].values = None
    CAN['F11R2']['FB28'].values = None
    CAN['F11R2']['FB27'].values = None
    CAN['F11R2']['FB26'].values = None
    CAN['F11R2']['FB25'].values = None
    CAN['F11R2']['FB24'].values = None
    CAN['F11R2']['FB23'].values = None
    CAN['F11R2']['FB22'].values = None
    CAN['F11R2']['FB21'].values = None
    CAN['F11R2']['FB20'].values = None
    CAN['F11R2']['FB19'].values = None
    CAN['F11R2']['FB18'].values = None
    CAN['F11R2']['FB17'].values = None
    CAN['F11R2']['FB16'].values = None
    CAN['F11R2']['FB15'].values = None
    CAN['F11R2']['FB14'].values = None
    CAN['F11R2']['FB13'].values = None
    CAN['F11R2']['FB12'].values = None
    CAN['F11R2']['FB11'].values = None
    CAN['F11R2']['FB10'].values = None
    CAN['F11R2']['FB9'].values = None
    CAN['F11R2']['FB8'].values = None
    CAN['F11R2']['FB7'].values = None
    CAN['F11R2']['FB6'].values = None
    CAN['F11R2']['FB5'].values = None
    CAN['F11R2']['FB4'].values = None
    CAN['F11R2']['FB3'].values = None
    CAN['F11R2']['FB2'].values = None
    CAN['F11R2']['FB1'].values = None
    CAN['F11R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F12R1	(Filter bank 4 register 1)
    # Offset: 672	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F12R1']['FB31'].values = None
    CAN['F12R1']['FB30'].values = None
    CAN['F12R1']['FB29'].values = None
    CAN['F12R1']['FB28'].values = None
    CAN['F12R1']['FB27'].values = None
    CAN['F12R1']['FB26'].values = None
    CAN['F12R1']['FB25'].values = None
    CAN['F12R1']['FB24'].values = None
    CAN['F12R1']['FB23'].values = None
    CAN['F12R1']['FB22'].values = None
    CAN['F12R1']['FB21'].values = None
    CAN['F12R1']['FB20'].values = None
    CAN['F12R1']['FB19'].values = None
    CAN['F12R1']['FB18'].values = None
    CAN['F12R1']['FB17'].values = None
    CAN['F12R1']['FB16'].values = None
    CAN['F12R1']['FB15'].values = None
    CAN['F12R1']['FB14'].values = None
    CAN['F12R1']['FB13'].values = None
    CAN['F12R1']['FB12'].values = None
    CAN['F12R1']['FB11'].values = None
    CAN['F12R1']['FB10'].values = None
    CAN['F12R1']['FB9'].values = None
    CAN['F12R1']['FB8'].values = None
    CAN['F12R1']['FB7'].values = None
    CAN['F12R1']['FB6'].values = None
    CAN['F12R1']['FB5'].values = None
    CAN['F12R1']['FB4'].values = None
    CAN['F12R1']['FB3'].values = None
    CAN['F12R1']['FB2'].values = None
    CAN['F12R1']['FB1'].values = None
    CAN['F12R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F12R2	(Filter bank 12 register 2)
    # Offset: 676	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F12R2']['FB31'].values = None
    CAN['F12R2']['FB30'].values = None
    CAN['F12R2']['FB29'].values = None
    CAN['F12R2']['FB28'].values = None
    CAN['F12R2']['FB27'].values = None
    CAN['F12R2']['FB26'].values = None
    CAN['F12R2']['FB25'].values = None
    CAN['F12R2']['FB24'].values = None
    CAN['F12R2']['FB23'].values = None
    CAN['F12R2']['FB22'].values = None
    CAN['F12R2']['FB21'].values = None
    CAN['F12R2']['FB20'].values = None
    CAN['F12R2']['FB19'].values = None
    CAN['F12R2']['FB18'].values = None
    CAN['F12R2']['FB17'].values = None
    CAN['F12R2']['FB16'].values = None
    CAN['F12R2']['FB15'].values = None
    CAN['F12R2']['FB14'].values = None
    CAN['F12R2']['FB13'].values = None
    CAN['F12R2']['FB12'].values = None
    CAN['F12R2']['FB11'].values = None
    CAN['F12R2']['FB10'].values = None
    CAN['F12R2']['FB9'].values = None
    CAN['F12R2']['FB8'].values = None
    CAN['F12R2']['FB7'].values = None
    CAN['F12R2']['FB6'].values = None
    CAN['F12R2']['FB5'].values = None
    CAN['F12R2']['FB4'].values = None
    CAN['F12R2']['FB3'].values = None
    CAN['F12R2']['FB2'].values = None
    CAN['F12R2']['FB1'].values = None
    CAN['F12R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F13R1	(Filter bank 13 register 1)
    # Offset: 680	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F13R1']['FB31'].values = None
    CAN['F13R1']['FB30'].values = None
    CAN['F13R1']['FB29'].values = None
    CAN['F13R1']['FB28'].values = None
    CAN['F13R1']['FB27'].values = None
    CAN['F13R1']['FB26'].values = None
    CAN['F13R1']['FB25'].values = None
    CAN['F13R1']['FB24'].values = None
    CAN['F13R1']['FB23'].values = None
    CAN['F13R1']['FB22'].values = None
    CAN['F13R1']['FB21'].values = None
    CAN['F13R1']['FB20'].values = None
    CAN['F13R1']['FB19'].values = None
    CAN['F13R1']['FB18'].values = None
    CAN['F13R1']['FB17'].values = None
    CAN['F13R1']['FB16'].values = None
    CAN['F13R1']['FB15'].values = None
    CAN['F13R1']['FB14'].values = None
    CAN['F13R1']['FB13'].values = None
    CAN['F13R1']['FB12'].values = None
    CAN['F13R1']['FB11'].values = None
    CAN['F13R1']['FB10'].values = None
    CAN['F13R1']['FB9'].values = None
    CAN['F13R1']['FB8'].values = None
    CAN['F13R1']['FB7'].values = None
    CAN['F13R1']['FB6'].values = None
    CAN['F13R1']['FB5'].values = None
    CAN['F13R1']['FB4'].values = None
    CAN['F13R1']['FB3'].values = None
    CAN['F13R1']['FB2'].values = None
    CAN['F13R1']['FB1'].values = None
    CAN['F13R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F13R2	(Filter bank 13 register 2)
    # Offset: 684	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F13R2']['FB31'].values = None
    CAN['F13R2']['FB30'].values = None
    CAN['F13R2']['FB29'].values = None
    CAN['F13R2']['FB28'].values = None
    CAN['F13R2']['FB27'].values = None
    CAN['F13R2']['FB26'].values = None
    CAN['F13R2']['FB25'].values = None
    CAN['F13R2']['FB24'].values = None
    CAN['F13R2']['FB23'].values = None
    CAN['F13R2']['FB22'].values = None
    CAN['F13R2']['FB21'].values = None
    CAN['F13R2']['FB20'].values = None
    CAN['F13R2']['FB19'].values = None
    CAN['F13R2']['FB18'].values = None
    CAN['F13R2']['FB17'].values = None
    CAN['F13R2']['FB16'].values = None
    CAN['F13R2']['FB15'].values = None
    CAN['F13R2']['FB14'].values = None
    CAN['F13R2']['FB13'].values = None
    CAN['F13R2']['FB12'].values = None
    CAN['F13R2']['FB11'].values = None
    CAN['F13R2']['FB10'].values = None
    CAN['F13R2']['FB9'].values = None
    CAN['F13R2']['FB8'].values = None
    CAN['F13R2']['FB7'].values = None
    CAN['F13R2']['FB6'].values = None
    CAN['F13R2']['FB5'].values = None
    CAN['F13R2']['FB4'].values = None
    CAN['F13R2']['FB3'].values = None
    CAN['F13R2']['FB2'].values = None
    CAN['F13R2']['FB1'].values = None
    CAN['F13R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F14R1	(Filter bank 14 register 1)
    # Offset: 688	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F14R1']['FB31'].values = None
    CAN['F14R1']['FB30'].values = None
    CAN['F14R1']['FB29'].values = None
    CAN['F14R1']['FB28'].values = None
    CAN['F14R1']['FB27'].values = None
    CAN['F14R1']['FB26'].values = None
    CAN['F14R1']['FB25'].values = None
    CAN['F14R1']['FB24'].values = None
    CAN['F14R1']['FB23'].values = None
    CAN['F14R1']['FB22'].values = None
    CAN['F14R1']['FB21'].values = None
    CAN['F14R1']['FB20'].values = None
    CAN['F14R1']['FB19'].values = None
    CAN['F14R1']['FB18'].values = None
    CAN['F14R1']['FB17'].values = None
    CAN['F14R1']['FB16'].values = None
    CAN['F14R1']['FB15'].values = None
    CAN['F14R1']['FB14'].values = None
    CAN['F14R1']['FB13'].values = None
    CAN['F14R1']['FB12'].values = None
    CAN['F14R1']['FB11'].values = None
    CAN['F14R1']['FB10'].values = None
    CAN['F14R1']['FB9'].values = None
    CAN['F14R1']['FB8'].values = None
    CAN['F14R1']['FB7'].values = None
    CAN['F14R1']['FB6'].values = None
    CAN['F14R1']['FB5'].values = None
    CAN['F14R1']['FB4'].values = None
    CAN['F14R1']['FB3'].values = None
    CAN['F14R1']['FB2'].values = None
    CAN['F14R1']['FB1'].values = None
    CAN['F14R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F14R2	(Filter bank 14 register 2)
    # Offset: 692	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F14R2']['FB31'].values = None
    CAN['F14R2']['FB30'].values = None
    CAN['F14R2']['FB29'].values = None
    CAN['F14R2']['FB28'].values = None
    CAN['F14R2']['FB27'].values = None
    CAN['F14R2']['FB26'].values = None
    CAN['F14R2']['FB25'].values = None
    CAN['F14R2']['FB24'].values = None
    CAN['F14R2']['FB23'].values = None
    CAN['F14R2']['FB22'].values = None
    CAN['F14R2']['FB21'].values = None
    CAN['F14R2']['FB20'].values = None
    CAN['F14R2']['FB19'].values = None
    CAN['F14R2']['FB18'].values = None
    CAN['F14R2']['FB17'].values = None
    CAN['F14R2']['FB16'].values = None
    CAN['F14R2']['FB15'].values = None
    CAN['F14R2']['FB14'].values = None
    CAN['F14R2']['FB13'].values = None
    CAN['F14R2']['FB12'].values = None
    CAN['F14R2']['FB11'].values = None
    CAN['F14R2']['FB10'].values = None
    CAN['F14R2']['FB9'].values = None
    CAN['F14R2']['FB8'].values = None
    CAN['F14R2']['FB7'].values = None
    CAN['F14R2']['FB6'].values = None
    CAN['F14R2']['FB5'].values = None
    CAN['F14R2']['FB4'].values = None
    CAN['F14R2']['FB3'].values = None
    CAN['F14R2']['FB2'].values = None
    CAN['F14R2']['FB1'].values = None
    CAN['F14R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F15R1	(Filter bank 15 register 1)
    # Offset: 696	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F15R1']['FB31'].values = None
    CAN['F15R1']['FB30'].values = None
    CAN['F15R1']['FB29'].values = None
    CAN['F15R1']['FB28'].values = None
    CAN['F15R1']['FB27'].values = None
    CAN['F15R1']['FB26'].values = None
    CAN['F15R1']['FB25'].values = None
    CAN['F15R1']['FB24'].values = None
    CAN['F15R1']['FB23'].values = None
    CAN['F15R1']['FB22'].values = None
    CAN['F15R1']['FB21'].values = None
    CAN['F15R1']['FB20'].values = None
    CAN['F15R1']['FB19'].values = None
    CAN['F15R1']['FB18'].values = None
    CAN['F15R1']['FB17'].values = None
    CAN['F15R1']['FB16'].values = None
    CAN['F15R1']['FB15'].values = None
    CAN['F15R1']['FB14'].values = None
    CAN['F15R1']['FB13'].values = None
    CAN['F15R1']['FB12'].values = None
    CAN['F15R1']['FB11'].values = None
    CAN['F15R1']['FB10'].values = None
    CAN['F15R1']['FB9'].values = None
    CAN['F15R1']['FB8'].values = None
    CAN['F15R1']['FB7'].values = None
    CAN['F15R1']['FB6'].values = None
    CAN['F15R1']['FB5'].values = None
    CAN['F15R1']['FB4'].values = None
    CAN['F15R1']['FB3'].values = None
    CAN['F15R1']['FB2'].values = None
    CAN['F15R1']['FB1'].values = None
    CAN['F15R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F15R2	(Filter bank 15 register 2)
    # Offset: 700	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F15R2']['FB31'].values = None
    CAN['F15R2']['FB30'].values = None
    CAN['F15R2']['FB29'].values = None
    CAN['F15R2']['FB28'].values = None
    CAN['F15R2']['FB27'].values = None
    CAN['F15R2']['FB26'].values = None
    CAN['F15R2']['FB25'].values = None
    CAN['F15R2']['FB24'].values = None
    CAN['F15R2']['FB23'].values = None
    CAN['F15R2']['FB22'].values = None
    CAN['F15R2']['FB21'].values = None
    CAN['F15R2']['FB20'].values = None
    CAN['F15R2']['FB19'].values = None
    CAN['F15R2']['FB18'].values = None
    CAN['F15R2']['FB17'].values = None
    CAN['F15R2']['FB16'].values = None
    CAN['F15R2']['FB15'].values = None
    CAN['F15R2']['FB14'].values = None
    CAN['F15R2']['FB13'].values = None
    CAN['F15R2']['FB12'].values = None
    CAN['F15R2']['FB11'].values = None
    CAN['F15R2']['FB10'].values = None
    CAN['F15R2']['FB9'].values = None
    CAN['F15R2']['FB8'].values = None
    CAN['F15R2']['FB7'].values = None
    CAN['F15R2']['FB6'].values = None
    CAN['F15R2']['FB5'].values = None
    CAN['F15R2']['FB4'].values = None
    CAN['F15R2']['FB3'].values = None
    CAN['F15R2']['FB2'].values = None
    CAN['F15R2']['FB1'].values = None
    CAN['F15R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F16R1	(Filter bank 16 register 1)
    # Offset: 704	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F16R1']['FB31'].values = None
    CAN['F16R1']['FB30'].values = None
    CAN['F16R1']['FB29'].values = None
    CAN['F16R1']['FB28'].values = None
    CAN['F16R1']['FB27'].values = None
    CAN['F16R1']['FB26'].values = None
    CAN['F16R1']['FB25'].values = None
    CAN['F16R1']['FB24'].values = None
    CAN['F16R1']['FB23'].values = None
    CAN['F16R1']['FB22'].values = None
    CAN['F16R1']['FB21'].values = None
    CAN['F16R1']['FB20'].values = None
    CAN['F16R1']['FB19'].values = None
    CAN['F16R1']['FB18'].values = None
    CAN['F16R1']['FB17'].values = None
    CAN['F16R1']['FB16'].values = None
    CAN['F16R1']['FB15'].values = None
    CAN['F16R1']['FB14'].values = None
    CAN['F16R1']['FB13'].values = None
    CAN['F16R1']['FB12'].values = None
    CAN['F16R1']['FB11'].values = None
    CAN['F16R1']['FB10'].values = None
    CAN['F16R1']['FB9'].values = None
    CAN['F16R1']['FB8'].values = None
    CAN['F16R1']['FB7'].values = None
    CAN['F16R1']['FB6'].values = None
    CAN['F16R1']['FB5'].values = None
    CAN['F16R1']['FB4'].values = None
    CAN['F16R1']['FB3'].values = None
    CAN['F16R1']['FB2'].values = None
    CAN['F16R1']['FB1'].values = None
    CAN['F16R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F16R2	(Filter bank 16 register 2)
    # Offset: 708	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F16R2']['FB31'].values = None
    CAN['F16R2']['FB30'].values = None
    CAN['F16R2']['FB29'].values = None
    CAN['F16R2']['FB28'].values = None
    CAN['F16R2']['FB27'].values = None
    CAN['F16R2']['FB26'].values = None
    CAN['F16R2']['FB25'].values = None
    CAN['F16R2']['FB24'].values = None
    CAN['F16R2']['FB23'].values = None
    CAN['F16R2']['FB22'].values = None
    CAN['F16R2']['FB21'].values = None
    CAN['F16R2']['FB20'].values = None
    CAN['F16R2']['FB19'].values = None
    CAN['F16R2']['FB18'].values = None
    CAN['F16R2']['FB17'].values = None
    CAN['F16R2']['FB16'].values = None
    CAN['F16R2']['FB15'].values = None
    CAN['F16R2']['FB14'].values = None
    CAN['F16R2']['FB13'].values = None
    CAN['F16R2']['FB12'].values = None
    CAN['F16R2']['FB11'].values = None
    CAN['F16R2']['FB10'].values = None
    CAN['F16R2']['FB9'].values = None
    CAN['F16R2']['FB8'].values = None
    CAN['F16R2']['FB7'].values = None
    CAN['F16R2']['FB6'].values = None
    CAN['F16R2']['FB5'].values = None
    CAN['F16R2']['FB4'].values = None
    CAN['F16R2']['FB3'].values = None
    CAN['F16R2']['FB2'].values = None
    CAN['F16R2']['FB1'].values = None
    CAN['F16R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F17R1	(Filter bank 17 register 1)
    # Offset: 712	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F17R1']['FB31'].values = None
    CAN['F17R1']['FB30'].values = None
    CAN['F17R1']['FB29'].values = None
    CAN['F17R1']['FB28'].values = None
    CAN['F17R1']['FB27'].values = None
    CAN['F17R1']['FB26'].values = None
    CAN['F17R1']['FB25'].values = None
    CAN['F17R1']['FB24'].values = None
    CAN['F17R1']['FB23'].values = None
    CAN['F17R1']['FB22'].values = None
    CAN['F17R1']['FB21'].values = None
    CAN['F17R1']['FB20'].values = None
    CAN['F17R1']['FB19'].values = None
    CAN['F17R1']['FB18'].values = None
    CAN['F17R1']['FB17'].values = None
    CAN['F17R1']['FB16'].values = None
    CAN['F17R1']['FB15'].values = None
    CAN['F17R1']['FB14'].values = None
    CAN['F17R1']['FB13'].values = None
    CAN['F17R1']['FB12'].values = None
    CAN['F17R1']['FB11'].values = None
    CAN['F17R1']['FB10'].values = None
    CAN['F17R1']['FB9'].values = None
    CAN['F17R1']['FB8'].values = None
    CAN['F17R1']['FB7'].values = None
    CAN['F17R1']['FB6'].values = None
    CAN['F17R1']['FB5'].values = None
    CAN['F17R1']['FB4'].values = None
    CAN['F17R1']['FB3'].values = None
    CAN['F17R1']['FB2'].values = None
    CAN['F17R1']['FB1'].values = None
    CAN['F17R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F17R2	(Filter bank 17 register 2)
    # Offset: 716	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F17R2']['FB31'].values = None
    CAN['F17R2']['FB30'].values = None
    CAN['F17R2']['FB29'].values = None
    CAN['F17R2']['FB28'].values = None
    CAN['F17R2']['FB27'].values = None
    CAN['F17R2']['FB26'].values = None
    CAN['F17R2']['FB25'].values = None
    CAN['F17R2']['FB24'].values = None
    CAN['F17R2']['FB23'].values = None
    CAN['F17R2']['FB22'].values = None
    CAN['F17R2']['FB21'].values = None
    CAN['F17R2']['FB20'].values = None
    CAN['F17R2']['FB19'].values = None
    CAN['F17R2']['FB18'].values = None
    CAN['F17R2']['FB17'].values = None
    CAN['F17R2']['FB16'].values = None
    CAN['F17R2']['FB15'].values = None
    CAN['F17R2']['FB14'].values = None
    CAN['F17R2']['FB13'].values = None
    CAN['F17R2']['FB12'].values = None
    CAN['F17R2']['FB11'].values = None
    CAN['F17R2']['FB10'].values = None
    CAN['F17R2']['FB9'].values = None
    CAN['F17R2']['FB8'].values = None
    CAN['F17R2']['FB7'].values = None
    CAN['F17R2']['FB6'].values = None
    CAN['F17R2']['FB5'].values = None
    CAN['F17R2']['FB4'].values = None
    CAN['F17R2']['FB3'].values = None
    CAN['F17R2']['FB2'].values = None
    CAN['F17R2']['FB1'].values = None
    CAN['F17R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F18R1	(Filter bank 18 register 1)
    # Offset: 720	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F18R1']['FB31'].values = None
    CAN['F18R1']['FB30'].values = None
    CAN['F18R1']['FB29'].values = None
    CAN['F18R1']['FB28'].values = None
    CAN['F18R1']['FB27'].values = None
    CAN['F18R1']['FB26'].values = None
    CAN['F18R1']['FB25'].values = None
    CAN['F18R1']['FB24'].values = None
    CAN['F18R1']['FB23'].values = None
    CAN['F18R1']['FB22'].values = None
    CAN['F18R1']['FB21'].values = None
    CAN['F18R1']['FB20'].values = None
    CAN['F18R1']['FB19'].values = None
    CAN['F18R1']['FB18'].values = None
    CAN['F18R1']['FB17'].values = None
    CAN['F18R1']['FB16'].values = None
    CAN['F18R1']['FB15'].values = None
    CAN['F18R1']['FB14'].values = None
    CAN['F18R1']['FB13'].values = None
    CAN['F18R1']['FB12'].values = None
    CAN['F18R1']['FB11'].values = None
    CAN['F18R1']['FB10'].values = None
    CAN['F18R1']['FB9'].values = None
    CAN['F18R1']['FB8'].values = None
    CAN['F18R1']['FB7'].values = None
    CAN['F18R1']['FB6'].values = None
    CAN['F18R1']['FB5'].values = None
    CAN['F18R1']['FB4'].values = None
    CAN['F18R1']['FB3'].values = None
    CAN['F18R1']['FB2'].values = None
    CAN['F18R1']['FB1'].values = None
    CAN['F18R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F18R2	(Filter bank 18 register 2)
    # Offset: 724	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F18R2']['FB31'].values = None
    CAN['F18R2']['FB30'].values = None
    CAN['F18R2']['FB29'].values = None
    CAN['F18R2']['FB28'].values = None
    CAN['F18R2']['FB27'].values = None
    CAN['F18R2']['FB26'].values = None
    CAN['F18R2']['FB25'].values = None
    CAN['F18R2']['FB24'].values = None
    CAN['F18R2']['FB23'].values = None
    CAN['F18R2']['FB22'].values = None
    CAN['F18R2']['FB21'].values = None
    CAN['F18R2']['FB20'].values = None
    CAN['F18R2']['FB19'].values = None
    CAN['F18R2']['FB18'].values = None
    CAN['F18R2']['FB17'].values = None
    CAN['F18R2']['FB16'].values = None
    CAN['F18R2']['FB15'].values = None
    CAN['F18R2']['FB14'].values = None
    CAN['F18R2']['FB13'].values = None
    CAN['F18R2']['FB12'].values = None
    CAN['F18R2']['FB11'].values = None
    CAN['F18R2']['FB10'].values = None
    CAN['F18R2']['FB9'].values = None
    CAN['F18R2']['FB8'].values = None
    CAN['F18R2']['FB7'].values = None
    CAN['F18R2']['FB6'].values = None
    CAN['F18R2']['FB5'].values = None
    CAN['F18R2']['FB4'].values = None
    CAN['F18R2']['FB3'].values = None
    CAN['F18R2']['FB2'].values = None
    CAN['F18R2']['FB1'].values = None
    CAN['F18R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F19R1	(Filter bank 19 register 1)
    # Offset: 728	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F19R1']['FB31'].values = None
    CAN['F19R1']['FB30'].values = None
    CAN['F19R1']['FB29'].values = None
    CAN['F19R1']['FB28'].values = None
    CAN['F19R1']['FB27'].values = None
    CAN['F19R1']['FB26'].values = None
    CAN['F19R1']['FB25'].values = None
    CAN['F19R1']['FB24'].values = None
    CAN['F19R1']['FB23'].values = None
    CAN['F19R1']['FB22'].values = None
    CAN['F19R1']['FB21'].values = None
    CAN['F19R1']['FB20'].values = None
    CAN['F19R1']['FB19'].values = None
    CAN['F19R1']['FB18'].values = None
    CAN['F19R1']['FB17'].values = None
    CAN['F19R1']['FB16'].values = None
    CAN['F19R1']['FB15'].values = None
    CAN['F19R1']['FB14'].values = None
    CAN['F19R1']['FB13'].values = None
    CAN['F19R1']['FB12'].values = None
    CAN['F19R1']['FB11'].values = None
    CAN['F19R1']['FB10'].values = None
    CAN['F19R1']['FB9'].values = None
    CAN['F19R1']['FB8'].values = None
    CAN['F19R1']['FB7'].values = None
    CAN['F19R1']['FB6'].values = None
    CAN['F19R1']['FB5'].values = None
    CAN['F19R1']['FB4'].values = None
    CAN['F19R1']['FB3'].values = None
    CAN['F19R1']['FB2'].values = None
    CAN['F19R1']['FB1'].values = None
    CAN['F19R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F19R2	(Filter bank 19 register 2)
    # Offset: 732	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F19R2']['FB31'].values = None
    CAN['F19R2']['FB30'].values = None
    CAN['F19R2']['FB29'].values = None
    CAN['F19R2']['FB28'].values = None
    CAN['F19R2']['FB27'].values = None
    CAN['F19R2']['FB26'].values = None
    CAN['F19R2']['FB25'].values = None
    CAN['F19R2']['FB24'].values = None
    CAN['F19R2']['FB23'].values = None
    CAN['F19R2']['FB22'].values = None
    CAN['F19R2']['FB21'].values = None
    CAN['F19R2']['FB20'].values = None
    CAN['F19R2']['FB19'].values = None
    CAN['F19R2']['FB18'].values = None
    CAN['F19R2']['FB17'].values = None
    CAN['F19R2']['FB16'].values = None
    CAN['F19R2']['FB15'].values = None
    CAN['F19R2']['FB14'].values = None
    CAN['F19R2']['FB13'].values = None
    CAN['F19R2']['FB12'].values = None
    CAN['F19R2']['FB11'].values = None
    CAN['F19R2']['FB10'].values = None
    CAN['F19R2']['FB9'].values = None
    CAN['F19R2']['FB8'].values = None
    CAN['F19R2']['FB7'].values = None
    CAN['F19R2']['FB6'].values = None
    CAN['F19R2']['FB5'].values = None
    CAN['F19R2']['FB4'].values = None
    CAN['F19R2']['FB3'].values = None
    CAN['F19R2']['FB2'].values = None
    CAN['F19R2']['FB1'].values = None
    CAN['F19R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F20R1	(Filter bank 20 register 1)
    # Offset: 736	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F20R1']['FB31'].values = None
    CAN['F20R1']['FB30'].values = None
    CAN['F20R1']['FB29'].values = None
    CAN['F20R1']['FB28'].values = None
    CAN['F20R1']['FB27'].values = None
    CAN['F20R1']['FB26'].values = None
    CAN['F20R1']['FB25'].values = None
    CAN['F20R1']['FB24'].values = None
    CAN['F20R1']['FB23'].values = None
    CAN['F20R1']['FB22'].values = None
    CAN['F20R1']['FB21'].values = None
    CAN['F20R1']['FB20'].values = None
    CAN['F20R1']['FB19'].values = None
    CAN['F20R1']['FB18'].values = None
    CAN['F20R1']['FB17'].values = None
    CAN['F20R1']['FB16'].values = None
    CAN['F20R1']['FB15'].values = None
    CAN['F20R1']['FB14'].values = None
    CAN['F20R1']['FB13'].values = None
    CAN['F20R1']['FB12'].values = None
    CAN['F20R1']['FB11'].values = None
    CAN['F20R1']['FB10'].values = None
    CAN['F20R1']['FB9'].values = None
    CAN['F20R1']['FB8'].values = None
    CAN['F20R1']['FB7'].values = None
    CAN['F20R1']['FB6'].values = None
    CAN['F20R1']['FB5'].values = None
    CAN['F20R1']['FB4'].values = None
    CAN['F20R1']['FB3'].values = None
    CAN['F20R1']['FB2'].values = None
    CAN['F20R1']['FB1'].values = None
    CAN['F20R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F20R2	(Filter bank 20 register 2)
    # Offset: 740	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F20R2']['FB31'].values = None
    CAN['F20R2']['FB30'].values = None
    CAN['F20R2']['FB29'].values = None
    CAN['F20R2']['FB28'].values = None
    CAN['F20R2']['FB27'].values = None
    CAN['F20R2']['FB26'].values = None
    CAN['F20R2']['FB25'].values = None
    CAN['F20R2']['FB24'].values = None
    CAN['F20R2']['FB23'].values = None
    CAN['F20R2']['FB22'].values = None
    CAN['F20R2']['FB21'].values = None
    CAN['F20R2']['FB20'].values = None
    CAN['F20R2']['FB19'].values = None
    CAN['F20R2']['FB18'].values = None
    CAN['F20R2']['FB17'].values = None
    CAN['F20R2']['FB16'].values = None
    CAN['F20R2']['FB15'].values = None
    CAN['F20R2']['FB14'].values = None
    CAN['F20R2']['FB13'].values = None
    CAN['F20R2']['FB12'].values = None
    CAN['F20R2']['FB11'].values = None
    CAN['F20R2']['FB10'].values = None
    CAN['F20R2']['FB9'].values = None
    CAN['F20R2']['FB8'].values = None
    CAN['F20R2']['FB7'].values = None
    CAN['F20R2']['FB6'].values = None
    CAN['F20R2']['FB5'].values = None
    CAN['F20R2']['FB4'].values = None
    CAN['F20R2']['FB3'].values = None
    CAN['F20R2']['FB2'].values = None
    CAN['F20R2']['FB1'].values = None
    CAN['F20R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F21R1	(Filter bank 21 register 1)
    # Offset: 744	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F21R1']['FB31'].values = None
    CAN['F21R1']['FB30'].values = None
    CAN['F21R1']['FB29'].values = None
    CAN['F21R1']['FB28'].values = None
    CAN['F21R1']['FB27'].values = None
    CAN['F21R1']['FB26'].values = None
    CAN['F21R1']['FB25'].values = None
    CAN['F21R1']['FB24'].values = None
    CAN['F21R1']['FB23'].values = None
    CAN['F21R1']['FB22'].values = None
    CAN['F21R1']['FB21'].values = None
    CAN['F21R1']['FB20'].values = None
    CAN['F21R1']['FB19'].values = None
    CAN['F21R1']['FB18'].values = None
    CAN['F21R1']['FB17'].values = None
    CAN['F21R1']['FB16'].values = None
    CAN['F21R1']['FB15'].values = None
    CAN['F21R1']['FB14'].values = None
    CAN['F21R1']['FB13'].values = None
    CAN['F21R1']['FB12'].values = None
    CAN['F21R1']['FB11'].values = None
    CAN['F21R1']['FB10'].values = None
    CAN['F21R1']['FB9'].values = None
    CAN['F21R1']['FB8'].values = None
    CAN['F21R1']['FB7'].values = None
    CAN['F21R1']['FB6'].values = None
    CAN['F21R1']['FB5'].values = None
    CAN['F21R1']['FB4'].values = None
    CAN['F21R1']['FB3'].values = None
    CAN['F21R1']['FB2'].values = None
    CAN['F21R1']['FB1'].values = None
    CAN['F21R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F21R2	(Filter bank 21 register 2)
    # Offset: 748	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F21R2']['FB31'].values = None
    CAN['F21R2']['FB30'].values = None
    CAN['F21R2']['FB29'].values = None
    CAN['F21R2']['FB28'].values = None
    CAN['F21R2']['FB27'].values = None
    CAN['F21R2']['FB26'].values = None
    CAN['F21R2']['FB25'].values = None
    CAN['F21R2']['FB24'].values = None
    CAN['F21R2']['FB23'].values = None
    CAN['F21R2']['FB22'].values = None
    CAN['F21R2']['FB21'].values = None
    CAN['F21R2']['FB20'].values = None
    CAN['F21R2']['FB19'].values = None
    CAN['F21R2']['FB18'].values = None
    CAN['F21R2']['FB17'].values = None
    CAN['F21R2']['FB16'].values = None
    CAN['F21R2']['FB15'].values = None
    CAN['F21R2']['FB14'].values = None
    CAN['F21R2']['FB13'].values = None
    CAN['F21R2']['FB12'].values = None
    CAN['F21R2']['FB11'].values = None
    CAN['F21R2']['FB10'].values = None
    CAN['F21R2']['FB9'].values = None
    CAN['F21R2']['FB8'].values = None
    CAN['F21R2']['FB7'].values = None
    CAN['F21R2']['FB6'].values = None
    CAN['F21R2']['FB5'].values = None
    CAN['F21R2']['FB4'].values = None
    CAN['F21R2']['FB3'].values = None
    CAN['F21R2']['FB2'].values = None
    CAN['F21R2']['FB1'].values = None
    CAN['F21R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F22R1	(Filter bank 22 register 1)
    # Offset: 752	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F22R1']['FB31'].values = None
    CAN['F22R1']['FB30'].values = None
    CAN['F22R1']['FB29'].values = None
    CAN['F22R1']['FB28'].values = None
    CAN['F22R1']['FB27'].values = None
    CAN['F22R1']['FB26'].values = None
    CAN['F22R1']['FB25'].values = None
    CAN['F22R1']['FB24'].values = None
    CAN['F22R1']['FB23'].values = None
    CAN['F22R1']['FB22'].values = None
    CAN['F22R1']['FB21'].values = None
    CAN['F22R1']['FB20'].values = None
    CAN['F22R1']['FB19'].values = None
    CAN['F22R1']['FB18'].values = None
    CAN['F22R1']['FB17'].values = None
    CAN['F22R1']['FB16'].values = None
    CAN['F22R1']['FB15'].values = None
    CAN['F22R1']['FB14'].values = None
    CAN['F22R1']['FB13'].values = None
    CAN['F22R1']['FB12'].values = None
    CAN['F22R1']['FB11'].values = None
    CAN['F22R1']['FB10'].values = None
    CAN['F22R1']['FB9'].values = None
    CAN['F22R1']['FB8'].values = None
    CAN['F22R1']['FB7'].values = None
    CAN['F22R1']['FB6'].values = None
    CAN['F22R1']['FB5'].values = None
    CAN['F22R1']['FB4'].values = None
    CAN['F22R1']['FB3'].values = None
    CAN['F22R1']['FB2'].values = None
    CAN['F22R1']['FB1'].values = None
    CAN['F22R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F22R2	(Filter bank 22 register 2)
    # Offset: 756	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F22R2']['FB31'].values = None
    CAN['F22R2']['FB30'].values = None
    CAN['F22R2']['FB29'].values = None
    CAN['F22R2']['FB28'].values = None
    CAN['F22R2']['FB27'].values = None
    CAN['F22R2']['FB26'].values = None
    CAN['F22R2']['FB25'].values = None
    CAN['F22R2']['FB24'].values = None
    CAN['F22R2']['FB23'].values = None
    CAN['F22R2']['FB22'].values = None
    CAN['F22R2']['FB21'].values = None
    CAN['F22R2']['FB20'].values = None
    CAN['F22R2']['FB19'].values = None
    CAN['F22R2']['FB18'].values = None
    CAN['F22R2']['FB17'].values = None
    CAN['F22R2']['FB16'].values = None
    CAN['F22R2']['FB15'].values = None
    CAN['F22R2']['FB14'].values = None
    CAN['F22R2']['FB13'].values = None
    CAN['F22R2']['FB12'].values = None
    CAN['F22R2']['FB11'].values = None
    CAN['F22R2']['FB10'].values = None
    CAN['F22R2']['FB9'].values = None
    CAN['F22R2']['FB8'].values = None
    CAN['F22R2']['FB7'].values = None
    CAN['F22R2']['FB6'].values = None
    CAN['F22R2']['FB5'].values = None
    CAN['F22R2']['FB4'].values = None
    CAN['F22R2']['FB3'].values = None
    CAN['F22R2']['FB2'].values = None
    CAN['F22R2']['FB1'].values = None
    CAN['F22R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F23R1	(Filter bank 23 register 1)
    # Offset: 760	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F23R1']['FB31'].values = None
    CAN['F23R1']['FB30'].values = None
    CAN['F23R1']['FB29'].values = None
    CAN['F23R1']['FB28'].values = None
    CAN['F23R1']['FB27'].values = None
    CAN['F23R1']['FB26'].values = None
    CAN['F23R1']['FB25'].values = None
    CAN['F23R1']['FB24'].values = None
    CAN['F23R1']['FB23'].values = None
    CAN['F23R1']['FB22'].values = None
    CAN['F23R1']['FB21'].values = None
    CAN['F23R1']['FB20'].values = None
    CAN['F23R1']['FB19'].values = None
    CAN['F23R1']['FB18'].values = None
    CAN['F23R1']['FB17'].values = None
    CAN['F23R1']['FB16'].values = None
    CAN['F23R1']['FB15'].values = None
    CAN['F23R1']['FB14'].values = None
    CAN['F23R1']['FB13'].values = None
    CAN['F23R1']['FB12'].values = None
    CAN['F23R1']['FB11'].values = None
    CAN['F23R1']['FB10'].values = None
    CAN['F23R1']['FB9'].values = None
    CAN['F23R1']['FB8'].values = None
    CAN['F23R1']['FB7'].values = None
    CAN['F23R1']['FB6'].values = None
    CAN['F23R1']['FB5'].values = None
    CAN['F23R1']['FB4'].values = None
    CAN['F23R1']['FB3'].values = None
    CAN['F23R1']['FB2'].values = None
    CAN['F23R1']['FB1'].values = None
    CAN['F23R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F23R2	(Filter bank 23 register 2)
    # Offset: 764	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F23R2']['FB31'].values = None
    CAN['F23R2']['FB30'].values = None
    CAN['F23R2']['FB29'].values = None
    CAN['F23R2']['FB28'].values = None
    CAN['F23R2']['FB27'].values = None
    CAN['F23R2']['FB26'].values = None
    CAN['F23R2']['FB25'].values = None
    CAN['F23R2']['FB24'].values = None
    CAN['F23R2']['FB23'].values = None
    CAN['F23R2']['FB22'].values = None
    CAN['F23R2']['FB21'].values = None
    CAN['F23R2']['FB20'].values = None
    CAN['F23R2']['FB19'].values = None
    CAN['F23R2']['FB18'].values = None
    CAN['F23R2']['FB17'].values = None
    CAN['F23R2']['FB16'].values = None
    CAN['F23R2']['FB15'].values = None
    CAN['F23R2']['FB14'].values = None
    CAN['F23R2']['FB13'].values = None
    CAN['F23R2']['FB12'].values = None
    CAN['F23R2']['FB11'].values = None
    CAN['F23R2']['FB10'].values = None
    CAN['F23R2']['FB9'].values = None
    CAN['F23R2']['FB8'].values = None
    CAN['F23R2']['FB7'].values = None
    CAN['F23R2']['FB6'].values = None
    CAN['F23R2']['FB5'].values = None
    CAN['F23R2']['FB4'].values = None
    CAN['F23R2']['FB3'].values = None
    CAN['F23R2']['FB2'].values = None
    CAN['F23R2']['FB1'].values = None
    CAN['F23R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F24R1	(Filter bank 24 register 1)
    # Offset: 768	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F24R1']['FB31'].values = None
    CAN['F24R1']['FB30'].values = None
    CAN['F24R1']['FB29'].values = None
    CAN['F24R1']['FB28'].values = None
    CAN['F24R1']['FB27'].values = None
    CAN['F24R1']['FB26'].values = None
    CAN['F24R1']['FB25'].values = None
    CAN['F24R1']['FB24'].values = None
    CAN['F24R1']['FB23'].values = None
    CAN['F24R1']['FB22'].values = None
    CAN['F24R1']['FB21'].values = None
    CAN['F24R1']['FB20'].values = None
    CAN['F24R1']['FB19'].values = None
    CAN['F24R1']['FB18'].values = None
    CAN['F24R1']['FB17'].values = None
    CAN['F24R1']['FB16'].values = None
    CAN['F24R1']['FB15'].values = None
    CAN['F24R1']['FB14'].values = None
    CAN['F24R1']['FB13'].values = None
    CAN['F24R1']['FB12'].values = None
    CAN['F24R1']['FB11'].values = None
    CAN['F24R1']['FB10'].values = None
    CAN['F24R1']['FB9'].values = None
    CAN['F24R1']['FB8'].values = None
    CAN['F24R1']['FB7'].values = None
    CAN['F24R1']['FB6'].values = None
    CAN['F24R1']['FB5'].values = None
    CAN['F24R1']['FB4'].values = None
    CAN['F24R1']['FB3'].values = None
    CAN['F24R1']['FB2'].values = None
    CAN['F24R1']['FB1'].values = None
    CAN['F24R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F24R2	(Filter bank 24 register 2)
    # Offset: 772	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F24R2']['FB31'].values = None
    CAN['F24R2']['FB30'].values = None
    CAN['F24R2']['FB29'].values = None
    CAN['F24R2']['FB28'].values = None
    CAN['F24R2']['FB27'].values = None
    CAN['F24R2']['FB26'].values = None
    CAN['F24R2']['FB25'].values = None
    CAN['F24R2']['FB24'].values = None
    CAN['F24R2']['FB23'].values = None
    CAN['F24R2']['FB22'].values = None
    CAN['F24R2']['FB21'].values = None
    CAN['F24R2']['FB20'].values = None
    CAN['F24R2']['FB19'].values = None
    CAN['F24R2']['FB18'].values = None
    CAN['F24R2']['FB17'].values = None
    CAN['F24R2']['FB16'].values = None
    CAN['F24R2']['FB15'].values = None
    CAN['F24R2']['FB14'].values = None
    CAN['F24R2']['FB13'].values = None
    CAN['F24R2']['FB12'].values = None
    CAN['F24R2']['FB11'].values = None
    CAN['F24R2']['FB10'].values = None
    CAN['F24R2']['FB9'].values = None
    CAN['F24R2']['FB8'].values = None
    CAN['F24R2']['FB7'].values = None
    CAN['F24R2']['FB6'].values = None
    CAN['F24R2']['FB5'].values = None
    CAN['F24R2']['FB4'].values = None
    CAN['F24R2']['FB3'].values = None
    CAN['F24R2']['FB2'].values = None
    CAN['F24R2']['FB1'].values = None
    CAN['F24R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F25R1	(Filter bank 25 register 1)
    # Offset: 776	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F25R1']['FB31'].values = None
    CAN['F25R1']['FB30'].values = None
    CAN['F25R1']['FB29'].values = None
    CAN['F25R1']['FB28'].values = None
    CAN['F25R1']['FB27'].values = None
    CAN['F25R1']['FB26'].values = None
    CAN['F25R1']['FB25'].values = None
    CAN['F25R1']['FB24'].values = None
    CAN['F25R1']['FB23'].values = None
    CAN['F25R1']['FB22'].values = None
    CAN['F25R1']['FB21'].values = None
    CAN['F25R1']['FB20'].values = None
    CAN['F25R1']['FB19'].values = None
    CAN['F25R1']['FB18'].values = None
    CAN['F25R1']['FB17'].values = None
    CAN['F25R1']['FB16'].values = None
    CAN['F25R1']['FB15'].values = None
    CAN['F25R1']['FB14'].values = None
    CAN['F25R1']['FB13'].values = None
    CAN['F25R1']['FB12'].values = None
    CAN['F25R1']['FB11'].values = None
    CAN['F25R1']['FB10'].values = None
    CAN['F25R1']['FB9'].values = None
    CAN['F25R1']['FB8'].values = None
    CAN['F25R1']['FB7'].values = None
    CAN['F25R1']['FB6'].values = None
    CAN['F25R1']['FB5'].values = None
    CAN['F25R1']['FB4'].values = None
    CAN['F25R1']['FB3'].values = None
    CAN['F25R1']['FB2'].values = None
    CAN['F25R1']['FB1'].values = None
    CAN['F25R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F25R2	(Filter bank 25 register 2)
    # Offset: 780	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F25R2']['FB31'].values = None
    CAN['F25R2']['FB30'].values = None
    CAN['F25R2']['FB29'].values = None
    CAN['F25R2']['FB28'].values = None
    CAN['F25R2']['FB27'].values = None
    CAN['F25R2']['FB26'].values = None
    CAN['F25R2']['FB25'].values = None
    CAN['F25R2']['FB24'].values = None
    CAN['F25R2']['FB23'].values = None
    CAN['F25R2']['FB22'].values = None
    CAN['F25R2']['FB21'].values = None
    CAN['F25R2']['FB20'].values = None
    CAN['F25R2']['FB19'].values = None
    CAN['F25R2']['FB18'].values = None
    CAN['F25R2']['FB17'].values = None
    CAN['F25R2']['FB16'].values = None
    CAN['F25R2']['FB15'].values = None
    CAN['F25R2']['FB14'].values = None
    CAN['F25R2']['FB13'].values = None
    CAN['F25R2']['FB12'].values = None
    CAN['F25R2']['FB11'].values = None
    CAN['F25R2']['FB10'].values = None
    CAN['F25R2']['FB9'].values = None
    CAN['F25R2']['FB8'].values = None
    CAN['F25R2']['FB7'].values = None
    CAN['F25R2']['FB6'].values = None
    CAN['F25R2']['FB5'].values = None
    CAN['F25R2']['FB4'].values = None
    CAN['F25R2']['FB3'].values = None
    CAN['F25R2']['FB2'].values = None
    CAN['F25R2']['FB1'].values = None
    CAN['F25R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F26R1	(Filter bank 26 register 1)
    # Offset: 784	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F26R1']['FB31'].values = None
    CAN['F26R1']['FB30'].values = None
    CAN['F26R1']['FB29'].values = None
    CAN['F26R1']['FB28'].values = None
    CAN['F26R1']['FB27'].values = None
    CAN['F26R1']['FB26'].values = None
    CAN['F26R1']['FB25'].values = None
    CAN['F26R1']['FB24'].values = None
    CAN['F26R1']['FB23'].values = None
    CAN['F26R1']['FB22'].values = None
    CAN['F26R1']['FB21'].values = None
    CAN['F26R1']['FB20'].values = None
    CAN['F26R1']['FB19'].values = None
    CAN['F26R1']['FB18'].values = None
    CAN['F26R1']['FB17'].values = None
    CAN['F26R1']['FB16'].values = None
    CAN['F26R1']['FB15'].values = None
    CAN['F26R1']['FB14'].values = None
    CAN['F26R1']['FB13'].values = None
    CAN['F26R1']['FB12'].values = None
    CAN['F26R1']['FB11'].values = None
    CAN['F26R1']['FB10'].values = None
    CAN['F26R1']['FB9'].values = None
    CAN['F26R1']['FB8'].values = None
    CAN['F26R1']['FB7'].values = None
    CAN['F26R1']['FB6'].values = None
    CAN['F26R1']['FB5'].values = None
    CAN['F26R1']['FB4'].values = None
    CAN['F26R1']['FB3'].values = None
    CAN['F26R1']['FB2'].values = None
    CAN['F26R1']['FB1'].values = None
    CAN['F26R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F26R2	(Filter bank 26 register 2)
    # Offset: 788	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F26R2']['FB31'].values = None
    CAN['F26R2']['FB30'].values = None
    CAN['F26R2']['FB29'].values = None
    CAN['F26R2']['FB28'].values = None
    CAN['F26R2']['FB27'].values = None
    CAN['F26R2']['FB26'].values = None
    CAN['F26R2']['FB25'].values = None
    CAN['F26R2']['FB24'].values = None
    CAN['F26R2']['FB23'].values = None
    CAN['F26R2']['FB22'].values = None
    CAN['F26R2']['FB21'].values = None
    CAN['F26R2']['FB20'].values = None
    CAN['F26R2']['FB19'].values = None
    CAN['F26R2']['FB18'].values = None
    CAN['F26R2']['FB17'].values = None
    CAN['F26R2']['FB16'].values = None
    CAN['F26R2']['FB15'].values = None
    CAN['F26R2']['FB14'].values = None
    CAN['F26R2']['FB13'].values = None
    CAN['F26R2']['FB12'].values = None
    CAN['F26R2']['FB11'].values = None
    CAN['F26R2']['FB10'].values = None
    CAN['F26R2']['FB9'].values = None
    CAN['F26R2']['FB8'].values = None
    CAN['F26R2']['FB7'].values = None
    CAN['F26R2']['FB6'].values = None
    CAN['F26R2']['FB5'].values = None
    CAN['F26R2']['FB4'].values = None
    CAN['F26R2']['FB3'].values = None
    CAN['F26R2']['FB2'].values = None
    CAN['F26R2']['FB1'].values = None
    CAN['F26R2']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F27R1	(Filter bank 27 register 1)
    # Offset: 792	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F27R1']['FB31'].values = None
    CAN['F27R1']['FB30'].values = None
    CAN['F27R1']['FB29'].values = None
    CAN['F27R1']['FB28'].values = None
    CAN['F27R1']['FB27'].values = None
    CAN['F27R1']['FB26'].values = None
    CAN['F27R1']['FB25'].values = None
    CAN['F27R1']['FB24'].values = None
    CAN['F27R1']['FB23'].values = None
    CAN['F27R1']['FB22'].values = None
    CAN['F27R1']['FB21'].values = None
    CAN['F27R1']['FB20'].values = None
    CAN['F27R1']['FB19'].values = None
    CAN['F27R1']['FB18'].values = None
    CAN['F27R1']['FB17'].values = None
    CAN['F27R1']['FB16'].values = None
    CAN['F27R1']['FB15'].values = None
    CAN['F27R1']['FB14'].values = None
    CAN['F27R1']['FB13'].values = None
    CAN['F27R1']['FB12'].values = None
    CAN['F27R1']['FB11'].values = None
    CAN['F27R1']['FB10'].values = None
    CAN['F27R1']['FB9'].values = None
    CAN['F27R1']['FB8'].values = None
    CAN['F27R1']['FB7'].values = None
    CAN['F27R1']['FB6'].values = None
    CAN['F27R1']['FB5'].values = None
    CAN['F27R1']['FB4'].values = None
    CAN['F27R1']['FB3'].values = None
    CAN['F27R1']['FB2'].values = None
    CAN['F27R1']['FB1'].values = None
    CAN['F27R1']['FB0'].values = None

    # -------------------------------------------------------------------------
    # F27R2	(Filter bank 27 register 2)
    # Offset: 796	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    CAN['F27R2']['FB31'].values = None
    CAN['F27R2']['FB30'].values = None
    CAN['F27R2']['FB29'].values = None
    CAN['F27R2']['FB28'].values = None
    CAN['F27R2']['FB27'].values = None
    CAN['F27R2']['FB26'].values = None
    CAN['F27R2']['FB25'].values = None
    CAN['F27R2']['FB24'].values = None
    CAN['F27R2']['FB23'].values = None
    CAN['F27R2']['FB22'].values = None
    CAN['F27R2']['FB21'].values = None
    CAN['F27R2']['FB20'].values = None
    CAN['F27R2']['FB19'].values = None
    CAN['F27R2']['FB18'].values = None
    CAN['F27R2']['FB17'].values = None
    CAN['F27R2']['FB16'].values = None
    CAN['F27R2']['FB15'].values = None
    CAN['F27R2']['FB14'].values = None
    CAN['F27R2']['FB13'].values = None
    CAN['F27R2']['FB12'].values = None
    CAN['F27R2']['FB11'].values = None
    CAN['F27R2']['FB10'].values = None
    CAN['F27R2']['FB9'].values = None
    CAN['F27R2']['FB8'].values = None
    CAN['F27R2']['FB7'].values = None
    CAN['F27R2']['FB6'].values = None
    CAN['F27R2']['FB5'].values = None
    CAN['F27R2']['FB4'].values = None
    CAN['F27R2']['FB3'].values = None
    CAN['F27R2']['FB2'].values = None
    CAN['F27R2']['FB1'].values = None
    CAN['F27R2']['FB0'].values = None

