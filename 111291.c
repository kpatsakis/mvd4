void CWE127_Buffer_Underread__char_alloca_memcpy_53_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE127_Buffer_Underread__char_alloca_memcpy_53b_badSink ( data ); void CWE127_Buffer_Underread__char_alloca_memcpy_53b_badSink(char * data) CWE127_Buffer_Underread__char_alloca_memcpy_53c_badSink ( data ); void CWE127_Buffer_Underread__char_alloca_memcpy_53c_badSink(char * data) CWE127_Buffer_Underread__char_alloca_memcpy_53d_badSink ( data ); void CWE127_Buffer_Underread__char_alloca_memcpy_53d_badSink(char * data) char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memcpy ( dest , data , 100 * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 