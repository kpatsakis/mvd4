static void goodB2G() char * data ; data = ( char * ) malloc ( 20 * sizeof ( char ) ); myUnion . unionFirst = data; char * data = myUnion . unionSecond ; if ( data != NULL )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 