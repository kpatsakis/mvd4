CWE36_Absolute_Path_Traversal__char_file_ifstream_83_bad::CWE36_Absolute_Path_Traversal__char_file_ifstream_83_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( FILENAME_MAX - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); 