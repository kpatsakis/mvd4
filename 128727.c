void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_bad() int data ; data = - 1; CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63b_badSink(int * dataPtr) int data = * dataPtr ; int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 )  buffer [ data ] = 1; free ( buffer ); 