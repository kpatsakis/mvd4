static void goodG2B2() char * data ; data = new char [ 100 ]; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 