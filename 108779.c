static void goodB2G1() char * data ; if ( GLOBAL_CONST_TRUE )  char myString [ ] = "myString" ; data = strdup ( myString ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 