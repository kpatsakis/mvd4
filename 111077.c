static void goodG2B1() if ( globalFalse )  twoIntsStruct * dataBuffer = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ) ; if ( dataBuffer == NULL )  dataBuffer [ i ] . intOne = 1; dataBuffer [ i ] . intTwo = 1; data = dataBuffer; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 