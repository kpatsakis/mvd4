static void goodG2B2() char * data ; data = NULL; if ( 1 )  data = new char [ 10 + 1 ]; char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 