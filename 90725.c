void CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_63_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_63b_badSink ( & data ); void CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_63b_badSink(char * * dataPtr) char * data = * dataPtr ; badVaSink ( data , data ); static void badVaSink(char * data, ...) va_start ( args , data ); vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 