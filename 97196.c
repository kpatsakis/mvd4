void CWE401_Memory_Leak__int_calloc_66_bad() int * data ; data = ( int * ) calloc ( 100 , sizeof ( int ) ); data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); dataArray [ 2 ] = data; CWE401_Memory_Leak__int_calloc_66b_badSink ( dataArray ); void CWE401_Memory_Leak__int_calloc_66b_badSink(int * dataArray[]) int * data = dataArray [ 2 ] ; 