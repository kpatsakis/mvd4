void CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_42_bad() int * data ; data = NULL; data = badSource ( data ); static int * badSource(int * data) data = ( int * ) malloc ( 10 ); return data ; int source [ 10 ] = { 0 } ; memmove ( data , source , 10 * sizeof ( int ) ); free ( data ); 