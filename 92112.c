void bad() wchar_t * data ; wchar_t * & dataRef = data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wcscpy ( data , L "winsrv.dll" ) wchar_t * data = dataRef ; HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 