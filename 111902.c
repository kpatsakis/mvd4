static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; free ( stonesoup_tainted_buff ); stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *ledge_kefti) if ( ledge_kefti != 0 )  adiaphorism_photogeologic . pyorrhoeic_befits = ledge_kefti; ravenousnesses_bag [ * ( * apedom_tale ) ] = adiaphorism_photogeologic; carageens_saravan = ravenousnesses_bag [ * ( * apedom_tale ) ]; if ( carageens_saravan . pyorrhoeic_befits != 0 )  heterokontae_unenviedly = ( ( char * ) carageens_saravan . pyorrhoeic_befits ); stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( heterokontae_unenviedly ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( heterokontae_unenviedly ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( heterokontae_unenviedly ) + 1 ) ); if ( stonesoupData -> data )  if ( ( sscanf ( heterokontae_unenviedly , "%s %s %s" , stonesoupData -> file1 , stonesoupData -> file2 , stonesoupData -> data ) == 3 ) && ( strlen ( stonesoupData -> data ) != 0 ) && ( strlen ( stonesoupData -> file1 ) != 0 ) && ( strlen ( stonesoupData -> file2 ) != 0 ) )  tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->data" , stonesoupData -> data , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file1" , stonesoupData -> file1 , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file2" , stonesoupData -> file2 , "INITIAL-STATE" ); if ( stonesoupData -> data [ 0 ] >= 'A' && stonesoupData -> data [ 0 ] <= 'Z' )  free ( stonesoupData -> data ); free ( stonesoupData ); if ( carageens_saravan . pyorrhoeic_befits != 0 )  free ( ( ( char * ) carageens_saravan . pyorrhoeic_befits ) ); 