void CWE78_OS_Command_Injection__wchar_t_connect_socket_system_22_bad() wchar_t * data ; wchar_t data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; data = CWE78_OS_Command_Injection__wchar_t_connect_socket_system_22_badSource ( data ); wchar_t * CWE78_OS_Command_Injection__wchar_t_connect_socket_system_22_badSource(wchar_t * data) if ( CWE78_OS_Command_Injection__wchar_t_connect_socket_system_22_badGlobal )  size_t dataLen = wcslen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  