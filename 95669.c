static void goodB2G() twoIntsStruct * data ; CWE690_NULL_Deref_From_Return__struct_malloc_34_unionType myUnion ; data = NULL; data = ( twoIntsStruct * ) malloc ( 1 * sizeof ( twoIntsStruct ) ); myUnion . unionFirst = data; twoIntsStruct * data = myUnion . unionSecond ; if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 