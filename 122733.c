static void goodG2B() int data ; data = - 1; data = 100 - 1; CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_52b_goodG2BSink ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_52b_goodG2BSink(int data) CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_52c_goodG2BSink ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_52c_goodG2BSink(int data) if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 