static void goodG2B() int * data ; data = ( int * ) malloc ( 10 * sizeof ( int ) ); int * dataCopy = data ; int * data = dataCopy ; data [ i ] = source [ i ]; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 