void CWE427_Uncontrolled_Search_Path_Element__char_environment_34_bad() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 250 - dataLen - 1 ); myUnion . unionFirst = data; char * data = myUnion . unionSecond ; PUTENV ( data ); 