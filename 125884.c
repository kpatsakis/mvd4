void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); outputFile . open ( ( char * ) data ); 