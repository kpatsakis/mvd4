static void goodG2B() double * data ; data = ( double * ) malloc ( 10 * sizeof ( double ) ); data [ i ] = ( double ) i; CWE457_Use_of_Uninitialized_Variable__double_array_malloc_partial_init_63b_goodG2BSink ( & data ); void CWE457_Use_of_Uninitialized_Variable__double_array_malloc_partial_init_63b_goodG2BSink(double * * dataPtr) double * data = * dataPtr ; printDoubleLine ( data [ i ] ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); 