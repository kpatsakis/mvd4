void bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_file_84_bad * badObject = new CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_file_84_bad ( data ) ; CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_file_84_bad::CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_file_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  printLine ( "fgetws() failed" ); data [ dataLen ] = L '\0' fclose ( pFile ); delete badObject CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_file_84_bad::~CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_file_84_bad() free ( data ); 