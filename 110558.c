static void goodG2B() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; strcat ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 