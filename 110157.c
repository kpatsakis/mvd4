static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *gripsack_legitimacies) int allelic_yacc = 7 ; if ( gripsack_legitimacies != 0 )  unprying_adays = & gripsack_legitimacies; acarocecidium_tartemorion = unprying_adays + 5; skirmishing_ridicule ( allelic_yacc , acarocecidium_tartemorion ); void skirmishing_ridicule(int cystenchyma_ecumenicism,char **isopycnal_brainardsville) struct stonesoup_data * stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ) ; cystenchyma_ecumenicism --; if ( cystenchyma_ecumenicism > 0 )  dripolator_akel = ( ( char * ) ( * ( isopycnal_brainardsville - 5 ) ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( dripolator_akel ) + 1 ) ); if ( stonesoupData -> data && ( sscanf ( dripolator_akel , "%d %s" , & stonesoupData -> qsize , stonesoupData -> data ) == 2 ) && ( strlen ( stonesoupData -> data ) != 0 ) )  stonesoupData -> data_size = strlen ( stonesoupData -> data ); free ( stonesoupData ); 