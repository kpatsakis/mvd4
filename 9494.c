void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_42_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data = badSource ( data ); static wchar_t * badSource(wchar_t * data) size_t dataLen = wcslen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( wchar_t ) ] = L '\0' replace = wcschr ( data , L '\r' ) if ( replace )  replace = wcschr ( data , L '\n' ) if ( replace )  return data ; for (  * data != L '\0' data ++ ) if ( * data == SEARCH_CHAR )  free ( data ); 