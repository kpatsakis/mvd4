static void goodB2G() WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( TCP_PORT ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  if ( listen ( listenSocket , LISTEN_BACKLOG ) == SOCKET_ERROR )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  recvResult = recv ( acceptSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  inputBuffer [ recvResult ] = '\0'; count = atoi ( inputBuffer ); while ( 0 )  if ( listenSocket != INVALID_SOCKET )  CLOSE_SOCKET ( listenSocket ); if ( acceptSocket != INVALID_SOCKET )  CLOSE_SOCKET ( acceptSocket ); CWE400_Resource_Exhaustion__listen_socket_sleep_54b_goodB2GSink ( count ); void CWE400_Resource_Exhaustion__listen_socket_sleep_54b_goodB2GSink(int count) CWE400_Resource_Exhaustion__listen_socket_sleep_54c_goodB2GSink ( count ); void CWE400_Resource_Exhaustion__listen_socket_sleep_54c_goodB2GSink(int count) CWE400_Resource_Exhaustion__listen_socket_sleep_54d_goodB2GSink ( count ); void CWE400_Resource_Exhaustion__listen_socket_sleep_54d_goodB2GSink(int count) CWE400_Resource_Exhaustion__listen_socket_sleep_54e_goodB2GSink ( count ); void CWE400_Resource_Exhaustion__listen_socket_sleep_54e_goodB2GSink(int count) if ( count > 0 && count <= 2000 )  SLEEP ( count ); 