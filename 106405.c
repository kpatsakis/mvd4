static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; while ( 1 )  strcpy ( data , "fixedstringtest" ); goodG2BVaSinkB ( data , data ); static void goodG2BVaSinkB(char * data, ...) va_start ( args , data ); vfprintf ( stdout , data , args ); 