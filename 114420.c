static brcmf_cfg80211_connect(struct wiphy *wiphy, struct net_device struct cfg80211_connect_params *sme) struct brcmf_cfg80211_info * cfg = wiphy_to_cfg ( wiphy ) ; struct brcmf_if * ifp = netdev_priv ( ndev ) ; const struct brcmf_vs_tlv * wpa_ie ; if ( ! check_vif_up ( ifp -> vif ) )  static bool check_vif_up(struct brcmf_cfg80211_vif *vif) if ( ! test_bit ( BRCMF_VIF_STATUS_READY , & vif -> sme_state ) )  return false ; return true ; if ( ! sme -> ssid )  if ( ifp -> vif == cfg -> p2p . bss_idx [ P2PAPI_BSSCFG_PRIMARY ] . vif )  wpa_ie = brcmf_find_wpaie ( ( u8 * ) sme -> ie , sme -> ie_len ); static struct brcmf_vs_tlv brcmf_find_wpaie(const u8 *parse, u32 len) const struct brcmf_tlv * ie ; while ( ie = brcmf_parse_tlvs ( parse , len , WLAN_EID_VENDOR_SPECIFIC ) )  if ( brcmf_tlv_has_ie ( ( const u8 * ) ie , & parse , & len , WPA_OUI , TLV_OUI_LEN , WPA_OUI_TYPE ) )  static brcmf_tlv_has_ie(const u8 *ie, const u8 **tlvs, u32 const u8 *oui, u32 oui_len, u8 type) if ( ie [ TLV_LEN_OFF ] >= oui_len + 1 && ! memcmp ( & ie [ TLV_BODY_OFF ] , oui , oui_len ) && type == ie [ TLV_BODY_OFF + oui_len ] )  