void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_41_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = wcslen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == L '\n' ) badSink ( data ); static void badSink(wchar_t * data) for (  * data != L '\0' data ++ ) if ( * data == SEARCH_CHAR )  free ( data ); 