static void goodG2B() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53b_goodG2BSink(twoIntsStruct * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53c_goodG2BSink(twoIntsStruct * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53d_goodG2BSink(twoIntsStruct * data) memcpy ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 