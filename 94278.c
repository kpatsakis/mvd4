void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_13_bad() int data ; data = - 1; if ( GLOBAL_CONST_FIVE == 5 )  data = INT_MAX / 2 + 2; size_t i ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; free ( intPointer ); 