void CWE476_NULL_Pointer_Dereference__null_check_after_deref_05_bad() if ( staticTrue )  intPointer = ( int * ) malloc ( sizeof ( int ) ); * intPointer = 5; printIntLine ( * intPointer ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); if ( intPointer != NULL )  * intPointer = 10; printIntLine ( * intPointer ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 