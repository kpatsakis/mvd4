static void goodG2B1() int * data ; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; data = ( int * ) malloc ( 100 * sizeof ( int ) ); memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 