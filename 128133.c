void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66_bad() int64_t * data ; int64_t * dataArray [ 5 ] ; data = NULL; data = ( int64_t * ) malloc ( 50 * sizeof ( int64_t ) ); dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66b_badSink(int64_t * dataArray[]) int64_t * data = dataArray [ 2 ] ; int64_t source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 