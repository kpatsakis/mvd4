void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_34_bad() int data ; CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_34_unionType myUnion ; data = - 1; data = RAND32 ( ); myUnion . unionFirst = data; int data = myUnion . unionSecond ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( intPointer ); 