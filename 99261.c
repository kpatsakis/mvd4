static void goodB2G() int data ; data = - 1; CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_84_goodB2G * goodB2GObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_84_goodB2G ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_84_goodB2G::CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_84_goodB2G(int dataCopy) data = dataCopy; WSADATA wsaData ; int wsaDataInit = 0 ; int recvResult ; struct sockaddr_in service ; SOCKET connectSocket = INVALID_SOCKET ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  break ; wsaDataInit = 1; connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  break ; memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  break ; recvResult = recv ( connectSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  break ; inputBuffer [ recvResult ] = '\0'; data = atoi ( inputBuffer ); while ( 0 )  if ( connectSocket != INVALID_SOCKET )  CLOSE_SOCKET ( connectSocket ); if ( wsaDataInit )  WSACleanup ( ); delete goodB2GObject CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_84_goodB2G::~CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_84_goodB2G() int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; buffer [ i ] = 0; buffer [ data ] = 1; for(i = 0; i < 10; i++) printIntLine ( buffer [ i ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( buffer ); 