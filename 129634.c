void CWE194_Unexpected_Sign_Extension__fscanf_malloc_63_bad() short data ; data = 0; CWE194_Unexpected_Sign_Extension__fscanf_malloc_63b_badSink ( & data ); void CWE194_Unexpected_Sign_Extension__fscanf_malloc_63b_badSink(short * dataPtr) short data = * dataPtr ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 