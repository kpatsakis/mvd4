static void goodB2G() wchar_t * data ; CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_67_structType myStruct ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen - 1 ] = L '\0' data [ dataLen ] = L '\0' myStruct . structFirst = data; CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_67b_goodB2GSink ( myStruct ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_67b_goodB2GSink(CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_67_structType myStruct) wchar_t * data = myStruct . structFirst ; size_t i ; for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  