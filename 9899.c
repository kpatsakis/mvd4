static void goodG2B2() int64_t * data ; data = NULL; if ( globalFive == 5 )  data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); int64_t source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 