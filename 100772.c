void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_06_bad() twoIntsStruct * data ; data = NULL; if ( STATIC_CONST_FIVE == 5 )  twoIntsStruct * dataBuffer = ( twoIntsStruct * ) ALLOCA ( 100 * sizeof ( twoIntsStruct ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] . intOne = 1; dataBuffer [ i ] . intTwo = 1; data = dataBuffer; free ( data ); 