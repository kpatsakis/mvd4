void stonesoup_setup_printf_context() ss_tc_root = getenv ( "SS_TC_ROOT" ); if ( ss_tc_root != NULL )  size_dirpath = strlen ( ss_tc_root ) + strlen ( "testData" ) + 2; dirpath = ( char * ) malloc ( size_dirpath * sizeof ( char ) ); if ( dirpath != NULL )  sprintf ( dirpath , "%s/%s" , ss_tc_root , "testData" ); if ( stat ( dirpath , & st ) == - 1 )  retval = mkdir ( dirpath , 0700 ); if ( retval == 0 )  