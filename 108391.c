static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; dataVector . insert ( dataVector . end ( ) , 1 , data ); dataVector . insert ( dataVector . end ( ) , 1 , data ); dataVector . insert ( dataVector . end ( ) , 1 , data ); 