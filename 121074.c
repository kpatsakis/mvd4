static void goodG2B() char * data ; data = new char [ 100 ]; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; strcat ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 