static void good1() while ( 1 )  char * * pointer = ( char * * ) malloc ( sizeof ( char * ) ) ; * pointer = data; char * data = * pointer ; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( pointer ); 