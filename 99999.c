static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; CWE134_Uncontrolled_Format_String__char_console_vfprintf_53b_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_console_vfprintf_53b_goodB2GSink(char * data) CWE134_Uncontrolled_Format_String__char_console_vfprintf_53c_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_console_vfprintf_53c_goodB2GSink(char * data) CWE134_Uncontrolled_Format_String__char_console_vfprintf_53d_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_console_vfprintf_53d_goodB2GSink(char * data) goodB2GVaSink ( data , data ); static void goodB2GVaSink(char * data, ...) va_start ( args , data ); 