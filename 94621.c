static void goodG2B1() if ( globalFalse )  char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; if ( dataBuffer == NULL )  memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 