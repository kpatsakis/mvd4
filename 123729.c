static void goodB2G() int * data ; data = NULL; data = NULL; data = ( int * ) realloc ( data , 100 * sizeof ( int ) ); dataArray [ 2 ] = data; goodB2GSink ( dataArray ); void goodB2GSink(int * dataArray[]) int * data = dataArray [ 2 ] ; free ( data ); 