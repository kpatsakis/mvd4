static void goodG2B1() int * data ; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; data = ( int * ) malloc ( 10 * sizeof ( int ) ); memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 