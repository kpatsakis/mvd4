void CWE122_Heap_Based_Buffer_Overflow__CWE135_64_bad() void * data ; data = NULL; wchar_t * dataBadBuffer = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ) ; wmemset ( dataBadBuffer , L 'A' , 50 - 1 dataBadBuffer [ 50 - 1 ] = L '\0' data = ( void * ) dataBadBuffer; CWE122_Heap_Based_Buffer_Overflow__CWE135_64b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__CWE135_64b_badSink(void * dataVoidPtr) void * * dataPtr = ( void * * ) dataVoidPtr ; void * data = ( * dataPtr ) ; size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); printLine ( ( char * ) dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dest ); 