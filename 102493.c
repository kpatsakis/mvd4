static void goodG2B() int64_t * data ; data = NULL; data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); int64_t * dataCopy = data ; int64_t * data = dataCopy ; int64_t source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 