static void goodB2G() int i , k ; size_t data ; data = 0; for(i = 0; i < 1; i++) char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); for(k = 0; k < 1; k++) char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 