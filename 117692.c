static void goodG2B2() twoIntsStruct * data ; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( twoIntsStruct * ) malloc ( sizeof ( twoIntsStruct ) ); data -> intOne = 5; data -> intTwo = 6; printIntLine ( data -> intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); printIntLine ( data -> intTwo ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 