static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *acecaffine_unconscionably) if ( acecaffine_unconscionably != 0 )  chiliadron_dorsabdominally = acecaffine_unconscionably; quartette_scourfishes ( 1 , chiliadron_dorsabdominally ); void quartette_scourfishes(int bre_desensitizes,... ) cardiopath_resiliences unbemoaned_pushball = 0 ; va_list icebergs_eolande ; if ( bre_desensitizes > 0 )  unbemoaned_pushball = ( va_arg ( icebergs_eolande , cardiopath_resiliences ) ); reels_tracheophonesis = ( ( char * ) unbemoaned_pushball ); stonesoup_csv = fopen ( reels_tracheophonesis , "r" ); if ( stonesoup_csv != 0 )  fscanf ( stonesoup_csv , "\"%79[^\"]\",\"%79[^\"]\",\"%79[^\"]\"" , stonesoup_col1 , stonesoup_col2 , stonesoup_col3 ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_col1" , stonesoup_col1 , "CROSSOVER-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_col2" , stonesoup_col2 , "CROSSOVER-STATE" ); if ( strlen ( stonesoup_col1 ) > 0 )  stonesoup_cols [ 0 ] = stonesoup_col1; if ( strlen ( stonesoup_col2 ) > 0 )  stonesoup_cols [ 1 ] = stonesoup_col2; stonesoup_cols [ 2 ] = stonesoup_col3; fputs ( stonesoup_cols [ 0 ] , stonesoup_temp ); stonesoup_printf ( stonesoup_cols [ 0 ] ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); fputs ( stonesoup_cols [ 1 ] , stonesoup_temp ); stonesoup_printf ( stonesoup_cols [ 1 ] ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); fputs ( stonesoup_cols [ 2 ] , stonesoup_temp ); stonesoup_printf ( stonesoup_cols [ 2 ] ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); 