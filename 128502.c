static void goodG2B2() char * data ; data = NULL; if ( globalTrue )  char dataGoodBuffer [ 100 ] ; data = dataGoodBuffer; strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 