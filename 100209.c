static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *nipmuck_machicolate) if ( nipmuck_machicolate != 0 )  undistrusted_unserene = ( ( int ) ( strlen ( nipmuck_machicolate ) ) ); hearsay_seel = ( ( char * ) ( malloc ( undistrusted_unserene + 1 ) ) ); if ( hearsay_seel == 0 )  memset ( hearsay_seel , 0 , undistrusted_unserene + 1 ); memcpy ( hearsay_seel , nipmuck_machicolate , undistrusted_unserene ); futuramic_unfettering ( 1 , hearsay_seel ); void futuramic_unfettering(int tithonias_zeus,... ) if ( tithonias_zeus > 0 )  __builtin_va_start ( ierna_parheliacal , tithonias_zeus ); 