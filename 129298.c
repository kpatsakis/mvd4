void bad() char * data ; char * & dataRef = data ; data = NULL; data = ( char * ) malloc ( 10 * sizeof ( char ) ); char * data = dataRef ; char source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 