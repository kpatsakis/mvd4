static void goodG2B() short data ; data = 0; data = 100 - 1; CWE194_Unexpected_Sign_Extension__fgets_malloc_64b_goodG2BSink ( & data ); void CWE194_Unexpected_Sign_Extension__fgets_malloc_64b_goodG2BSink(void * dataVoidPtr) short * dataPtr = ( short * ) dataVoidPtr ; short data = ( * dataPtr ) ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 