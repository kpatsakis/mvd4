static void goodG2B() int * data ; data = ( int * ) malloc ( 10 * sizeof ( int ) ); myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_67b_goodG2BSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_67b_goodG2BSink(CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_67_structType myStruct) int * data = myStruct . structFirst ; memmove ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 