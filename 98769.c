static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *bebotch_nondefectively) if ( bebotch_nondefectively != 0 )  contubernial_unoverleaped = ( ( char * ) bebotch_nondefectively ); stonesoup_buff = ( ( char * ) ( malloc ( 30000 * sizeof ( char ) ) ) ); memset ( stonesoup_buff , 0 , 30000 ); stonesoup_to_unsign = stonesoup_get_int_value ( contubernial_unoverleaped ); short stonesoup_get_int_value(char *ss_tainted_buff) short to_short = 0 ; tainted_int = atoi ( ss_tainted_buff ); if ( tainted_int != 0 )  if ( tainted_int > 30000 )  tainted_int = 30000; if ( tainted_int < - 30000 )  tainted_int = - 30000; to_short = ( ( short ) tainted_int ); return to_short ; stonesoup_file = fopen ( "/opt/stonesoup/workspace/testData/myfile.txt" , "r" ); if ( stonesoup_file != 0 )  stonesoup_buff [ stonesoup_to_unsign ] = '\0'; stonesoup_printf ( "buff is %d long, and has contents: %s \n" , strlen ( stonesoup_buff ) , stonesoup_buff ); 