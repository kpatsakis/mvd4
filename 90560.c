void CWE534_Info_Exposure_Debug_Log__w32_char_18_bad() char password [ 100 ] = "" ; if ( fgets ( password , 100 , stdin ) == NULL )  password [ 0 ] = '\0'; passwordLen = strlen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = '\0'; if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  fprintf ( pFile , "User attempted access with password: %s\n" , password ); if ( pFile )  fclose ( pFile ); 