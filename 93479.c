void CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_07_bad() int data ; data = - 1; if ( staticFive == 5 )  data = RAND32 ( ); char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 