void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( FILENAME_MAX - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; baseObject -> action ( data ); void CWE23_Relative_Path_Traversal__char_listen_socket_ofstream_82_bad::action(char * data) outputFile . open ( ( char * ) data ); 