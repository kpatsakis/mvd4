static void goodG2B() short data ; data = 0; data = 100 - 1; CWE194_Unexpected_Sign_Extension__connect_socket_malloc_52b_goodG2BSink ( data ); void CWE194_Unexpected_Sign_Extension__connect_socket_malloc_52b_goodG2BSink(short data) CWE194_Unexpected_Sign_Extension__connect_socket_malloc_52c_goodG2BSink ( data ); void CWE194_Unexpected_Sign_Extension__connect_socket_malloc_52c_goodG2BSink(short data) if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 