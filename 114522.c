void bad() char * data ; data = NULL; if ( GLOBAL_CONST_FIVE == 5 )  data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; delete [ ] data printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 