void CWE690_NULL_Deref_From_Return__char_calloc_66_bad() char * data ; char * dataArray [ 5 ] ; data = NULL; data = ( char * ) calloc ( 20 , sizeof ( char ) ); dataArray [ 2 ] = data; CWE690_NULL_Deref_From_Return__char_calloc_66b_badSink ( dataArray ); void CWE690_NULL_Deref_From_Return__char_calloc_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 