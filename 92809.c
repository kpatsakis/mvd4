static void goodB2G1() size_t data ; data = 0; if ( STATIC_CONST_TRUE )  data = rand ( ); if ( STATIC_CONST_FALSE )  char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = new char [ data ]; strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] myString 