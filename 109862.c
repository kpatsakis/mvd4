static void goodG2B() void * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__CWE135_61b_goodG2BSource ( data ); void * CWE122_Heap_Based_Buffer_Overflow__CWE135_61b_goodG2BSource(void * data) char * dataGoodBuffer = ( char * ) malloc ( 50 * sizeof ( char ) ) ; memset ( dataGoodBuffer , 'A' , 50 - 1 ); dataGoodBuffer [ 50 - 1 ] = '\0'; data = ( void * ) dataGoodBuffer; return data ; size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 