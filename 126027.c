static void goodB2G2() int * data ; data = NULL; data = ( int * ) realloc ( data , 1 * sizeof ( int ) ); if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; if ( data != NULL )  data [ 0 ] = 5; free ( data ); 