void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_bad() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( sizeof ( data ) ); data -> intOne = 1; data -> intTwo = 2; CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_badSink(twoIntsStruct * data) printStructLine ( data ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 