 proto_get_frame_protocols(const wmem_list_t *layers, gboolean gboolean *is_tcp, gboolean gboolean *is_sctp, gboolean gboolean *is_rtp) wmem_list_frame_t * protos = wmem_list_head ( layers ) ; int proto_id ; const char * proto_name ; while ( protos != NULL )  proto_id = GPOINTER_TO_INT ( wmem_list_frame_data ( protos ) ); proto_name = proto_get_protocol_filter_name ( proto_id ); const char proto_get_protocol_filter_name(const int proto_id) protocol_t * protocol ; protocol = find_protocol_by_id ( proto_id ); protocol_t find_protocol_by_id(const int proto_id) header_field_info * hfinfo ; if ( proto_id < 0 )  return NULL ; return ( protocol_t * ) hfinfo -> strings ; if ( protocol == NULL )  return "(none)" ; return protocol -> filter_name ; if ( is_ip && ( ( ! strcmp ( proto_name , "ip" ) ) || ( ! strcmp ( proto_name , "ipv6" ) ) ) )  if ( is_tcp && ! strcmp ( proto_name , "tcp" ) )  if ( is_udp && ! strcmp ( proto_name , "udp" ) )  if ( is_sctp && ! strcmp ( proto_name , "sctp" ) )  if ( is_ssl && ! strcmp ( proto_name , "ssl" ) )  protos = wmem_list_frame_next ( protos ); 