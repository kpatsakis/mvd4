void CWE690_NULL_Deref_From_Return__char_realloc_22_bad() char * data ; data = NULL; data = ( char * ) realloc ( data , 20 * sizeof ( char ) ); CWE690_NULL_Deref_From_Return__char_realloc_22_badSink ( data ); void CWE690_NULL_Deref_From_Return__char_realloc_22_badSink(char * data) if ( CWE690_NULL_Deref_From_Return__char_realloc_22_badGlobal )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 