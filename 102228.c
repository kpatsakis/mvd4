static void good1() int k ; for(k = 0; k < 1; k++) char * * pointer = ( char * * ) malloc ( sizeof ( char * ) ) ; * pointer = data; char * data = * pointer ; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( pointer ); 