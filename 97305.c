static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; CWE134_Uncontrolled_Format_String__char_listen_socket_vprintf_52b_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_listen_socket_vprintf_52b_goodB2GSink(char * data) CWE134_Uncontrolled_Format_String__char_listen_socket_vprintf_52c_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_listen_socket_vprintf_52c_goodB2GSink(char * data) goodB2GVaSink ( data , data ); static void goodB2GVaSink(char * data, ...) va_start ( args , data ); 