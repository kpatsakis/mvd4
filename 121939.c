void CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_malloc_22_bad() int data ; data = - 1; data = CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_malloc_22_badSource ( data ); int CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_malloc_22_badSource(int data) return data ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 