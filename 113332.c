void bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE114_Process_Control__w32_wchar_t_console_84_bad * badObject = new CWE114_Process_Control__w32_wchar_t_console_84_bad ( data ) ; CWE114_Process_Control__w32_wchar_t_console_84_bad::CWE114_Process_Control__w32_wchar_t_console_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = wcslen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == L '\n' ) data [ dataLen - 1 ] = L '\0' printLine ( "fgetws() failed" ); data [ dataLen ] = L '\0' delete badObject CWE114_Process_Control__w32_wchar_t_console_84_bad::~CWE114_Process_Control__w32_wchar_t_console_84_bad() HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 