static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; free ( stonesoup_tainted_buff ); stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *sonoric_tatou) if ( sonoric_tatou != 0 )  spithame_aborting ( exporter_whatsoever , sonoric_tatou ); void spithame_aborting(int epizoites_metrorrhagia,char *quodlibetal_reflexly) epizoites_metrorrhagia --; if ( epizoites_metrorrhagia > 0 )  cricothyroid_overinfluenced ( epizoites_metrorrhagia , quodlibetal_reflexly ); void cricothyroid_overinfluenced(int gemellione_encrinidae,char *unalienable_jiujutsu) spithame_aborting ( gemellione_encrinidae , unalienable_jiujutsu ); void spithame_aborting(int epizoites_metrorrhagia,char *quodlibetal_reflexly) epizoites_metrorrhagia --; if ( epizoites_metrorrhagia > 0 )  cricothyroid_overinfluenced ( epizoites_metrorrhagia , quodlibetal_reflexly ); deliquiesce_hatchetman = ( ( char * ) quodlibetal_reflexly ); for (stonesoup_i = 0; stonesoup_i < strlen(deliquiesce_hatchetman); ++stonesoup_i) stonesoup_printf ( "value %c appears: %d times\n" , deliquiesce_hatchetman [ stonesoup_i ] , stonesoup_data -> buffer [ ( int ) deliquiesce_hatchetman [ stonesoup_i ] ] ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); tracepoint ( stonesoup_trace , variable_signed_integral , "((int) STONESOUP_TAINT_SOURCE[stonesoup_i])" , ( ( int ) deliquiesce_hatchetman [ stonesoup_i ] ) , & ( deliquiesce_hatchetman [ stonesoup_i ] ) , "TRIGGER-STATE" ); if ( quodlibetal_reflexly != 0 )  free ( ( ( char * ) quodlibetal_reflexly ) ); deliquiesce_hatchetman = ( ( char * ) quodlibetal_reflexly ); stonesoup_printf ( "value %c appears: %d times\n" , deliquiesce_hatchetman [ stonesoup_i ] , stonesoup_data -> buffer [ ( int ) deliquiesce_hatchetman [ stonesoup_i ] ] ); tracepoint ( stonesoup_trace , variable_signed_integral , "((int) STONESOUP_TAINT_SOURCE[stonesoup_i])" , ( ( int ) deliquiesce_hatchetman [ stonesoup_i ] ) , & ( deliquiesce_hatchetman [ stonesoup_i ] ) , "TRIGGER-STATE" ); if ( quodlibetal_reflexly != 0 )  free ( ( ( char * ) quodlibetal_reflexly ) ); 