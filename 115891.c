void CWE78_OS_Command_Injection__char_environment_execl_66_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); dataArray [ 2 ] = data; CWE78_OS_Command_Injection__char_environment_execl_66b_badSink ( dataArray ); void CWE78_OS_Command_Injection__char_environment_execl_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; 