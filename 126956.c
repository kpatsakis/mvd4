void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; if ( 1 )  size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 