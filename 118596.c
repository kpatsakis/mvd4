void bad() long * data ; map < int , long * > dataMap ; data = NULL; data = ( long * ) realloc ( data , 1 * sizeof ( long ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, long *> dataMap) long * data = dataMap [ 2 ] ; data [ 0 ] = 5L; free ( data ); 