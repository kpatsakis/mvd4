static dissect_http_udp(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree) http_conv_t * conv_data ; conv_data = get_http_conversation_data ( pinfo ); static http_conv_t get_http_conversation_data(packet_info *pinfo) conversation_t * conversation ; http_conv_t * conv_data ; conversation = find_or_create_conversation ( pinfo ); conv_data = conversation_get_proto_data ( conversation , proto_http ); if ( ! conv_data )  conv_data = se_alloc0 ( sizeof ( http_conv_t ) ); return conv_data ; dissect_http_message ( tvb , 0 , pinfo , tree , conv_data ); static dissect_http_message(tvbuff_t *tvb, int offset, packet_info proto_tree *tree, http_conv_t *conv_data) const guchar * line ; gint next_offset ; const guchar * linep , * lineend ; int first_linelen , linelen ; gboolean is_request_or_reply ; guchar c ; http_type_t http_type ; ReqRespDissector reqresp_dissector ; first_linelen = tvb_find_line_end ( tvb , offset , tvb_ensure_length_remaining ( tvb , offset ) , & next_offset , FALSE ); line = tvb_get_ptr ( tvb , offset , first_linelen ); http_type = HTTP_OTHERS; is_request_or_reply = is_http_request_or_reply ( ( const gchar * ) line , first_linelen , & http_type , NULL , conv_data ); if ( is_request_or_reply )  if ( ! req_resp_hdrs_do_reassembly ( tvb , offset , pinfo , http_desegment_headers , http_desegment_body ) )  stat_info = ep_alloc ( sizeof ( http_info_value_t ) ); stat_info -> framenum = pinfo -> fd -> num; stat_info -> response_code = 0; stat_info -> request_method = NULL; stat_info -> request_uri = NULL; stat_info -> http_host = NULL; if ( check_col ( pinfo -> cinfo , COL_INFO ) )  if ( is_request_or_reply )  line = tvb_get_ptr ( tvb , offset , first_linelen ); http_type = HTTP_OTHERS; while ( tvb_reported_length_remaining ( tvb , offset ) != 0 )  linelen = tvb_find_line_end ( tvb , offset , tvb_ensure_length_remaining ( tvb , offset ) , & next_offset , FALSE ); if ( linelen < 0 )  line = tvb_get_ptr ( tvb , offset , linelen ); lineend = line + linelen; reqresp_dissector = NULL; is_request_or_reply = is_http_request_or_reply ( ( const gchar * ) line , linelen , & http_type , & reqresp_dissector , conv_data ); if ( is_request_or_reply )  if ( linelen == 0 )  linep = line; while ( linep < lineend )  c = * linep ++; if ( ! isascii ( c ) )  if ( iscntrl ( c ) )  switch ( c )  if ( linelen == 0 )  offset = next_offset; if ( tree && stat_info -> http_host && stat_info -> request_uri )  gchar * hostname = g_strstrip ( g_strdup ( stat_info -> http_host ) ) ; size_t size = strlen ( "http://" ) + strlen ( hostname ) + strlen ( stat_info -> request_uri ) + 1 ; char * uri = ep_alloc ( size ) ; g_snprintf ( uri , ( gulong ) size , "%s://%s%s" , "http" , hostname , stat_info -> request_uri ); e_ti = proto_tree_add_string ( http_tree , hf_http_request_full_uri , tvb , 0 , 0 , uri ); PROTO_ITEM_SET_URL ( e_ti ); PROTO_ITEM_SET_GENERATED ( e_ti ); e_tree = proto_item_add_subtree ( e_ti , ett_http_encoded_entity ); proto_item_append_text ( e_ti , " -> %u bytes" , tvb_length ( uncomp_tvb ) ); proto_item_append_text ( e_ti , " [Error: Decompression failed]" ); call_dissector ( data_handle , next_tvb , pinfo , e_tree ); 