static void goodB2G() char * data ; data = NULL; data = ( char * ) calloc ( 20 , sizeof ( char ) ); CWE690_NULL_Deref_From_Return__char_calloc_53b_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__char_calloc_53b_goodB2GSink(char * data) CWE690_NULL_Deref_From_Return__char_calloc_53c_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__char_calloc_53c_goodB2GSink(char * data) CWE690_NULL_Deref_From_Return__char_calloc_53d_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__char_calloc_53d_goodB2GSink(char * data) if ( data != NULL )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 