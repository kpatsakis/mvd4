void bad() int * data ; data = ( int * ) malloc ( 1 * sizeof ( int ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, int *> dataMap) int * data = dataMap [ 2 ] ; data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 