static void goodG2B() list < int64_t * > dataList ; goodG2BSink ( dataList ); void goodG2BSink(list<int64_t *> dataList) int64_t * data = dataList . back ( ) ; int64_t source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); delete [ ] data 