void CWE416_Use_After_Free__malloc_free_char_03_bad() char * data ; data = NULL; if ( 5 == 5 )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; free ( data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 