static void goodB2G() char * data ; map < int , char * > dataMap ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; strcpy ( data , BAD_SOURCE_FIXED_STRING ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, char *> dataMap) char * data = dataMap [ 2 ] ; free ( data ); 