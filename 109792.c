void CWE690_NULL_Deref_From_Return__struct_realloc_64_bad() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 1 * sizeof ( twoIntsStruct ) ); CWE690_NULL_Deref_From_Return__struct_realloc_64b_badSink ( & data ); void CWE690_NULL_Deref_From_Return__struct_realloc_64b_badSink(void * dataVoidPtr) twoIntsStruct * * dataPtr = ( twoIntsStruct * * ) dataVoidPtr ; twoIntsStruct * data = ( * dataPtr ) ; data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 