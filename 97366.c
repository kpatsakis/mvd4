static void goodG2B() char * password ; char passwordBuffer [ 100 ] = "" ; password = passwordBuffer; strcpy ( password , "Password1234!" ); passwordArray [ 2 ] = password; CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_66b_goodG2BSink ( passwordArray ); void CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_66b_goodG2BSink(char * passwordArray[]) char * password = passwordArray [ 2 ] ; if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  