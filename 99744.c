static void goodG2B2() char * data ; data = NULL; if ( staticFive == 5 )  data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; memmove ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 