static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *drinkery_undeflowered) union predesirously_earwitness ungripe_shoshonean ; if ( drinkery_undeflowered != 0 )  ungripe_shoshonean . helodes_haff = drinkery_undeflowered; burdash_razzle = & ungripe_shoshonean; nonspiritous_bustards ( burdash_razzle ); void nonspiritous_bustards(union predesirously_earwitness *echo_twining) subroutines_agamy ( echo_twining ); void subroutines_agamy(union predesirously_earwitness *blanchi_aeger) struct stonesoup_data * stonesoupData ; meraree_italomania = ( ( char * ) ( * blanchi_aeger ) . helodes_haff ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( meraree_italomania ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( meraree_italomania ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( meraree_italomania ) + 1 ) ); if ( stonesoupData -> data && stonesoupData -> file1 && stonesoupData -> file2 )  if ( ( sscanf ( meraree_italomania , "%d %s %s %s" , & ( stonesoupData -> qsize ) , stonesoupData -> file1 , stonesoupData -> file2 , stonesoupData -> data ) == 4 ) && ( strlen ( stonesoupData -> data ) != 0 ) )  if ( pthread_mutex_init ( & stonesoup_mutex , NULL ) != 0 )  