void CWE690_NULL_Deref_From_Return__char_malloc_03_bad() char * data ; data = NULL; data = ( char * ) malloc ( 20 * sizeof ( char ) ); if ( 5 == 5 )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 