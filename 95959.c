static void goodB2G1() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); size_t dataLen = wcslen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  replace = wcschr ( data , L '\r' ) if ( replace )  replace = wcschr ( data , L '\n' ) if ( replace )  CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_connect_socket_22_goodB2G1Sink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_connect_socket_22_goodB2G1Sink(wchar_t * data) for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 