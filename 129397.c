static void good2() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; int * goodInt = NULL ; goodInt = ( int * ) malloc ( sizeof ( * goodInt ) ); * goodInt = 6; printIntLine ( * goodInt ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( goodInt ); 