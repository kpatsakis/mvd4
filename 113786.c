void CWE401_Memory_Leak__char_malloc_61_bad() char * data ; data = NULL; data = CWE401_Memory_Leak__char_malloc_61b_badSource ( data ); char * CWE401_Memory_Leak__char_malloc_61b_badSource(char * data) data = ( char * ) malloc ( 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); return data ; 