void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; CWE23_Relative_Path_Traversal__char_connect_socket_open_84_bad * badObject = new CWE23_Relative_Path_Traversal__char_connect_socket_open_84_bad ( data ) ; CWE23_Relative_Path_Traversal__char_connect_socket_open_84_bad::CWE23_Relative_Path_Traversal__char_connect_socket_open_84_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( FILENAME_MAX - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; 