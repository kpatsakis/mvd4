static void good2() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; DWORD payloadLen = strlen ( PAYLOAD ) ; memcpy ( payload , PAYLOAD , payloadLen ); printBytesLine ( payload , payloadLen ); void printBytesLine(const unsigned char * bytes, size_t numBytes) for (i = 0; i < numBytes; ++i) printf ( "%02x" , bytes [ i ] ); 