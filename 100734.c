void CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_66_bad() int * data ; int * dataArray [ 5 ] ; data = NULL; data = ( int * ) ALLOCA ( 10 ); dataArray [ 2 ] = data; CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_66b_badSink ( dataArray ); void CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_66b_badSink(int * dataArray[]) int * data = dataArray [ 2 ] ; int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 