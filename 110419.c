void CWE90_LDAP_Injection__w32_wchar_t_environment_42_bad() wchar_t * data ; wchar_t dataBuffer [ 256 ] = L "" data = dataBuffer; data = badSource ( data ); static wchar_t * badSource(wchar_t * data) size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 256 - dataLen - 1 ); return data ; 