static void goodB2G() int * data ; data = NULL; data = ( int * ) realloc ( data , 100 * sizeof ( int ) ); data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); CWE401_Memory_Leak__int_realloc_53b_goodB2GSink ( data ); void CWE401_Memory_Leak__int_realloc_53b_goodB2GSink(int * data) CWE401_Memory_Leak__int_realloc_53c_goodB2GSink ( data ); void CWE401_Memory_Leak__int_realloc_53c_goodB2GSink(int * data) CWE401_Memory_Leak__int_realloc_53d_goodB2GSink ( data ); void CWE401_Memory_Leak__int_realloc_53d_goodB2GSink(int * data) free ( data ); 