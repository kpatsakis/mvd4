void CWE758_Undefined_Behavior__struct_pointer_malloc_use_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; twoIntsStruct * * pointer = ( twoIntsStruct * * ) malloc ( sizeof ( twoIntsStruct * ) ) ; * pointer = data; twoIntsStruct * data = * pointer ; printIntLine ( data -> intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); printIntLine ( data -> intTwo ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( pointer ); 