static void goodG2B() char * data ; data = NULL; char dataGoodBuffer [ 100 ] ; data = dataGoodBuffer; strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); goodG2BSink ( & data ); void goodG2BSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; 