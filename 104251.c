void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_18_bad() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) malloc ( 50 * sizeof ( twoIntsStruct ) ); twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 