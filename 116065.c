void CWE90_LDAP_Injection__w32_char_file_12_bad() char * data ; char dataBuffer [ 256 ] = "" ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 256 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  fclose ( pFile ); 