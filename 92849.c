void CWE122_Heap_Based_Buffer_Overflow__CWE135_68b_goodG2BSink() void * data = CWE122_Heap_Based_Buffer_Overflow__CWE135_68_goodG2BData ; size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); printLine ( ( char * ) dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dest ); 