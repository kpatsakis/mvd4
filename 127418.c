void CWE690_NULL_Deref_From_Return__int64_t_malloc_64_bad() int64_t * data ; data = NULL; data = ( int64_t * ) malloc ( 1 * sizeof ( int64_t ) ); CWE690_NULL_Deref_From_Return__int64_t_malloc_64b_badSink ( & data ); void CWE690_NULL_Deref_From_Return__int64_t_malloc_64b_badSink(void * dataVoidPtr) int64_t * * dataPtr = ( int64_t * * ) dataVoidPtr ; int64_t * data = ( * dataPtr ) ; data [ 0 ] = 5L L free ( data ); 