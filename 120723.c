static void goodG2B() char * cryptoKey ; char cryptoKeyBuffer [ 100 ] = "" ; cryptoKey = cryptoKeyBuffer; size_t cryptoKeyLen = strlen ( cryptoKey ) ; if ( 100 - cryptoKeyLen > 1 )  if ( fgets ( cryptoKey + cryptoKeyLen , ( int ) ( 100 - cryptoKeyLen ) , stdin ) == NULL )  cryptoKey [ cryptoKeyLen ] = '\0'; cryptoKeyLen = strlen ( cryptoKey ); if ( cryptoKeyLen > 0 )  cryptoKey [ cryptoKeyLen - 1 ] = '\0'; myStruct . structFirst = cryptoKey; CWE321_Hard_Coded_Cryptographic_Key__w32_char_67b_goodG2BSink ( myStruct ); void CWE321_Hard_Coded_Cryptographic_Key__w32_char_67b_goodG2BSink(CWE321_Hard_Coded_Cryptographic_Key__w32_char_67_structType myStruct) char * cryptoKey = myStruct . structFirst ; if ( ! CryptHashData ( hHash , ( BYTE * ) cryptoKey , strlen ( cryptoKey ) * sizeof ( char ) , 0 ) )  