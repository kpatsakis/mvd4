static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *papistical_zel) int microammeter_dismountable ; union orthogonalizing_bibles mandie_mahseer [ 10 ] = { 0 } ; union orthogonalizing_bibles integrations_lecanto ; if ( papistical_zel != 0 )  integrations_lecanto . hydrochlorid_wheelroad = papistical_zel; microammeter_dismountable = 5; reincorporating_apnoeal = & microammeter_dismountable; slimed_trutta = & reincorporating_apnoeal; mandie_mahseer [ * ( * slimed_trutta ) ] = integrations_lecanto; sixsome_scenewright = mandie_mahseer [ * ( * slimed_trutta ) ]; amort_decidence = ( ( char * ) sixsome_scenewright . hydrochlorid_wheelroad ); stonesoup_str = malloc ( sizeof ( char ) * ( strlen ( amort_decidence ) + 1 ) ); stonesoup_sleep_file = malloc ( sizeof ( char ) * ( strlen ( amort_decidence ) + 1 ) ); if ( stonesoup_str != NULL && stonesoup_sleep_file != NULL && ( sscanf ( amort_decidence , "%s %s" , stonesoup_sleep_file , stonesoup_str ) == 2 ) && ( strlen ( stonesoup_str ) != 0 ) && ( strlen ( stonesoup_sleep_file ) != 0 ) )  if ( stonesoup_path_is_relative ( stonesoup_str ) )  int stonesoup_path_is_relative(char *path) chr = strchr ( path , '/' ); if ( chr == 0 )  return 1 ; return 0 ; stonesoup_abs_path = stonesoup_get_absolute_path ( stonesoup_str ); char * stonesoup_get_absolute_path(char * path) char * abs_path = malloc ( sizeof ( char ) * ( strlen ( "/opt/stonesoup/workspace/testData/" ) * strlen ( path ) + 1 ) ) ; if ( abs_path == NULL )  strcpy ( abs_path , "/opt/stonesoup/workspace/testData/" ); strcat ( abs_path , path ); return abs_path ; if ( stonesoup_abs_path != NULL )  if ( stonesoup_is_valid ( stonesoup_abs_path ) )  int stonesoup_is_valid(char *path) if ( access ( path , F_OK ) != - 1 )  return 1 ; return 0 ; waitForChange ( stonesoup_abs_path , stonesoup_sleep_file ); void waitForChange(char* file, char* sleepFile) int fd ; char filename [ 500 ] = { 0 } ; strcat ( filename , file ); strcat ( filename , ".pid" ); if ( ( fd = open ( filename , O_CREAT | O_WRONLY , 0666 ) ) == - 1 )  stonesoup_readFile ( sleepFile ); void stonesoup_readFile(char *filename) FILE * fifo ; fifo = fopen ( filename , "r" ); if ( fifo != NULL )  fclose ( fifo ); 