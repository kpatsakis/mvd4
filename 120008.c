static void goodG2B2() char * data ; data = NULL; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( char * ) ALLOCA ( 100 * sizeof ( char ) ); strcpy ( data , "a string" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 