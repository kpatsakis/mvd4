static void goodG2B() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); myUnion . unionFirst = data; twoIntsStruct * data = myUnion . unionSecond ; data [ i ] = source [ i ]; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 