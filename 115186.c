static void goodB2G1() size_t data ; data = 0; data = rand ( ); goodB2G1Sink ( data ); static void goodB2G1Sink(size_t data) if ( goodB2G1Static )  char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 