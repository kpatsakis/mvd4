static void goodB2G1() char * data ; data = NULL; data = ( char * ) malloc ( 20 * sizeof ( char ) ); if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; if ( data != NULL )  strcpy ( data , "Initialize" ); free ( data ); 