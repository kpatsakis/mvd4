static uint64_t eepro100_read(void *opaque, hwaddr unsigned size) EEPRO100State * s = opaque ; switch ( size )  return eepro100_read2 ( s , addr ) ; static uint16_t eepro100_read2(EEPRO100State * s, uint32_t addr) if ( addr <= sizeof ( s -> mem ) - sizeof ( val ) )  val = e100_read_reg2 ( s , addr ); static uint16_t e100_read_reg2(EEPRO100State *s, E100RegisterOffset addr) assert ( ! ( ( uintptr_t ) & s -> mem [ addr ] & 1 ) ); 