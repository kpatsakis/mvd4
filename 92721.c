static void goodB2G1() long * data ; data = NULL; data = ( long * ) calloc ( 1 , sizeof ( long ) ); goodB2G1Sink ( data ); static void goodB2G1Sink(long * data) if ( goodB2G1Static )  if ( data != NULL )  data [ 0 ] = 5L; free ( data ); 