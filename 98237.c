void bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE114_Process_Control__w32_wchar_t_file_84_bad * badObject = new CWE114_Process_Control__w32_wchar_t_file_84_bad ( data ) ; CWE114_Process_Control__w32_wchar_t_file_84_bad::CWE114_Process_Control__w32_wchar_t_file_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  printLine ( "fgetws() failed" ); data [ dataLen ] = L '\0' fclose ( pFile ); delete badObject CWE114_Process_Control__w32_wchar_t_file_84_bad::~CWE114_Process_Control__w32_wchar_t_file_84_bad() HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 