void bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; badSource ( data ); void badSource(char * &data) size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); for (; *data != '\0'; data++) if ( * data == SEARCH_CHAR )  free ( data ); 