void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_03_bad() char * data ; char * dataBadBuffer = ( char * ) ALLOCA ( ( 10 ) * sizeof ( char ) ) ; if ( 5 == 5 )  data = dataBadBuffer; data [ 0 ] = '\0'; char source [ 10 + 1 ] = SRC_STRING ; strncpy ( data , source , strlen ( source ) + 1 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 