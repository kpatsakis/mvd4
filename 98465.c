void bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "winsrv.dll" ); baseObject -> action ( data ); void CWE114_Process_Control__w32_char_relativePath_82_bad::action(char * data) hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 