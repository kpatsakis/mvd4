static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); CWE114_Process_Control__w32_char_relativePath_54b_goodG2BSink ( data ); void CWE114_Process_Control__w32_char_relativePath_54b_goodG2BSink(char * data) CWE114_Process_Control__w32_char_relativePath_54c_goodG2BSink ( data ); void CWE114_Process_Control__w32_char_relativePath_54c_goodG2BSink(char * data) CWE114_Process_Control__w32_char_relativePath_54d_goodG2BSink ( data ); void CWE114_Process_Control__w32_char_relativePath_54d_goodG2BSink(char * data) CWE114_Process_Control__w32_char_relativePath_54e_goodG2BSink ( data ); void CWE114_Process_Control__w32_char_relativePath_54e_goodG2BSink(char * data) hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 