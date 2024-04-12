static e1000_receive(NetClientState *nc, const uint8_t *buf, size_t size) E1000State * s = qemu_get_nic_opaque ( nc ) ; uint8_t min_buf [ MIN_BUF_SIZE ] ; if ( ! ( s -> mac_reg [ STATUS ] & E1000_STATUS_LU ) )  if ( ! ( s -> mac_reg [ RCTL ] & E1000_RCTL_EN ) )  if ( size < sizeof ( min_buf ) )  memcpy ( min_buf , buf , size ); buf = min_buf; size = sizeof ( min_buf ); if ( ( size > MAXIMUM_ETHERNET_LPE_SIZE || ( size > MAXIMUM_ETHERNET_VLAN_SIZE && ! ( s -> mac_reg [ RCTL ] & E1000_RCTL_LPE ) ) ) && ! ( s -> mac_reg [ RCTL ] & E1000_RCTL_SBP ) )  if ( ! receive_filter ( s , buf , size ) )  static receive_filter(E1000State *s, const uint8_t *buf, int size) static const uint8_t bcast [ ] = { 0xff , 0xff , 0xff , 0xff , 0xff , 0xff } ; uint32_t f , rctl = s -> mac_reg [ RCTL ] , ra [ 2 ] , * rp ; if ( is_vlan_packet ( s , buf ) && vlan_rx_filter_enabled ( s ) )  static inline vlan_rx_filter_enabled(E1000State *s) return ( ( s -> mac_reg [ RCTL ] & E1000_RCTL_VFE ) != 0 ) ; static inline is_vlan_packet(E1000State *s, const uint8_t *buf) return ( be16_to_cpup ( ( uint16_t * ) ( buf + 12 ) ) == le16_to_cpup ( ( uint16_t * ) ( s -> mac_reg + VET ) ) ) ; uint16_t vid = be16_to_cpup ( ( uint16_t * ) ( buf + 14 ) ) ; uint32_t vfta = le32_to_cpup ( ( uint32_t * ) ( s -> mac_reg + VFTA ) + ( ( vid >> 5 ) & 0x7f ) ) ; if ( ( vfta & ( 1 << ( vid & 0x1f ) ) ) == 0 )  if ( rctl & E1000_RCTL_UPE )  if ( ( buf [ 0 ] & 1 ) && ( rctl & E1000_RCTL_MPE ) )  if ( ( rctl & E1000_RCTL_BAM ) && ! memcmp ( buf , bcast , sizeof bcast ) )  