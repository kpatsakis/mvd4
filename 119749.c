void bad() int i ; wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; for(i = 0; i < 1; i++) size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); pFile = FOPEN ( data , L "wb+" ) if ( pFile != NULL )  fclose ( pFile ); 