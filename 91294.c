void CWE78_OS_Command_Injection__wchar_t_console_w32_spawnlp_61_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; data = CWE78_OS_Command_Injection__wchar_t_console_w32_spawnlp_61b_badSource ( data ); wchar_t * CWE78_OS_Command_Injection__wchar_t_console_w32_spawnlp_61b_badSource(wchar_t * data) size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = wcslen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == L '\n' ) 