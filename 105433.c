void bad() int data ; data = - 1; data = - 1; CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_82_base * baseObject = new CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_82_bad baseObject -> action ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_82_bad::action(int data) if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 