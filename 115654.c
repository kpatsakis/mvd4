static void goodG2B() int h ; char * data ; for(h = 0; h < 1; h++) data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 