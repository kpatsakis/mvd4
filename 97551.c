static void goodB2G1() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( 1 )  size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; if ( 0 )  fprintf ( stdout , "%s\n" , data ); 