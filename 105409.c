static void goodB2G() long * data ; data = ( long * ) calloc ( 100 , sizeof ( long ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, long *> dataMap) long * data = dataMap [ 2 ] ; free ( data ); 