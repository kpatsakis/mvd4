void CWE78_OS_Command_Injection__char_file_system_02_bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; if ( 1 )  size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; if ( SYSTEM ( data ) <= 0 )  