static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *amplificate_bucksaw) if ( amplificate_bucksaw != 0 )  subessential_henad = ( ( char * ) amplificate_bucksaw ); stonesoup_fct_ptr stonesoup_fp ; stonesoup_fp = stonesoup_switch_func ( subessential_henad ); stonesoup_fct_ptr stonesoup_switch_func(char *param) var_len = strlen ( param ) % 3; if ( var_len == 0 )  if ( var_len == 1 )  sscanf ( param , "%p" , & fct_ptr_addr ); 