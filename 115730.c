static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; data = CWE114_Process_Control__w32_wchar_t_relativePath_61b_goodG2BSource ( data ); wchar_t * CWE114_Process_Control__w32_wchar_t_relativePath_61b_goodG2BSource(wchar_t * data) wcscpy ( data , L "C:\\Windows\\System32\\winsrv.dll" ) return data ; HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 