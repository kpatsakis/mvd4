static void goodB2G() twoIntsStruct * data ; twoIntsStruct * & dataRef = data ; data = NULL; data = ( twoIntsStruct * ) malloc ( 1 * sizeof ( twoIntsStruct ) ); twoIntsStruct * data = dataRef ; if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 