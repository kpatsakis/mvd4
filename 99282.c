void CWE126_Buffer_Overread__char_alloca_memcpy_67b_goodG2BSink(CWE126_Buffer_Overread__char_alloca_memcpy_67_structType myStruct) char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memcpy ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 