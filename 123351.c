static void goodG2B() wchar_t * cryptoKey ; wchar_t cryptoKeyBuffer [ 100 ] = L "" cryptoKey = cryptoKeyBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; size_t cryptoKeyLen = wcslen ( cryptoKey ) ; if ( 100 - cryptoKeyLen > 1 )  if ( fgetws ( cryptoKey + cryptoKeyLen , ( int ) ( 100 - cryptoKeyLen ) , stdin ) == NULL )  cryptoKey [ cryptoKeyLen ] = L '\0' cryptoKeyLen = wcslen ( cryptoKey ); if ( cryptoKeyLen > 0 )  if ( 100 - cryptoKeyLen > 1 )  if ( fgetws ( cryptoKey + cryptoKeyLen , ( int ) ( 100 - cryptoKeyLen ) , stdin ) == NULL )  if ( cryptoKeyLen > 0 )  