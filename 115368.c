void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_64_bad() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( 50 * sizeof ( twoIntsStruct ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_64b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_64b_badSink(void * dataVoidPtr) twoIntsStruct * * dataPtr = ( twoIntsStruct * * ) dataVoidPtr ; twoIntsStruct * data = ( * dataPtr ) ; data [ i ] = source [ i ]; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 