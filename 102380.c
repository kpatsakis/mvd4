static void good1() if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; twoIntsStruct data ; twoIntsStruct * pointer = ( twoIntsStruct * ) malloc ( sizeof ( twoIntsStruct ) ) ; data . intOne = 1; data . intTwo = 2; * pointer = data; free ( pointer ); 