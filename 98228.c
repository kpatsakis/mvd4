void CWE401_Memory_Leak__twoIntsStruct_calloc_31_bad() twoIntsStruct * data ; data = ( twoIntsStruct * ) calloc ( 100 , sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); twoIntsStruct * dataCopy = data ; twoIntsStruct * data = dataCopy ; 