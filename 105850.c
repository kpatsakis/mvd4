static void goodG2B2() int * data ; data = NULL; switch ( 6 )  data = ( int * ) malloc ( 100 * sizeof ( int ) ); int source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 