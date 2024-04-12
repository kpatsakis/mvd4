static uint32_t pcnet_ioport_readw(void *opaque, uint32_t addr) PCNetState * s = opaque ; pcnet_poll_timer ( s ); static void pcnet_poll_timer(void *opaque) PCNetState * s = opaque ; if ( CSR_TDMD ( s ) )  pcnet_transmit ( s ); static void pcnet_transmit(PCNetState *s) int count = CSR_XMTRL ( s ) - 1 ; int add_crc = 0 ; s -> xmit_pos = - 1; if ( ! CSR_TXON ( s ) )  s -> tx_busy = 1; if ( pcnet_tdte_poll ( s ) )  struct pcnet_TMD tmd ; if ( GET_FIELD ( tmd . status , TMDS , STP ) )  s -> xmit_pos = 0; if ( BCR_SWSTYLE ( s ) != 1 )  add_crc = GET_FIELD ( tmd . status , TMDS , ADDFCS ); if ( ! GET_FIELD ( tmd . status , TMDS , ENP ) )  int bcnt = 4096 - GET_FIELD ( tmd . length , TMDL , BCNT ) ; s -> xmit_pos += bcnt; if ( s -> xmit_pos >= 0 )  int bcnt = 4096 - GET_FIELD ( tmd . length , TMDL , BCNT ) ; s -> xmit_pos += bcnt; if ( CSR_LOOP ( s ) )  if ( BCR_SWSTYLE ( s ) == 1 )  add_crc = ! GET_FIELD ( tmd . status , TMDS , NOFCS ); s -> looptest = add_crc ? PCNET_LOOPTEST_CRC : PCNET_LOOPTEST_NOCRC; pcnet_receive ( s , s -> buffer , s -> xmit_pos ); s -> looptest = 0; s -> csr [ 0 ] &= ~0x0008; s -> csr [ 4 ] |= 0x0004; s -> xmit_pos = - 1; if ( ! CSR_TOKINTD ( s ) || ( CSR_LTINTEN ( s ) && GET_FIELD ( tmd . status , TMDS , LTINT ) ) )  s -> csr [ 0 ] |= 0x0200; if ( count -- )  if ( s -> xmit_pos >= 0 )  s -> csr [ 0 ] |= 0x0200; if ( ! CSR_DXSUFLO ( s ) )  if ( count -- )  static void pcnet_receive(void *opaque, const uint8_t *buf, int size) PCNetState * s = opaque ; uint8_t buf1 [ 60 ] ; if ( CSR_DRX ( s ) || CSR_STOP ( s ) || CSR_SPND ( s ) || ! size )  if ( size < MIN_BUF_SIZE )  memcpy ( buf1 , buf , size ); memset ( buf1 + size , 0 , MIN_BUF_SIZE - size ); buf = buf1; size = MIN_BUF_SIZE; if ( CSR_PROM ( s ) || ( is_padr = padr_match ( s , buf , size ) ) || ( is_bcast = padr_bcast ( s , buf , size ) ) || ( is_ladr = ladr_match ( s , buf , size ) ) )  if ( ! ( CSR_CRST ( s ) & 0x8000 ) )  uint8_t * src = s -> buffer ; if ( ! s -> looptest )  memcpy ( src , buf , size ); src [ size ] = 0; src [ size + 1 ] = 0; src [ size + 2 ] = 0; src [ size + 3 ] = 0; size += 4; s -> phys_mem_write ( s -> dma_opaque , rbadr , src , count , CSR_BSWP ( s ) ); src += count; SET_FIELD ( & rmd . msg_length , RMDM , MCNT , size ); 