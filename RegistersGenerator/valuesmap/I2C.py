from tempvalue import*


def apply(I2C):
    # -------------------------------------------------------------------------
    # CR1	(Control register 1)
    # Offset: 0	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    I2C['CR1']['SWRST'].values = None
    I2C['CR1']['ALERT'].values = None
    I2C['CR1']['PEC'].values = None
    I2C['CR1']['POS'].values = None
    I2C['CR1']['ACK'].values = ['Disable', 'Enable']
    I2C['CR1']['STOP'].values = ['Disable', 'Enable']
    I2C['CR1']['START'].values = ['Disable', 'Enable']
    I2C['CR1']['NOSTRETCH'].values = None
    I2C['CR1']['ENGC'].values = None
    I2C['CR1']['ENPEC'].values = None
    I2C['CR1']['ENARP'].values = None
    I2C['CR1']['SMBTYPE'].values = None
    I2C['CR1']['SMBUS'].values = None
    I2C['CR1']['PE'].values = ['Disable', 'Enable']

    # -------------------------------------------------------------------------
    # CR2	(Control register 2)
    # Offset: 4	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    I2C['CR2']['LAST'].values = ['Disable', 'Enable']
    I2C['CR2']['DMAEN'].values = ['Disable', 'Enable']
    I2C['CR2']['ITBUFEN'].values = ['Disable', 'Enable']
    I2C['CR2']['ITEVTEN'].values = ['Disable', 'Enable']
    I2C['CR2']['ITERREN'].values = ['Disable', 'Enable']
    I2C['CR2']['FREQ'].values = None

    # -------------------------------------------------------------------------
    # OAR1	(Own address register 1)
    # Offset: 8	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    I2C['OAR1']['ADDMODE'].values = None
    I2C['OAR1']['ADD10'].values = None
    I2C['OAR1']['ADD7'].values = None
    I2C['OAR1']['ADD0'].values = None

    # -------------------------------------------------------------------------
    # OAR2	(Own address register 2)
    # Offset: 12	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    I2C['OAR2']['ADD2'].values = None
    I2C['OAR2']['ENDUAL'].values = None

    # -------------------------------------------------------------------------
    # DR	(Data register)
    # Offset: 16	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    I2C['DR']['DR'].values = None

    # -------------------------------------------------------------------------
    # SR1	(Status register 1)
    # Offset: 20	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    I2C['SR1']['SMBALERT'].values = None
    I2C['SR1']['TIMEOUT'].values = None
    I2C['SR1']['PECERR'].values = None
    I2C['SR1']['OVR'].values = None
    I2C['SR1']['AF'].values = None
    I2C['SR1']['ARLO'].values = None
    I2C['SR1']['BERR'].values = None
    I2C['SR1']['TxE'].values = None
    I2C['SR1']['RxNE'].values = None
    I2C['SR1']['STOPF'].values = None
    I2C['SR1']['ADD10'].values = None
    I2C['SR1']['BTF'].values = None
    I2C['SR1']['ADDR'].values = None
    I2C['SR1']['SB'].values = None

    # -------------------------------------------------------------------------
    # SR2	(Status register 2)
    # Offset: 24	Size: 32	Access: ReadMode
    # -------------------------------------------------------------------------
    I2C['SR2']['PEC'].values = None
    I2C['SR2']['DUALF'].values = None
    I2C['SR2']['SMBHOST'].values = None
    I2C['SR2']['SMBDEFAULT'].values = None
    I2C['SR2']['GENCALL'].values = None
    I2C['SR2']['TRA'].values = None
    I2C['SR2']['BUSY'].values = None
    I2C['SR2']['MSL'].values = None

    # -------------------------------------------------------------------------
    # CCR	(Clock control register)
    # Offset: 28	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    I2C['CCR']['F_S'].values = [tempvalue('Value')]
    I2C['CCR']['DUTY'].values = [tempvalue('Value')]
    I2C['CCR']['CCR'].values = [tempvalue('Value')]

    # -------------------------------------------------------------------------
    # TRISE	(TRISE register)
    # Offset: 32	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    I2C['TRISE']['TRISE'].values = None

    # -------------------------------------------------------------------------
    # FLTR	(I2C FLTR register)
    # Offset: 36	Size: 32	Access: ReadWriteMode
    # -------------------------------------------------------------------------
    I2C['FLTR']['ANOFF'].values = None
    I2C['FLTR']['DNF'].values = None

