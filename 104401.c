void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_09_bad() int * data ; data = NULL; if ( GLOBAL_CONST_TRUE )  data = ( int * ) malloc ( 10 ); int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 