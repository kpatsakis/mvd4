static void goodG2B() short data ; CWE194_Unexpected_Sign_Extension__fgets_malloc_67_structType myStruct ; data = 0; data = 100 - 1; myStruct . structFirst = data; CWE194_Unexpected_Sign_Extension__fgets_malloc_67b_goodG2BSink ( myStruct ); void CWE194_Unexpected_Sign_Extension__fgets_malloc_67b_goodG2BSink(CWE194_Unexpected_Sign_Extension__fgets_malloc_67_structType myStruct) short data = myStruct . structFirst ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 