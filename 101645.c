void bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; CWE78_OS_Command_Injection__char_console_popen_84_bad * badObject = new CWE78_OS_Command_Injection__char_console_popen_84_bad ( data ) ; CWE78_OS_Command_Injection__char_console_popen_84_bad::CWE78_OS_Command_Injection__char_console_popen_84_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; 