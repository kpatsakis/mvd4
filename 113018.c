static s32 brcmf_cfg80211_suspend(struct wiphy struct cfg80211_wowlan *wowl) struct brcmf_cfg80211_info * cfg = wiphy_to_cfg ( wiphy ) ; struct net_device * ndev = cfg_to_ndev ( cfg ) ; struct brcmf_if * ifp = netdev_priv ( ndev ) ; if ( ! check_vif_up ( ifp -> vif ) )  if ( brcmf_feat_is_enabled ( ifp , BRCMF_FEAT_PNO ) )  brcmf_cfg80211_sched_scan_stop ( wiphy , ndev ); static int brcmf_cfg80211_sched_scan_stop(struct wiphy struct net_device *ndev) struct brcmf_cfg80211_info * cfg = wiphy_to_cfg ( wiphy ) ; if ( cfg -> sched_escan )  brcmf_notify_escan_complete ( cfg , netdev_priv ( ndev ) , true , true ); s32 brcmf_notify_escan_complete(struct brcmf_cfg80211_info struct brcmf_if *ifp, bool bool fw_abort) struct brcmf_scan_params_le params_le ; if ( fw_abort )  memset ( & params_le , 0 , sizeof ( params_le ) ); eth_broadcast_addr ( params_le . bssid ); params_le . bss_type = DOT11_BSSTYPE_ANY; params_le . scan_type = 0; params_le . channel_num = cpu_to_le32 ( 1 ); params_le . nprobes = cpu_to_le32 ( 1 ); params_le . active_time = cpu_to_le32 ( - 1 ); params_le . passive_time = cpu_to_le32 ( - 1 ); params_le . home_time = cpu_to_le32 ( - 1 ); params_le . channel_list [ 0 ] = cpu_to_le16 ( - 1 ); err = brcmf_fil_cmd_data_set ( ifp , BRCMF_C_SCAN , & params_le , sizeof ( params_le ) ); if ( err )  return err ; 