 proto_item_prepend_text(proto_item *pi, const char *format, ...) char representation [ ITEM_LABEL_LENGTH ] ; fi = PITEM_FINFO ( pi ); if ( fi == NULL )  if ( ! PROTO_ITEM_IS_HIDDEN ( pi ) )  if ( fi -> rep == NULL )  proto_item_fill_label ( fi , representation );  proto_item_fill_label(field_info *fi, gchar *label_str) header_field_info * hfinfo ; guint8 * bytes ; guint32 integer ; guint64 integer64 ; ipv4_addr * ipv4 ; e_guid_t * guid ; guint32 n_addr ; address addr ; char * addr_str ; char * tmp ; if ( ! fi )  hfinfo = fi -> hfinfo; switch ( hfinfo -> type )  bytes = ( guint8 * ) fvalue_get ( & fi -> value ); tmp = abs_time_to_str ( NULL , ( const nstime_t * ) fvalue_get ( & fi -> value ) , ( absolute_time_display_e ) hfinfo -> display , TRUE ); tmp = rel_time_to_secs_str ( NULL , ( const nstime_t * ) fvalue_get ( & fi -> value ) ); integer = fvalue_get_uinteger ( & fi -> value ); tmp = ( char * ) get_ipxnet_name ( NULL , integer ); addr . type = AT_AX25; addr . len = AX25_ADDR_LEN; addr . data = ( guint8 * ) fvalue_get ( & fi -> value ); addr_str = ( char * ) address_to_str ( NULL , & addr ); addr . type = AT_VINES; addr . len = VINES_ADDR_LEN; addr . data = ( guint8 * ) fvalue_get ( & fi -> value ); addr_str = ( char * ) address_to_str ( NULL , & addr ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); addr . type = AT_ETHER; addr . len = 6; addr . data = bytes; addr_str = ( char * ) address_with_resolution_to_str ( NULL , & addr ); ipv4 = ( ipv4_addr * ) fvalue_get ( & fi -> value ); n_addr = ipv4_get_net_order_addr ( ipv4 ); addr . type = AT_IPv4; addr . len = 4; addr . data = & n_addr; if ( hfinfo -> display == BASE_NETMASK )  addr_str = ( char * ) address_to_str ( NULL , & addr ); addr_str = ( char * ) address_with_resolution_to_str ( NULL , & addr ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); addr . type = AT_IPv6; addr . len = 16; addr . data = bytes; addr_str = ( char * ) address_with_resolution_to_str ( NULL , & addr ); addr . type = AT_FCWWN; addr . len = FCWWN_ADDR_LEN; addr . data = ( guint8 * ) fvalue_get ( & fi -> value ); addr_str = ( char * ) address_with_resolution_to_str ( NULL , & addr ); guid = ( e_guid_t * ) fvalue_get ( & fi -> value ); tmp = guid_to_str ( NULL , guid ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); tmp = oid_encoded2string ( NULL , bytes , fvalue_length ( & fi -> value ) ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); tmp = rel_oid_encoded2string ( NULL , bytes , fvalue_length ( & fi -> value ) ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); tmp = print_system_id ( NULL , bytes , fvalue_length ( & fi -> value ) ); integer64 = fvalue_get_uinteger64 ( & fi -> value ); addr_str = eui64_to_str ( NULL , integer64 ); tmp = ( char * ) eui64_to_display ( NULL , integer64 ); label_fill_descr ( label_str , 0 , hfinfo , tmp , addr_str ); static label_fill_descr(char *label_str, gsize pos, const header_field_info *hfinfo, const char *text, const char *descr) gsize name_pos ; name_pos = pos = label_concat ( label_str , pos , hfinfo -> name ); pos = label_concat ( label_str , pos , ": " ); pos = label_concat ( label_str , pos , text ? text : "(null)" ); pos = label_concat ( label_str , pos , " (" ); pos = label_concat ( label_str , pos , descr ? descr : "(null)" ); pos = label_concat ( label_str , pos , ")" ); if ( pos >= ITEM_LABEL_LENGTH )  label_mark_truncated ( label_str , name_pos ); static label_mark_truncated(char *label_str, gsize name_pos) const size_t trunc_len = sizeof ( trunc_str ) - 1 ; if ( name_pos < ITEM_LABEL_LENGTH - trunc_len )  memmove ( label_str + name_pos + trunc_len , label_str + name_pos , ITEM_LABEL_LENGTH - name_pos - trunc_len ); memcpy ( label_str + name_pos , trunc_str , trunc_len ); last_char = g_utf8_prev_char ( & label_str [ ITEM_LABEL_LENGTH ] ); * last_char = '\0'; g_strlcpy ( label_str + name_pos , trunc_str , ITEM_LABEL_LENGTH - name_pos ); 