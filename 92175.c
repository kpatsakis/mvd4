static void goodG2B() wchar_t * data ; CWE114_Process_Control__w32_wchar_t_listen_socket_34_unionType myUnion ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wcscpy ( data , L "C:\\Windows\\System32\\winsrv.dll" ) myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 