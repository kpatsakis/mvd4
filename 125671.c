static void goodB2G() int i , k ; size_t data ; data = 0; for(i = 0; i < 1; i++) data = rand ( ); for(k = 0; k < 1; k++) char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = new char [ data ]; strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] myString 