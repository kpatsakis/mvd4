static void goodB2G() int64_t * data ; data = ( int64_t * ) calloc ( 1 , sizeof ( int64_t ) ); goodB2GSink ( data ); static void goodB2GSink(int64_t * data) if ( data != NULL )  data [ 0 ] = 5L L printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 