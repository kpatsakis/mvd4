static void goodG2B2() char * data ; data = NULL; data = goodG2B2Source ( data ); static char * goodG2B2Source(char * data) if ( goodG2B2Static )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; return data ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memmove ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 