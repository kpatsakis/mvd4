static void goodG2B() void * data ; data = NULL; data = ( void * ) CHAR_STRING; CWE121_Stack_Based_Buffer_Overflow__CWE135_22_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE135_22_goodG2BSink(void * data) if ( CWE121_Stack_Based_Buffer_Overflow__CWE135_22_goodG2BGlobal )  size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); printLine ( ( char * ) dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dest ); 