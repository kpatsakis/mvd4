static void goodB2G1() TwoIntsClass * data ; data = NULL; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( TwoIntsClass * ) calloc ( 100 , sizeof ( TwoIntsClass ) ); if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; free ( data ); 