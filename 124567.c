void CWE690_NULL_Deref_From_Return__long_realloc_12_bad() long * data ; data = NULL; data = ( long * ) realloc ( data , 1 * sizeof ( long ) ); if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data [ 0 ] = 5L; if ( data != NULL )  data [ 0 ] = 5L; free ( data ); 