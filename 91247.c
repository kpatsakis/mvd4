static void goodB2G() int64_t * data ; data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); CWE401_Memory_Leak__int64_t_malloc_53b_goodB2GSink ( data ); void CWE401_Memory_Leak__int64_t_malloc_53b_goodB2GSink(int64_t * data) CWE401_Memory_Leak__int64_t_malloc_53c_goodB2GSink ( data ); void CWE401_Memory_Leak__int64_t_malloc_53c_goodB2GSink(int64_t * data) CWE401_Memory_Leak__int64_t_malloc_53d_goodB2GSink ( data ); void CWE401_Memory_Leak__int64_t_malloc_53d_goodB2GSink(int64_t * data) free ( data ); 