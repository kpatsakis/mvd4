static void goodG2B2() char * data ; if ( 1 )  data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 