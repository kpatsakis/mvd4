static void goodG2B() size_t data ; data = 0; data = goodG2BSource ( data ); static size_t goodG2BSource(size_t data) data = 20; return data ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 