void CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_41_bad() int * data ; data = ( int * ) malloc ( 10 ); CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_41_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_41_badSink(int * data) memmove ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 