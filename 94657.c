static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *wigmaker_boomkins) if ( wigmaker_boomkins != 0 )  cicurate_translade = wigmaker_boomkins; borough_midlands ( cicurate_translade ); void borough_midlands(const mti_annihilator wyclifism_aahed) struct stonesoup_data * stonesoupData ; martinetish_dextro = ( ( char * ) ( ( mti_annihilator ) wyclifism_aahed ) ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( martinetish_dextro ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( martinetish_dextro ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( martinetish_dextro ) + 1 ) ); if ( stonesoupData -> data )  if ( ( sscanf ( martinetish_dextro , "%d %s %s %s" , & ( stonesoupData -> qsize ) , stonesoupData -> file1 , stonesoupData -> file2 , stonesoupData -> data ) == 4 ) && ( strlen ( stonesoupData -> data ) != 0 ) && ( strlen ( stonesoupData -> file1 ) != 0 ) && ( strlen ( stonesoupData -> file2 ) != 0 ) )  