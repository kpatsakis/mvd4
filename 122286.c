static void goodB2G() int i , k ; twoIntsStruct * data ; data = NULL; for(i = 0; i < 1; i++) data = ( twoIntsStruct * ) realloc ( data , 100 * sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; for(k = 0; k < 1; k++) free ( data ); 