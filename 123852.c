static void goodB2G() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = wcslen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == L '\n' ) wchar_t * dataCopy = data ; wchar_t * data = dataCopy ; for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 