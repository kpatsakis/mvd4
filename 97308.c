void CWE690_NULL_Deref_From_Return__char_calloc_42_bad() char * data ; data = NULL; data = badSource ( data ); static char * badSource(char * data) data = ( char * ) calloc ( 20 , sizeof ( char ) ); return data ; strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 