void CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_34_bad() wchar_t * cryptoKey ; CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_34_unionType myUnion ; wchar_t cryptoKeyBuffer [ 100 ] = L "" cryptoKey = cryptoKeyBuffer; wcscpy ( cryptoKey , CRYPTO_KEY ); myUnion . unionFirst = cryptoKey; wchar_t * cryptoKey = myUnion . unionSecond ; HCRYPTHASH hHash ; if ( ! CryptHashData ( hHash , ( BYTE * ) cryptoKey , wcslen ( cryptoKey ) * sizeof ( wchar_t ) , 0 ) )  