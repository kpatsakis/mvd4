static void eepro100_cu_command(EEPRO100State * s, uint8_t val) switch ( val )  s -> cu_offset = e100_read_reg4 ( s , SCBPointer ); if ( get_cu_state ( s ) == cu_suspended )  action_command ( s ); static void action_command(EEPRO100State *s) bool bit_el ; bool bit_s ; bool bit_nc ; s -> cb_address = s -> cu_base + s -> cu_offset; bit_el = ( ( s -> tx . command & COMMAND_EL ) != 0 ); bit_s = ( ( s -> tx . command & COMMAND_S ) != 0 ); bit_nc = ( ( s -> tx . command & COMMAND_NC ) != 0 ); s -> cu_offset = s -> tx . link; switch ( s -> tx . command & COMMAND_CMD )  if ( bit_nc )  tx_command ( s ); s -> tx . status = 0; if ( bit_el )  if ( bit_s )  static void tx_command(EEPRO100State *s) uint32_t tbd_array = le32_to_cpu ( s -> tx . tbd_array_addr ) ; uint16_t tcb_bytes = ( le16_to_cpu ( s -> tx . tcb_bytes ) & 0x3fff ) ; uint8_t buf [ 2600 ] ; uint16_t size = 0 ; uint32_t tbd_address = s -> cb_address + 0x10 ; if ( tcb_bytes > 2600 )  tcb_bytes = 2600; while ( size < tcb_bytes )  uint16_t tx_buffer_size = lduw_le_pci_dma ( & s -> dev , tbd_address + 4 ) ; tbd_address += 8; tx_buffer_size = MIN ( tx_buffer_size , sizeof ( buf ) - size ); size += tx_buffer_size; if ( tbd_array == 0xffffffff )  uint8_t tbd_count = 0 ; if ( s -> has_extended_tcb_support && ! ( s -> configuration [ 6 ] & BIT ( 4 ) ) )  for (; tbd_count < 2; tbd_count++) uint16_t tx_buffer_size = lduw_le_pci_dma ( & s -> dev , tbd_address + 4 ) ; uint16_t tx_buffer_el = lduw_le_pci_dma ( & s -> dev , tbd_address + 6 ) ; tbd_address += 8; tx_buffer_size = MIN ( tx_buffer_size , sizeof ( buf ) - size ); size += tx_buffer_size; if ( tx_buffer_el & 1 )  tbd_address = tbd_array; for (; tbd_count < s->tx.tbd_count; tbd_count++) uint16_t tx_buffer_size = lduw_le_pci_dma ( & s -> dev , tbd_address + 4 ) ; uint16_t tx_buffer_el = lduw_le_pci_dma ( & s -> dev , tbd_address + 6 ) ; tbd_address += 8; tx_buffer_size = MIN ( tx_buffer_size , sizeof ( buf ) - size ); size += tx_buffer_size; if ( tx_buffer_el & 1 )  TRACE ( RXTX , logout ( "%p sending frame, len=%d,%s\n" , s , size , nic_dump ( buf , size ) ) ); static const char *nic_dump(const uint8_t * buf, unsigned size) static char dump [ 3 * 16 + 1 ] ; char * p = & dump [ 0 ] ; if ( size > 16 )  size = 16; while ( size -- > 0 )  p += sprintf ( p , " %02x" , * buf ++ ); 