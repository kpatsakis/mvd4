static void goodG2B() long * dataBuffer = ( long * ) malloc ( 100 * sizeof ( long ) ) ; if ( dataBuffer == NULL )  dataBuffer [ i ] = 5L; data = dataBuffer; dataArray [ 2 ] = data; CWE590_Free_Memory_Not_on_Heap__free_long_static_66b_goodG2BSink ( dataArray ); void CWE590_Free_Memory_Not_on_Heap__free_long_static_66b_goodG2BSink(long * dataArray[]) long * data = dataArray [ 2 ] ; printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); free ( data ); 