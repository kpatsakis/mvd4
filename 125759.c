static void goodG2B1() int * data ; int * dataGoodBuffer = ( int * ) ALLOCA ( 100 * sizeof ( int ) ) ; if ( STATIC_CONST_FALSE )  data = dataGoodBuffer; int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 