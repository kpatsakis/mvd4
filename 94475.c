void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_connect_socket_67_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t dataLen = strlen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; myStruct . structFirst = data; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_connect_socket_67b_badSink ( myStruct ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_connect_socket_67b_badSink(CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_connect_socket_67_structType myStruct) char * data = myStruct . structFirst ; for (; *data != '\0'; data++) if ( * data == SEARCH_CHAR )  free ( data ); 