static void goodG2B() char * data ; char * * dataPtr1 = & data ; data = new char [ 100 ]; char * data = * dataPtr1 ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; * dataPtr1 = data; strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 