void CWE78_OS_Command_Injection__char_file_system_66_bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; dataArray [ 2 ] = data; CWE78_OS_Command_Injection__char_file_system_66b_badSink ( dataArray ); void CWE78_OS_Command_Injection__char_file_system_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; if ( SYSTEM ( data ) <= 0 )  