static void goodG2B1() int * data ; data = NULL; if ( 0 )  data = ( int * ) malloc ( 10 * sizeof ( int ) ); int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 