void CWE401_Memory_Leak__malloc_realloc_char_17_bad() int j ; for(j = 0; j < 1; j++) char * data = ( char * ) malloc ( 100 * sizeof ( char ) ) ; strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); data = ( char * ) realloc ( data , ( 130000 ) * sizeof ( char ) ); if ( data != NULL )  strcpy ( data , "New String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 