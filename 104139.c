void CWE690_NULL_Deref_From_Return__char_realloc_53_bad() char * data ; data = NULL; data = ( char * ) realloc ( data , 20 * sizeof ( char ) ); CWE690_NULL_Deref_From_Return__char_realloc_53b_badSink ( data ); void CWE690_NULL_Deref_From_Return__char_realloc_53b_badSink(char * data) CWE690_NULL_Deref_From_Return__char_realloc_53c_badSink ( data ); void CWE690_NULL_Deref_From_Return__char_realloc_53c_badSink(char * data) CWE690_NULL_Deref_From_Return__char_realloc_53d_badSink ( data ); void CWE690_NULL_Deref_From_Return__char_realloc_53d_badSink(char * data) strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 