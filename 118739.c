void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_41_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen ] = '\0'; badSink ( data ); static void badSink(char * data) for (; *data != '\0'; data++) if ( * data == SEARCH_CHAR )  free ( data ); 