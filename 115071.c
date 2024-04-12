static void rtl8139_io_writel(void *opaque, uint8_t addr, uint32_t val) switch ( addr )  rtl8139_io_writeb ( opaque , addr + 2 , ( val >> 16 ) & 0xff ); static void rtl8139_io_writeb(void *opaque, uint8_t addr, uint32_t val) RTL8139State * s = opaque ; switch ( addr )  s -> phys [ addr - MAC0 ] = val; s -> phys [ addr - MAC0 ] = val; s -> mult [ addr - MAR0 ] = val; rtl8139_ChipCmd_write ( s , val ); static void rtl8139_ChipCmd_write(RTL8139State *s, uint32_t val) DeviceState * d = DEVICE ( s ) ; val &= 0xff; if ( val & CmdReset )  rtl8139_reset ( d ); static void rtl8139_reset(DeviceState *d) RTL8139State * s = RTL8139 ( d ) ; memcpy ( s -> phys , s -> conf . macaddr . a , 6 ); qemu_format_nic_info_str ( qemu_get_queue ( s -> nic ) , s -> phys ); s -> IntrStatus = 0; s -> IntrMask = 0; rtl8139_update_irq ( s ); s -> TxStatus [ i ] = TxHostOwns; s -> currTxDesc = 0; s -> currCPlusRxDesc = 0; s -> currCPlusTxDesc = 0; s -> RxRingAddrLO = 0; s -> RxRingAddrHI = 0; s -> RxBuf = 0; rtl8139_reset_rxring ( s , 8192 ); s -> TxConfig = 0; s -> clock_enabled = 0; s -> bChipCmdState = CmdReset; s -> Config0 = 0x0; s -> Config1 = 0xC; s -> Config3 = 0x1; s -> Config5 = 0x0; s -> CSCR = CSCR_F_LINK_100 | CSCR_HEART_BIT | CSCR_LD; s -> CpCmd = 0x0; s -> cplus_enabled = 0; s -> BasicModeCtrl = 0x1000; s -> BasicModeStatus = 0x7809; s -> BasicModeStatus |= 0x0020; s -> BasicModeStatus |= qemu_get_queue ( s -> nic ) -> link_down ? 0 : 0x04; s -> NWayAdvert = 0x05e1; s -> NWayLPAR = 0x05e1; s -> NWayExpansion = 0x0001; s -> TCTR = 0; s -> TimerInt = 0; s -> TCTR_base = 0; rtl8139_set_next_tctr_time ( s ); RTL8139TallyCounters_clear ( & s -> tally_counters ); 