static void goodG2B() char * data ; data = NULL; data = ( char * ) ALLOCA ( 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); CWE401_Memory_Leak__char_calloc_54b_goodG2BSink ( data ); void CWE401_Memory_Leak__char_calloc_54b_goodG2BSink(char * data) CWE401_Memory_Leak__char_calloc_54c_goodG2BSink ( data ); void CWE401_Memory_Leak__char_calloc_54c_goodG2BSink(char * data) CWE401_Memory_Leak__char_calloc_54d_goodG2BSink ( data ); void CWE401_Memory_Leak__char_calloc_54d_goodG2BSink(char * data) CWE401_Memory_Leak__char_calloc_54e_goodG2BSink ( data ); void CWE401_Memory_Leak__char_calloc_54e_goodG2BSink(char * data) 