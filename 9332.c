static void goodG2B2() int * data ; data = NULL; switch ( 6 )  data = ( int * ) malloc ( 10 * sizeof ( int ) ); int source [ 10 ] = { 0 } ; memmove ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 