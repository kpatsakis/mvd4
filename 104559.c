static void goodG2B2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( 5 == 5 )  strcpy ( data , "fixedstringtest" ); if ( 5 == 5 )  goodG2B2VaSinkB ( data , data ); static void goodG2B2VaSinkB(char * data, ...) char dest [ 100 ] = "" ; va_list args ; vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 