void CWE78_OS_Command_Injection__char_file_w32_execvp_67_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; myStruct . structFirst = data; CWE78_OS_Command_Injection__char_file_w32_execvp_67b_badSink ( myStruct ); void CWE78_OS_Command_Injection__char_file_w32_execvp_67b_badSink(CWE78_OS_Command_Injection__char_file_w32_execvp_67_structType myStruct) char * data = myStruct . structFirst ; 