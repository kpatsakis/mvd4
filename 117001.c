static void goodG2B2() char * data ; data = new char [ 100 ]; if ( staticTrue )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 