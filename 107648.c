static void goodG2B() int * data ; data = ( int * ) malloc ( 10 * sizeof ( int ) ); data [ i ] = i; CWE457_Use_of_Uninitialized_Variable__int_array_malloc_partial_init_64b_goodG2BSink ( & data ); void CWE457_Use_of_Uninitialized_Variable__int_array_malloc_partial_init_64b_goodG2BSink(void * dataVoidPtr) int * * dataPtr = ( int * * ) dataVoidPtr ; int * data = ( * dataPtr ) ; printIntLine ( data [ i ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 