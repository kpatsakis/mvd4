void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66_bad() char * data ; char * dataArray [ 5 ] ; char * dataBadBuffer = ( char * ) ALLOCA ( ( 10 ) * sizeof ( char ) ) ; data = dataBadBuffer; data [ 0 ] = '\0'; dataArray [ 2 ] = data; CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66b_badSink ( dataArray ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; char source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 