void CWE416_Use_After_Free__malloc_free_long_17_bad() int i , j ; long * data ; for(i = 0; i < 1; i++) data = ( long * ) malloc ( 100 * sizeof ( long ) ); size_t i ; for(i = 0; i < 100; i++) data [ i ] = 5L; free ( data ); printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); 