void CWE427_Uncontrolled_Search_Path_Element__char_environment_11_bad() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 250 - dataLen - 1 ); PUTENV ( data ); 