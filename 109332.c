void bad() int i ; char * data ; data = new char [ 100 ]; for(i = 0; i < 1; i++) memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 