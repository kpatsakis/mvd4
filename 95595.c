void CWE194_Unexpected_Sign_Extension__negative_malloc_02_bad() short data ; data = 0; if ( 1 )  data = - 1; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 