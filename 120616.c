void bad() char * data ; char * * dataPtr2 = & data ; data = NULL; data = new char [ 50 ]; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; char * data = * dataPtr2 ; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memcpy ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 