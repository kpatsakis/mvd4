void bad() char * data ; char * & dataRef = data ; char dataBuffer [ 256 ] = "" ; data = dataBuffer; WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; size_t dataLen = strlen ( data ) ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( TCP_PORT ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  if ( listen ( listenSocket , LISTEN_BACKLOG ) == SOCKET_ERROR )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 256 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; while ( 0 )  char * data = dataRef ; char filter [ 256 ] ; _snprintf ( filter , 256 - 1 , "(cn=%s)" , data ); searchSuccess = ldap_search_ext_sA ( pLdapConnection , "base" , LDAP_SCOPE_SUBTREE , filter , NULL , 0 , NULL , NULL , LDAP_NO_LIMIT , LDAP_NO_LIMIT , & pMessage ); if ( searchSuccess != LDAP_SUCCESS )  