static void goodG2B() void * data ; void * * dataPtr2 = & data ; data = NULL; char * dataGoodBuffer = ( char * ) malloc ( 50 * sizeof ( char ) ) ; memset ( dataGoodBuffer , 'A' , 50 - 1 ); dataGoodBuffer [ 50 - 1 ] = '\0'; data = ( void * ) dataGoodBuffer; void * data = * dataPtr2 ; size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); printLine ( ( char * ) dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dest ); 