static void goodG2B1() char * data ; if ( GLOBAL_CONST_FIVE != 5 )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 