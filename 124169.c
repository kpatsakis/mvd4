void CWE121_Stack_Based_Buffer_Overflow__CWE135_52_bad() void * data ; data = NULL; data = ( void * ) WIDE_STRING; CWE121_Stack_Based_Buffer_Overflow__CWE135_52b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE135_52b_badSink(void * data) CWE121_Stack_Based_Buffer_Overflow__CWE135_52c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE135_52c_badSink(void * data) size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 