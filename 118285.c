void bad() short data ; map < int , short > dataMap ; data = 0; data = ( short ) RAND32 ( ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, short> dataMap) short data = dataMap [ 2 ] ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 