void bad() int * data ; data = NULL; data = ( int * ) malloc ( 10 ); CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_82_bad baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_82_bad::action(int * data) int source [ 10 ] = { 0 } ; memmove ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 