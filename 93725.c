static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *dusio_journalizing) char stonesoup_source [ 1024 ] ; char * stonesoup_buffer ; if ( dusio_journalizing != 0 )  stonesoup_buffer = ( char * ) malloc ( sizeof ( char * ) * 64 ); if ( stonesoup_buffer != NULL )  memset ( stonesoup_source , 0 , 1024 ); strncpy ( stonesoup_source , intaglioed_beneficience , sizeof ( stonesoup_source ) ); stonesoup_source [ 1023 ] = '\0'; if ( strlen ( stonesoup_source ) + 1 <= 64 )  tracepoint ( stonesoup_trace , variable_buffer_info , "stonesoup_source" , strlen ( stonesoup_source ) + 1 , stonesoup_source , "TRIGGER-STATE" ); strncpy ( stonesoup_buffer , stonesoup_source , sizeof ( stonesoup_source ) ); stonesoup_opt_var = strlen ( stonesoup_buffer ); for (; stonesoup_oc_i < stonesoup_opt_var; ++stonesoup_oc_i) stonesoup_buffer [ stonesoup_oc_i ] = stonesoup_toupper ( stonesoup_buffer [ stonesoup_oc_i ] ); int stonesoup_toupper(int c) if ( c >= 97 && c <= 122 )  return c - 32 ; return c ; stonesoup_printf ( "%s\n" , stonesoup_buffer ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); free ( stonesoup_buffer ); 