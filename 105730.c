void CWE114_Process_Control__w32_char_environment_61_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = CWE114_Process_Control__w32_char_environment_61b_badSource ( data ); char * CWE114_Process_Control__w32_char_environment_61b_badSource(char * data) size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); return data ; 