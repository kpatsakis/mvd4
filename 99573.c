static void good1() if ( STATIC_CONST_FALSE )  twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( sizeof ( twoIntsStruct ) ); data -> intOne = 5; data -> intTwo = 6; * pointer = data; twoIntsStruct * data = * pointer ; printIntLine ( data -> intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); printIntLine ( data -> intTwo ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 