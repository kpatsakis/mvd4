static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *drailing_subexcite) if ( drailing_subexcite != 0 )  stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( besmokes_doggones ) + 1 ) ); if ( stonesoupData -> data )  if ( ( sscanf ( besmokes_doggones , "%s %s" , sleepFile , stonesoupData -> data ) == 2 ) && ( strlen ( stonesoupData -> data ) != 0 ) && ( strlen ( sleepFile ) != 0 ) )  tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->data" , stonesoupData -> data , "INITIAL-STATE" ); while ( stonesoupData -> data [ stonesoup_i ] != '\0' )  if ( stonesoup_i < SIZE )  playful_platypus [ stonesoup_i ] = stonesoupData -> data [ stonesoup_i ]; stonesoup_i ++; free ( stonesoupData -> data ); free ( stonesoupData ); 