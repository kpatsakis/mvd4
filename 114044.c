static void goodB2G() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__new_wchar_t_connect_socket_84_goodB2G * goodB2GObject = new CWE789_Uncontrolled_Mem_Alloc__new_wchar_t_connect_socket_84_goodB2G ( data ) ; CWE789_Uncontrolled_Mem_Alloc__new_wchar_t_connect_socket_84_goodB2G::CWE789_Uncontrolled_Mem_Alloc__new_wchar_t_connect_socket_84_goodB2G(size_t dataCopy) WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  recvResult = recv ( connectSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  inputBuffer [ recvResult ] = '\0'; data = strtoul ( inputBuffer , NULL , 0 ); while ( 0 )  