void bad() char * data ; data = NULL; data = new char [ 50 ]; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; badSink ( data ); void badSink(char * data) memcpy ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 