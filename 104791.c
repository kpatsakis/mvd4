void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_02_bad() int data ; data = - 1; if ( 1 )  data = RAND32 ( ); int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( intPointer ); 