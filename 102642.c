static void goodG2B1() wchar_t * cryptoKey ; wchar_t cryptoKeyBuffer [ 100 ] = L "" cryptoKey = cryptoKeyBuffer; if ( globalFalse )  size_t cryptoKeyLen = wcslen ( cryptoKey ) ; if ( 100 - cryptoKeyLen > 1 )  if ( fgetws ( cryptoKey + cryptoKeyLen , ( int ) ( 100 - cryptoKeyLen ) , stdin ) == NULL )  cryptoKey [ cryptoKeyLen ] = L '\0' cryptoKeyLen = wcslen ( cryptoKey ); if ( cryptoKeyLen > 0 )  