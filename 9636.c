void CWE121_Stack_Based_Buffer_Overflow__CWE135_17_bad() int i , j ; void * data ; data = NULL; for(i = 0; i < 1; i++) data = ( void * ) WIDE_STRING; for(j = 0; j < 1; j++) size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 