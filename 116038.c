static void goodB2G1() char * data ; data = NULL; switch ( 6 )  data = new char [ 100 ]; strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 