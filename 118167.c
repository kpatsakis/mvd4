 CVE_2012_0041_PATCHED_dissect_packet(epan_dissect_t *edt, union wtap_pseudo_header const guchar *pd, frame_data *fd, column_info *cinfo) memset ( & edt -> pi , 0 , sizeof ( edt -> pi ) ); edt -> pi . current_proto = "<Missing Protocol Name>"; edt -> pi . cinfo = cinfo; edt -> pi . fd = fd; edt -> pi . pseudo_header = pseudo_header; edt -> pi . dl_src . type = AT_NONE; edt -> pi . dl_dst . type = AT_NONE; edt -> pi . net_src . type = AT_NONE; edt -> pi . net_dst . type = AT_NONE; edt -> pi . src . type = AT_NONE; edt -> pi . dst . type = AT_NONE; edt -> pi . ctype = CT_NONE; edt -> pi . noreassembly_reason = ""; edt -> pi . ptype = PT_NONE; edt -> pi . p2p_dir = P2P_DIR_UNKNOWN; edt -> pi . dcetransporttype = - 1; edt -> pi . annex_a_used = MTP2_ANNEX_A_USED_UNKNOWN; edt -> pi . dcerpc_procedure_name = ""; edt -> pi . link_dir = LINK_DIR_UNKNOWN; edt -> tvb = NULL; edt -> pi . ethertype = G_MAXINT; edt -> tvb = tvb_new_real_data ( pd , fd -> cap_len , fd -> pkt_len > G_MAXINT ? G_MAXINT : fd -> pkt_len ); add_new_data_source ( & edt -> pi , edt -> tvb , "Frame" ); call_dissector ( frame_handle , edt -> tvb , & edt -> pi , edt -> tree ); proto_tree_add_protocol_format ( edt -> tree , proto_malformed , edt -> tvb , 0 , 0 , "[Malformed Frame: Packet Length]" ); 