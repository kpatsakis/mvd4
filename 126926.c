void CWE605_Multiple_Binds_Same_Port__basic_13_bad() if ( GLOBAL_CONST_FIVE == 5 )  char data [ 100 ] = "" ; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , data + dataLen , ( int ) ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ recvResult ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 