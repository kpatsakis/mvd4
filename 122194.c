CWE23_Relative_Path_Traversal__char_listen_socket_w32CreateFile_83_bad::CWE23_Relative_Path_Traversal__char_listen_socket_w32CreateFile_83_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( FILENAME_MAX - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; 