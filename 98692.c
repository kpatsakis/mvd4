void CWE534_Info_Exposure_Debug_Log__w32_char_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char password [ 100 ] = "" ; FILE * pFile = fopen ( "debug.txt" , "a+" ) ; if ( fgets ( password , 100 , stdin ) == NULL )  password [ 0 ] = '\0'; passwordLen = strlen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = '\0'; fprintf ( pFile , "User attempted access with password: %s\n" , password ); if ( pFile )  fclose ( pFile ); 