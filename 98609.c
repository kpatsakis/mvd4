static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_52b_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_52b_goodB2GSink(char * data) CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_52c_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_52c_goodB2GSink(char * data) goodB2GVaSink ( data , data ); static void goodB2GVaSink(char * data, ...) va_start ( args , data ); 