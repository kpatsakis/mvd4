void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; if ( GLOBAL_CONST_FIVE == 5 )  size_t dataLen = strlen ( data ) ; if ( FILENAME_MAX - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; outputFile . open ( ( char * ) data ); 