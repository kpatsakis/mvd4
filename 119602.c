static void goodB2G() char * password ; char passwordBuffer [ 100 ] = "" ; password = passwordBuffer; CWE319_Cleartext_Tx_Sensitive_Info__w32_char_listen_socket_84_goodB2G * goodB2GObject = new CWE319_Cleartext_Tx_Sensitive_Info__w32_char_listen_socket_84_goodB2G ( password ) ; CWE319_Cleartext_Tx_Sensitive_Info__w32_char_listen_socket_84_goodB2G::CWE319_Cleartext_Tx_Sensitive_Info__w32_char_listen_socket_84_goodB2G(char * passwordCopy) password = passwordCopy; size_t passwordLen = strlen ( password ) ; recvResult = recv ( acceptSocket , ( char * ) ( password + passwordLen ) , ( 100 - passwordLen - 1 ) * sizeof ( char ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  password [ passwordLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( password , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( password , '\n' ); if ( replace )  * replace = '\0'; 