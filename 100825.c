void CWE134_Uncontrolled_Format_String__wchar_t_console_fprintf_64_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen - 1 ] = L '\0' data [ dataLen ] = L '\0' CWE134_Uncontrolled_Format_String__wchar_t_console_fprintf_64b_badSink ( & data ); void CWE134_Uncontrolled_Format_String__wchar_t_console_fprintf_64b_badSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; fwprintf ( stdout , data ); 