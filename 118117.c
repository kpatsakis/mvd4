static void goodG2B() int * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_61b_goodG2BSource ( data ); int * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_61b_goodG2BSource(int * data) data = ( int * ) malloc ( 100 * sizeof ( int ) ); return data ; int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 