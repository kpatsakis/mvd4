void bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_fprintf_84_bad * badObject = new CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_fprintf_84_bad ( data ) ; CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_fprintf_84_bad::CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_fprintf_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  