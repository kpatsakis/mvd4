void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_17_bad() int i ; char * data ; char * dataBadBuffer = ( char * ) ALLOCA ( ( 10 ) * sizeof ( char ) ) ; for(i = 0; i < 1; i++) data = dataBadBuffer; data [ 0 ] = '\0'; char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 