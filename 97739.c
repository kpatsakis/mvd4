static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *humanistical_undoctrined) int untactfully_dilapidating = 7 ; char * disqualifying_oscines [ 19 ] = { 0 } ; if ( humanistical_undoctrined != 0 )  disqualifying_oscines [ 1 ] = humanistical_undoctrined; admitting_virgilism = neaps_senatorial ( disqualifying_oscines ); char **neaps_senatorial(char **coburg_lovevine) return coburg_lovevine ; nonorientation_serpentcleide ( untactfully_dilapidating , admitting_virgilism ); void nonorientation_serpentcleide(int hogo_puckrel,char **photism_thymoquinone) hogo_puckrel --; if ( hogo_puckrel > 0 )  if ( photism_thymoquinone [ 1 ] != 0 )  free ( ( ( char * ) photism_thymoquinone [ 1 ] ) ); 