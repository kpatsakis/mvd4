static void goodB2G() int i , k ; long * data ; data = NULL; for(i = 0; i < 1; i++) data = ( long * ) malloc ( 100 * sizeof ( long ) ); size_t i ; for(i = 0; i < 100; i++) data [ i ] = 5L; free ( data ); 