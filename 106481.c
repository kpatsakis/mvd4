void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52_bad() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( 50 * sizeof ( twoIntsStruct ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52b_badSink(twoIntsStruct * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52c_badSink(twoIntsStruct * data) memcpy ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 