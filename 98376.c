static void goodB2G() char * data ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); strcpy ( data , "A String" ); CWE401_Memory_Leak__char_malloc_53b_goodB2GSink ( data ); void CWE401_Memory_Leak__char_malloc_53b_goodB2GSink(char * data) CWE401_Memory_Leak__char_malloc_53c_goodB2GSink ( data ); void CWE401_Memory_Leak__char_malloc_53c_goodB2GSink(char * data) CWE401_Memory_Leak__char_malloc_53d_goodB2GSink ( data ); void CWE401_Memory_Leak__char_malloc_53d_goodB2GSink(char * data) free ( data ); 