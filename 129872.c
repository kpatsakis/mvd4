static void goodB2G() char * data ; data = NULL; while ( 1 )  data = new char [ 100 ]; strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 