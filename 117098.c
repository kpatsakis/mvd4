void CWE78_OS_Command_Injection__char_environment_popen_42_bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; data = badSource ( data ); static char * badSource(char * data) size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); return data ; 