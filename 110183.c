void CWE134_Uncontrolled_Format_String__char_environment_vprintf_67_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); myStruct . structFirst = data; CWE134_Uncontrolled_Format_String__char_environment_vprintf_67b_badSink ( myStruct ); void CWE134_Uncontrolled_Format_String__char_environment_vprintf_67b_badSink(CWE134_Uncontrolled_Format_String__char_environment_vprintf_67_structType myStruct) char * data = myStruct . structFirst ; badVaSink ( data , data ); static void badVaSink(char * data, ...) va_start ( args , data ); vprintf ( data , args ); 