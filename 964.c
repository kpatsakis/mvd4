static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wcscpy ( data , L "C:\\Windows\\System32\\winsrv.dll" CWE114_Process_Control__w32_wchar_t_connect_socket_82_base * baseObject = new CWE114_Process_Control__w32_wchar_t_connect_socket_82_goodG2B baseObject -> action ( data ); void CWE114_Process_Control__w32_wchar_t_connect_socket_82_goodG2B::action(wchar_t * data) HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 