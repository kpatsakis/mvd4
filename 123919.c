static void goodG2B1() int * data ; data = NULL; data = goodG2B1Source ( data ); static int * goodG2B1Source(int * data) if ( goodG2B1Static )  data = new int [ 100 ]; return data ; int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 