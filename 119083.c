static void goodG2B() vector < char * > dataVector ; goodG2BSink ( dataVector ); void goodG2BSink(vector<char *> dataVector) char * data = dataVector [ 2 ] ; char source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 