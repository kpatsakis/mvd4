void bad() int i ; char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; for(i = 0; i < 1; i++) size_t dataLen = strlen ( data ) ; if ( FILENAME_MAX - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , stdin ) != NULL )  data [ dataLen ] = '\0'; pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 