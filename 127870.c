void CWE690_NULL_Deref_From_Return__long_calloc_53_bad() long * data ; data = NULL; data = ( long * ) calloc ( 1 , sizeof ( long ) ); CWE690_NULL_Deref_From_Return__long_calloc_53b_badSink ( data ); void CWE690_NULL_Deref_From_Return__long_calloc_53b_badSink(long * data) CWE690_NULL_Deref_From_Return__long_calloc_53c_badSink ( data ); void CWE690_NULL_Deref_From_Return__long_calloc_53c_badSink(long * data) CWE690_NULL_Deref_From_Return__long_calloc_53d_badSink ( data ); void CWE690_NULL_Deref_From_Return__long_calloc_53d_badSink(long * data) data [ 0 ] = 5L; free ( data ); 