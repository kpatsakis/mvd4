static void goodB2G() int64_t * data ; data = NULL; data = ( int64_t * ) realloc ( data , 1 * sizeof ( int64_t ) ); dataArray [ 2 ] = data; CWE690_NULL_Deref_From_Return__int64_t_realloc_66b_goodB2GSink ( dataArray ); void CWE690_NULL_Deref_From_Return__int64_t_realloc_66b_goodB2GSink(int64_t * dataArray[]) int64_t * data = dataArray [ 2 ] ; if ( data != NULL )  printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 