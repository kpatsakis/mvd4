static void goodG2B() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) malloc ( sizeof ( * data ) ); data -> intOne = 1; data -> intTwo = 2; CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52b_goodG2BSink(twoIntsStruct * data) CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52c_goodG2BSink(twoIntsStruct * data) printStructLine ( data ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 