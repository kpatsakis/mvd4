void CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_22_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = L '\0' CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_22_badVaSink ( data , data ); void CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_22_badVaSink(wchar_t * data, ...) if ( CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_22_badGlobal )  wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 