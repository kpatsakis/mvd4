void CWE758_Undefined_Behavior__struct_pointer_malloc_use_09_bad() if ( GLOBAL_CONST_TRUE )  twoIntsStruct * * pointer = ( twoIntsStruct * * ) malloc ( sizeof ( twoIntsStruct * ) ) ; twoIntsStruct * data = * pointer ; free ( pointer ); printIntLine ( data -> intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); printIntLine ( data -> intTwo ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 