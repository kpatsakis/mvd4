void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_loop_17_bad() int i ; char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; for(i = 0; i < 1; i++) memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) dest [ i ] = data [ i ]; dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 