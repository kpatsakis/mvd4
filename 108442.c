static void goodB2G2() int data ; data = - 1; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 && data < ( 10 ) )  buffer [ data ] = 1; free ( buffer ); 