static void goodG2B2() int64_t * data ; data = NULL; data = goodG2B2Source ( data ); static int64_t * goodG2B2Source(int64_t * data) if ( goodG2B2Static )  data = new int64_t [ 100 ]; return data ; int64_t source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); delete [ ] data 