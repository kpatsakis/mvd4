void CWE78_OS_Command_Injection__char_console_w32_spawnlp_32_bad() char * data ; char * * dataPtr1 = & data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; char * data = * dataPtr1 ; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; 