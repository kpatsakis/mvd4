static void goodB2G() TwoIntsClass * data ; TwoIntsClass * dataArray [ 5 ] ; data = NULL; data = NULL; data = ( TwoIntsClass * ) realloc ( data , 100 * sizeof ( TwoIntsClass ) ); dataArray [ 2 ] = data; goodB2GSink ( dataArray ); void goodB2GSink(TwoIntsClass * dataArray[]) TwoIntsClass * data = dataArray [ 2 ] ; free ( data ); 