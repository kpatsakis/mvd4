static void goodB2G() long * data ; data = NULL; data = ( long * ) malloc ( 1 * sizeof ( long ) ); CWE690_NULL_Deref_From_Return__long_malloc_63b_goodB2GSink ( & data ); void CWE690_NULL_Deref_From_Return__long_malloc_63b_goodB2GSink(long * * dataPtr) long * data = * dataPtr ; if ( data != NULL )  data [ 0 ] = 5L; free ( data ); 