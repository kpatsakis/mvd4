void CWE78_OS_Command_Injection__char_file_w32_spawnlp_22_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = CWE78_OS_Command_Injection__char_file_w32_spawnlp_22_badSource ( data ); char * CWE78_OS_Command_Injection__char_file_w32_spawnlp_22_badSource(char * data) if ( CWE78_OS_Command_Injection__char_file_w32_spawnlp_22_badGlobal )  size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; return data ; 