static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *scarletberry_morra) if ( scarletberry_morra != 0 )  cotoro_ambusher = ( ( int ) ( strlen ( scarletberry_morra ) ) ); deutsch_upgrading = ( ( char * ) ( malloc ( cotoro_ambusher + 1 ) ) ); memset ( deutsch_upgrading , 0 , cotoro_ambusher + 1 ); memcpy ( deutsch_upgrading , scarletberry_morra , cotoro_ambusher ); osi_talismans [ 5 ] = deutsch_upgrading; terrierlike_thay = * ( osi_talismans + frolick_ashok [ 1 ] ); potentiated_tumbledown = ( ( char * ) terrierlike_thay ); stonesoup_pFile = fopen ( potentiated_tumbledown , "r" ); tracepoint ( stonesoup_trace , variable_address , "stonesoup_pFile" , stonesoup_pFile , "TRIGGER-STATE" ); fgets ( stonesoup_buffer , 79 , stonesoup_pFile ); stonesoup_printf ( stonesoup_buffer ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); fclose ( stonesoup_pFile ); if ( terrierlike_thay != 0 )  free ( ( ( char * ) terrierlike_thay ) ); 