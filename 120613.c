static void goodB2G1() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( STATIC_CONST_TRUE )  size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  fclose ( pFile ); 