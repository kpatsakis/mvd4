static void goodB2G() int * data ; map < int , int * > dataMap ; data = NULL; data = NULL; data = ( int * ) realloc ( data , 100 * sizeof ( int ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, int *> dataMap) int * data = dataMap [ 2 ] ; free ( data ); 