void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_42_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data = badSource ( data ); static wchar_t * badSource(wchar_t * data) size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = wcslen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == L '\n' ) data [ dataLen - 1 ] = L '\0' data [ dataLen ] = L '\0' return data ; for (  * data != L '\0' data ++ ) if ( * data == SEARCH_CHAR )  free ( data ); 