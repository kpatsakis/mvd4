void CWE78_OS_Command_Injection__char_file_system_22_bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; data = CWE78_OS_Command_Injection__char_file_system_22_badSource ( data ); char * CWE78_OS_Command_Injection__char_file_system_22_badSource(char * data) if ( CWE78_OS_Command_Injection__char_file_system_22_badGlobal )  size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; return data ; 