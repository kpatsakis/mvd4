static void goodG2B() char * dataBuffer = new char [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; goodG2BSink_b ( data ); void goodG2BSink_b(char * data) goodG2BSink_c ( data ); void goodG2BSink_c(char * data) goodG2BSink_d ( data ); void goodG2BSink_d(char * data) strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 