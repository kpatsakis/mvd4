void CWE244_Heap_Inspection__w32_wchar_t_free_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; wchar_t * password = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; if ( fgetws ( password , 100 , stdin ) == NULL )  passwordLen = wcslen ( password ); if ( passwordLen > 0 )  if ( LogonUserW ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & hUser ) != 0 )  free ( password ); 