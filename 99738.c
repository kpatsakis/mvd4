static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *klino_fractiously) char * ( * simpled_unpunctual ) [ 4 ] = 0; char * sheetfed_trituration [ 4 ] = { 0 } ; if ( klino_fractiously != 0 )  sheetfed_trituration [ 1 ] = klino_fractiously; simpled_unpunctual = & sheetfed_trituration; unlibidinously_osmolal = ( ( char * ) ( * simpled_unpunctual ) [ 1 ] ); stonesoup_data = ( struct stonesoup_struct * ) malloc ( sizeof ( struct stonesoup_struct ) ); if ( stonesoup_data != NULL )  stonesoup_data -> buff_pointer = stonesoup_data -> buffer; strncpy ( stonesoup_data -> buffer , unlibidinously_osmolal , strlen ( unlibidinously_osmolal ) + 1 ); stonesoup_ptr_deref = strlen ( stonesoup_data -> buff_pointer ); for (; stonesoup_oc_i < stonesoup_ptr_deref; ++stonesoup_oc_i) stonesoup_data -> buffer [ stonesoup_oc_i ] = stonesoup_toupper ( stonesoup_data -> buffer [ stonesoup_oc_i ] ); int stonesoup_toupper(int c) if ( c >= 97 && c <= 122 )  return c - 32 ; return c ; stonesoup_printf ( "%s\n" , stonesoup_data -> buffer ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); free ( stonesoup_data ); 