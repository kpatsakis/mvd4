void CWE134_Uncontrolled_Format_String__char_console_printf_52_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; CWE134_Uncontrolled_Format_String__char_console_printf_52b_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_console_printf_52b_badSink(char * data) CWE134_Uncontrolled_Format_String__char_console_printf_52c_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_console_printf_52c_badSink(char * data) printf ( data ); 