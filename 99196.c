static void goodB2G() int64_t * data ; data = ( int64_t * ) malloc ( 1 * sizeof ( int64_t ) ); myStruct . structFirst = data; CWE690_NULL_Deref_From_Return__int64_t_malloc_67b_goodB2GSink ( myStruct ); void CWE690_NULL_Deref_From_Return__int64_t_malloc_67b_goodB2GSink(CWE690_NULL_Deref_From_Return__int64_t_malloc_67_structType myStruct) int64_t * data = myStruct . structFirst ; if ( data != NULL )  printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 