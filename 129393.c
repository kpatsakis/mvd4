void CWE134_Uncontrolled_Format_String__wchar_t_environment_w32_vsnprintf_12_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); wcscpy ( data , L "fixedstringtest" ) badVaSinkB ( data , data ); static void badVaSinkB(wchar_t * data, ...) va_start ( args , data ); _vsnwprintf ( dest , 100 - 1 , data , args ); badVaSinkG ( data , data ); static void badVaSinkG(wchar_t * data, ...) va_start ( args , data ); 