void CWE401_Memory_Leak__int64_t_realloc_32_bad() int64_t * data ; int64_t * * dataPtr1 = & data ; data = NULL; int64_t * data = * dataPtr1 ; data = ( int64_t * ) realloc ( data , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); * dataPtr1 = data; 