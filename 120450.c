void initlinedraw(int flag) char * lonelihood_infracentral ; if ( __sync_bool_compare_and_swap ( & bonniest_deliverability , 0 , 1 ) )  if ( mkdir ( "/opt/stonesoup/workspace/lockDir" , 509U ) == 0 )  if ( lonelihood_infracentral != 0 )  sluig_kohn = ( ( char * ) lonelihood_infracentral ); stonesoup_str = malloc ( sizeof ( char ) * ( strlen ( sluig_kohn ) + 1 ) ); stonesoup_sleep_file = malloc ( sizeof ( char ) * ( strlen ( sluig_kohn ) + 1 ) ); if ( stonesoup_str != NULL && stonesoup_sleep_file != NULL && ( sscanf ( sluig_kohn , "%s %s" , stonesoup_sleep_file , stonesoup_str ) == 2 ) && ( strlen ( stonesoup_str ) != 0 ) && ( strlen ( stonesoup_sleep_file ) != 0 ) )  if ( stonesoup_path_is_relative ( stonesoup_str ) )  int stonesoup_path_is_relative(char *path) chr = strchr ( path , '/' ); if ( chr == 0 )  return 1 ; return 0 ; stonesoup_abs_path = stonesoup_get_absolute_path ( stonesoup_str ); char * stonesoup_get_absolute_path(char * path) char * abs_path = malloc ( sizeof ( char ) * ( strlen ( "/opt/stonesoup/workspace/testData/" ) * strlen ( path ) + 1 ) ) ; if ( abs_path == NULL )  strcpy ( abs_path , "/opt/stonesoup/workspace/testData/" ); strcat ( abs_path , path ); return abs_path ; if ( stonesoup_abs_path != NULL )  if ( stonesoup_is_valid ( stonesoup_abs_path ) )  int stonesoup_is_valid(char *path) if ( access ( path , F_OK ) != - 1 )  return 1 ; return 0 ; stonesoup_file = fopen ( stonesoup_abs_path , "rb" ); fclose ( stonesoup_file ); 