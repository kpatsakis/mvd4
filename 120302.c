void bad() wchar_t * data ; wchar_t dataBuffer [ 256 ] = L "" data = dataBuffer; badSource ( data ); void badSource(wchar_t * &data) size_t dataLen = wcslen ( data ) ; if ( 256 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 256 - dataLen ) , stdin ) != NULL )  dataLen = wcslen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == L '\n' ) 