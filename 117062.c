static void goodB2G2() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( 1 * sizeof ( twoIntsStruct ) ); CWE690_NULL_Deref_From_Return__struct_malloc_22_goodB2G2Sink ( data ); void CWE690_NULL_Deref_From_Return__struct_malloc_22_goodB2G2Sink(twoIntsStruct * data) if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 