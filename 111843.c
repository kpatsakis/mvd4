void bad() char * data ; char dataBuffer [ 256 ] = "" ; data = dataBuffer; CWE90_LDAP_Injection__w32_char_connect_socket_84_bad * badObject = new CWE90_LDAP_Injection__w32_char_connect_socket_84_bad ( data ) ; CWE90_LDAP_Injection__w32_char_connect_socket_84_bad::CWE90_LDAP_Injection__w32_char_connect_socket_84_bad(char * dataCopy) data = dataCopy; WSADATA wsaData ; int wsaDataInit = 0 ; int recvResult ; struct sockaddr_in service ; char * replace ; SOCKET connectSocket = INVALID_SOCKET ; size_t dataLen = strlen ( data ) ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  break ; wsaDataInit = 1; connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  break ; memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  break ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 256 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  break ; data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; while ( 0 )  if ( connectSocket != INVALID_SOCKET )  CLOSE_SOCKET ( connectSocket ); if ( wsaDataInit )  WSACleanup ( ); delete badObject CWE90_LDAP_Injection__w32_char_connect_socket_84_bad::~CWE90_LDAP_Injection__w32_char_connect_socket_84_bad() char filter [ 256 ] ; _snprintf ( filter , 256 - 1 , "(cn=%s)" , data ); searchSuccess = ldap_search_ext_sA ( pLdapConnection , "base" , LDAP_SCOPE_SUBTREE , filter , NULL , 0 , NULL , NULL , LDAP_NO_LIMIT , LDAP_NO_LIMIT , & pMessage ); if ( searchSuccess != LDAP_SUCCESS )  