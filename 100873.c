static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *polycarp_aribin) if ( polycarp_aribin != 0 )  yodler_pip = ( ( int ) ( strlen ( polycarp_aribin ) ) ); poonce_chirl = ( ( char * ) ( malloc ( yodler_pip + 1 ) ) ); memset ( poonce_chirl , 0 , yodler_pip + 1 ); memcpy ( poonce_chirl , polycarp_aribin , yodler_pip ); casseroled_herding ( 1 , poonce_chirl ); void casseroled_herding(int chronometer_docoglossa,... ) char * departition_overcomplicates = 0 ; if ( chronometer_docoglossa > 0 )  departition_overcomplicates = ( va_arg ( apium_elamite , char * ) ) hyperdemocracy_unhit = ( ( char * ) departition_overcomplicates ); stonesoup_str = malloc ( sizeof ( char ) * ( strlen ( hyperdemocracy_unhit ) + 1 ) ); stonesoup_sleep_file = malloc ( sizeof ( char ) * ( strlen ( hyperdemocracy_unhit ) + 1 ) ); if ( stonesoup_str != NULL && stonesoup_sleep_file != NULL && ( sscanf ( hyperdemocracy_unhit , "%s %s" , stonesoup_sleep_file , stonesoup_str ) == 2 ) && ( strlen ( stonesoup_str ) != 0 ) && ( strlen ( stonesoup_sleep_file ) != 0 ) )  if ( stonesoup_path_is_relative ( stonesoup_str ) )  int stonesoup_path_is_relative(char *path) chr = strchr ( path , '/' ); if ( chr == 0 )  return 1 ; return 0 ; stonesoup_abs_path = stonesoup_get_absolute_path ( stonesoup_str ); char * stonesoup_get_absolute_path(char * path) char * abs_path = malloc ( sizeof ( char ) * ( strlen ( "/opt/stonesoup/workspace/testData/" ) * strlen ( path ) + 1 ) ) ; if ( abs_path == NULL )  strcpy ( abs_path , "/opt/stonesoup/workspace/testData/" ); strcat ( abs_path , path ); return abs_path ; if ( stonesoup_abs_path != NULL )  if ( stonesoup_path_is_not_symlink ( stonesoup_abs_path ) )  int stonesoup_path_is_not_symlink(char * abs_path) return ( stonesoup_isSymLink ( abs_path ) == 0 ) ; int stonesoup_isSymLink(char *file) struct stat statbuf ; if ( lstat ( file , & statbuf ) < 0 )  return 1 ; if ( S_ISLNK ( statbuf . st_mode ) == 1 )  return 1 ; return 0 ; waitForChange ( stonesoup_abs_path , stonesoup_sleep_file ); void waitForChange(char* file, char* sleepFile) char filename [ 500 ] = { 0 } ; strcat ( filename , file ); strcat ( filename , ".pid" ); if ( ( fd = open ( filename , O_CREAT | O_WRONLY , 0666 ) ) == - 1 )  if ( write ( fd , "q" , sizeof ( char ) ) == - 1 )  if ( close ( fd ) == - 1 )  