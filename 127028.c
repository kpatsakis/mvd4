static void goodG2B() int64_t * data ; CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_67_structType myStruct ; data = NULL; int64_t * dataBuffer = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L L data = dataBuffer; myStruct . structFirst = data; CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_67b_goodG2BSink ( myStruct ); void CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_67b_goodG2BSink(CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_67_structType myStruct) int64_t * data = myStruct . structFirst ; free ( data ); 