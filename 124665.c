void CWE690_NULL_Deref_From_Return__char_calloc_67_bad() char * data ; data = ( char * ) calloc ( 20 , sizeof ( char ) ); myStruct . structFirst = data; CWE690_NULL_Deref_From_Return__char_calloc_67b_badSink ( myStruct ); void CWE690_NULL_Deref_From_Return__char_calloc_67b_badSink(CWE690_NULL_Deref_From_Return__char_calloc_67_structType myStruct) char * data = myStruct . structFirst ; strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 