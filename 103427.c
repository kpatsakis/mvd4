void CWE78_OS_Command_Injection__char_file_system_44_bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  fclose ( pFile ); 