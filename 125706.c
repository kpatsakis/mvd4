void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_06_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); for (; *data != '\0'; data++) if ( * data == SEARCH_CHAR )  free ( data ); 