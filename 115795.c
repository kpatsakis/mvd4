void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_67_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; myStruct . structFirst = data; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_67b_badSink ( myStruct ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_67b_badSink(CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_67_structType myStruct) char * data = myStruct . structFirst ; for (; *data != '\0'; data++) if ( * data == SEARCH_CHAR )  free ( data ); 