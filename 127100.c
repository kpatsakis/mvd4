void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_54b_badSink(int data) CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_54c_badSink ( data ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_54c_badSink(int data) CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_54d_badSink ( data ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_54d_badSink(int data) CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_54e_badSink ( data ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_54e_badSink(int data) int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( intPointer ); 