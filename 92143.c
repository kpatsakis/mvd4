static void eepro100_write4(EEPRO100State * s, uint32_t addr, uint32_t val) switch ( addr )  eepro100_write_port ( s ); static void eepro100_write_port(EEPRO100State *s) uint32_t val = e100_read_reg4 ( s , SCBPort ) ; uint8_t selection = ( val & PORT_SELECTION_MASK ) ; switch ( selection )  nic_selective_reset ( s ); static void nic_selective_reset(EEPRO100State * s) memset ( s -> mem , 0 , sizeof ( s -> mem ) ); e100_write_reg4 ( s , SCBCtrlMDI , BIT ( 21 ) ); static void e100_write_reg4(EEPRO100State *s, E100RegisterOffset uint32_t val) assert ( ! ( ( uintptr_t ) & s -> mem [ addr ] & 3 ) ); 