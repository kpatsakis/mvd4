static void goodB2G() char * data ; data = NULL; data = CWE401_Memory_Leak__char_calloc_61b_goodB2GSource ( data ); char * CWE401_Memory_Leak__char_calloc_61b_goodB2GSource(char * data) data = ( char * ) calloc ( 100 , sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); return data ; 