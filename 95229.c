static void goodG2B() int h ; int * data ; data = NULL; for(h = 0; h < 1; h++) data = new int [ 100 ]; int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 