static void goodG2B() char * cryptoKey ; char cryptoKeyBuffer [ 100 ] = "" ; cryptoKey = cryptoKeyBuffer; size_t cryptoKeyLen = strlen ( cryptoKey ) ; if ( 100 - cryptoKeyLen > 1 )  if ( fgets ( cryptoKey + cryptoKeyLen , ( int ) ( 100 - cryptoKeyLen ) , stdin ) == NULL )  cryptoKey [ cryptoKeyLen ] = '\0'; cryptoKeyLen = strlen ( cryptoKey ); if ( cryptoKeyLen > 0 )  cryptoKey [ cryptoKeyLen - 1 ] = '\0'; CWE321_Hard_Coded_Cryptographic_Key__w32_char_82_base * baseObject = new CWE321_Hard_Coded_Cryptographic_Key__w32_char_82_goodG2B baseObject -> action ( cryptoKey ); void CWE321_Hard_Coded_Cryptographic_Key__w32_char_82_goodG2B::action(char * cryptoKey) char toBeEncrypted [ ] = "String to be encrypted" ; DWORD encryptedLen = strlen ( toBeEncrypted ) * sizeof ( char ) ; memcpy ( encrypted , toBeEncrypted , encryptedLen ); if ( ! CryptEncrypt ( hKey , ( HCRYPTHASH ) NULL , 1 , 0 , encrypted , & encryptedLen , sizeof ( encrypted ) ) )  printBytesLine ( encrypted , encryptedLen ); void printBytesLine(const unsigned char * bytes, size_t numBytes) for (i = 0; i < numBytes; ++i) printf ( "%02x" , bytes [ i ] ); 