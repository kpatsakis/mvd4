void CWE690_NULL_Deref_From_Return__struct_realloc_04_bad() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 1 * sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 