static void goodG2B1() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( staticFive != 5 )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 