void bad() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__new_char_connect_socket_84_bad * badObject = new CWE789_Uncontrolled_Mem_Alloc__new_char_connect_socket_84_bad ( data ) ; CWE789_Uncontrolled_Mem_Alloc__new_char_connect_socket_84_bad::CWE789_Uncontrolled_Mem_Alloc__new_char_connect_socket_84_bad(size_t dataCopy) data = dataCopy; WSADATA wsaData ; int wsaDataInit = 0 ; int recvResult ; struct sockaddr_in service ; SOCKET connectSocket = INVALID_SOCKET ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  break ; wsaDataInit = 1; connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  break ; memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  break ; recvResult = recv ( connectSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  break ; inputBuffer [ recvResult ] = '\0'; data = strtoul ( inputBuffer , NULL , 0 ); while ( 0 )  if ( connectSocket != INVALID_SOCKET )  CLOSE_SOCKET ( connectSocket ); if ( wsaDataInit )  WSACleanup ( ); delete badObject CWE789_Uncontrolled_Mem_Alloc__new_char_connect_socket_84_bad::~CWE789_Uncontrolled_Mem_Alloc__new_char_connect_socket_84_bad() if ( data > strlen ( HELLO_STRING ) )  