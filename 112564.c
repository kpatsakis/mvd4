void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( FILENAME_MAX - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; CWE36_Absolute_Path_Traversal__char_file_fopen_82_base * baseObject = new CWE36_Absolute_Path_Traversal__char_file_fopen_82_bad baseObject -> action ( data ); void CWE36_Absolute_Path_Traversal__char_file_fopen_82_bad::action(char * data) pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 