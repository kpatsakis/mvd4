void CWE690_NULL_Deref_From_Return__struct_calloc_67_bad() twoIntsStruct * data ; data = ( twoIntsStruct * ) calloc ( 1 , sizeof ( twoIntsStruct ) ); myStruct . structFirst = data; CWE690_NULL_Deref_From_Return__struct_calloc_67b_badSink ( myStruct ); void CWE690_NULL_Deref_From_Return__struct_calloc_67b_badSink(CWE690_NULL_Deref_From_Return__struct_calloc_67_structType myStruct) twoIntsStruct * data = myStruct . structFirst ; data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 