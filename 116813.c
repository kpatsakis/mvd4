void bad() char * data ; data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; badSink_b ( data ); void badSink_b(char * data) badSink_c ( data ); void badSink_c(char * data) memmove ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 