static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *pva_federalizes) struct ulicon_crosswicks achlorhydria_unpeculiarly ; if ( pva_federalizes != 0 )  achlorhydria_unpeculiarly . reunionistic_cabinlike = ( ( char * ) pva_federalizes ); upclimbed_cellule ( achlorhydria_unpeculiarly ); void upclimbed_cellule(struct ulicon_crosswicks pochay_mercator) if ( pochay_mercator . reunionistic_cabinlike != 0 )  free ( ( ( char * ) pochay_mercator . reunionistic_cabinlike ) ); 