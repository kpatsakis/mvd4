static void goodG2B() int64_t * data ; data = NULL; data = ( int64_t * ) malloc ( sizeof ( * data ) ); * data = 2147483643L L CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52b_goodG2BSink(int64_t * data) CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52c_goodG2BSink(int64_t * data) free ( data ); 