void CWE124_Buffer_Underwrite__char_declare_memcpy_64_bad() char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE124_Buffer_Underwrite__char_declare_memcpy_64b_badSink ( & data ); void CWE124_Buffer_Underwrite__char_declare_memcpy_64b_badSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 