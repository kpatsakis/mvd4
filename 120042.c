static void goodG2B2() int * data ; data = NULL; data = goodG2B2Source ( data ); static int * goodG2B2Source(int * data) if ( goodG2B2Static )  data = ( int * ) malloc ( 10 * sizeof ( int ) ); return data ; int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); free ( data ); 