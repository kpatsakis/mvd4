void bad() int i ; char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; for(i = 0; i < 1; i++) size_t dataLen = strlen ( data ) ; if ( FILENAME_MAX - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; outputFile . open ( ( char * ) data ); 