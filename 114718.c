static void goodG2B1() int * data ; int dataGoodBuffer [ 100 ] ; if ( STATIC_CONST_FIVE != 5 )  data = dataGoodBuffer; int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 