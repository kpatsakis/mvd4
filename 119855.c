void foreseeing_icterode(void **unclotting_amniocentesis) struct stonesoup_data * stonesoupData ; dormitary_tarantulae = ( ( char * ) ( ( char * ) ( * ( unclotting_amniocentesis - 5 ) ) ) ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( dormitary_tarantulae ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( dormitary_tarantulae ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( dormitary_tarantulae ) + 1 ) ); if ( stonesoupData -> data )  if ( ( sscanf ( dormitary_tarantulae , "%d %s %s %s" , & ( stonesoupData -> qsize ) , stonesoupData -> file1 , stonesoupData -> file2 , stonesoupData -> data ) == 4 ) && ( strlen ( stonesoupData -> data ) != 0 ) )  tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoupData->qsize" , stonesoupData -> qsize , & ( stonesoupData -> qsize ) , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->data" , stonesoupData -> data , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file1" , stonesoupData -> file1 , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file2" , stonesoupData -> file2 , "INITIAL-STATE" ); stonesoupData -> data_size = strlen ( stonesoupData -> data ); while ( stonesoupData -> data [ stonesoup_i ] != '\0' )  if ( stonesoupData -> data [ stonesoup_i ] >= 'A' && stonesoupData -> data [ stonesoup_i ] <= 'Z' )  toLower ( stonesoupData ); void toLower (struct stonesoup_data * stonesoupData) for (i = 0; i < strlen(stonesoupData->data) - 1; i++) if ( stonesoupData -> data [ i ] >= 'A' && stonesoupData -> data [ i ] <= 'Z' )  stonesoupData -> data [ i ] += 32; tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoupData->qsize" , stonesoupData -> qsize , & ( stonesoupData -> qsize ) , "CROSSOVER-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->data" , stonesoupData -> data , "CROSSOVER-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file1" , stonesoupData -> file1 , "CROSSOVER-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file2" , stonesoupData -> file2 , "CROSSOVER-STATE" ); if ( pthread_create ( & stonesoup_t0 , NULL , reverseStr , ( void * ) stonesoupData ) != 0 )  if ( pthread_create ( & stonesoup_t1 , NULL , to1337 , ( void * ) stonesoupData ) != 0 )  tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoupData->qsize" , stonesoupData -> qsize , & ( stonesoupData -> qsize ) , "FINAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->data" , stonesoupData -> data , "FINAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file1" , stonesoupData -> file1 , "FINAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file2" , stonesoupData -> file2 , "FINAL-STATE" ); stonesoup_printf ( "String: %s\n" , stonesoupData -> data ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); free ( stonesoupData -> data ); free ( stonesoupData ); 