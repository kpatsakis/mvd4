void bad() int * data ; int * & dataRef = data ; data = NULL; data = ( int * ) malloc ( 50 * sizeof ( int ) ); int * data = dataRef ; int source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 