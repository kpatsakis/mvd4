void CWE114_Process_Control__w32_char_relativePath_06_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( STATIC_CONST_FIVE == 5 )  strcpy ( data , "winsrv.dll" ); HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 