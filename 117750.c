static void goodG2B() int data ; data = - 1; data = 20; CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_82_base * baseObject = new CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_82_goodG2B baseObject -> action ( data ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_82_goodG2B::action(int data) int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( intPointer ); 