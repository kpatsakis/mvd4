static void good1() switch ( 5 )  BYTE payload [ 200 ] ; DWORD payloadLen = strlen ( PAYLOAD ) ; memcpy ( payload , PAYLOAD , payloadLen ); if ( ! CryptEncrypt ( hKey , ( HCRYPTHASH ) NULL , 1 , CRYPT_OAEP , ( BYTE * ) payload , & payloadLen , sizeof ( payload ) ) )  while ( 0 )  printBytesLine ( ( BYTE * ) payload , payloadLen ); void printBytesLine(const unsigned char * bytes, size_t numBytes) for (i = 0; i < numBytes; ++i) printf ( "%02x" , bytes [ i ] ); 