void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_12_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); for (  * data != L '\0' data ++ ) if ( * data == SEARCH_CHAR )  free ( data ); for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 