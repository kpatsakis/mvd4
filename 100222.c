static int CVE_2008_5134_PATCHED_lbs_process_bss(struct bss_descriptor uint8_t **pbeaconinfo, int *bytesleft) struct ieeetypes_dsparamset * pDS ; struct ieeetypes_cfparamset * pCF ; struct ieeetypes_ibssparamset * pibss ; struct ieeetypes_countryinfoset * pcountryinfo ; uint8_t * pos , * end , * p ; uint16_t beaconsize = 0 ; if ( * bytesleft >= sizeof ( beaconsize ) )  beaconsize = get_unaligned_le16 ( * pbeaconinfo ); * bytesleft -= sizeof ( beaconsize ); * pbeaconinfo += sizeof ( beaconsize ); if ( beaconsize == 0 || beaconsize > * bytesleft )  pos = * pbeaconinfo; end = pos + beaconsize; memcpy ( bss -> bssid , pos , ETH_ALEN ); pos += ETH_ALEN; if ( ( end - pos ) < 12 )  bss -> rssi = * pos; pos ++; pos += 8; bss -> beaconperiod = get_unaligned_le16 ( pos ); pos += 2; bss -> capability = get_unaligned_le16 ( pos ); pos += 2; if ( bss -> capability & WLAN_CAPABILITY_IBSS )  bss -> mode = IW_MODE_ADHOC; bss -> mode = IW_MODE_INFRA; while ( pos <= end - 2 )  struct ieee80211_info_element * elem = ( void * ) pos ; if ( pos + elem -> len > end )  switch ( elem -> id )  bss -> ssid_len = min_t ( int , 32 , elem -> len ); memcpy ( bss -> ssid , elem -> data , bss -> ssid_len ); n_basic_rates = min_t ( uint8_t , MAX_RATES , elem -> len ); memcpy ( bss -> rates , elem -> data , n_basic_rates ); pDS = ( struct ieeetypes_dsparamset * ) pos; bss -> channel = pDS -> currentchan; pCF = ( struct ieeetypes_cfparamset * ) pos; memcpy ( & bss -> ssparamset . cfparamset , pCF , sizeof ( struct ieeetypes_cfparamset ) ); pibss = ( struct ieeetypes_ibssparamset * ) pos; bss -> atimwindow = le16_to_cpu ( pibss -> atimwindow ); memmove ( & bss -> ssparamset . ibssparamset , pibss , sizeof ( struct ieeetypes_ibssparamset ) ); pcountryinfo = ( struct ieeetypes_countryinfoset * ) pos; if ( pcountryinfo -> len < sizeof ( pcountryinfo -> countrycode ) || pcountryinfo -> len > 254 )  if ( elem -> len >= 4 && elem -> data [ 0 ] == 0x00 && elem -> data [ 1 ] == 0x50 && elem -> data [ 2 ] == 0xf2 && elem -> data [ 3 ] == 0x01 )  bss -> wpa_ie_len = min ( elem -> len + 2 , MAX_WPA_IE_LEN ); if ( elem -> len >= MARVELL_MESH_IE_LENGTH && elem -> data [ 0 ] == 0x00 && elem -> data [ 1 ] == 0x50 && elem -> data [ 2 ] == 0x43 && elem -> data [ 3 ] == 0x04 )  bss -> mesh = 1; bss -> rsn_ie_len = min ( elem -> len + 2 , MAX_WPA_IE_LEN ); pos += elem -> len + 2; 