void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_bad() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( sizeof ( data ) ); data -> intOne = 1; data -> intTwo = 2; myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67b_badSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_structType myStruct) twoIntsStruct * data = myStruct . structFirst ; printStructLine ( data ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 