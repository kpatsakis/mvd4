static void goodB2G() long * data ; data = NULL; data = ( long * ) calloc ( 1 , sizeof ( long ) ); CWE690_NULL_Deref_From_Return__long_calloc_82_base * baseObject = new CWE690_NULL_Deref_From_Return__long_calloc_82_goodB2G baseObject -> action ( data ); void CWE690_NULL_Deref_From_Return__long_calloc_82_goodB2G::action(long * data) if ( data != NULL )  data [ 0 ] = 5L; free ( data ); 