static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *seldomcy_gweducks) int stereomonoscope_vinomethylic = 7 ; if ( seldomcy_gweducks != 0 )  antisudoral_unswept = ( ( void * ) seldomcy_gweducks ); balai_hotpot = vulpinite_diseconomy ( antisudoral_unswept ); void *vulpinite_diseconomy(void *cytissorus_brutalising) return cytissorus_brutalising ; monotrochal_unannoyingly ( stereomonoscope_vinomethylic , balai_hotpot ); void monotrochal_unannoyingly(int unpumpable_uspoke,void *beflatter_dunarea) unpumpable_uspoke --; if ( unpumpable_uspoke > 0 )  if ( ( ( char * ) beflatter_dunarea ) != 0 )  free ( ( ( char * ) ( ( char * ) beflatter_dunarea ) ) ); 