void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; CWE36_Absolute_Path_Traversal__char_environment_ofstream_84_bad * badObject = new CWE36_Absolute_Path_Traversal__char_environment_ofstream_84_bad ( data ) ; CWE36_Absolute_Path_Traversal__char_environment_ofstream_84_bad::CWE36_Absolute_Path_Traversal__char_environment_ofstream_84_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); 