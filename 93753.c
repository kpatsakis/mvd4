static void good2() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char * password = ( char * ) malloc ( 100 * sizeof ( char ) ) ; password [ 0 ] = '\0'; if ( fgets ( password , 100 , stdin ) == NULL )  password [ 0 ] = '\0'; passwordLen = strlen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = '\0'; free ( password ); 