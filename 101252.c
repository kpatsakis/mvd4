void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_63_bad() int * data ; data = NULL; data = ( int * ) malloc ( 50 * sizeof ( int ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_63b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_63b_badSink(int * * dataPtr) int * data = * dataPtr ; int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); free ( data ); 