void CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_08_bad() wchar_t * cryptoKey ; wchar_t cryptoKeyBuffer [ 100 ] = L "" cryptoKey = cryptoKeyBuffer; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; wcscpy ( cryptoKey , CRYPTO_KEY ); HCRYPTHASH hHash ; if ( ! CryptHashData ( hHash , ( BYTE * ) cryptoKey , wcslen ( cryptoKey ) * sizeof ( wchar_t ) , 0 ) )  