static void goodB2G() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); dataArray [ 2 ] = data; CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_66b_goodB2GSink ( dataArray ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_66b_goodB2GSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; goodB2GVaSink ( data , data ); static void goodB2GVaSink(wchar_t * data, ...) va_start ( args , data ); 