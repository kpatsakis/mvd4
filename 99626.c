void CWE134_Uncontrolled_Format_String__char_environment_vprintf_09_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( GLOBAL_CONST_TRUE )  size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); badVaSinkB ( data , data ); static void badVaSinkB(char * data, ...) va_start ( args , data ); vprintf ( data , args ); 