static void goodG2B1() char * data ; data = NULL; if ( 0 )  data = ( char * ) ALLOCA ( 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 