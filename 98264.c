void CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_12_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); wcscpy ( data , L "fixedstringtest" ) fwprintf ( stdout , data ); fwprintf ( stdout , L "%s\n" , data ) 