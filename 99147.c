static void goodB2G2() struct _twoIntsStruct * data ; if ( staticFive == 5 )  data = ( struct _twoIntsStruct * ) calloc ( 100 , sizeof ( struct _twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( ( twoIntsStruct * ) & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 