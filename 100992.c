void CWE401_Memory_Leak__malloc_realloc_int64_t_02_bad() if ( 1 )  int64_t * data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ) ; data [ 0 ] = 5L L data = ( int64_t * ) realloc ( data , ( 130000 ) * sizeof ( int64_t ) ); if ( data != NULL )  printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 