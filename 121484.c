static void goodG2B() int * dataBuffer = ( int * ) malloc ( 100 * sizeof ( int ) ) ; if ( dataBuffer == NULL )  dataBuffer [ i ] = 5; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_int_static_64b_goodG2BSink ( & data ); void CWE590_Free_Memory_Not_on_Heap__free_int_static_64b_goodG2BSink(void * dataVoidPtr) int * * dataPtr = ( int * * ) dataVoidPtr ; int * data = ( * dataPtr ) ; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 