static void goodB2G() char * password ; char passwordBuffer [ 100 ] = "" ; password = passwordBuffer; size_t passwordLen = strlen ( password ) ; recvResult = recv ( connectSocket , ( char * ) ( password + passwordLen ) , ( 100 - passwordLen - 1 ) * sizeof ( char ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  password [ passwordLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( password , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( password , '\n' ); if ( replace )  * replace = '\0'; baseObject -> action ( password ); void CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_82_goodB2G::action(char * password) payloadBytes = decodeHexChars ( payload , sizeof ( payload ) , password ); size_t decodeHexChars(unsigned char * bytes, size_t numBytes, const char * hex) while ( numWritten < numBytes && isxdigit ( hex [ 2 * numWritten ] ) && isxdigit ( hex [ 2 * numWritten + 1 ] ) )  sscanf ( & hex [ 2 * numWritten ] , "%02x" , & byte ); bytes [ numWritten ] = ( unsigned char ) byte; return numWritten ; SecureZeroMemory ( password , 100 * sizeof ( char ) ); memcpy ( password , payload , payloadBytes ); password [ payloadBytes / sizeof ( char ) ] = '\0'; if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  