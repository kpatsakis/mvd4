static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *schmidt_roundhouse) if ( schmidt_roundhouse != 0 )  stonesoup_input_string = ( signed char * ) getenv ( "INPUT_STRING" ); stonesoup_data = ( struct stonesoup_struct * ) malloc ( sizeof ( struct stonesoup_struct ) ); if ( stonesoup_data != NULL )  if ( stonesoup_input_string != 0 )  memset ( stonesoup_data -> buffer , 0 , 128 ); for (stonesoup_i = 0; stonesoup_i < 200; ++stonesoup_i) stonesoup_data -> before [ stonesoup_i ] = 5555; stonesoup_data -> after [ stonesoup_i ] = 5555; for (stonesoup_i = 0; stonesoup_i < strlen((char *) stonesoup_input_string); ++stonesoup_i) 