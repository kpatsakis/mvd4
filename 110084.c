static void goodG2B1() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) dest [ i ] = data [ i ]; dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 