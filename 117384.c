void CWE114_Process_Control__w32_wchar_t_relativePath_66_bad() wchar_t * data ; wchar_t * dataArray [ 5 ] ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wcscpy ( data , L "winsrv.dll" ) dataArray [ 2 ] = data; CWE114_Process_Control__w32_wchar_t_relativePath_66b_badSink ( dataArray ); void CWE114_Process_Control__w32_wchar_t_relativePath_66b_badSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 