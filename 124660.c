static void good1() switch ( 5 )  wchar_t * password = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; if ( fgetws ( password , 100 , stdin ) == NULL )  passwordLen = wcslen ( password ); if ( passwordLen > 0 )  if ( LogonUserW ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & hUser ) != 0 )  SecureZeroMemory ( password , 100 * sizeof ( wchar_t ) ); password = realloc ( password , 200 * sizeof ( wchar_t ) ); wcscpy ( password , L "Nothing to see here" ) printWLine ( password ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( password ); 