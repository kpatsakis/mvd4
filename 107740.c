void CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_54b_goodG2BSink(int64_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_54c_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_54c_goodG2BSink(int64_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_54d_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_54d_goodG2BSink(int64_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_54e_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_54e_goodG2BSink(int64_t * data) int64_t source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); 