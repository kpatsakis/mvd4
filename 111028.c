static void goodB2G2() wchar_t * password ; wchar_t passwordBuffer [ 100 ] = L "" password = passwordBuffer; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; size_t passwordLen = wcslen ( password ) ; recvResult = recv ( connectSocket , ( char * ) ( password + passwordLen ) , ( 100 - passwordLen - 1 ) * sizeof ( wchar_t ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  