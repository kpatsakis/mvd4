static void goodB2G1() twoIntsStruct * data ; data = ( twoIntsStruct * ) calloc ( 100 , sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); CWE401_Memory_Leak__twoIntsStruct_calloc_22_goodB2G1Sink ( data ); void CWE401_Memory_Leak__twoIntsStruct_calloc_22_goodB2G1Sink(twoIntsStruct * data) free ( data ); 