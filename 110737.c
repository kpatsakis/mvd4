void CWE401_Memory_Leak__char_calloc_53_bad() char * data ; data = NULL; data = ( char * ) calloc ( 100 , sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); CWE401_Memory_Leak__char_calloc_53b_badSink ( data ); void CWE401_Memory_Leak__char_calloc_53b_badSink(char * data) CWE401_Memory_Leak__char_calloc_53c_badSink ( data ); void CWE401_Memory_Leak__char_calloc_53c_badSink(char * data) CWE401_Memory_Leak__char_calloc_53d_badSink ( data ); void CWE401_Memory_Leak__char_calloc_53d_badSink(char * data) 