static void goodB2G() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( TCP_PORT ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  if ( listen ( listenSocket , LISTEN_BACKLOG ) == SOCKET_ERROR )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  recvResult = recv ( acceptSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  inputBuffer [ recvResult ] = '\0'; data = atoi ( inputBuffer ); while ( 0 )  if ( data >= 0 && data < ( 10 ) )  buffer [ data ] = 1; printIntLine ( buffer [ i ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] buffer buffer [ i ] = 0; if ( data >= 0 && data < ( 10 ) )  buffer [ data ] = 1; for(i = 0; i < 10; i++) printIntLine ( buffer [ i ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] buffer 