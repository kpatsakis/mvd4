static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); CWE114_Process_Control__w32_char_relativePath_63b_goodG2BSink ( & data ); void CWE114_Process_Control__w32_char_relativePath_63b_goodG2BSink(char * * dataPtr) char * data = * dataPtr ; HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 