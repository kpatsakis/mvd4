static void goodG2B() list < char * > dataList ; goodG2BSink ( dataList ); void goodG2BSink(list<char *> dataList) char * data = dataList . back ( ) ; char source [ 10 + 1 ] = SRC_STRING ; strncpy ( data , source , strlen ( source ) + 1 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 