static void goodG2B1() char * data ; data = NULL; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; free ( data ); 