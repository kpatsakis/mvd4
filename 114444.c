void bad() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 1 * sizeof ( twoIntsStruct ) ); CWE690_NULL_Deref_From_Return__struct_realloc_82_base * baseObject = new CWE690_NULL_Deref_From_Return__struct_realloc_82_bad baseObject -> action ( data ); void CWE690_NULL_Deref_From_Return__struct_realloc_82_bad::action(twoIntsStruct * data) data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 