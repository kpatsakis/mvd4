static void goodB2G1() size_t data ; data = 0; if ( STATIC_CONST_FIVE == 5 )  data = rand ( ); if ( STATIC_CONST_FIVE != 5 )  char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 