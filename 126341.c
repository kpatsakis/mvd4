static void goodB2G() int k ; twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 1 * sizeof ( twoIntsStruct ) ); for(k = 0; k < 1; k++) if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 