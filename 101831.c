void CWE222_Truncation_of_Security_Relevant_Information__w32_04_bad() if ( STATIC_CONST_TRUE )  WSADATA wsaData ; struct sockaddr_in service ; char username [ USERNAME_SIZE + 1 ] ; char truncatedUsername [ TRUNCATED_USERNAME_SIZE + 1 ] ; if ( 0 != WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) )  listenSocket = socket ( PF_INET , SOCK_STREAM , 0 ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( LISTEN_PORT ); if ( SOCKET_ERROR == bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) )  if ( SOCKET_ERROR == listen ( listenSocket , LISTEN_BACKLOG ) )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == INVALID_SOCKET )  if ( sizeof ( username ) - sizeof ( char ) != recv ( acceptSocket , username , sizeof ( username ) - sizeof ( char ) , 0 ) )  username [ USERNAME_SIZE ] = '\0'; memcpy ( truncatedUsername , username , sizeof ( truncatedUsername ) ); truncatedUsername [ TRUNCATED_USERNAME_SIZE ] = '\0'; if ( LogonUserA ( truncatedUsername , DOMAIN , PASSWORD , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  while ( 0 )  