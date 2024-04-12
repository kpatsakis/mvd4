static void __devinit CVE_2013_1929_PATCHED_tg3_read_vpd(struct tg3 *tp) u8 * vpd_data ; unsigned int block_end , rosize , len ; u32 vpdlen ; vpd_data = ( u8 * ) tg3_vpd_readblock ( tp , & vpdlen ); if ( ! vpd_data )  i = pci_vpd_find_tag ( vpd_data , 0 , vpdlen , PCI_VPD_LRDT_RO_DATA ); if ( i < 0 )  rosize = pci_vpd_lrdt_size ( & vpd_data [ i ] ); block_end = i + PCI_VPD_LRDT_TAG_SIZE + rosize; i += PCI_VPD_LRDT_TAG_SIZE; if ( block_end > vpdlen )  j = pci_vpd_find_info_keyword ( vpd_data , i , rosize , PCI_VPD_RO_KEYWORD_MFR_ID ); if ( j > 0 )  len = pci_vpd_info_field_size ( & vpd_data [ j ] ); j += PCI_VPD_INFO_FLD_HDR_SIZE; if ( j + len > block_end || len != 4 || memcmp ( & vpd_data [ j ] , "1028" , 4 ) )  j = pci_vpd_find_info_keyword ( vpd_data , i , rosize , PCI_VPD_RO_KEYWORD_VENDOR0 ); if ( j < 0 )  len = pci_vpd_info_field_size ( & vpd_data [ j ] ); j += PCI_VPD_INFO_FLD_HDR_SIZE; if ( j + len > block_end )  if ( len >= sizeof ( tp -> fw_ver ) )  len = sizeof ( tp -> fw_ver ) - 1; memset ( tp -> fw_ver , 0 , sizeof ( tp -> fw_ver ) ); snprintf ( tp -> fw_ver , sizeof ( tp -> fw_ver ) , "%.*s bc " , len , & vpd_data [ j ] ); i = pci_vpd_find_info_keyword ( vpd_data , i , rosize , PCI_VPD_RO_KEYWORD_PARTNO ); if ( i < 0 )  len = pci_vpd_info_field_size ( & vpd_data [ i ] ); i += PCI_VPD_INFO_FLD_HDR_SIZE; if ( len > TG3_BPN_SIZE || ( len + i ) > vpdlen )  memcpy ( tp -> board_part_number , & vpd_data [ i ] , len ); if ( tp -> board_part_number [ 0 ] )  if ( GET_ASIC_REV ( tp -> pci_chip_rev_id ) == ASIC_REV_5717 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_5717 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_5718 )  if ( GET_ASIC_REV ( tp -> pci_chip_rev_id ) == ASIC_REV_57780 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_57780 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_57760 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_57790 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_57788 )  if ( GET_ASIC_REV ( tp -> pci_chip_rev_id ) == ASIC_REV_57765 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_57761 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_57765 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_57781 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_57785 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_57791 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_57795 )  if ( GET_ASIC_REV ( tp -> pci_chip_rev_id ) == ASIC_REV_57766 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_57762 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_57766 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_57782 )  if ( tp -> pdev -> device == TG3PCI_DEVICE_TIGON3_57786 )  if ( GET_ASIC_REV ( tp -> pci_chip_rev_id ) == ASIC_REV_5906 )  strcpy ( tp -> board_part_number , "BCM95906" ); strcpy ( tp -> board_part_number , "none" ); 