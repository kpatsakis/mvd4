void goodG2BSink_b(char * data) goodG2BSink_c ( data ); void goodG2BSink_c(char * data) goodG2BSink_d ( data ); void goodG2BSink_d(char * data) goodG2BSink_e ( data ); void goodG2BSink_e(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 