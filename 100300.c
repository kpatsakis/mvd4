static void goodG2B() char * password ; map < int , char * > passwordMap ; password = ""; password = ( char * ) malloc ( 100 * sizeof ( char ) ); strcpy ( password , "Password1234!" ); passwordMap [ 0 ] = password; passwordMap [ 1 ] = password; passwordMap [ 2 ] = password; goodG2BSink ( passwordMap ); void goodG2BSink(map<int, char *> passwordMap) char * password = passwordMap [ 2 ] ; free ( password ); 