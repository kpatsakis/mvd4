void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char data [ 100 ] = "" ; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) data + dataLen , ( int ) ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ recvResult ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 