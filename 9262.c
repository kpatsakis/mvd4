static void goodG2B1() twoIntsStruct * data ; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); memcpy ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 