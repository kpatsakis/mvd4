static void goodG2B() int * data ; data = NULL; data = ( int * ) malloc ( 100 * sizeof ( int ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52b_goodG2BSink(int * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52c_goodG2BSink(int * data) int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 