void bad() int * data ; data = NULL; if ( STATIC_CONST_FIVE == 5 )  data = new int [ 50 ]; int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 