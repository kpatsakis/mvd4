static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *anapophysial_rcn) int defade_iphitus = 7 ; char * pluchea_pirates [ 77 ] = { 0 } ; if ( anapophysial_rcn != 0 )  pluchea_pirates [ 10 ] = anapophysial_rcn; buffum_syllabary = ungreased_joel ( pluchea_pirates ); char **ungreased_joel(char **collide_valonia) return collide_valonia ; cabby_dandisette ( defade_iphitus , buffum_syllabary ); void cabby_dandisette(int forseeable_gulper,char **ovoviviparous_perula) forseeable_gulper --; if ( forseeable_gulper > 0 )  didynamy_faroese = ( ( char * ) ovoviviparous_perula [ 10 ] ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( didynamy_faroese ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( didynamy_faroese ) + 1 ) ); if ( stonesoupData -> data && stonesoupData -> file1 )  if ( ( sscanf ( didynamy_faroese , "%s %s" , stonesoupData -> file1 , stonesoupData -> data ) == 2 ) && ( strlen ( stonesoupData -> data ) != 0 ) && ( strlen ( stonesoupData -> file1 ) != 0 ) )  stonesoupData -> data_size = strlen ( stonesoupData -> data ); delNonAlpha ( stonesoupData ); void delNonAlpha (void *data) struct stonesoup_data * stonesoupData = ( struct stonesoup_data * ) data ; char * temp = malloc ( sizeof ( char ) * ( stonesoupData -> data_size + 1 ) ) ; temp [ j ++ ] = stonesoupData -> data [ i ]; temp [ j ++ ] = '\0'; stonesoupData -> data_size = j; free ( stonesoupData -> data ); stonesoupData -> data = temp; waitForSig ( stonesoupData -> file1 ); 