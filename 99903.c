static void goodG2B() char * data ; map < int , char * > dataMap ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodG2BSink ( dataMap ); void goodG2BSink(map<int, char *> dataMap) char * data = dataMap [ 2 ] ; char dest [ 50 ] = "" ; strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 