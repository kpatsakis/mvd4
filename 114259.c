 proto_register_fields_section(const int parent, header_field_info *hfi, const int num_records) int i ; protocol_t * proto ; proto = find_protocol_by_id ( parent ); protocol_t find_protocol_by_id(const int proto_id) header_field_info * hfinfo ; if ( proto_id < 0 )  return NULL ; return ( protocol_t * ) hfinfo -> strings ; for (i = 0; i < num_records; i++) if ( hfi [ i ] . id != - 1 )  proto_register_field_common ( proto , & hfi [ i ] , parent ); static proto_register_field_common(protocol_t *proto, header_field_info *hfi, const int parent) return proto_register_field_init ( hfi , parent ) ; static proto_register_field_init(header_field_info *hfinfo, const int parent) hfinfo -> parent = parent; hfinfo -> same_name_next = NULL; hfinfo -> same_name_prev_id = - 1; if ( gpa_hfinfo . len >= gpa_hfinfo . allocated_len )  if ( ! gpa_hfinfo . hfi )  gpa_hfinfo . allocated_len = PROTO_PRE_ALLOC_HF_FIELDS_MEM; gpa_hfinfo . hfi = ( header_field_info * * ) g_malloc ( sizeof ( header_field_info * ) * PROTO_PRE_ALLOC_HF_FIELDS_MEM ); gpa_hfinfo . allocated_len += 1000; gpa_hfinfo . hfi = ( header_field_info * * ) g_realloc ( gpa_hfinfo . hfi , sizeof ( header_field_info * ) * gpa_hfinfo . allocated_len ); gpa_hfinfo . hfi [ gpa_hfinfo . len ] = hfinfo; gpa_hfinfo . len ++; hfinfo -> id = gpa_hfinfo . len - 1; if ( ( hfinfo -> name [ 0 ] != 0 ) && ( hfinfo -> abbrev [ 0 ] != 0 ) )  guchar c ; c = wrs_check_charset ( fld_abbrev_chars , hfinfo -> abbrev ); if ( c )  if ( g_ascii_isprint ( c ) )  fprintf ( stderr , "Invalid byte \\%03o in filter name '%s'\n" , c , hfinfo -> abbrev ); 