void CWE122_Heap_Based_Buffer_Overflow__CWE135_67_bad() wchar_t * dataBadBuffer = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ) ; data = ( void * ) dataBadBuffer; myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__CWE135_67b_badSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__CWE135_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct) void * data = myStruct . structFirst ; size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); printLine ( ( char * ) dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dest ); 