static void goodB2G2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__char_environment_vfprintf_22_goodB2G2_vasink ( data , data ); void CWE134_Uncontrolled_Format_String__char_environment_vfprintf_22_goodB2G2_vasink(char * data, ...) va_start ( args , data ); 