static void goodG2B() char * data ; char * * dataPtr1 = & data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); char * data = * dataPtr1 ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; * dataPtr1 = data; strcat ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 