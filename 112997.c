static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , GOOD_OS_COMMAND ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodG2BSink ( dataMap ); void goodG2BSink(map<int, char *> dataMap) char * data = dataMap [ 2 ] ; if ( SYSTEM ( data ) <= 0 )  