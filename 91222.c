void bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; baseObject -> action ( data ); void CWE134_Uncontrolled_Format_String__char_listen_socket_vprintf_82_bad::action(char * data) badVaSink ( data , data ); static void badVaSink(char * data, ...) va_start ( args , data ); vprintf ( data , args ); 