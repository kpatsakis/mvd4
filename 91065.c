static void goodG2B() int64_t * data ; map < int , int64_t * > dataMap ; int64_t * dataGoodBuffer = ( int64_t * ) ALLOCA ( 100 * sizeof ( int64_t ) ) ; data = dataGoodBuffer; dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodG2BSink ( dataMap ); void goodG2BSink(map<int, int64_t *> dataMap) int64_t * data = dataMap [ 2 ] ; int64_t source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); 