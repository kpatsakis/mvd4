static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *tweeter_kwannon) long trautvetteria_autodrome [ 10 ] ; celebrations_demiman oxytylote_insanitariness [ 10 ] = { 0 } ; if ( tweeter_kwannon != 0 )  accommodating_filespec = tweeter_kwannon; oxytylote_insanitariness [ 5 ] = accommodating_filespec; trautvetteria_autodrome [ 1 ] = 5; horsy_moonery = * ( oxytylote_insanitariness + trautvetteria_autodrome [ 1 ] ); if ( horsy_moonery != 0 )  free ( ( ( char * ) horsy_moonery ) ); 