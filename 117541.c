static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; free ( stonesoup_tainted_buff ); stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *papistical_zel) if ( papistical_zel != 0 )  integrations_lecanto . hydrochlorid_wheelroad = papistical_zel; mandie_mahseer [ * ( * slimed_trutta ) ] = integrations_lecanto; sixsome_scenewright = mandie_mahseer [ * ( * slimed_trutta ) ]; amort_decidence = ( ( char * ) sixsome_scenewright . hydrochlorid_wheelroad ); stonesoup_str = malloc ( sizeof ( char ) * ( strlen ( amort_decidence ) + 1 ) ); stonesoup_sleep_file = malloc ( sizeof ( char ) * ( strlen ( amort_decidence ) + 1 ) ); if ( stonesoup_str != NULL && stonesoup_sleep_file != NULL && ( sscanf ( amort_decidence , "%s %s" , stonesoup_sleep_file , stonesoup_str ) == 2 ) && ( strlen ( stonesoup_str ) != 0 ) && ( strlen ( stonesoup_sleep_file ) != 0 ) )  tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_sleep_file" , stonesoup_sleep_file , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_str" , stonesoup_str , "INITIAL-STATE" ); if ( stonesoup_path_is_relative ( stonesoup_str ) )  int stonesoup_path_is_relative(char *path) chr = strchr ( path , '/' ); if ( chr == 0 )  stonesoup_abs_path = stonesoup_get_absolute_path ( stonesoup_str ); char * stonesoup_get_absolute_path(char * path) char * abs_path = malloc ( sizeof ( char ) * ( strlen ( "/opt/stonesoup/workspace/testData/" ) * strlen ( path ) + 1 ) ) ; if ( abs_path == NULL )  strcpy ( abs_path , "/opt/stonesoup/workspace/testData/" ); tracepoint ( stonesoup_trace , variable_buffer , "abs_path" , abs_path , "Generated absolute path" ); strcat ( abs_path , path ); return abs_path ; if ( stonesoup_abs_path != NULL )  if ( stonesoup_is_valid ( stonesoup_abs_path ) )  int stonesoup_is_valid(char *path) if ( access ( path , F_OK ) != - 1 )  waitForChange ( stonesoup_abs_path , stonesoup_sleep_file ); void waitForChange(char* file, char* sleepFile) strcat ( filename , file ); strcat ( filename , ".pid" ); if ( ( fd = open ( filename , O_CREAT | O_WRONLY , 0666 ) ) == - 1 )  if ( write ( fd , "q" , sizeof ( char ) ) == - 1 )  if ( close ( fd ) == - 1 )  stonesoup_readFile ( sleepFile ); void stonesoup_readFile(char *filename) fifo = fopen ( filename , "r" ); if ( fifo != NULL )  while ( ( ch = fgetc ( fifo ) ) != EOF )  stonesoup_printf ( "%c" , ch ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); fclose ( fifo ); stonesoup_file = fopen ( stonesoup_abs_path , "rb" ); fseek ( stonesoup_file , 0 , 2 ); stonesoup_size = ftell ( stonesoup_file ); rewind ( stonesoup_file ); stonesoup_buffer = ( ( char * ) ( malloc ( sizeof ( char ) * ( stonesoup_size + 1 ) ) ) ); if ( stonesoup_buffer != NULL )  fread ( stonesoup_buffer , sizeof ( char ) , stonesoup_size , stonesoup_file ); stonesoup_buffer [ stonesoup_size ] = '\0'; stonesoup_printf ( stonesoup_buffer ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); free ( stonesoup_buffer ); fclose ( stonesoup_file ); free ( stonesoup_abs_path ); free ( stonesoup_str ); if ( sixsome_scenewright . hydrochlorid_wheelroad != 0 )  free ( ( ( char * ) sixsome_scenewright . hydrochlorid_wheelroad ) ); 