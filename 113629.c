static void goodG2B() int64_t * data ; CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_67_structType myStruct ; int64_t * dataGoodBuffer = ( int64_t * ) ALLOCA ( 100 * sizeof ( int64_t ) ) ; data = dataGoodBuffer; myStruct . structFirst = data; CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_67b_goodG2BSink ( myStruct ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_67b_goodG2BSink(CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_67_structType myStruct) int64_t * data = myStruct . structFirst ; int64_t source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); 