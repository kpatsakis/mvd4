static void goodB2G() int data ; data = - 1; CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51b_goodB2GSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51b_goodB2GSink(int data) int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 && data < ( 10 ) )  buffer [ data ] = 1; free ( buffer ); 