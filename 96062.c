void CWE114_Process_Control__w32_char_file_63_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; CWE114_Process_Control__w32_char_file_63b_badSink ( & data ); void CWE114_Process_Control__w32_char_file_63b_badSink(char * * dataPtr) char * data = * dataPtr ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 