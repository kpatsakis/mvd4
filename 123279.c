static void goodG2B1() int64_t * data ; data = NULL; data = goodG2B1Source ( data ); static int64_t * goodG2B1Source(int64_t * data) if ( goodG2B1Static )  data = ( int64_t * ) malloc ( sizeof ( * data ) ); * data = 2147483643L L return data ; free ( data ); 