static void goodG2B1() int * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_goodG2B1Source ( data ); int * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_goodG2B1Source(int * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_goodG2B1Global )  data = ( int * ) malloc ( 100 * sizeof ( int ) ); return data ; int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 