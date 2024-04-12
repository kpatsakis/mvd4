int CVE_2013_4514_VULN_wvlan_uil_put_info(struct uilreq *urq, struct wl_private *lp) ltv_t * pLtv ; if ( urq -> hcfCtx == & ( lp -> hcfCtx ) )  if ( capable ( CAP_NET_ADMIN ) )  if ( ( urq -> data != NULL ) && ( urq -> len != 0 ) )  if ( urq -> len < ( sizeof ( hcf_16 ) * 2 ) )  urq -> len = sizeof ( lp -> ltvRecord ); urq -> result = UIL_ERR_LEN; result = verify_area ( VERIFY_READ , urq -> data , urq -> len ); if ( result != 0 )  urq -> result = UIL_FAILURE; if ( ( ( lp -> ltvRecord . len + 1 ) * sizeof ( hcf_16 ) ) > urq -> len )  urq -> len = sizeof ( lp -> ltvRecord ); urq -> result = UIL_ERR_LEN; if ( urq -> len > sizeof ( lp -> ltvRecord ) )  pLtv = kmalloc ( urq -> len , GFP_KERNEL ); if ( pLtv != NULL )  pLtv = & ( lp -> ltvRecord ); switch ( pLtv -> typ )  lp -> EnableEncryption = pLtv -> u . u16 [ 0 ]; pLtv -> u . u16 [ 0 ] = CNV_INT_TO_LITTLE ( pLtv -> u . u16 [ 0 ] ); lp -> authentication = pLtv -> u . u16 [ 0 ]; pLtv -> u . u16 [ 0 ] = CNV_INT_TO_LITTLE ( pLtv -> u . u16 [ 0 ] ); lp -> intraBSSRelay = pLtv -> u . u16 [ 0 ]; pLtv -> u . u16 [ 0 ] = CNV_INT_TO_LITTLE ( pLtv -> u . u16 [ 0 ] ); memset ( lp -> NetworkName , 0 , sizeof ( lp -> NetworkName ) ); memcpy ( ( void * ) lp -> NetworkName , ( void * ) & pLtv -> u . u8 [ 2 ] , ( size_t ) pLtv -> u . u16 [ 0 ] ); lp -> CreateIBSS = pLtv -> u . u16 [ 0 ]; lp -> RTSThreshold = pLtv -> u . u16 [ 0 ]; lp -> TxRateControl [ 0 ] = pLtv -> u . u16 [ 0 ]; lp -> TxRateControl [ 1 ] = pLtv -> u . u16 [ 1 ]; lp -> RTSThreshold = pLtv -> u . u16 [ 0 ]; lp -> wds_port [ 0 ] . rtsThreshold = pLtv -> u . u16 [ 0 ]; lp -> wds_port [ 1 ] . rtsThreshold = pLtv -> u . u16 [ 0 ]; lp -> wds_port [ 2 ] . rtsThreshold = pLtv -> u . u16 [ 0 ]; lp -> wds_port [ 3 ] . rtsThreshold = pLtv -> u . u16 [ 0 ]; lp -> wds_port [ 4 ] . rtsThreshold = pLtv -> u . u16 [ 0 ]; lp -> wds_port [ 5 ] . rtsThreshold = pLtv -> u . u16 [ 0 ]; lp -> wds_port [ 0 ] . txRateCntl = pLtv -> u . u16 [ 0 ]; lp -> wds_port [ 1 ] . txRateCntl = pLtv -> u . u16 [ 0 ]; lp -> wds_port [ 2 ] . txRateCntl = pLtv -> u . u16 [ 0 ]; lp -> wds_port [ 3 ] . txRateCntl = pLtv -> u . u16 [ 0 ]; lp -> wds_port [ 4 ] . txRateCntl = pLtv -> u . u16 [ 0 ]; lp -> wds_port [ 5 ] . txRateCntl = pLtv -> u . u16 [ 0 ]; memcpy ( ( void * ) & ( lp -> DefaultKeys ) , ( void * ) pKeys , sizeof ( CFG_DEFAULT_KEYS_STRCT ) ); lp -> TransmitKeyID = pLtv -> u . u16 [ 0 ]; memset ( lp -> szEncryption , 0 , sizeof ( lp -> szEncryption ) ); memcpy ( ( void * ) lp -> szEncryption , ( void * ) & pLtv -> u . u8 [ 0 ] , ( pLtv -> len * sizeof ( hcf_16 ) ) ); wl_wep_decode ( CRYPT_CODE , & sEncryption , lp -> szEncryption ); lp -> TransmitKeyID = sEncryption . wTxKeyID + 1; lp -> EnableEncryption = sEncryption . wEnabled; memcpy ( & lp -> DefaultKeys , & sEncryption . EncStr , sizeof ( CFG_DEFAULT_KEYS_STRCT ) ); lp -> driverEnable = pLtv -> u . u16 [ 0 ]; lp -> wolasEnable = pLtv -> u . u16 [ 0 ]; lp -> AuthKeyMgmtSuite = pLtv -> u . u16 [ 0 ]; if ( lp -> driverEnable )  hcf_cntl ( & ( lp -> hcfCtx ) , HCF_CNTL_ENABLE | HCF_PORT_0 ); hcf_cntl ( & ( lp -> hcfCtx ) , HCF_CNTL_CONNECT ); hcf_cntl ( & ( lp -> hcfCtx ) , HCF_CNTL_DISABLE | HCF_PORT_0 ); hcf_cntl ( & ( lp -> hcfCtx ) , HCF_CNTL_DISCONNECT ); wl_act_int_off ( lp ); urq -> result = hcf_put_info ( & ( lp -> hcfCtx ) , ( LTVP ) pLtv ); wl_act_int_on ( lp ); 