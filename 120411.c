static void goodB2G() FILE * data ; data = NULL; data = fopen ( "file.txt" , "w+" ); CWE690_NULL_Deref_From_Return__fopen_52b_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__fopen_52b_goodB2GSink(FILE * data) CWE690_NULL_Deref_From_Return__fopen_52c_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__fopen_52c_goodB2GSink(FILE * data) if ( data != NULL )  fclose ( data ); 