static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); baseObject -> action ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_82_goodB2G::action(char * data) for (i=0; i < strlen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 