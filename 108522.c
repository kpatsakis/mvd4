static void goodG2B1() void * data ; data = NULL; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; data = ( void * ) CHAR_STRING; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); printLine ( ( char * ) dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dest ); 