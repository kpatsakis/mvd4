void CWE134_Uncontrolled_Format_String__wchar_t_environment_vprintf_32_bad() wchar_t * data ; wchar_t * * dataPtr1 = & data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wchar_t * data = * dataPtr1 ; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); * dataPtr1 = data; badVaSink ( data , data ); static void badVaSink(wchar_t * data, ...) va_start ( args , data ); vwprintf ( data , args ); 