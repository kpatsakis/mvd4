void CWE121_Stack_Based_Buffer_Overflow__CWE135_04_bad() void * data ; data = NULL; if ( STATIC_CONST_TRUE )  data = ( void * ) WIDE_STRING; if ( STATIC_CONST_TRUE )  size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); printLine ( ( char * ) dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dest ); 