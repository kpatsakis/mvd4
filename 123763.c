static void goodG2B() int * data ; int * dataArray [ 5 ] ; data = NULL; data = ( int * ) malloc ( 100 * sizeof ( int ) ); dataArray [ 2 ] = data; goodG2BSink ( dataArray ); void goodG2BSink(int * dataArray[]) int * data = dataArray [ 2 ] ; free ( data ); 