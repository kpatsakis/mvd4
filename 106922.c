static void goodB2G2() long * data ; data = NULL; data = ( long * ) calloc ( 1 , sizeof ( long ) ); if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; if ( data != NULL )  data [ 0 ] = 5L; free ( data ); 