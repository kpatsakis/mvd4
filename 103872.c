void CWE401_Memory_Leak__int64_t_calloc_66_bad() int64_t * data ; data = ( int64_t * ) calloc ( 100 , sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); dataArray [ 2 ] = data; CWE401_Memory_Leak__int64_t_calloc_66b_badSink ( dataArray ); void CWE401_Memory_Leak__int64_t_calloc_66b_badSink(int64_t * dataArray[]) int64_t * data = dataArray [ 2 ] ; 