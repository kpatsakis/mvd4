static void goodG2B1() int data ; data = - 1; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; data = 100 - 1; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 