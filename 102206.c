void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_bad() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( sizeof ( data ) ); data -> intOne = 1; data -> intTwo = 2; CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53b_badSink(twoIntsStruct * data) CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53c_badSink(twoIntsStruct * data) CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53d_badSink(twoIntsStruct * data) printStructLine ( data ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 