void CWE124_Buffer_Underwrite__char_alloca_memmove_63_bad() char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE124_Buffer_Underwrite__char_alloca_memmove_63b_badSink ( & data ); void CWE124_Buffer_Underwrite__char_alloca_memmove_63b_badSink(char * * dataPtr) char * data = * dataPtr ; memmove ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 