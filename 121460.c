void CWE114_Process_Control__w32_wchar_t_environment_22_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; data = CWE114_Process_Control__w32_wchar_t_environment_22_badSource ( data ); wchar_t * CWE114_Process_Control__w32_wchar_t_environment_22_badSource(wchar_t * data) if ( CWE114_Process_Control__w32_wchar_t_environment_22_badGlobal )  size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); return data ; 