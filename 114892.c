static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *saltierwise_conqueror) int stonesoup_ss_i ; size_t stonesoup_taint_size ; if ( saltierwise_conqueror != 0 )  gauming_camanchaca = ( ( char * ) saltierwise_conqueror ); stonesoup_taint_size = strlen ( gauming_camanchaca ); if ( stonesoup_taint_size >= 1600 )  stonesoup_taint_size = 1599U; stonesoup_malloced_buff = malloc ( stonesoup_taint_size * sizeof ( char * ) ); if ( stonesoup_malloced_buff != 0 )  for (stonesoup_ss_i = 0; stonesoup_ss_i < stonesoup_taint_size; ++stonesoup_ss_i) stonesoup_malloced_buff [ stonesoup_ss_i ] = malloc ( stonesoup_taint_size * stonesoup_taint_size * sizeof ( char ) ); free ( stonesoup_malloced_buff ); 