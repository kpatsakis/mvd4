void CWE534_Info_Exposure_Debug_Log__w32_char_04_bad() if ( STATIC_CONST_TRUE )  char password [ 100 ] = "" ; FILE * pFile = fopen ( "debug.txt" , "a+" ) ; if ( fgets ( password , 100 , stdin ) == NULL )  password [ 0 ] = '\0'; passwordLen = strlen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = '\0'; fprintf ( pFile , "User attempted access with password: %s\n" , password ); if ( pFile )  fclose ( pFile ); 