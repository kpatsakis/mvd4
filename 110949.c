static void goodB2G() long * data ; data = NULL; data = ( long * ) realloc ( data , 1 * sizeof ( long ) ); baseObject -> action ( data ); void CWE690_NULL_Deref_From_Return__long_realloc_82_goodB2G::action(long * data) if ( data != NULL )  data [ 0 ] = 5L; printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); free ( data ); 