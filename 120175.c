static void goodB2G1() char * data ; if ( 1 )  char myString [ ] = "myString" ; data = strdup ( myString ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 