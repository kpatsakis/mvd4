static void goodG2B() vector < short > dataVector ; goodG2BSink ( dataVector ); void goodG2BSink(vector<short> dataVector) short data = dataVector [ 2 ] ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 