static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; free ( stonesoup_tainted_buff ); stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *chiefly_lisk) if ( chiefly_lisk != 0 )  mislaid_versative . nonarbitrable_saucery = chiefly_lisk; boogeyman_emblazonment = & mislaid_versative; longus_keratoid = ( ( char * ) ( * boogeyman_emblazonment ) . nonarbitrable_saucery ); for (stonesoup_i = 0; ((int )stonesoup_i) <= ((int )(strlen(longus_keratoid) - strlen(stonesoup_finder))); ++stonesoup_i) if ( longus_keratoid [ stonesoup_i + stonesoup_j ] != stonesoup_finder [ stonesoup_j ] )  stonesoup_second_buff = & longus_keratoid [ stonesoup_i ]; tracepoint ( stonesoup_trace , variable_address , "stonesoup_second_buff" , stonesoup_second_buff , "TRIGGER-STATE" ); stonesoup_printf ( "String length is %i\n" , strlen ( stonesoup_second_buff ) ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); if ( ( * boogeyman_emblazonment ) . nonarbitrable_saucery != 0 )  free ( ( ( char * ) ( * boogeyman_emblazonment ) . nonarbitrable_saucery ) ); 