void CWE690_NULL_Deref_From_Return__char_malloc_09_bad() char * data ; data = NULL; data = ( char * ) malloc ( 20 * sizeof ( char ) ); if ( GLOBAL_CONST_TRUE )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 