void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); baseObject -> action ( data ); void CWE36_Absolute_Path_Traversal__char_environment_fopen_82_bad::action(char * data) pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 