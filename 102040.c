void CWE590_Free_Memory_Not_on_Heap__free_long_alloca_08_bad() long * data ; data = NULL; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; long * dataBuffer = ( long * ) ALLOCA ( 100 * sizeof ( long ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L; data = dataBuffer; free ( data ); 