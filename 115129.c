static void goodG2B() char * data ; char * dataGoodBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataGoodBuffer , 'A' , 100 - 1 ); dataGoodBuffer [ 100 - 1 ] = '\0'; data = dataGoodBuffer; CWE126_Buffer_Overread__char_alloca_memcpy_53b_goodG2BSink ( data ); void CWE126_Buffer_Overread__char_alloca_memcpy_53b_goodG2BSink(char * data) CWE126_Buffer_Overread__char_alloca_memcpy_53c_goodG2BSink ( data ); void CWE126_Buffer_Overread__char_alloca_memcpy_53c_goodG2BSink(char * data) CWE126_Buffer_Overread__char_alloca_memcpy_53d_goodG2BSink ( data ); void CWE126_Buffer_Overread__char_alloca_memcpy_53d_goodG2BSink(char * data) char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memcpy ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 