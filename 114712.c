void bad() char * data ; data = new char [ 100 ]; if ( 5 == 5 )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; strcat ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 